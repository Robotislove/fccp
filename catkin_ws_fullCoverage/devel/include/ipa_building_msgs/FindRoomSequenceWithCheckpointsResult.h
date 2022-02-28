// Generated by gencpp from file ipa_building_msgs/FindRoomSequenceWithCheckpointsResult.msg
// DO NOT EDIT!


#ifndef IPA_BUILDING_MSGS_MESSAGE_FINDROOMSEQUENCEWITHCHECKPOINTSRESULT_H
#define IPA_BUILDING_MSGS_MESSAGE_FINDROOMSEQUENCEWITHCHECKPOINTSRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ipa_building_msgs/RoomSequence.h>
#include <sensor_msgs/Image.h>

namespace ipa_building_msgs
{
template <class ContainerAllocator>
struct FindRoomSequenceWithCheckpointsResult_
{
  typedef FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> Type;

  FindRoomSequenceWithCheckpointsResult_()
    : checkpoints()
    , sequence_map()  {
    }
  FindRoomSequenceWithCheckpointsResult_(const ContainerAllocator& _alloc)
    : checkpoints(_alloc)
    , sequence_map(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >::other >  _checkpoints_type;
  _checkpoints_type checkpoints;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _sequence_map_type;
  _sequence_map_type sequence_map;





  typedef boost::shared_ptr< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> const> ConstPtr;

}; // struct FindRoomSequenceWithCheckpointsResult_

typedef ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<std::allocator<void> > FindRoomSequenceWithCheckpointsResult;

typedef boost::shared_ptr< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult > FindRoomSequenceWithCheckpointsResultPtr;
typedef boost::shared_ptr< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult const> FindRoomSequenceWithCheckpointsResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator2> & rhs)
{
  return lhs.checkpoints == rhs.checkpoints &&
    lhs.sequence_map == rhs.sequence_map;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ipa_building_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aed0112204502cd11e2b75f3bde2dcf7";
  }

  static const char* value(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaed0112204502cd1ULL;
  static const uint64_t static_value2 = 0x1e2b75f3bde2dcf7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ipa_building_msgs/FindRoomSequenceWithCheckpointsResult";
  }

  static const char* value(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"# result definition\n"
"ipa_building_msgs/RoomSequence[] checkpoints			# sequence of checkpoints, should be ordered in optimized traveling salesman sequence\n"
"														# (checkpoint = a clique of rooms close [in terms of robot driving distance] to each other,\n"
"														#               and a central [in terms of rooms in the group] checkpoint location)\n"
"sensor_msgs/Image sequence_map							# map that has the calculated sequence drawn in\n"
"\n"
"================================================================================\n"
"MSG: ipa_building_msgs/RoomSequence\n"
"uint32[] room_indices		# indices of those rooms that belong to one group (connected to a checkpoint,\n"
"							# i.e. the clique of rooms close [in terms of robot driving distance] to each other),\n"
"							# indices should be ordered in optimized traveling salesman sequence\n"
"geometry_msgs/Point32 checkpoint_position_in_pixel			# provides the (x,y)-coordinates of the checkpoint location for this group of rooms [in pixel]\n"
"geometry_msgs/Point32 checkpoint_position_in_meter			# provides the (x,y)-coordinates of the checkpoint location for this group of rooms [in meter]\n"
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
;
  }

  static const char* value(const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.checkpoints);
      stream.next(m.sequence_map);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FindRoomSequenceWithCheckpointsResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ipa_building_msgs::FindRoomSequenceWithCheckpointsResult_<ContainerAllocator>& v)
  {
    s << indent << "checkpoints[]" << std::endl;
    for (size_t i = 0; i < v.checkpoints.size(); ++i)
    {
      s << indent << "  checkpoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >::stream(s, indent + "    ", v.checkpoints[i]);
    }
    s << indent << "sequence_map: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.sequence_map);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IPA_BUILDING_MSGS_MESSAGE_FINDROOMSEQUENCEWITHCHECKPOINTSRESULT_H
