// Generated by gencpp from file ipa_building_msgs/ExtractAreaMapFromLabeledMap.msg
// DO NOT EDIT!


#ifndef IPA_BUILDING_MSGS_MESSAGE_EXTRACTAREAMAPFROMLABELEDMAP_H
#define IPA_BUILDING_MSGS_MESSAGE_EXTRACTAREAMAPFROMLABELEDMAP_H

#include <ros/service_traits.h>


#include <ipa_building_msgs/ExtractAreaMapFromLabeledMapRequest.h>
#include <ipa_building_msgs/ExtractAreaMapFromLabeledMapResponse.h>


namespace ipa_building_msgs
{

struct ExtractAreaMapFromLabeledMap
{

typedef ExtractAreaMapFromLabeledMapRequest Request;
typedef ExtractAreaMapFromLabeledMapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ExtractAreaMapFromLabeledMap
} // namespace ipa_building_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap > {
  static const char* value()
  {
    return "678bbdebce5d5e355861b28b37e6fe3c";
  }

  static const char* value(const ::ipa_building_msgs::ExtractAreaMapFromLabeledMap&) { return value(); }
};

template<>
struct DataType< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap > {
  static const char* value()
  {
    return "ipa_building_msgs/ExtractAreaMapFromLabeledMap";
  }

  static const char* value(const ::ipa_building_msgs::ExtractAreaMapFromLabeledMap&) { return value(); }
};


// service_traits::MD5Sum< ::ipa_building_msgs::ExtractAreaMapFromLabeledMapRequest> should match
// service_traits::MD5Sum< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap >
template<>
struct MD5Sum< ::ipa_building_msgs::ExtractAreaMapFromLabeledMapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap >::value();
  }
  static const char* value(const ::ipa_building_msgs::ExtractAreaMapFromLabeledMapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ipa_building_msgs::ExtractAreaMapFromLabeledMapRequest> should match
// service_traits::DataType< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap >
template<>
struct DataType< ::ipa_building_msgs::ExtractAreaMapFromLabeledMapRequest>
{
  static const char* value()
  {
    return DataType< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap >::value();
  }
  static const char* value(const ::ipa_building_msgs::ExtractAreaMapFromLabeledMapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ipa_building_msgs::ExtractAreaMapFromLabeledMapResponse> should match
// service_traits::MD5Sum< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap >
template<>
struct MD5Sum< ::ipa_building_msgs::ExtractAreaMapFromLabeledMapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap >::value();
  }
  static const char* value(const ::ipa_building_msgs::ExtractAreaMapFromLabeledMapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ipa_building_msgs::ExtractAreaMapFromLabeledMapResponse> should match
// service_traits::DataType< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap >
template<>
struct DataType< ::ipa_building_msgs::ExtractAreaMapFromLabeledMapResponse>
{
  static const char* value()
  {
    return DataType< ::ipa_building_msgs::ExtractAreaMapFromLabeledMap >::value();
  }
  static const char* value(const ::ipa_building_msgs::ExtractAreaMapFromLabeledMapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // IPA_BUILDING_MSGS_MESSAGE_EXTRACTAREAMAPFROMLABELEDMAP_H
