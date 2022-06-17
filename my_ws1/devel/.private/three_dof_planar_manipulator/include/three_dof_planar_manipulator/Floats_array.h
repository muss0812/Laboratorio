// Generated by gencpp from file three_dof_planar_manipulator/Floats_array.msg
// DO NOT EDIT!


#ifndef THREE_DOF_PLANAR_MANIPULATOR_MESSAGE_FLOATS_ARRAY_H
#define THREE_DOF_PLANAR_MANIPULATOR_MESSAGE_FLOATS_ARRAY_H

#include <ros/service_traits.h>


#include <three_dof_planar_manipulator/Floats_arrayRequest.h>
#include <three_dof_planar_manipulator/Floats_arrayResponse.h>


namespace three_dof_planar_manipulator
{

struct Floats_array
{

typedef Floats_arrayRequest Request;
typedef Floats_arrayResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Floats_array
} // namespace three_dof_planar_manipulator


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::three_dof_planar_manipulator::Floats_array > {
  static const char* value()
  {
    return "086e0a6631d243c06d9ccfa024bfe376";
  }

  static const char* value(const ::three_dof_planar_manipulator::Floats_array&) { return value(); }
};

template<>
struct DataType< ::three_dof_planar_manipulator::Floats_array > {
  static const char* value()
  {
    return "three_dof_planar_manipulator/Floats_array";
  }

  static const char* value(const ::three_dof_planar_manipulator::Floats_array&) { return value(); }
};


// service_traits::MD5Sum< ::three_dof_planar_manipulator::Floats_arrayRequest> should match
// service_traits::MD5Sum< ::three_dof_planar_manipulator::Floats_array >
template<>
struct MD5Sum< ::three_dof_planar_manipulator::Floats_arrayRequest>
{
  static const char* value()
  {
    return MD5Sum< ::three_dof_planar_manipulator::Floats_array >::value();
  }
  static const char* value(const ::three_dof_planar_manipulator::Floats_arrayRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::three_dof_planar_manipulator::Floats_arrayRequest> should match
// service_traits::DataType< ::three_dof_planar_manipulator::Floats_array >
template<>
struct DataType< ::three_dof_planar_manipulator::Floats_arrayRequest>
{
  static const char* value()
  {
    return DataType< ::three_dof_planar_manipulator::Floats_array >::value();
  }
  static const char* value(const ::three_dof_planar_manipulator::Floats_arrayRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::three_dof_planar_manipulator::Floats_arrayResponse> should match
// service_traits::MD5Sum< ::three_dof_planar_manipulator::Floats_array >
template<>
struct MD5Sum< ::three_dof_planar_manipulator::Floats_arrayResponse>
{
  static const char* value()
  {
    return MD5Sum< ::three_dof_planar_manipulator::Floats_array >::value();
  }
  static const char* value(const ::three_dof_planar_manipulator::Floats_arrayResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::three_dof_planar_manipulator::Floats_arrayResponse> should match
// service_traits::DataType< ::three_dof_planar_manipulator::Floats_array >
template<>
struct DataType< ::three_dof_planar_manipulator::Floats_arrayResponse>
{
  static const char* value()
  {
    return DataType< ::three_dof_planar_manipulator::Floats_array >::value();
  }
  static const char* value(const ::three_dof_planar_manipulator::Floats_arrayResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // THREE_DOF_PLANAR_MANIPULATOR_MESSAGE_FLOATS_ARRAY_H