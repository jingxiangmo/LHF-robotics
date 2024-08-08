// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarm_msgs:srv/GetInt32ByType.idl
// generated code does not contain a copyright notice

#ifndef XARM_MSGS__SRV__DETAIL__GET_INT32_BY_TYPE__BUILDER_HPP_
#define XARM_MSGS__SRV__DETAIL__GET_INT32_BY_TYPE__BUILDER_HPP_

#include "xarm_msgs/srv/detail/get_int32_by_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xarm_msgs
{

namespace srv
{

namespace builder
{

class Init_GetInt32ByType_Request_type
{
public:
  Init_GetInt32ByType_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarm_msgs::srv::GetInt32ByType_Request type(::xarm_msgs::srv::GetInt32ByType_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarm_msgs::srv::GetInt32ByType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::GetInt32ByType_Request>()
{
  return xarm_msgs::srv::builder::Init_GetInt32ByType_Request_type();
}

}  // namespace xarm_msgs


namespace xarm_msgs
{

namespace srv
{

namespace builder
{

class Init_GetInt32ByType_Response_data
{
public:
  explicit Init_GetInt32ByType_Response_data(::xarm_msgs::srv::GetInt32ByType_Response & msg)
  : msg_(msg)
  {}
  ::xarm_msgs::srv::GetInt32ByType_Response data(::xarm_msgs::srv::GetInt32ByType_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarm_msgs::srv::GetInt32ByType_Response msg_;
};

class Init_GetInt32ByType_Response_message
{
public:
  explicit Init_GetInt32ByType_Response_message(::xarm_msgs::srv::GetInt32ByType_Response & msg)
  : msg_(msg)
  {}
  Init_GetInt32ByType_Response_data message(::xarm_msgs::srv::GetInt32ByType_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetInt32ByType_Response_data(msg_);
  }

private:
  ::xarm_msgs::srv::GetInt32ByType_Response msg_;
};

class Init_GetInt32ByType_Response_ret
{
public:
  Init_GetInt32ByType_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetInt32ByType_Response_message ret(::xarm_msgs::srv::GetInt32ByType_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return Init_GetInt32ByType_Response_message(msg_);
  }

private:
  ::xarm_msgs::srv::GetInt32ByType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::GetInt32ByType_Response>()
{
  return xarm_msgs::srv::builder::Init_GetInt32ByType_Response_ret();
}

}  // namespace xarm_msgs

#endif  // XARM_MSGS__SRV__DETAIL__GET_INT32_BY_TYPE__BUILDER_HPP_
