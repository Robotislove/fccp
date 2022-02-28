#ifndef CLIMBING_ROBOT_GT_MAP_
#define CLIMBING_ROBOT_GT_MAP_

#include <string>

#include <ros/ros.h>
#include <rosbag/bag.h>
#include <sensor_msgs/PointCloud2.h>
#include <geometry_msgs/PoseStamped.h>
#include<sensor_msgs/LaserScan.h>
#include<sensor_msgs/Imu.h>
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>

namespace climbing_robot
{


class MsgSynchronizer{
public:
    MsgSynchronizer(ros::NodeHandle node);
    ~MsgSynchronizer(){};

    void callback(const sensor_msgs::LaserScan::ConstPtr& ori_pointcloud, const sensor_msgs::Imu::ConstPtr& ori_pose);
    
    inline void CloseBag()
    {
        msg_syn_bag.close();
    }

private:
    // ros::Publisher pubVelodyne;
    // ros::Publisher pubImu;
    std::string syn_bag_path;
    rosbag::Bag msg_syn_bag;
};



}//namespace climbing_robot


#endif// CLIMBING_ROBOT_GT_MAP_
