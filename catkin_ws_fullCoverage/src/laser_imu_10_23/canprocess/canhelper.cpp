#include <iostream>
#include <cstring>
#include <unistd.h>
#include <iomanip>

#include "controlcan.h"
#include "canhelper.h"

using namespace std;

CANHelper::CANHelper() : 
    deviceType(VCI_USBCAN2), deviceId(0), sendCANId(0),
    recvCANId(1), waitTime(100), timing0(TIMING_0), timing1(TIMING_1),
    sendStart(false), recvStart(false)
{
}


CANHelper::CANHelper(int sendCANId, int recvCANId) : 
    deviceType(VCI_USBCAN2), deviceId(0), sendCANId(sendCANId), 
    recvCANId(recvCANId), waitTime(100), timing0(TIMING_0), timing1(TIMING_1),
    sendStart(false), recvStart(false)
{
}

CANHelper::CANHelper(int deviceType, int deviceId, int sendCANId, int recvCANId) : 
    deviceType(deviceType), deviceId(deviceId), sendCANId(sendCANId),
    recvCANId(recvCANId), waitTime(100), timing0(TIMING_0), timing1(TIMING_1),
    sendStart(false), recvStart(false)
{
}

void CANHelper::setWaitTime(int waitTime)
{
    this->waitTime = waitTime;
}

void CANHelper::setBaudRate(unsigned char timing0, unsigned char timing1)
{
    this->timing0 = timing0;
    this->timing1 = timing1;
}

void CANHelper::printCHR10MEV_VCU(const CHR10MEV_VCU* data)
{
    cout << "CHR10MEV Identifier: " << hex << data->identifier;                
    cout << " Value: " <<  dec 
        << (unsigned int)data->clean << " " << (unsigned int)data->pump << " "
        << (unsigned int)data->left << " " << (unsigned int)data->right << " "
        << (unsigned int)data->mop << " " << (unsigned int)data->park << " "
        << (unsigned int)data->forward << " " << (unsigned int)data->backward << " "
        << (unsigned int)data->wash << " " << (unsigned int)data->velocity << " "
        << (unsigned int)data->angle << " " << (unsigned int)data->angle_velocity << " "
        << (unsigned int)data->mode << " " << (unsigned int)data->enable << endl;

}

void CANHelper::printVCI_CAN_OBJ(const VCI_CAN_OBJ* data)
{
    cout << "CAN " << sendCANId << " Msg ID: " << hex << data->ID;
    if(data->ExternFlag==0) cout << " Standard ";//帧格式：标准帧
    if(data->ExternFlag==1) cout <<" Extend ";//帧格式：扩展帧
    if(data->RemoteFlag==0) cout <<" Data ";//帧类型：数据帧
    if(data->RemoteFlag==1) cout <<" Remote ";//帧类型：远程帧
    cout << "DLC: " << (unsigned int)data->DataLen << " 0x";//帧长度

    for(int j=0; j < data->DataLen; ++j)
    {
        cout << " " << hex << setfill('0') << setw(2) << (unsigned int)data->Data[j];//数据
    }
    cout << " TimeStamp: " << data->TimeStamp;//时间标识
    cout << endl;
}
    
void CANHelper::printVCI_BOARD_INFO(const VCI_BOARD_INFO* pInfo)
{
    cout << "Device:" << deviceId << endl;
    cout << ">>Get VCI_ReadBoardInfo success!" << endl;
    cout << ">>hw_Version:" <<  pInfo->hw_Version << endl;
    cout << ">>fw_Version:" <<  pInfo->fw_Version << endl;
    cout << ">>dr_Version:" <<  pInfo->dr_Version << endl;
    cout << ">>in_Version:" <<  pInfo->in_Version << endl;
    cout << ">>irq_Num:" <<  pInfo->irq_Num << endl;
    cout << ">>CAN Num:" << (unsigned int)pInfo->can_Num << endl;

    cout << ">>Serial_Num:" << pInfo->str_Serial_Num << endl;
    cout << ">>hw_Type:" << pInfo->str_hw_Type << endl;
    cout << ">>Firmware Version:" << pInfo->fw_Version << endl;
}


/*
return: 0 正常
        1 错误
*/
int CANHelper::openCAN()
{
    do
    {  
        cout << ">>Open and Init CAN start..." << endl;
        if( VCI_OpenDevice(deviceType,deviceId,0) < 1)//打开设备
        {
            cout << ">>Error: Open deivce " << deviceId << " error!" << endl;//打开设备失败或设备不存在
            break;            
        }
        cout << ">>Open deivce " << deviceId << " success!" << endl;//打开设备成功
        
        memset(&pInfo, 0, sizeof(pInfo));
        if(VCI_ReadBoardInfo(deviceType,deviceId,&pInfo) < 1)//读取设备序列号、版本等信息。    
	    {
            cout << ">>Error: Get VCI_ReadBoardInfo error!" << endl;//读取设备失败或设备不存在
            break;
        }        
        
        printVCI_BOARD_INFO(&pInfo);
        cout << ">>" << endl << ">>" << endl << ">>" << endl;

        //初始化参数，严格参数二次开发函数库说明书。
        VCI_INIT_CONFIG config;
        config.AccCode=0;
        config.AccMask=0xFFFFFFFF;
        config.Filter=1;//接收所有帧
        config.Timing0=timing0;/*波特率125 Kbps  0x03  0x1C*/
        config.Timing1=timing1;
        config.Mode=0;//正常模式	

        if (recvCANId >= 0 && recvCANId < pInfo.can_Num)
        {
            if(VCI_InitCAN(deviceType, deviceId, recvCANId,&config) < 1)
            {
                cout << ">>Init recv CAN " << recvCANId << " error!" << endl;
                VCI_CloseDevice(deviceType, deviceId);
                break;
            }
            cout << ">>Init recv CAN " << recvCANId << " success!" << endl;

            if(VCI_StartCAN(deviceType, deviceId, recvCANId) < 1)
            {
                cout << ">>Start recv CAN " << recvCANId << " error!" << endl;
                VCI_CloseDevice(deviceType, deviceId);
                break;
            }
            cout << ">>Start recv CAN " << recvCANId << " success!" << endl;
            if(sendCANId == recvCANId)
            {
                sendStart = true;
            }
            recvStart = true;
        }else
        {
             cout << "Not to start recv CAN " << recvCANId  << endl;
        }

        if (sendCANId >= 0 && sendCANId < pInfo.can_Num && sendCANId != recvCANId)
        {
            if(VCI_InitCAN(deviceType, deviceId, sendCANId,&config) < 1)
            {
                cout << ">>Init send CAN " << sendCANId << " error!" << endl;
                VCI_CloseDevice(deviceType, deviceId);
                break;
            }
            cout << ">>Init send CAN " << sendCANId << " success!" << endl;

            if(VCI_StartCAN(deviceType, deviceId, sendCANId) < 1)
            {
                cout << ">>Start send CAN " << sendCANId << " error!" << endl;
                VCI_CloseDevice(deviceType, deviceId);
                break;
            }
            cout << ">>Start send CAN " << sendCANId << " success!" << endl;
            sendStart = true;
        }else
        {
             cout << "Not start send CAN " << sendCANId  << endl;
        }
       
        cout << ">>Open and Init CAN finished!" << endl;
        cout << ">>" << endl << ">>" << endl << ">>" << endl;

        return 0;
    }while(0);

    return 1;
}


/*
return: 0 正常
        1 错误
*/
int CANHelper::closeCAN()
{
    if (recvStart == true)
    {
        cout << ">>Reset recv CAN " << recvCANId << endl;
        VCI_ResetCAN(deviceType, deviceId, recvCANId);//复位CAN1通道
        recvStart = false;
        usleep(100000);//延时100ms
    }
    if (sendStart == true &&recvCANId != sendCANId)
    {
        cout << ">>Reset send CAN " << sendCANId << endl;
        VCI_ResetCAN(deviceType, deviceId, sendCANId);//复位CAN2通道
        sendStart = false;
        usleep(100000);//延时100ms
    }
    cout << ">>Close device " << deviceId << endl;
	VCI_CloseDevice(deviceType,deviceId);//关闭设备

    return 0;
}

void CANHelper::sendOneMsg(const CHR10MEV_VCU* data)
{
    if (sendStart ==  true)
    {        
        //需要发送的帧，结构体设置
        memset(sendMsgArray, 0, sizeof(sendMsgArray));

        for (int i = 0; i < SEND_MSG_SIZE; ++i)
        {            
            cout << "TX " ;
            printCHR10MEV_VCU(data);

            sendMsgArray[i].ID=data->identifier;
            sendMsgArray[i].SendType=1; //只发送一次，发送失败不会自动重发，总线只产生一帧数据
            sendMsgArray[i].RemoteFlag=0; //数据帧
            sendMsgArray[i].ExternFlag=1; //扩展帧(29位ID)
            sendMsgArray[i].DataLen=8;

            chr10mev2SendData(data, i);

            cout << "TX " ;
            printVCI_CAN_OBJ(&sendMsgArray[i]);            
            break;
        }        

        if(VCI_Transmit(deviceType, deviceId, sendCANId, sendMsgArray, 1) > 0)
        {            
            cout << "Send CAN " << sendCANId << " success!" << endl;
        }else
        {
            cout << "Send CAN " << sendCANId << " error!" << endl;
        }
    }else
    {
        cout << "Not to send msg CAN " << sendCANId  << endl;
    }
	
}
void CANHelper::recvMultiMsgs(CHR10MEV_VCU* data,int *len)
{
    if (recvStart == true)
    { 
        memset(recvMsgArray, 0, sizeof(recvMsgArray));        
        memset(recvMsgArray[0].Data, 0, sizeof(recvMsgArray[0].Data));

        int recvlen=VCI_Receive(deviceType, deviceId, recvCANId, recvMsgArray, 
            RECV_MSG_SIZE, waitTime); //调用接收函数，如果有数据，进行数据处理显示
        if (recvlen > 0)
        {
            len=&recvlen;
            cout << "Receive CAN " << recvCANId << " " << recvlen << " frame data" << endl;    
        }

        for(int i = 0; i < recvlen; ++i)
        {             
            cout << "RX " ;
            printVCI_CAN_OBJ(&recvMsgArray[i]);  

            recvData2Chr10mev(i, data+i);

            cout << "RX " ;
            printCHR10MEV_VCU(data+i);
        }

    }else
    {
        cout << "Not to recv msg CAN " << recvCANId  << endl;
    }
}

void CANHelper::chr10mev2SendData(const CHR10MEV_VCU* data, int index)
{
    memset(sendMsgArray[index].Data, 0, sizeof(sendMsgArray[index].Data));
    if (data->identifier == 0x18909C11)
    {
        //AI_VCU
        sendMsgArray[index].Data[0] = ((data->speed_enable & 0x01) | ((data->driverless & 0x01) << 1)) & 0x03;

        sendMsgArray[index].Data[2] = (data->clean & 0x01) | ((data->pump & 0x01) << 1) 
            | ((data->left & 0x01) << 2) | ((data->right & 0x01) << 3) | 
            ((data->mop & 0x01) << 4) | ((data->park & 0x01) << 5) | 
            ((data->forward & 0x01) << 6) | ((data->backward & 0x01) << 7);

        sendMsgArray[index].Data[3] = data->wash & 0x01;
        sendMsgArray[index].Data[4] = data->velocity;
        sendMsgArray[index].Data[5] = (byte)(data->angle & 0xFF);
        sendMsgArray[index].Data[6] = (byte)((data->angle >> 8) & 0xFF);
        sendMsgArray[index].Data[7] = data->angle_velocity;
    }else if(data->identifier == 0x18000001)
    {
        //Remote_VCU
        sendMsgArray[index].Data[0] = data->mode;
        sendMsgArray[index].Data[1] = data->enable;
        sendMsgArray[index].Data[2] = data->velocity;
        sendMsgArray[index].Data[3] = (byte)(data->angle & 0xff);
    }
}
void CANHelper::recvData2Chr10mev(int index, CHR10MEV_VCU* data)
{
    data->identifier = recvMsgArray[index].ID;
    //if (data->identifier == 0x1890119C)
    if (data->identifier == 0x18909C11) //测试用 
    {
        //VCU_AI
        data->driverless_enabled = (recvMsgArray[index].Data[0] >> 4)  & 0x01;
        data->charge = recvMsgArray[index].Data[1] & 0xFF;

        data->clean = recvMsgArray[index].Data[2] & 0x01;
        data->pump = (recvMsgArray[index].Data[2] >> 1) & 0x01;
        data->left = (recvMsgArray[index].Data[2] >> 2) & 0x01;
        data->right = (recvMsgArray[index].Data[2] >> 3) & 0x01;
        data->mop = (recvMsgArray[index].Data[2] >> 4) & 0x01;
        data->park = (recvMsgArray[index].Data[2] >> 5) & 0x01;
        data->forward = (recvMsgArray[index].Data[2] >> 6) & 0x01;
        data->backward = (recvMsgArray[index].Data[2] >> 7) & 0x01;

        data->wash = recvMsgArray[index].Data[3] & 0x01;
        data->velocity = recvMsgArray[index].Data[4];
        data->angle = (recvMsgArray[index].Data[5] & 0xFF) | ((recvMsgArray[index].Data[6] & 0xFF) << 8);
        data->angle_velocity = recvMsgArray[index].Data[7];

    }else if(data->identifier == 0x18000001) //暂时没有该标识符
    {
        data->mode = recvMsgArray[index].Data[0];
        data->enable = recvMsgArray[index].Data[1];
        data->velocity = recvMsgArray[index].Data[2];
        data->angle = (unsigned short) recvMsgArray[index].Data[3];
    } 
}
