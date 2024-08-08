# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xarm_msgs:srv/FtForceConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'c_axis'
# Member 'ref'
# Member 'limits'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FtForceConfig_Request(type):
    """Metaclass of message 'FtForceConfig_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.FtForceConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ft_force_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ft_force_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ft_force_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ft_force_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ft_force_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FtForceConfig_Request(metaclass=Metaclass_FtForceConfig_Request):
    """Message class 'FtForceConfig_Request'."""

    __slots__ = [
        '_coord',
        '_c_axis',
        '_ref',
        '_limits',
    ]

    _fields_and_field_types = {
        'coord': 'int16',
        'c_axis': 'sequence<int16>',
        'ref': 'sequence<float>',
        'limits': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.coord = kwargs.get('coord', int())
        self.c_axis = array.array('h', kwargs.get('c_axis', []))
        self.ref = array.array('f', kwargs.get('ref', []))
        self.limits = array.array('f', kwargs.get('limits', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.coord != other.coord:
            return False
        if self.c_axis != other.c_axis:
            return False
        if self.ref != other.ref:
            return False
        if self.limits != other.limits:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def coord(self):
        """Message field 'coord'."""
        return self._coord

    @coord.setter
    def coord(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coord' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'coord' field must be an integer in [-32768, 32767]"
        self._coord = value

    @property
    def c_axis(self):
        """Message field 'c_axis'."""
        return self._c_axis

    @c_axis.setter
    def c_axis(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'c_axis' array.array() must have the type code of 'h'"
            self._c_axis = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'c_axis' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._c_axis = array.array('h', value)

    @property
    def ref(self):
        """Message field 'ref'."""
        return self._ref

    @ref.setter
    def ref(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ref' array.array() must have the type code of 'f'"
            self._ref = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'ref' field must be a set or sequence and each value of type 'float'"
        self._ref = array.array('f', value)

    @property
    def limits(self):
        """Message field 'limits'."""
        return self._limits

    @limits.setter
    def limits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'limits' array.array() must have the type code of 'f'"
            self._limits = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'limits' field must be a set or sequence and each value of type 'float'"
        self._limits = array.array('f', value)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FtForceConfig_Response(type):
    """Metaclass of message 'FtForceConfig_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.FtForceConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ft_force_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ft_force_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ft_force_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ft_force_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ft_force_config__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FtForceConfig_Response(metaclass=Metaclass_FtForceConfig_Response):
    """Message class 'FtForceConfig_Response'."""

    __slots__ = [
        '_ret',
        '_message',
    ]

    _fields_and_field_types = {
        'ret': 'int16',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret = kwargs.get('ret', int())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ret != other.ret:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ret(self):
        """Message field 'ret'."""
        return self._ret

    @ret.setter
    def ret(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ret' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ret' field must be an integer in [-32768, 32767]"
        self._ret = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_FtForceConfig(type):
    """Metaclass of service 'FtForceConfig'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.FtForceConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ft_force_config

            from xarm_msgs.srv import _ft_force_config
            if _ft_force_config.Metaclass_FtForceConfig_Request._TYPE_SUPPORT is None:
                _ft_force_config.Metaclass_FtForceConfig_Request.__import_type_support__()
            if _ft_force_config.Metaclass_FtForceConfig_Response._TYPE_SUPPORT is None:
                _ft_force_config.Metaclass_FtForceConfig_Response.__import_type_support__()


class FtForceConfig(metaclass=Metaclass_FtForceConfig):
    from xarm_msgs.srv._ft_force_config import FtForceConfig_Request as Request
    from xarm_msgs.srv._ft_force_config import FtForceConfig_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
