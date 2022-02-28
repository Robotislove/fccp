#include "msg_syn.h"

#include <iostream>

namespace climbing_robot
{


MsgSynchronizer::MsgSynchronizer(ros::NodeHandle node)
{
    // pubVelodyne = nh.advertise<sensor_msgs::PointCloud2>("/Syn/imu/data", 1);
    syn_bag_path="./syn_bag.bag";
    msg_syn_bag.open(syn_bag_path, rosbag::bagmode::Write);
    message_filters::Subscriber<sensor_msgs::Imu> pose_sub(node, "handsfree/imu", 1);
    message_filters::Subscriber<sensor_msgs::LaserScan> velodyne_sub(node, "scan", 1);

    typedef message_filters::sync_policies::ApproximateTime<sensor_msgs::LaserScan, sensor_msgs::Imu> approximate_policy;
    message_filters::Synchronizer<approximate_policy> sync(approximate_policy(10), velodyne_sub, pose_sub);
    sync.registerCallback(boost::bind(&MsgSynchronizer::callback, this, _1, _2));


   // node.getParam("msg_syn_bag_path", syn_bag_path);
  //  syn_bag_path="./syn_bag.bag";
   // msg_syn_bag.open(syn_bag_path, rosbag::bagmode::Write);


    ros::spin();
    msg_syn_bag.close();
}


void MsgSynchronizer::callback(const sensor_msgs::LaserScan::ConstPtr& ori_LaserScan, const sensor_msgs::Imu::ConstPtr& ori_pose)
{
    ROS_INFO("laserscan stamp value is: %f", ori_LaserScan->header.stamp.toSec());
    ROS_INFO("pose stamp value is: %f", ori_pose->header.stamp.toSec());
   
    // ros::Time timestamp = ori_pointcloud.header.stamp;
    msg_syn_bag.write("/velodyne_points", ori_LaserScan->header.stamp.now(), *ori_LaserScan);
    msg_syn_bag.write("/vrpn_client_node/RigidBody/pose", ori_LaserScan->header.stamp.now(), *ori_pose);

    // pubVelodyne.publish(syn_pointcloud);
}

}//namespace climbing_robot
