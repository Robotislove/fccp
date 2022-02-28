/*
 * IExxx_node.cpp
 *
 *  Created on: 05-09-2017
 *  Author: weiluo

 ***************************************************************************
 *  OSIGHT *
 * www.osighttech.com  *
 ***************************************************************************/
#include <csignal>
#include <cstdio>
#include <IExxx/IExxx.h>
#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include <iostream>
#include "canhelper.h"
#include <thread>
#include <chrono>
#include <cstring>
#include "synchronizer_laser_imu/can_msg.h"
#include<std_msgs/Float32.h>
#include<std_msgs/Int8.h>
#include <thread>
#include <geometry_msgs/Twist.h>
#define DEG2RAD M_PI/180.0

using namespace std;


void std_init_Driveless(CANHelper* canHelper)
{
    synchronizer_laser_imu::can_msg init_msg;
    CHR10MEV_VCU init_data;
    int run = 0;
    while(run < 5)
    {
        run = run + 1;
    
    
        init_msg.clean = 0;
        init_msg.pump = 0;
        init_msg.left = 0;
        init_msg.right = 0;
        init_msg.mop = 0;
        init_msg.park = 0;
        init_msg.forward = 0;
        init_msg.backward = 0;
        init_msg.wash = 0;
        init_msg.speed_enable = 0;
        init_msg.driverless = 0;
        init_msg.driverless_enabled = 0;
        init_msg.velocity = 0.0;
        init_msg.angle = 0.0;
        init_msg.angle_velocity = 0.0;
        init_msg.charge = 0.0;

        memset(&init_data, 0, sizeof(init_data));
        init_data.identifier = 0x18909C11;
        init_data.clean = 0xff & init_msg.clean;
        init_data.pump =0xff & init_msg.pump;
        init_data.left = 0xff & init_msg.left;
        init_data.right = 0xff & init_msg.right;
        init_data.mop =0xff & init_msg.mop;
        init_data.park = 0xff & init_msg.park;
        init_data.forward = 0xff & init_msg.forward; 
        init_data.backward = 0xff & init_msg.backward;
        init_data.wash = 0xff & init_msg.wash;
        init_data.velocity =  0xff & (int)(init_msg.velocity *51);
        //data.velocity =  0xff & msg->velocity ;
        init_data.angle =(unsigned short)(init_msg.angle*10);
        //data.angle = 0xffff &msg->angle;
        init_data.angle_velocity =  0xff & (int)(init_msg.angle_velocity*224);
        //data.angle_velocity =  0xff & (int)msg->angle_velocity;

        init_data.speed_enable = 0xff & init_msg.speed_enable;  //协议修改后加入
        init_data.driverless = 0xff & init_msg.driverless;  
   
        canHelper->sendOneMsg(&init_data);
	}

}


void recvSample(CANHelper* canHelper,CHR10MEV_VCU* data3,int* length)
{    
    
    //while((*run)&0x0f)
    //{ 
    memset(data3, 0, sizeof(data3));
    canHelper->recvMultiMsgs(data3,length); //length*

        
    //this_thread::sleep_for(chrono::milliseconds(100));
        
    //}
 
}

void can_send_callback(const synchronizer_laser_imu::can_msg::ConstPtr &msg,CANHelper *canHelper)
{
    CHR10MEV_VCU data;
    //synchronizer_laser_imu::can_msg msg;
    
    //cout<<"105"<<twist->linear.x<<endl;

    

 
    memset(&data, 0, sizeof(data));
    data.identifier = 0x18909C11;
    data.clean = 0xff & msg.clean;
    data.pump =0xff & msg.pump;
    data.left = 0xff & msg.left;
    data.right = 0xff & msg.right;
    data.mop =0xff & msg.mop;
    data.park = 0xff & msg.park;
    data.forward = 0xff & msg.forward; 
    data.backward = 0xff & msg.backward;
    data.wash = 0xff & msg.wash;
    data.velocity =  0xff & (int)(msg.velocity *51);
    //data.velocity =  0xff & msg->velocity ;
    data.angle = (unsigned short)(msg.angle);
    //data.angle = 0xffff &msg->angle;
    data.angle_velocity =  0xff & (int)(msg.angle_velocity*224);
    //data.angle_velocity =  0xff & (int)msg->angle_velocity;

    data.speed_enable = 0xff & msg.speed_enable;  //协议修改后加入
    data.driverless = 0xff & msg.driverless;  //协议修改后加入

    //data.identifier = 0x18909C11;
    //data.clean = 0xff & 1;
    //data.pump =0xff & msg->pump;
    //data.left = 0xff & msg->left;
    //data.right = 0xff & msg->right;
    //data.mop =0xff & msg->mop;
    //data.park = 0xff & msg->park;
    //data.forward = 0xff & msg->forward;
    //data.backward = 0xff & 1;
    //ROS_INFO("LINE_74");
    //data.wash = 0xff & msg->wash;
    //data.velocity =  0xff & (int)(msg->velocity *10);
    //data.angle = (unsigned short)(msg->angle+900)*10;
    //data.angle_velocity =  0xff & (int)(msg->angle_velocity * 0.1);

    canHelper->sendOneMsg(&data);
    //this_thread::sleep_for(chrono::milliseconds(100));
    
    
}


int main(int argc,char** argv)
{
    CANHelper canHelper(0,1);
    canHelper.openCAN();
    ros::init(argc, argv, "can_node");
    ros::NodeHandle nh;
    //ros::NodeHandle n("~");
    ros::Publisher can_rec_pub = nh.advertise<synchronizer_laser_imu::can_msg>("can_rec",2);
    ros::Subscriber sub=nh.subscribe<synchronizer_laser_imu::can_msg>("can_send",1,boost::bind(&can_callback, _1, &canHelper));
    //ros::Subscriber sub = nh.subscribe<geometry_msgs::Twist>("can_send",1, boost::bind(&can_send_callback, _1, &canHelper));
    CHR10MEV_VCU data3[RECV_MSG_SIZE];
    memset(data3, 0, sizeof(data3));
    synchronizer_laser_imu::can_msg msg;
    ros::Rate rate_loop(10);
    int run=0;
    int length=1;
    
   
    //std_init_Driveless(&canHelper);


    while(ros::ok())
    {
         
        recvSample(&canHelper,data3,&length);
	    cout << "length: " << length << endl;
        //ROS_INFO("OK 88");

        //cout<< "88"<<endl;
	
	    msg.clean=data3[length-1].clean & 0xFF;
	    //cout<<"clean:"<<(unsigned int)data3[length-1].clean<<endl;
        msg.pump=data3[length-1].pump & 0xFF;
        msg.left=data3[length-1].left & 0xFF;
        msg.right=data3[length-1].right & 0xFF;
        msg.mop=data3[length-1].mop & 0xFF;
        msg.park=data3[length-1].park & 0xFF;
        msg.forward=data3[length-1].forward & 0xFF;
        msg.backward=data3[length-1].backward & 0xFF;
        msg.wash=data3[length-1].wash & 0xFF;
	//cout<<"identifier:"<<hex<<data3[length-1].identifier<<endl;
        //msg.velocity=float((data3[length-1].velocity & 0xFF)*0.1);//Factor：0.1KM/H/bit |Offset: 0 |Range: 0 to 25.5  KM/H 
        msg.velocity=float((data3[length-1].velocity & 0xFF))/51;//Factor：1/51 KM/H/bit |Offset: 0 |Range: 0 to 5  KM/H 
        //msg.angle=float((data3[length-1].angle)*0.1-900); //Factor：0.1°/bit |Offset: -900 |Range: -900 to 900  °/H 
        msg.angle=float((data3[length-1].angle & 0xFFFF))*0.1; //Factor：0.1°/bit |Offset: 0 |Range: 0 to 1800  °中间900
        msg.angle_velocity=float((data3[length-1].angle_velocity & 0xFF))/224;  //Factor：10 RPM/bit |Offset: 0 |Range: 0 to 2550 RPM/H 速比 224:1

        msg.driverless_enabled = data3[length-1].driverless_enabled & 0xFF;  //协议修改后加入
        msg.charge = data3[length - 1].charge & 0xFF; //Factor:1%/bit|Offset: 0 |Range: 0~100%  //协议修改后加入
	
        can_rec_pub.publish(msg);
	
        //ROS_INFO("data : %d, %d,%d,%d,%d,%d,%d, %d ,%d,%f,%f,%f, %d, %f \n",msg.clean,msg.pump,msg.left,msg.right,
        //	msg.mop,msg.park,msg.forward,msg.backward,msg.wash,msg.velocity,
        //	msg.angle,msg.angle_velocity, msg.driverless_enabled, msg.charge);
	//cout << int(msg.clean) << "clean" <<endl;
	//cout << int(msg.driverless_enabled) << "enabled" <<endl;
	//ROS_INFO("driverless_enabled:",msg.forward);     
	    rate_loop.sleep();
        ros::spinOnce();
        //ros::spin();
        //cout<<"253"<<endl;
    }
    canHelper.closeCAN();
    
    return 0;
}


