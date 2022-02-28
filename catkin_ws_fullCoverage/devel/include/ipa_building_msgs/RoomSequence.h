// Generated by gencpp from file ipa_building_msgs/RoomSequence.msg
// DO NOT EDIT!


#ifndef IPA_BUILDING_MSGS_MESSAGE_ROOMSEQUENCE_H
#define IPA_BUILDING_MSGS_MESSAGE_ROOMSEQUENCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point32.h>
#include <geometry_msgs/Point32.h>

namespace ipa_building_msgs
{
template <class ContainerAllocator>
struct RoomSequence_
{
  typedef RoomSequence_<ContainerAllocator> Type;

  RoomSequence_()
    : room_indices()
    , checkpoint_position_in_pixel()
    , checkpoint_position_in_meter()  {
    }
  RoomSequence_(const ContainerAllocator& _alloc)
    : room_indices(_alloc)
    , checkpoint_position_in_pixel(_alloc)
    , checkpoint_position_in_meter(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _room_indices_type;
  _room_indices_type room_indices;

   typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _checkpoint_position_in_pixel_type;
  _checkpoint_position_in_pixel_type checkpoint_position_in_pixel;

   typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _checkpoint_position_in_meter_type;
  _checkpoint_position_in_meter_type checkpoint_position_in_meter;





  typedef boost::shared_ptr< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> const> ConstPtr;

}; // struct RoomSequence_

typedef ::ipa_building_msgs::RoomSequence_<std::allocator<void> > RoomSequence;

typedef boost::shared_ptr< ::ipa_building_msgs::RoomSequence > RoomSequencePtr;
typedef boost::shared_ptr< ::ipa_building_msgs::RoomSequence const> RoomSequenceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ipa_building_msgs::RoomSequence_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ipa_building_msgs::RoomSequence_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::RoomSequence_<ContainerAllocator2> & rhs)
{
  return lhs.room_indices == rhs.room_indices &&
    lhs.checkpoint_position_in_pixel == rhs.checkpoint_position_in_pixel &&
    lhs.checkpoint_position_in_meter == rhs.checkpoint_position_in_meter;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ipa_building_msgs::RoomSequence_<ContainerAllocator1> & lhs, const ::ipa_building_msgs::RoomSequence_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ipa_building_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5409a76f4f210c24eb6c06e73dcdb711";
  }

  static const char* value(const ::ipa_building_msgs::RoomSequence_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5409a76f4f210c24ULL;
  static const uint64_t static_value2 = 0xeb6c06e73dcdb711ULL;
};

template<class ContainerAllocator>
struct DataType< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ipa_building_msgs/RoomSequence";
  }

  static const char* value(const ::ipa_building_msgs::RoomSequence_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32[] room_indices		# indices of those rooms that belong to one group (connected to a checkpoint,\n"
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
;
  }

  static const char* value(const ::ipa_building_msgs::RoomSequence_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.room_indices);
      stream.next(m.checkpoint_position_in_pixel);
      stream.next(m.checkpoint_position_in_meter);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RoomSequence_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ipa_building_msgs::RoomSequence_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ipa_building_msgs::RoomSequence_<ContainerAllocator>& v)
  {
    s << indent << "room_indices[]" << std::endl;
    for (size_t i = 0; i < v.room_indices.size(); ++i)
    {
      s << indent << "  room_indices[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.room_indices[i]);
    }
    s << indent << "checkpoint_position_in_pixel: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "  ", v.checkpoint_position_in_pixel);
    s << indent << "checkpoint_position_in_meter: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "  ", v.checkpoint_position_in_meter);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IPA_BUILDING_MSGS_MESSAGE_ROOMSEQUENCE_H