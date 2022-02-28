#include <iostream>
#include "canhelper.h"
#include <thread>
#include <chrono>
#include <cstring>

using namespace std;

void recvSample(CANHelper* canHelper, int* run)
{    
    CHR10MEV_VCU data3[RECV_MSG_SIZE];
    while((*run)&0x0f)
    {
	int len;
        memset(data3, 0, sizeof(data3));
        canHelper->recvMultiMsgs(data3, &len);
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout << "recv thread exit!" << endl;

}

void sendSample(CANHelper* canHelper, int* run)
{
    CHR10MEV_VCU data;
    memset(&data, 0, sizeof(data));
    data.identifier = 0x18909C11;
    data.clean = 1;
    data.pump = 0;
    data.left = 1;
    data.right = 0;
    data.mop = 0;
    data.park = 0;
    data.forward = 1;
    data.backward = 0;
    data.wash = 1;
    data.velocity = 50;
    data.angle = 1000;
    data.angle_velocity = 75;

    canHelper->sendOneMsg(&data);
    
    this_thread::sleep_for(chrono::milliseconds(100));

    CHR10MEV_VCU data2;
    memset(&data2, 0, sizeof(data2));
    data2.identifier = 0x18000001;
    data2.mode = 12;
    data2.enable = 1;
    data2.velocity = 50;
    data2.angle = 100;
    
    canHelper->sendOneMsg(&data2);

    memset(&data, 0, sizeof(data));
    data.identifier = 0x18909C11;
    data.clean = 0;
    data.pump = 0;
    data.left = 0;
    data.right = 0;
    data.mop = 0;
    data.park = 0;
    data.forward = 0;
    data.backward = 0;
    data.wash = 0;
    data.velocity = 0;
    data.angle = 0;
    data.angle_velocity = 0;

    canHelper->sendOneMsg(&data);
    
    this_thread::sleep_for(chrono::milliseconds(100));

    *run = 0;
    
    cout << "send thread exit!" << endl;
}

int main()
{
    CANHelper canHelper(0, 1);
    canHelper.openCAN();
    int run = 1;
    thread recvThread(recvSample, &canHelper, &run);    
    thread sendThread(sendSample, &canHelper, &run);
    sendThread.join();
    recvThread.join();

    canHelper.closeCAN();
}



