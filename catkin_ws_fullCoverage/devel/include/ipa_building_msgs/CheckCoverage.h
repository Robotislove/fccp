// Generated by gencpp from file ipa_building_msgs/CheckCoverage.msg
// DO NOT EDIT!


#ifndef IPA_BUILDING_MSGS_MESSAGE_CHECKCOVERAGE_H
#define IPA_BUILDING_MSGS_MESSAGE_CHECKCOVERAGE_H

#include <ros/service_traits.h>


#include <ipa_building_msgs/CheckCoverageRequest.h>
#include <ipa_building_msgs/CheckCoverageResponse.h>


namespace ipa_building_msgs
{

struct CheckCoverage
{

typedef CheckCoverageRequest Request;
typedef CheckCoverageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CheckCoverage
} // namespace ipa_building_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ipa_building_msgs::CheckCoverage > {
  static const char* value()
  {
    return "c39dded0eb0ee02116211ecd0f2054c1";
  }

  static const char* value(const ::ipa_building_msgs::CheckCoverage&) { return value(); }
};

template<>
struct DataType< ::ipa_building_msgs::CheckCoverage > {
  static const char* value()
  {
    return "ipa_building_msgs/CheckCoverage";
  }

  static const char* value(const ::ipa_building_msgs::CheckCoverage&) { return value(); }
};


// service_traits::MD5Sum< ::ipa_building_msgs::CheckCoverageRequest> should match
// service_traits::MD5Sum< ::ipa_building_msgs::CheckCoverage >
template<>
struct MD5Sum< ::ipa_building_msgs::CheckCoverageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ipa_building_msgs::CheckCoverage >::value();
  }
  static const char* value(const ::ipa_building_msgs::CheckCoverageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ipa_building_msgs::CheckCoverageRequest> should match
// service_traits::DataType< ::ipa_building_msgs::CheckCoverage >
template<>
struct DataType< ::ipa_building_msgs::CheckCoverageRequest>
{
  static const char* value()
  {
    return DataType< ::ipa_building_msgs::CheckCoverage >::value();
  }
  static const char* value(const ::ipa_building_msgs::CheckCoverageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ipa_building_msgs::CheckCoverageResponse> should match
// service_traits::MD5Sum< ::ipa_building_msgs::CheckCoverage >
template<>
struct MD5Sum< ::ipa_building_msgs::CheckCoverageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ipa_building_msgs::CheckCoverage >::value();
  }
  static const char* value(const ::ipa_building_msgs::CheckCoverageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ipa_building_msgs::CheckCoverageResponse> should match
// service_traits::DataType< ::ipa_building_msgs::CheckCoverage >
template<>
struct DataType< ::ipa_building_msgs::CheckCoverageResponse>
{
  static const char* value()
  {
    return DataType< ::ipa_building_msgs::CheckCoverage >::value();
  }
  static const char* value(const ::ipa_building_msgs::CheckCoverageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // IPA_BUILDING_MSGS_MESSAGE_CHECKCOVERAGE_H
