#include "msg_syn.h"


int main(int argc, char** argv)
{
    ros::init(argc, argv, "Synchronizer");
    ros::NodeHandle node("~");
    ROS_INFO("\033[1;32m---->\033[0m Sync msgs node Started.");

   // climbing_robot::MsgSynchronizer synchronizer(node);
    while(true)
    {
        climbing_robot::MsgSynchronizer synchronizer(node);
        ROS_INFO("save laser_scan and imu successful");
    }
    // ros::spin();

    //:wsynchronizer.CloseBag();

    return 0;
}
