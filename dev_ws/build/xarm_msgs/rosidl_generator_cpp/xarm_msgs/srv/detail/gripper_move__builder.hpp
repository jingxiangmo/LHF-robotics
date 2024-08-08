// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarm_msgs:srv/GripperMove.idl
// generated code does not contain a copyright notice

#ifndef XARM_MSGS__SRV__DETAIL__GRIPPER_MOVE__BUILDER_HPP_
#define XARM_MSGS__SRV__DETAIL__GRIPPER_MOVE__BUILDER_HPP_

#include "xarm_msgs/srv/detail/gripper_move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xarm_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperMove_Request_timeout
{
public:
  explicit Init_GripperMove_Request_timeout(::xarm_msgs::srv::GripperMove_Request & msg)
  : msg_(msg)
  {}
  ::xarm_msgs::srv::GripperMove_Request timeout(::xarm_msgs::srv::GripperMove_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarm_msgs::srv::GripperMove_Request msg_;
};

class Init_GripperMove_Request_wait
{
public:
  explicit Init_GripperMove_Request_wait(::xarm_msgs::srv::GripperMove_Request & msg)
  : msg_(msg)
  {}
  Init_GripperMove_Request_timeout wait(::xarm_msgs::srv::GripperMove_Request::_wait_type arg)
  {
    msg_.wait = std::move(arg);
    return Init_GripperMove_Request_timeout(msg_);
  }

private:
  ::xarm_msgs::srv::GripperMove_Request msg_;
};

class Init_GripperMove_Request_pos
{
public:
  Init_GripperMove_Request_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperMove_Request_wait pos(::xarm_msgs::srv::GripperMove_Request::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_GripperMove_Request_wait(msg_);
  }

private:
  ::xarm_msgs::srv::GripperMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::GripperMove_Request>()
{
  return xarm_msgs::srv::builder::Init_GripperMove_Request_pos();
}

}  // namespace xarm_msgs


namespace xarm_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperMove_Response_message
{
public:
  explicit Init_GripperMove_Response_message(::xarm_msgs::srv::GripperMove_Response & msg)
  : msg_(msg)
  {}
  ::xarm_msgs::srv::GripperMove_Response message(::xarm_msgs::srv::GripperMove_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarm_msgs::srv::GripperMove_Response msg_;
};

class Init_GripperMove_Response_ret
{
public:
  Init_GripperMove_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperMove_Response_message ret(::xarm_msgs::srv::GripperMove_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return Init_GripperMove_Response_message(msg_);
  }

private:
  ::xarm_msgs::srv::GripperMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::GripperMove_Response>()
{
  return xarm_msgs::srv::builder::Init_GripperMove_Response_ret();
}

}  // namespace xarm_msgs

#endif  // XARM_MSGS__SRV__DETAIL__GRIPPER_MOVE__BUILDER_HPP_
