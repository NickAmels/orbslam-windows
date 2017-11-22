// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__STRUCT_HPP_
#define TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include "builtin_interfaces/msg/duration.hpp"  // time_from_start

#ifndef _WIN32
# define DEPRECATED_trajectory_msgs_msg_JointTrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED_trajectory_msgs_msg_JointTrajectoryPoint __declspec(deprecated)
#endif

namespace trajectory_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointTrajectoryPoint_
{
  using Type = JointTrajectoryPoint_<ContainerAllocator>;

  JointTrajectoryPoint_()
  {
  }
  explicit JointTrajectoryPoint_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : positions(_alloc),
    velocities(_alloc),
    accelerations(_alloc),
    effort(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _positions_type =
      std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _positions_type positions;
  using _velocities_type =
      std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _velocities_type velocities;
  using _accelerations_type =
      std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _accelerations_type accelerations;
  using _effort_type =
      std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _effort_type effort;
  using _time_from_start_type =
      builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_from_start_type time_from_start;

  // setters for named parameter idiom
  Type * set__positions(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->positions = _arg;
    return this;
  }
  Type * set__velocities(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->velocities = _arg;
    return this;
  }
  Type * set__accelerations(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->accelerations = _arg;
    return this;
  }
  Type * set__effort(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->effort = _arg;
    return this;
  }
  Type * set__time_from_start(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_from_start = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
      const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_trajectory_msgs_msg_JointTrajectoryPoint
    std::shared_ptr<trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_trajectory_msgs_msg_JointTrajectoryPoint
    std::shared_ptr<trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTrajectoryPoint_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    if (this->accelerations != other.accelerations) {
      return false;
    }
    if (this->effort != other.effort) {
      return false;
    }
    if (this->time_from_start != other.time_from_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTrajectoryPoint_

// alias to use template instance with default allocator
using JointTrajectoryPoint =
    trajectory_msgs::msg::JointTrajectoryPoint_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace trajectory_msgs

#endif  // TRAJECTORY_MSGS__MSG__JOINT_TRAJECTORY_POINT__STRUCT_HPP_
