// Generated by gencpp from file three_dof_planar_manipulator/Floats_arrayResponse.msg
// DO NOT EDIT!


#ifndef THREE_DOF_PLANAR_MANIPULATOR_MESSAGE_FLOATS_ARRAYRESPONSE_H
#define THREE_DOF_PLANAR_MANIPULATOR_MESSAGE_FLOATS_ARRAYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace three_dof_planar_manipulator
{
template <class ContainerAllocator>
struct Floats_arrayResponse_
{
  typedef Floats_arrayResponse_<ContainerAllocator> Type;

  Floats_arrayResponse_()
    : res()  {
    }
  Floats_arrayResponse_(const ContainerAllocator& _alloc)
    : res(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _res_type;
  _res_type res;





  typedef boost::shared_ptr< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Floats_arrayResponse_

typedef ::three_dof_planar_manipulator::Floats_arrayResponse_<std::allocator<void> > Floats_arrayResponse;

typedef boost::shared_ptr< ::three_dof_planar_manipulator::Floats_arrayResponse > Floats_arrayResponsePtr;
typedef boost::shared_ptr< ::three_dof_planar_manipulator::Floats_arrayResponse const> Floats_arrayResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator1> & lhs, const ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator2> & rhs)
{
  return lhs.res == rhs.res;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator1> & lhs, const ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace three_dof_planar_manipulator

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "718f5814793a2786e65a61ce661074f4";
  }

  static const char* value(const ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x718f5814793a2786ULL;
  static const uint64_t static_value2 = 0xe65a61ce661074f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "three_dof_planar_manipulator/Floats_arrayResponse";
  }

  static const char* value(const ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] res\n"
"\n"
;
  }

  static const char* value(const ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.res);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Floats_arrayResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::three_dof_planar_manipulator::Floats_arrayResponse_<ContainerAllocator>& v)
  {
    s << indent << "res[]" << std::endl;
    for (size_t i = 0; i < v.res.size(); ++i)
    {
      s << indent << "  res[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.res[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // THREE_DOF_PLANAR_MANIPULATOR_MESSAGE_FLOATS_ARRAYRESPONSE_H
