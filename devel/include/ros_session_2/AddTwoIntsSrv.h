// Generated by gencpp from file ros_session_2/AddTwoIntsSrv.msg
// DO NOT EDIT!


#ifndef ROS_SESSION_2_MESSAGE_ADDTWOINTSSRV_H
#define ROS_SESSION_2_MESSAGE_ADDTWOINTSSRV_H

#include <ros/service_traits.h>


#include <ros_session_2/AddTwoIntsSrvRequest.h>
#include <ros_session_2/AddTwoIntsSrvResponse.h>


namespace ros_session_2
{

struct AddTwoIntsSrv
{

typedef AddTwoIntsSrvRequest Request;
typedef AddTwoIntsSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoIntsSrv
} // namespace ros_session_2


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_session_2::AddTwoIntsSrv > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::ros_session_2::AddTwoIntsSrv&) { return value(); }
};

template<>
struct DataType< ::ros_session_2::AddTwoIntsSrv > {
  static const char* value()
  {
    return "ros_session_2/AddTwoIntsSrv";
  }

  static const char* value(const ::ros_session_2::AddTwoIntsSrv&) { return value(); }
};


// service_traits::MD5Sum< ::ros_session_2::AddTwoIntsSrvRequest> should match
// service_traits::MD5Sum< ::ros_session_2::AddTwoIntsSrv >
template<>
struct MD5Sum< ::ros_session_2::AddTwoIntsSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_session_2::AddTwoIntsSrv >::value();
  }
  static const char* value(const ::ros_session_2::AddTwoIntsSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_session_2::AddTwoIntsSrvRequest> should match
// service_traits::DataType< ::ros_session_2::AddTwoIntsSrv >
template<>
struct DataType< ::ros_session_2::AddTwoIntsSrvRequest>
{
  static const char* value()
  {
    return DataType< ::ros_session_2::AddTwoIntsSrv >::value();
  }
  static const char* value(const ::ros_session_2::AddTwoIntsSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_session_2::AddTwoIntsSrvResponse> should match
// service_traits::MD5Sum< ::ros_session_2::AddTwoIntsSrv >
template<>
struct MD5Sum< ::ros_session_2::AddTwoIntsSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_session_2::AddTwoIntsSrv >::value();
  }
  static const char* value(const ::ros_session_2::AddTwoIntsSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_session_2::AddTwoIntsSrvResponse> should match
// service_traits::DataType< ::ros_session_2::AddTwoIntsSrv >
template<>
struct DataType< ::ros_session_2::AddTwoIntsSrvResponse>
{
  static const char* value()
  {
    return DataType< ::ros_session_2::AddTwoIntsSrv >::value();
  }
  static const char* value(const ::ros_session_2::AddTwoIntsSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_SESSION_2_MESSAGE_ADDTWOINTSSRV_H