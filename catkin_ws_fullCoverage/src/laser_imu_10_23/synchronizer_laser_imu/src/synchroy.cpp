#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/LaserScan.h>
#include "image_transport/image_transport.h"
#include "sensor_msgs/CompressedImage.h"
#include "ros/ros.h"
#include "sensor_msgs/Imu.h"
#include "nav_msgs/Odometry.h"
#include "sensor_msgs/CameraInfo.h"
#include "rosbag/bag.h"
#include "ctime"
#include "time.h"
/*
ros::Publisher Velodyne_pub;
ros::Publisher Hokuyo_pub;
ros::Publisher Ominivision_pub;
ros::Publisher Kinect2color_pub;
ros::Publisher Kinect2depth_pub;
ros::Publisher Imu_pub;
ros::Publisher Odom_pub;
ros::Publisher Kinect2camera_info_pub;*/
rosbag::Bag bag_record;
using namespace std;
string int2string(int value)
{
    stringstream ss;
    ss<<value;
    return ss.str();
}
 
void callback(const sensor_msgs::LaserScan::ConstPtr& laser_scan,
              const sensor_msgs::ImuConstPtr& imu_msg)
              //const sensor_msgs:: PointCloud2ConstPtr& point_cloud2,
              //const sensor_msgs::CompressedImageConstPtr& ominivision_msg,
              //const sensor_msgs::CompressedImageConstPtr& kinect2color_msg,
              //const sensor_msgs::CompressedImageConstPtr&kinect2depth_msg,
              //const nav_msgs::OdometryConstPtr& odom_msg)
{
    ROS_INFO("Enter Publish");

    bag_record.write("message_filter/scan",laser_scan->header.stamp.now(),*laser_scan);
    bag_record.write("message_filter/imu/data",imu_msg->header.stamp.now(),*imu_msg);
    // bag_record.write("message_filter/velodyne_points",point_cloud2->header.stamp.now(),*point_cloud2);
    // bag_record.write("message_filter/camera/compressed",ominivision_msg->header.stamp.now(),*ominivision_msg);
    // bag_record.write("message_filter/kinect2/qhd/image_color_rect/compressed",laser_scan->header.stamp.now(),*kinect2color_msg);
    // bag_record.write("message_filter/kinect2/qhd/image_depth_rect/compressed",laser_scan->header.stamp.now(),*kinect2depth_msg);
    // bag_record.write("message_filter/odom",odom_msg->header.stamp.now(),*odom_msg);
 
}
int main(int argc, char** argv)
{
  ros::init(argc, argv, "synchroy");
  ros::Time::init();
  ros::NodeHandle nh;
  ROS_INFO("start message filter");
  time_t t=std::time(0);
  struct tm * now = std::localtime( & t );
  string file_name;
  //the name of bag file is better to be determined by the system time
  file_name=int2string(now->tm_year + 1900)+
          '-'+int2string(now->tm_mon + 1)+
          '-'+int2string(now->tm_mday)+
          '-'+int2string(now->tm_hour)+
          '-'+int2string(now->tm_min)+
          '-'+int2string(now->tm_sec)+
            ".bag";
  bag_record.open(file_name,rosbag::bagmode::Write);
  //message_filters::Subscriber<sensor_msgs::PointCloud2> Velodyne_sub(nh, "/velodyne_points", 1);//订阅16线激光雷达Topic
  message_filters::Subscriber<sensor_msgs::LaserScan> LaserScan_sub(nh,"scan" , 1);//订阅平面激光雷达Topic
  //message_filters::Subscriber<sensor_msgs::CompressedImage> ominivision_sub(nh,"/camera/image_raw/compressed" , 1);//订阅全向视觉Topic
  //message_filters::Subscriber<sensor_msgs::CompressedImage> kinect2color_sub(nh,"/kinect2/qhd/image_color_rect/compressed" , 1);//订阅Kinect的Topic
  //message_filters::Subscriber<sensor_msgs::CompressedImage> kinect2depth_sub(nh,"/kinect2/qhd/image_depth_rect/compressed" , 1);//订阅Kinect的Topic
  message_filters::Subscriber<sensor_msgs::Imu> imu_sub(nh,"handsfree/imu" , 1);//订阅imu的Topic
  //message_filters::Subscriber<nav_msgs::Odometry> odom_sub(nh,"/odom" , 1);//订阅里程计的Topic
 
  typedef message_filters::sync_policies::ApproximateTime<sensor_msgs::LaserScan,
          sensor_msgs::Imu> MySyncPolicy;
          // sensor_msgs::CompressedImage,
          // sensor_msgs::CompressedImage,
          // sensor_msgs::CompressedImage,
          // sensor_msgs::PointCloud2,
          //nav_msgs::Odometry
  // ApproximateTime takes a queue size as its constructor argument, hence MySyncPolicy(10)
  message_filters::Synchronizer<MySyncPolicy> sync(MySyncPolicy(20),
                                                   //Velodyne_sub,
                                                   LaserScan_sub,
                                                  // ominivision_sub,
                                                  // kinect2color_sub,
                                                  // kinect2depth_sub,
                                                   imu_sub);
                                                   //odom_sub);
  sync.registerCallback(boost::bind(&callback, _1, _2));//, _3, _4, _5, _6, _7));
  ros::spin();
  bag_record.close();
  return 0;
}
