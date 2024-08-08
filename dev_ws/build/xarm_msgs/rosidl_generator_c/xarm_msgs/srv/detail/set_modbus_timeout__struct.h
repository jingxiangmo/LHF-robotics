// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xarm_msgs:srv/SetModbusTimeout.idl
// generated code does not contain a copyright notice

#ifndef XARM_MSGS__SRV__DETAIL__SET_MODBUS_TIMEOUT__STRUCT_H_
#define XARM_MSGS__SRV__DETAIL__SET_MODBUS_TIMEOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetModbusTimeout in the package xarm_msgs.
typedef struct xarm_msgs__srv__SetModbusTimeout_Request
{
  int32_t timeout;
  bool is_transparent_transmission;
} xarm_msgs__srv__SetModbusTimeout_Request;

// Struct for a sequence of xarm_msgs__srv__SetModbusTimeout_Request.
typedef struct xarm_msgs__srv__SetModbusTimeout_Request__Sequence
{
  xarm_msgs__srv__SetModbusTimeout_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__SetModbusTimeout_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetModbusTimeout in the package xarm_msgs.
typedef struct xarm_msgs__srv__SetModbusTimeout_Response
{
  int16_t ret;
  rosidl_runtime_c__String message;
} xarm_msgs__srv__SetModbusTimeout_Response;

// Struct for a sequence of xarm_msgs__srv__SetModbusTimeout_Response.
typedef struct xarm_msgs__srv__SetModbusTimeout_Response__Sequence
{
  xarm_msgs__srv__SetModbusTimeout_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__SetModbusTimeout_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XARM_MSGS__SRV__DETAIL__SET_MODBUS_TIMEOUT__STRUCT_H_
