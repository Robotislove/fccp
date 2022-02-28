// Auto-generated. Do not edit!

// (in-package synchronizer_laser_imu.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class can_msg {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.clean = null;
      this.pump = null;
      this.left = null;
      this.right = null;
      this.mop = null;
      this.park = null;
      this.forward = null;
      this.backward = null;
      this.wash = null;
      this.speed_enable = null;
      this.driverless = null;
      this.driverless_enabled = null;
      this.velocity = null;
      this.angle = null;
      this.angle_velocity = null;
      this.charge = null;
    }
    else {
      if (initObj.hasOwnProperty('clean')) {
        this.clean = initObj.clean
      }
      else {
        this.clean = 0;
      }
      if (initObj.hasOwnProperty('pump')) {
        this.pump = initObj.pump
      }
      else {
        this.pump = 0;
      }
      if (initObj.hasOwnProperty('left')) {
        this.left = initObj.left
      }
      else {
        this.left = 0;
      }
      if (initObj.hasOwnProperty('right')) {
        this.right = initObj.right
      }
      else {
        this.right = 0;
      }
      if (initObj.hasOwnProperty('mop')) {
        this.mop = initObj.mop
      }
      else {
        this.mop = 0;
      }
      if (initObj.hasOwnProperty('park')) {
        this.park = initObj.park
      }
      else {
        this.park = 0;
      }
      if (initObj.hasOwnProperty('forward')) {
        this.forward = initObj.forward
      }
      else {
        this.forward = 0;
      }
      if (initObj.hasOwnProperty('backward')) {
        this.backward = initObj.backward
      }
      else {
        this.backward = 0;
      }
      if (initObj.hasOwnProperty('wash')) {
        this.wash = initObj.wash
      }
      else {
        this.wash = 0;
      }
      if (initObj.hasOwnProperty('speed_enable')) {
        this.speed_enable = initObj.speed_enable
      }
      else {
        this.speed_enable = 0;
      }
      if (initObj.hasOwnProperty('driverless')) {
        this.driverless = initObj.driverless
      }
      else {
        this.driverless = 0;
      }
      if (initObj.hasOwnProperty('driverless_enabled')) {
        this.driverless_enabled = initObj.driverless_enabled
      }
      else {
        this.driverless_enabled = 0;
      }
      if (initObj.hasOwnProperty('velocity')) {
        this.velocity = initObj.velocity
      }
      else {
        this.velocity = 0.0;
      }
      if (initObj.hasOwnProperty('angle')) {
        this.angle = initObj.angle
      }
      else {
        this.angle = 0.0;
      }
      if (initObj.hasOwnProperty('angle_velocity')) {
        this.angle_velocity = initObj.angle_velocity
      }
      else {
        this.angle_velocity = 0.0;
      }
      if (initObj.hasOwnProperty('charge')) {
        this.charge = initObj.charge
      }
      else {
        this.charge = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type can_msg
    // Serialize message field [clean]
    bufferOffset = _serializer.int8(obj.clean, buffer, bufferOffset);
    // Serialize message field [pump]
    bufferOffset = _serializer.int8(obj.pump, buffer, bufferOffset);
    // Serialize message field [left]
    bufferOffset = _serializer.int8(obj.left, buffer, bufferOffset);
    // Serialize message field [right]
    bufferOffset = _serializer.int8(obj.right, buffer, bufferOffset);
    // Serialize message field [mop]
    bufferOffset = _serializer.int8(obj.mop, buffer, bufferOffset);
    // Serialize message field [park]
    bufferOffset = _serializer.int8(obj.park, buffer, bufferOffset);
    // Serialize message field [forward]
    bufferOffset = _serializer.int8(obj.forward, buffer, bufferOffset);
    // Serialize message field [backward]
    bufferOffset = _serializer.int8(obj.backward, buffer, bufferOffset);
    // Serialize message field [wash]
    bufferOffset = _serializer.int8(obj.wash, buffer, bufferOffset);
    // Serialize message field [speed_enable]
    bufferOffset = _serializer.int8(obj.speed_enable, buffer, bufferOffset);
    // Serialize message field [driverless]
    bufferOffset = _serializer.int8(obj.driverless, buffer, bufferOffset);
    // Serialize message field [driverless_enabled]
    bufferOffset = _serializer.int8(obj.driverless_enabled, buffer, bufferOffset);
    // Serialize message field [velocity]
    bufferOffset = _serializer.float32(obj.velocity, buffer, bufferOffset);
    // Serialize message field [angle]
    bufferOffset = _serializer.float32(obj.angle, buffer, bufferOffset);
    // Serialize message field [angle_velocity]
    bufferOffset = _serializer.float32(obj.angle_velocity, buffer, bufferOffset);
    // Serialize message field [charge]
    bufferOffset = _serializer.float32(obj.charge, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type can_msg
    let len;
    let data = new can_msg(null);
    // Deserialize message field [clean]
    data.clean = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [pump]
    data.pump = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [left]
    data.left = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [right]
    data.right = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [mop]
    data.mop = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [park]
    data.park = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [forward]
    data.forward = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [backward]
    data.backward = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [wash]
    data.wash = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [speed_enable]
    data.speed_enable = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [driverless]
    data.driverless = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [driverless_enabled]
    data.driverless_enabled = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [velocity]
    data.velocity = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [angle]
    data.angle = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [angle_velocity]
    data.angle_velocity = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [charge]
    data.charge = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 28;
  }

  static datatype() {
    // Returns string type for a message object
    return 'synchronizer_laser_imu/can_msg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '5b1c16ed3a8d75fe0e1a70a3ea15cf05';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int8 clean
    int8 pump
    int8 left
    int8 right
    int8 mop
    int8 park
    int8 forward
    int8 backward
    int8 wash
    int8 speed_enable
    int8 driverless
    int8 driverless_enabled
    float32 velocity
    float32 angle
    float32 angle_velocity
    float32 charge
    
     
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new can_msg(null);
    if (msg.clean !== undefined) {
      resolved.clean = msg.clean;
    }
    else {
      resolved.clean = 0
    }

    if (msg.pump !== undefined) {
      resolved.pump = msg.pump;
    }
    else {
      resolved.pump = 0
    }

    if (msg.left !== undefined) {
      resolved.left = msg.left;
    }
    else {
      resolved.left = 0
    }

    if (msg.right !== undefined) {
      resolved.right = msg.right;
    }
    else {
      resolved.right = 0
    }

    if (msg.mop !== undefined) {
      resolved.mop = msg.mop;
    }
    else {
      resolved.mop = 0
    }

    if (msg.park !== undefined) {
      resolved.park = msg.park;
    }
    else {
      resolved.park = 0
    }

    if (msg.forward !== undefined) {
      resolved.forward = msg.forward;
    }
    else {
      resolved.forward = 0
    }

    if (msg.backward !== undefined) {
      resolved.backward = msg.backward;
    }
    else {
      resolved.backward = 0
    }

    if (msg.wash !== undefined) {
      resolved.wash = msg.wash;
    }
    else {
      resolved.wash = 0
    }

    if (msg.speed_enable !== undefined) {
      resolved.speed_enable = msg.speed_enable;
    }
    else {
      resolved.speed_enable = 0
    }

    if (msg.driverless !== undefined) {
      resolved.driverless = msg.driverless;
    }
    else {
      resolved.driverless = 0
    }

    if (msg.driverless_enabled !== undefined) {
      resolved.driverless_enabled = msg.driverless_enabled;
    }
    else {
      resolved.driverless_enabled = 0
    }

    if (msg.velocity !== undefined) {
      resolved.velocity = msg.velocity;
    }
    else {
      resolved.velocity = 0.0
    }

    if (msg.angle !== undefined) {
      resolved.angle = msg.angle;
    }
    else {
      resolved.angle = 0.0
    }

    if (msg.angle_velocity !== undefined) {
      resolved.angle_velocity = msg.angle_velocity;
    }
    else {
      resolved.angle_velocity = 0.0
    }

    if (msg.charge !== undefined) {
      resolved.charge = msg.charge;
    }
    else {
      resolved.charge = 0.0
    }

    return resolved;
    }
};

module.exports = can_msg;
