// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xarm_msgs:srv/RobotiqGetStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xarm_msgs/srv/detail/robotiq_get_status__rosidl_typesupport_introspection_c.h"
#include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xarm_msgs/srv/detail/robotiq_get_status__functions.h"
#include "xarm_msgs/srv/detail/robotiq_get_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__RobotiqGetStatus_Request__init(message_memory);
}

void RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_fini_function(void * message_memory)
{
  xarm_msgs__srv__RobotiqGetStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_message_member_array[1] = {
  {
    "number_of_registers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqGetStatus_Request, number_of_registers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_message_members = {
  "xarm_msgs__srv",  // message namespace
  "RobotiqGetStatus_Request",  // message name
  1,  // number of fields
  sizeof(xarm_msgs__srv__RobotiqGetStatus_Request),
  RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_message_member_array,  // message members
  RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_message_type_support_handle = {
  0,
  &RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqGetStatus_Request)() {
  if (!RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_message_type_support_handle.typesupport_identifier) {
    RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotiqGetStatus_Request__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xarm_msgs/srv/detail/robotiq_get_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_get_status__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_get_status__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `ret_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__RobotiqGetStatus_Response__init(message_memory);
}

void RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_fini_function(void * message_memory)
{
  xarm_msgs__srv__RobotiqGetStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_message_member_array[3] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqGetStatus_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqGetStatus_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ret_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqGetStatus_Response, ret_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_message_members = {
  "xarm_msgs__srv",  // message namespace
  "RobotiqGetStatus_Response",  // message name
  3,  // number of fields
  sizeof(xarm_msgs__srv__RobotiqGetStatus_Response),
  RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_message_member_array,  // message members
  RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_message_type_support_handle = {
  0,
  &RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqGetStatus_Response)() {
  if (!RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_message_type_support_handle.typesupport_identifier) {
    RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotiqGetStatus_Response__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_get_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers xarm_msgs__srv__detail__robotiq_get_status__rosidl_typesupport_introspection_c__RobotiqGetStatus_service_members = {
  "xarm_msgs__srv",  // service namespace
  "RobotiqGetStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // xarm_msgs__srv__detail__robotiq_get_status__rosidl_typesupport_introspection_c__RobotiqGetStatus_Request_message_type_support_handle,
  NULL  // response message
  // xarm_msgs__srv__detail__robotiq_get_status__rosidl_typesupport_introspection_c__RobotiqGetStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t xarm_msgs__srv__detail__robotiq_get_status__rosidl_typesupport_introspection_c__RobotiqGetStatus_service_type_support_handle = {
  0,
  &xarm_msgs__srv__detail__robotiq_get_status__rosidl_typesupport_introspection_c__RobotiqGetStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqGetStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqGetStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqGetStatus)() {
  if (!xarm_msgs__srv__detail__robotiq_get_status__rosidl_typesupport_introspection_c__RobotiqGetStatus_service_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__detail__robotiq_get_status__rosidl_typesupport_introspection_c__RobotiqGetStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)xarm_msgs__srv__detail__robotiq_get_status__rosidl_typesupport_introspection_c__RobotiqGetStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqGetStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqGetStatus_Response)()->data;
  }

  return &xarm_msgs__srv__detail__robotiq_get_status__rosidl_typesupport_introspection_c__RobotiqGetStatus_service_type_support_handle;
}
