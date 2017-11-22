// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "lifecycle_msgs/srv/change_state__struct.hpp"

#ifndef LIFECYCLE_MSGS__SRV__CHANGE_STATE__TRAITS_HPP_
#define LIFECYCLE_MSGS__SRV__CHANGE_STATE__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<lifecycle_msgs::srv::ChangeState>
  : std::integral_constant<
    bool,
    has_fixed_size<lifecycle_msgs::srv::ChangeState_Request>::value &&
    has_fixed_size<lifecycle_msgs::srv::ChangeState_Response>::value
  >
{
};

template<>
struct has_bounded_size<lifecycle_msgs::srv::ChangeState>
  : std::integral_constant<
    bool,
    has_bounded_size<lifecycle_msgs::srv::ChangeState_Request>::value &&
    has_bounded_size<lifecycle_msgs::srv::ChangeState_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // LIFECYCLE_MSGS__SRV__CHANGE_STATE__TRAITS_HPP_
