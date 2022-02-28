// Generated by gencpp from file ipa_building_msgs/FindRoomSequenceWithCheckpointsActionGoal.msg
// DO NOT EDIT!


#ifndef IPA_BUILDING_MSGS_MESSAGE_FINDROOMSEQUENCEWITHCHECKPOINTSACTIONGOAL_H
#define IPA_BUILDING_MSGS_MESSAGE_FINDROOMSEQUENCEWITHCHECKPOINTSACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <ipa_building_msgs/FindRoomSequenceWithCheckpointsGoal.h>

namespace ipa_building_msgs
{
template <class ContainerAllocator>
struct FindRoomSequenceWithCheckpointsActionGoal_
{
  typedef FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> Type;

  FindRoomSequenceWithCheckpointsActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  FindRoomSequenceWithCheckpointsActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::ipa_building_msgs::FindRoomSequenceWithCheckpointsGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct FindRoomSequenceWithCheckpointsActionGoal_

typedef ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<std::allocator<void> > FindRoomSequenceWithCheckpointsActionGoal;

typedef boost::shared_ptr< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal > FindRoomSequenceWithCheckpointsActionGoalPtr;
typedef boost::shared_ptr< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal const> FindRoomSequenceWithCheckpointsActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ipa_building_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ccd3b5d97e2fb08a9d31664a441aed53";
  }

  static const char* value(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xccd3b5d97e2fb08aULL;
  static const uint64_t static_value2 = 0x9d31664a441aed53ULL;
};

template<class ContainerAllocator>
struct DataType< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ipa_building_msgs/FindRoomSequenceWithCheckpointsActionGoal";
  }

  static const char* value(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"FindRoomSequenceWithCheckpointsGoal goal\n"
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
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: ipa_building_msgs/FindRoomSequenceWithCheckpointsGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# goal definition\n"
"sensor_msgs/Image input_map 				# floor plan map [mono8 format], 0=obstacle or unknown, 255=free space \n"
"float32 map_resolution						# the resolution of the map in [meter/cell]\n"
"geometry_msgs/Pose map_origin				# the origin of the map in [meter]\n"
"ipa_building_msgs/RoomInformation[] room_information_in_pixel		# room data (min/max coordinates, center coordinates) measured in pixels\n"
"float64 robot_radius						# the robot footprint radius [m], used for excluding areas from path planning that could not be visited by the robot\n"
"geometry_msgs/Pose robot_start_coordinate	# current robot location (used to determine the closest checkpoint in the sequence of checkpoints) [in meter]\n"
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
"MSG: ipa_building_msgs/RoomInformation\n"
"geometry_msgs/Polygon room_min_max		# first point provides the minimum (x,y)-coordinate values of the rooms, second point provides the maximum (x,y)-coordinate values of the rooms\n"
"geometry_msgs/Point32 room_center		# provides the (x,y)-coordinate values of the room centers\n"
"================================================================================\n"
"MSG: geometry_msgs/Polygon\n"
"#A specification of a polygon where the first and last points are assumed to be connected\n"
"Point32[] points\n"
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
;
  }

  static const char* value(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FindRoomSequenceWithCheckpointsActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IPA_BUILDING_MSGS_MESSAGE_FINDROOMSEQUENCEWITHCHECKPOINTSACTIONGOAL_H