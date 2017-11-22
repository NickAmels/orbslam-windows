// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MARKER_ARRAY__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__MARKER_ARRAY__STRUCT_HPP_

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
#include "visualization_msgs/msg/marker.hpp"  // markers

#ifndef _WIN32
# define DEPRECATED_visualization_msgs_msg_MarkerArray __attribute__((deprecated))
#else
# define DEPRECATED_visualization_msgs_msg_MarkerArray __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MarkerArray_
{
  using Type = MarkerArray_<ContainerAllocator>;

  MarkerArray_()
  {
  }
  explicit MarkerArray_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : markers(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _markers_type =
      std::vector<visualization_msgs::msg::Marker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::Marker_<ContainerAllocator>>::other>;
  _markers_type markers;

  // setters for named parameter idiom
  Type * set__markers(
    const std::vector<visualization_msgs::msg::Marker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::Marker_<ContainerAllocator>>::other> & _arg)
  {
    this->markers = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      visualization_msgs::msg::MarkerArray_<ContainerAllocator> *;
  using ConstRawPtr =
      const visualization_msgs::msg::MarkerArray_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<visualization_msgs::msg::MarkerArray_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<visualization_msgs::msg::MarkerArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    visualization_msgs::msg::MarkerArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::MarkerArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    visualization_msgs::msg::MarkerArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::MarkerArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<visualization_msgs::msg::MarkerArray_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<visualization_msgs::msg::MarkerArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_visualization_msgs_msg_MarkerArray
    std::shared_ptr<visualization_msgs::msg::MarkerArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_visualization_msgs_msg_MarkerArray
    std::shared_ptr<visualization_msgs::msg::MarkerArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarkerArray_ & other) const
  {
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarkerArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarkerArray_

// alias to use template instance with default allocator
using MarkerArray =
    visualization_msgs::msg::MarkerArray_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__MARKER_ARRAY__STRUCT_HPP_
