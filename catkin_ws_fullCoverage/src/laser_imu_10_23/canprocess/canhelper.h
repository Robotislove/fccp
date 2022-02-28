#ifndef _CAN_HELPER_H
#define _CAN_HELPER_H

#include <iostream>
#include "controlcan.h"
using namespace std;

#define RECV_MSG_SIZE 3000
#define SEND_MSG_SIZE 1
#define TIMING_0  0x03 /*波特率125 Kbps  0x03  0x1C*/
#define TIMING_1  0x1C

typedef unsigned char byte;

typedef struct  _CHR10MEV_VCU_{
    unsigned int identifier; 

    byte speed_enable; //协议修改后加入
    byte driverless;   //协议修改后加入
    byte driverless_enabled; //协议修改后加入
    byte charge;       //协议修改后加入

    byte clean;
    byte pump;
    byte left;
    byte right;
    byte mop;
    byte park;
    byte forward;
    byte backward; 
    byte wash;

    byte velocity;
    unsigned short angle;
    byte angle_velocity;
    
    byte mode;
    byte enable;
} CHR10MEV_VCU; 

class CANHelper
{
    public:
        CANHelper();
        CANHelper(int sendCANId, int recvCANId);
        CANHelper(int deviceType, int deviceId, int sendCANId, int recvCANId);
        
        void setWaitTime(int waitTime);
        void setBaudRate(unsigned char timing0, unsigned char timing1);
        int openCAN();
        int closeCAN();
        void sendOneMsg(const CHR10MEV_VCU* data);
        void recvMultiMsgs(CHR10MEV_VCU* data,int *len); 
    private:
        int deviceType;
        int deviceId;
        int sendCANId;
        int recvCANId;
        int waitTime;
        bool sendStart;
        bool recvStart;
        unsigned char timing0;
        unsigned char timing1;
        VCI_BOARD_INFO pInfo;
	    VCI_CAN_OBJ recvMsgArray[RECV_MSG_SIZE];//接收缓存，设为3000为佳。
	    VCI_CAN_OBJ sendMsgArray[SEND_MSG_SIZE];//发送缓存，建议设为1，每次发送单帧，以提高发送效率

        void chr10mev2SendData(const CHR10MEV_VCU* data, int index);
        void recvData2Chr10mev(int index, CHR10MEV_VCU* data);
        void printCHR10MEV_VCU(const CHR10MEV_VCU* data);
        void printVCI_CAN_OBJ(const VCI_CAN_OBJ* data);
        void printVCI_BOARD_INFO(const VCI_BOARD_INFO* pInfo);
};

#endif
