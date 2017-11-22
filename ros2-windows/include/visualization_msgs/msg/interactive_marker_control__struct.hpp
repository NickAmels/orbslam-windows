// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_CONTROL__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_CONTROL__STRUCT_HPP_

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
#include "geometry_msgs/msg/quaternion.hpp"  // orientation
#include "visualization_msgs/msg/marker.hpp"  // markers

#ifndef _WIN32
# define DEPRECATED_visualization_msgs_msg_InteractiveMarkerControl __attribute__((deprecated))
#else
# define DEPRECATED_visualization_msgs_msg_InteractiveMarkerControl __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InteractiveMarkerControl_
{
  using Type = InteractiveMarkerControl_<ContainerAllocator>;

  InteractiveMarkerControl_()
  {
  }
  explicit InteractiveMarkerControl_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : markers(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _name_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _orientation_type =
      geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _orientation_mode_type =
      uint8_t;
  _orientation_mode_type orientation_mode;
  using _interaction_mode_type =
      uint8_t;
  _interaction_mode_type interaction_mode;
  using _always_visible_type =
      bool;
  _always_visible_type always_visible;
  using _markers_type =
      std::vector<visualization_msgs::msg::Marker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::Marker_<ContainerAllocator>>::other>;
  _markers_type markers;
  using _independent_marker_orientation_type =
      bool;
  _independent_marker_orientation_type independent_marker_orientation;
  using _description_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _description_type description;

  // setters for named parameter idiom
  Type * set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return this;
  }
  Type * set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return this;
  }
  Type * set__orientation_mode(
    const uint8_t & _arg)
  {
    this->orientation_mode = _arg;
    return this;
  }
  Type * set__interaction_mode(
    const uint8_t & _arg)
  {
    this->interaction_mode = _arg;
    return this;
  }
  Type * set__always_visible(
    const bool & _arg)
  {
    this->always_visible = _arg;
    return this;
  }
  Type * set__markers(
    const std::vector<visualization_msgs::msg::Marker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::Marker_<ContainerAllocator>>::other> & _arg)
  {
    this->markers = _arg;
    return this;
  }
  Type * set__independent_marker_orientation(
    const bool & _arg)
  {
    this->independent_marker_orientation = _arg;
    return this;
  }
  Type * set__description(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->description = _arg;
    return this;
  }

  // constants
  enum { INHERIT = 0u };
  enum { FIXED = 1u };
  enum { VIEW_FACING = 2u };
  enum { NONE = 0u };
  enum { MENU = 1u };
  enum { BUTTON = 2u };
  enum { MOVE_AXIS = 3u };
  enum { MOVE_PLANE = 4u };
  enum { ROTATE_AXIS = 5u };
  enum { MOVE_ROTATE = 6u };
  enum { MOVE_3D = 7u };
  enum { ROTATE_3D = 8u };
  enum { MOVE_ROTATE_3D = 9u };

  // pointer types
  using RawPtr =
      visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> *;
  using ConstRawPtr =
      const visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_visualization_msgs_msg_InteractiveMarkerControl
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_visualization_msgs_msg_InteractiveMarkerControl
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InteractiveMarkerControl_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->orientation_mode != other.orientation_mode) {
      return false;
    }
    if (this->interaction_mode != other.interaction_mode) {
      return false;
    }
    if (this->always_visible != other.always_visible) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    if (this->independent_marker_orientation != other.independent_marker_orientation) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const InteractiveMarkerControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InteractiveMarkerControl_

// alias to use template instance with default allocator
using InteractiveMarkerControl =
    visualization_msgs::msg::InteractiveMarkerControl_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_CONTROL__STRUCT_HPP_
