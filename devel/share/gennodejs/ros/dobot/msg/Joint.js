// Auto-generated. Do not edit!

// (in-package dobot.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Joint {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.J1 = null;
      this.J2 = null;
      this.J3 = null;
      this.J4 = null;
    }
    else {
      if (initObj.hasOwnProperty('J1')) {
        this.J1 = initObj.J1
      }
      else {
        this.J1 = 0.0;
      }
      if (initObj.hasOwnProperty('J2')) {
        this.J2 = initObj.J2
      }
      else {
        this.J2 = 0.0;
      }
      if (initObj.hasOwnProperty('J3')) {
        this.J3 = initObj.J3
      }
      else {
        this.J3 = 0.0;
      }
      if (initObj.hasOwnProperty('J4')) {
        this.J4 = initObj.J4
      }
      else {
        this.J4 = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Joint
    // Serialize message field [J1]
    bufferOffset = _serializer.float32(obj.J1, buffer, bufferOffset);
    // Serialize message field [J2]
    bufferOffset = _serializer.float32(obj.J2, buffer, bufferOffset);
    // Serialize message field [J3]
    bufferOffset = _serializer.float32(obj.J3, buffer, bufferOffset);
    // Serialize message field [J4]
    bufferOffset = _serializer.float32(obj.J4, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Joint
    let len;
    let data = new Joint(null);
    // Deserialize message field [J1]
    data.J1 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [J2]
    data.J2 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [J3]
    data.J3 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [J4]
    data.J4 = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dobot/Joint';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7711e0b495c20fbc4282f337768fa3e4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 J1
    float32 J2
    float32 J3
    float32 J4
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Joint(null);
    if (msg.J1 !== undefined) {
      resolved.J1 = msg.J1;
    }
    else {
      resolved.J1 = 0.0
    }

    if (msg.J2 !== undefined) {
      resolved.J2 = msg.J2;
    }
    else {
      resolved.J2 = 0.0
    }

    if (msg.J3 !== undefined) {
      resolved.J3 = msg.J3;
    }
    else {
      resolved.J3 = 0.0
    }

    if (msg.J4 !== undefined) {
      resolved.J4 = msg.J4;
    }
    else {
      resolved.J4 = 0.0
    }

    return resolved;
    }
};

module.exports = Joint;
