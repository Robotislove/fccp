// Generated by gencpp from file ipa_building_msgs/RoomExplorationGoal.msg
// DO NOT EDIT!


#ifndef IPA_BUILDING_MSGS_MESSAGE_ROOMEXPLORATIONGOAL_H
#define IPA_BUILDING_MSGS_MESSAGE_ROOMEXPLORATIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/Image.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Point32.h>
#include <geometry_msgs/Point32.h>
#include <geometry_msgs/Pose2D.h>

namespace ipa_building_msgs
{
template <class ContainerAllocator>
struct RoomExplorationGoal_
{
  typedef RoomExplorationGoal_<ContainerAllocator> Type;

  RoomExplorationGoal_()
    : input_map()
    , map_resolution(0.0)
    , map_origin()
    , robot_radius(0.0)
    , coverage_radius(0.0)
    , field_of_view()
    , field_of_view_origin()
    , starting_position()
    , planning_mode(0)  {
    }
  RoomExplorationGoal_(const ContainerAllocator& _alloc)
    : input_map(_alloc)
    , map_resolution(0.0)
    , map_origin(_alloc)
    , robot_radius(0.0)
    , coverage_radius(0.0)
    , field_of_view(_alloc)
    , field_of_view_origin(_alloc)
    , starting_position(_alloc)
    , planning_mode(0)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _input_map_type;
  _input_map_type input_map;

   typedef float _map_resolution_type;
  _map_resolution_type map_resolution;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _map_origin_type;
  _map_origin_type map_origin;

   typedef float _robot_radius_type;
  _robot_radius_type robot_radius;

   typedef float _coverage_radius_type;
  _coverage_radius_type coverage_radius;

   typedef std::vector< ::geometry_msgs::Point32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point32_<ContainerAllocator> >::other >  _field_of_view_type;
  _field_of_view_type field_of_view;

   typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _field_of_view_origin_type;
  _field_of_view_origin_type field_of_view_origin;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _starting_position_type;
  _starting_position_type starting_position;

   typedef int32_t _planning_mode_type;
  _planning_mode_type planning_mode;





  typedef boost::shared_ptr< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> const> ConstPtr;

}; // struct RoomExplorationGoal_

typedef ::ipa_building_msgs::RoomExplorationGoal_<std::allocator<void> > RoomExplorationGoal;

typedef boost::shared_ptr< ::ipa_building_msgs::RoomExplorationGoal > RoomExplorationGoalPtr;
typedef boost::shared_ptr< ::ipa_building_msgs::RoomExplorationGoal const> RoomExplorationGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator2> & rhs)
{
  return lhs.input_map == rhs.input_map &&
    lhs.map_resolution == rhs.map_resolution &&
    lhs.map_origin == rhs.map_origin &&
    lhs.robot_radius == rhs.robot_radius &&
    lhs.coverage_radius == rhs.coverage_radius &&
    lhs.field_of_view == rhs.field_of_view &&
    lhs.field_of_view_origin == rhs.field_of_view_origin &&
    lhs.starting_position == rhs.starting_position &&
    lhs.planning_mode == rhs.planning_mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ipa_building_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "138d823e8057c5cbb0a8a15be2afce8f";
  }

  static const char* value(const ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x138d823e8057c5cbULL;
  static const uint64_t static_value2 = 0xb0a8a15be2afce8fULL;
};

template<class ContainerAllocator>
struct DataType< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ipa_building_msgs/RoomExplorationGoal";
  }

  static const char* value(const ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Room Exploration action\n"
"# sends an occupancy grid map of a room to the server, which plans a path trough it to cover or inspect the whole room by a device or camera\n"
"\n"
"# goal definition\n"
"sensor_msgs/Image input_map				# the action server needs a map as a input image to segment it,\n"
"										# IMPORTANT: The algorithm needs a black and white 8bit single-channel image (format 8UC1), which is 0 (black) for obstacles and 255 (white) for free space\n"
"										#            todo: the image needs to be vertically mirrored compared to the map in RViz for using right coordinate systems\n"
"										#                  OccupancyGrid map = origin lower left corner, image = origin upper left corner\n"
"										#            todo: take the OccupanyGrid message here instead to avoid confusion and deal with map coordinates in server\n"
"float32 map_resolution					# the resolution of the map in [meter/cell]\n"
"geometry_msgs/Pose map_origin			# the origin of the map in [meter], NOTE: rotations are not supported for now\n"
"float32 robot_radius					# effective robot radius, taking the enlargement of the costmap into account, in [meter]\n"
"float32 coverage_radius					# radius that is used to plan the coverage planning for the robot and not the field of view, assuming that the part that needs to cover everything (e.g. the cleaning part) can be represented by a fitting circle (e.g. smaller than the actual part to ensure coverage), in [meter]\n"
"geometry_msgs/Point32[] field_of_view	# the 4 points that define the field of view of the robot, relatively to the robot coordinate system (with x pointing forwards and y pointing to the left), in [meter]\n"
"geometry_msgs/Point32 field_of_view_origin	# the mounting position of the camera spanning the field of view, relative to the robot center (x-axis points to robot's front side, y-axis points to robot's left side, z-axis upwards), in [meter]\n"
"geometry_msgs/Pose2D starting_position	# starting pose of the robot in the room coordinate system [meter,meter,rad]\n"
"int32 planning_mode						# 1 = plans a path for coverage with the robot footprint, 2 = plans a path for coverage with the robot's field of view\n"
"\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
;
  }

  static const char* value(const ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input_map);
      stream.next(m.map_resolution);
      stream.next(m.map_origin);
      stream.next(m.robot_radius);
      stream.next(m.coverage_radius);
      stream.next(m.field_of_view);
      stream.next(m.field_of_view_origin);
      stream.next(m.starting_position);
      stream.next(m.planning_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RoomExplorationGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ipa_building_msgs::RoomExplorationGoal_<ContainerAllocator>& v)
  {
    s << indent << "input_map: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.input_map);
    s << indent << "map_resolution: ";
    Printer<float>::stream(s, indent + "  ", v.map_resolution);
    s << indent << "map_origin: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.map_origin);
    s << indent << "robot_radius: ";
    Printer<float>::stream(s, indent + "  ", v.robot_radius);
    s << indent << "coverage_radius: ";
    Printer<float>::stream(s, indent + "  ", v.coverage_radius);
    s << indent << "field_of_view[]" << std::endl;
    for (size_t i = 0; i < v.field_of_view.size(); ++i)
    {
      s << indent << "  field_of_view[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "    ", v.field_of_view[i]);
    }
    s << indent << "field_of_view_origin: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "  ", v.field_of_view_origin);
    s << indent << "starting_position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.starting_position);
    s << indent << "planning_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.planning_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IPA_BUILDING_MSGS_MESSAGE_ROOMEXPLORATIONGOAL_H