// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__EMPTY__REQUEST__STRUCT_H_
#define TEST_MSGS__SRV__EMPTY__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message test_msgs/Empty_Request
typedef struct test_msgs__srv__Empty_Request
{
  bool _dummy;
} test_msgs__srv__Empty_Request;

/// Struct for an array of messages
typedef struct test_msgs__srv__Empty_Request__Array
{
  test_msgs__srv__Empty_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__Empty_Request__Array;

#if __cplusplus
}
#endif

#endif  // TEST_MSGS__SRV__EMPTY__REQUEST__STRUCT_H_
