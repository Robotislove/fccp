# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ipa_building_msgs/RoomExplorationGoal.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import sensor_msgs.msg
import std_msgs.msg

class RoomExplorationGoal(genpy.Message):
  _md5sum = "138d823e8057c5cbb0a8a15be2afce8f"
  _type = "ipa_building_msgs/RoomExplorationGoal"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Room Exploration action
# sends an occupancy grid map of a room to the server, which plans a path trough it to cover or inspect the whole room by a device or camera

# goal definition
sensor_msgs/Image input_map				# the action server needs a map as a input image to segment it,
										# IMPORTANT: The algorithm needs a black and white 8bit single-channel image (format 8UC1), which is 0 (black) for obstacles and 255 (white) for free space
										#            todo: the image needs to be vertically mirrored compared to the map in RViz for using right coordinate systems
										#                  OccupancyGrid map = origin lower left corner, image = origin upper left corner
										#            todo: take the OccupanyGrid message here instead to avoid confusion and deal with map coordinates in server
float32 map_resolution					# the resolution of the map in [meter/cell]
geometry_msgs/Pose map_origin			# the origin of the map in [meter], NOTE: rotations are not supported for now
float32 robot_radius					# effective robot radius, taking the enlargement of the costmap into account, in [meter]
float32 coverage_radius					# radius that is used to plan the coverage planning for the robot and not the field of view, assuming that the part that needs to cover everything (e.g. the cleaning part) can be represented by a fitting circle (e.g. smaller than the actual part to ensure coverage), in [meter]
geometry_msgs/Point32[] field_of_view	# the 4 points that define the field of view of the robot, relatively to the robot coordinate system (with x pointing forwards and y pointing to the left), in [meter]
geometry_msgs/Point32 field_of_view_origin	# the mounting position of the camera spanning the field of view, relative to the robot center (x-axis points to robot's front side, y-axis points to robot's left side, z-axis upwards), in [meter]
geometry_msgs/Pose2D starting_position	# starting pose of the robot in the room coordinate system [meter,meter,rad]
int32 planning_mode						# 1 = plans a path for coverage with the robot footprint, 2 = plans a path for coverage with the robot's field of view


================================================================================
MSG: sensor_msgs/Image
# This message contains an uncompressed image
# (0, 0) is at top-left corner of image
#

Header header        # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of camera
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into to plane of the image
                     # If the frame_id here and the frame_id of the CameraInfo
                     # message associated with the image conflict
                     # the behavior is undefined

uint32 height         # image height, that is, number of rows
uint32 width          # image width, that is, number of columns

# The legal values for encoding are in file src/image_encodings.cpp
# If you want to standardize a new string format, join
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.

string encoding       # Encoding of pixels -- channel meaning, ordering, size
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h

uint8 is_bigendian    # is this data bigendian?
uint32 step           # Full row length in bytes
uint8[] data          # actual matrix data, size is (step * rows)

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z
================================================================================
MSG: geometry_msgs/Pose2D
# Deprecated
# Please use the full 3D pose.

# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.

# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.


# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta
"""
  __slots__ = ['input_map','map_resolution','map_origin','robot_radius','coverage_radius','field_of_view','field_of_view_origin','starting_position','planning_mode']
  _slot_types = ['sensor_msgs/Image','float32','geometry_msgs/Pose','float32','float32','geometry_msgs/Point32[]','geometry_msgs/Point32','geometry_msgs/Pose2D','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       input_map,map_resolution,map_origin,robot_radius,coverage_radius,field_of_view,field_of_view_origin,starting_position,planning_mode

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RoomExplorationGoal, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.input_map is None:
        self.input_map = sensor_msgs.msg.Image()
      if self.map_resolution is None:
        self.map_resolution = 0.
      if self.map_origin is None:
        self.map_origin = geometry_msgs.msg.Pose()
      if self.robot_radius is None:
        self.robot_radius = 0.
      if self.coverage_radius is None:
        self.coverage_radius = 0.
      if self.field_of_view is None:
        self.field_of_view = []
      if self.field_of_view_origin is None:
        self.field_of_view_origin = geometry_msgs.msg.Point32()
      if self.starting_position is None:
        self.starting_position = geometry_msgs.msg.Pose2D()
      if self.planning_mode is None:
        self.planning_mode = 0
    else:
      self.input_map = sensor_msgs.msg.Image()
      self.map_resolution = 0.
      self.map_origin = geometry_msgs.msg.Pose()
      self.robot_radius = 0.
      self.coverage_radius = 0.
      self.field_of_view = []
      self.field_of_view_origin = geometry_msgs.msg.Point32()
      self.starting_position = geometry_msgs.msg.Pose2D()
      self.planning_mode = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.input_map.header.seq, _x.input_map.header.stamp.secs, _x.input_map.header.stamp.nsecs))
      _x = self.input_map.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.input_map.height, _x.input_map.width))
      _x = self.input_map.encoding
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_BI().pack(_x.input_map.is_bigendian, _x.input_map.step))
      _x = self.input_map.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_f7d2f().pack(_x.map_resolution, _x.map_origin.position.x, _x.map_origin.position.y, _x.map_origin.position.z, _x.map_origin.orientation.x, _x.map_origin.orientation.y, _x.map_origin.orientation.z, _x.map_origin.orientation.w, _x.robot_radius, _x.coverage_radius))
      length = len(self.field_of_view)
      buff.write(_struct_I.pack(length))
      for val1 in self.field_of_view:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_get_struct_3f3di().pack(_x.field_of_view_origin.x, _x.field_of_view_origin.y, _x.field_of_view_origin.z, _x.starting_position.x, _x.starting_position.y, _x.starting_position.theta, _x.planning_mode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.input_map is None:
        self.input_map = sensor_msgs.msg.Image()
      if self.map_origin is None:
        self.map_origin = geometry_msgs.msg.Pose()
      if self.field_of_view is None:
        self.field_of_view = None
      if self.field_of_view_origin is None:
        self.field_of_view_origin = geometry_msgs.msg.Point32()
      if self.starting_position is None:
        self.starting_position = geometry_msgs.msg.Pose2D()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.input_map.header.seq, _x.input_map.header.stamp.secs, _x.input_map.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.input_map.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.input_map.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.input_map.height, _x.input_map.width,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.input_map.encoding = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.input_map.encoding = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.input_map.is_bigendian, _x.input_map.step,) = _get_struct_BI().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.input_map.data = str[start:end]
      _x = self
      start = end
      end += 68
      (_x.map_resolution, _x.map_origin.position.x, _x.map_origin.position.y, _x.map_origin.position.z, _x.map_origin.orientation.x, _x.map_origin.orientation.y, _x.map_origin.orientation.z, _x.map_origin.orientation.w, _x.robot_radius, _x.coverage_radius,) = _get_struct_f7d2f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.field_of_view = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.field_of_view.append(val1)
      _x = self
      start = end
      end += 40
      (_x.field_of_view_origin.x, _x.field_of_view_origin.y, _x.field_of_view_origin.z, _x.starting_position.x, _x.starting_position.y, _x.starting_position.theta, _x.planning_mode,) = _get_struct_3f3di().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.input_map.header.seq, _x.input_map.header.stamp.secs, _x.input_map.header.stamp.nsecs))
      _x = self.input_map.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.input_map.height, _x.input_map.width))
      _x = self.input_map.encoding
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_BI().pack(_x.input_map.is_bigendian, _x.input_map.step))
      _x = self.input_map.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_f7d2f().pack(_x.map_resolution, _x.map_origin.position.x, _x.map_origin.position.y, _x.map_origin.position.z, _x.map_origin.orientation.x, _x.map_origin.orientation.y, _x.map_origin.orientation.z, _x.map_origin.orientation.w, _x.robot_radius, _x.coverage_radius))
      length = len(self.field_of_view)
      buff.write(_struct_I.pack(length))
      for val1 in self.field_of_view:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_get_struct_3f3di().pack(_x.field_of_view_origin.x, _x.field_of_view_origin.y, _x.field_of_view_origin.z, _x.starting_position.x, _x.starting_position.y, _x.starting_position.theta, _x.planning_mode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.input_map is None:
        self.input_map = sensor_msgs.msg.Image()
      if self.map_origin is None:
        self.map_origin = geometry_msgs.msg.Pose()
      if self.field_of_view is None:
        self.field_of_view = None
      if self.field_of_view_origin is None:
        self.field_of_view_origin = geometry_msgs.msg.Point32()
      if self.starting_position is None:
        self.starting_position = geometry_msgs.msg.Pose2D()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.input_map.header.seq, _x.input_map.header.stamp.secs, _x.input_map.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.input_map.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.input_map.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.input_map.height, _x.input_map.width,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.input_map.encoding = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.input_map.encoding = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.input_map.is_bigendian, _x.input_map.step,) = _get_struct_BI().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.input_map.data = str[start:end]
      _x = self
      start = end
      end += 68
      (_x.map_resolution, _x.map_origin.position.x, _x.map_origin.position.y, _x.map_origin.position.z, _x.map_origin.orientation.x, _x.map_origin.orientation.y, _x.map_origin.orientation.z, _x.map_origin.orientation.w, _x.robot_radius, _x.coverage_radius,) = _get_struct_f7d2f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.field_of_view = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.field_of_view.append(val1)
      _x = self
      start = end
      end += 40
      (_x.field_of_view_origin.x, _x.field_of_view_origin.y, _x.field_of_view_origin.z, _x.starting_position.x, _x.starting_position.y, _x.starting_position.theta, _x.planning_mode,) = _get_struct_3f3di().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
_struct_3f3di = None
def _get_struct_3f3di():
    global _struct_3f3di
    if _struct_3f3di is None:
        _struct_3f3di = struct.Struct("<3f3di")
    return _struct_3f3di
_struct_BI = None
def _get_struct_BI():
    global _struct_BI
    if _struct_BI is None:
        _struct_BI = struct.Struct("<BI")
    return _struct_BI
_struct_f7d2f = None
def _get_struct_f7d2f():
    global _struct_f7d2f
    if _struct_f7d2f is None:
        _struct_f7d2f = struct.Struct("<f7d2f")
    return _struct_f7d2f
