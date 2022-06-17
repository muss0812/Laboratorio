// Auto-generated. Do not edit!

// (in-package three_dof_planar_manipulator.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class Floats_arrayRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.req = null;
    }
    else {
      if (initObj.hasOwnProperty('req')) {
        this.req = initObj.req
      }
      else {
        this.req = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Floats_arrayRequest
    // Serialize message field [req]
    bufferOffset = _serializer.float32(obj.req, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Floats_arrayRequest
    let len;
    let data = new Floats_arrayRequest(null);
    // Deserialize message field [req]
    data.req = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'three_dof_planar_manipulator/Floats_arrayRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd9e2e500167ba94696705f008dcefd57';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 req
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Floats_arrayRequest(null);
    if (msg.req !== undefined) {
      resolved.req = msg.req;
    }
    else {
      resolved.req = 0.0
    }

    return resolved;
    }
};

class Floats_arrayResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.res = null;
    }
    else {
      if (initObj.hasOwnProperty('res')) {
        this.res = initObj.res
      }
      else {
        this.res = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Floats_arrayResponse
    // Serialize message field [res]
    bufferOffset = _arraySerializer.float32(obj.res, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Floats_arrayResponse
    let len;
    let data = new Floats_arrayResponse(null);
    // Deserialize message field [res]
    data.res = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.res.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'three_dof_planar_manipulator/Floats_arrayResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '718f5814793a2786e65a61ce661074f4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32[] res
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Floats_arrayResponse(null);
    if (msg.res !== undefined) {
      resolved.res = msg.res;
    }
    else {
      resolved.res = []
    }

    return resolved;
    }
};

module.exports = {
  Request: Floats_arrayRequest,
  Response: Floats_arrayResponse,
  md5sum() { return '086e0a6631d243c06d9ccfa024bfe376'; },
  datatype() { return 'three_dof_planar_manipulator/Floats_array'; }
};
