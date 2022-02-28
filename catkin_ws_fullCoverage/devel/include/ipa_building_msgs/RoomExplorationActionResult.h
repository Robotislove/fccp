// Generated by gencpp from file ipa_building_msgs/RoomExplorationActionResult.msg
// DO NOT EDIT!


#ifndef IPA_BUILDING_MSGS_MESSAGE_ROOMEXPLORATIONACTIONRESULT_H
#define IPA_BUILDING_MSGS_MESSAGE_ROOMEXPLORATIONACTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalStatus.h>
#include <ipa_building_msgs/RoomExplorationResult.h>

namespace ipa_building_msgs
{
template <class ContainerAllocator>
struct RoomExplorationActionResult_
{
  typedef RoomExplorationActionResult_<ContainerAllocator> Type;

  RoomExplorationActionResult_()
    : header()
    , status()
    , result()  {
    }
  RoomExplorationActionResult_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(_alloc)
    , result(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef  ::ipa_building_msgs::RoomExplorationResult_<ContainerAllocator>  _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> const> ConstPtr;

}; // struct RoomExplorationActionResult_

typedef ::ipa_building_msgs::RoomExplorationActionResult_<std::allocator<void> > RoomExplorationActionResult;

typedef boost::shared_ptr< ::ipa_building_msgs::RoomExplorationActionResult > RoomExplorationActionResultPtr;
typedef boost::shared_ptr< ::ipa_building_msgs::RoomExplorationActionResult const> RoomExplorationActionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.status == rhs.status &&
    lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ipa_building_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "05710f009e2ece78fd674e0bf5c23519";
  }

  static const char* value(const ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x05710f009e2ece78ULL;
  static const uint64_t static_value2 = 0xfd674e0bf5c23519ULL;
};

template<class ContainerAllocator>
struct DataType< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ipa_building_msgs/RoomExplorationActionResult";
  }

  static const char* value(const ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"RoomExplorationResult result\n"
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
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
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
"MSG: ipa_building_msgs/RoomExplorationResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# result definition\n"
"geometry_msgs/Pose2D[] coverage_path			# when the server should return the coverage path, this is done returning the points in an array that shows the order of visiting\n"
"geometry_msgs/PoseStamped[] coverage_path_pose_stamped			# (same content as coverage_path but different format) when the server should return the coverage path, this is done returning the points in an array that shows the order of visiting\n"
"\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
;
  }

  static const char* value(const ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RoomExplorationActionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ipa_building_msgs::RoomExplorationActionResult_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "result: ";
    s << std::endl;
    Printer< ::ipa_building_msgs::RoomExplorationResult_<ContainerAllocator> >::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IPA_BUILDING_MSGS_MESSAGE_ROOMEXPLORATIONACTIONRESULT_H
