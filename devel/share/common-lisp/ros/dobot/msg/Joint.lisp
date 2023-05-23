; Auto-generated. Do not edit!


(cl:in-package dobot-msg)


;//! \htmlinclude Joint.msg.html

(cl:defclass <Joint> (roslisp-msg-protocol:ros-message)
  ((J1
    :reader J1
    :initarg :J1
    :type cl:float
    :initform 0.0)
   (J2
    :reader J2
    :initarg :J2
    :type cl:float
    :initform 0.0)
   (J3
    :reader J3
    :initarg :J3
    :type cl:float
    :initform 0.0)
   (J4
    :reader J4
    :initarg :J4
    :type cl:float
    :initform 0.0))
)

(cl:defclass Joint (<Joint>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Joint>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Joint)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-msg:<Joint> is deprecated: use dobot-msg:Joint instead.")))

(cl:ensure-generic-function 'J1-val :lambda-list '(m))
(cl:defmethod J1-val ((m <Joint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:J1-val is deprecated.  Use dobot-msg:J1 instead.")
  (J1 m))

(cl:ensure-generic-function 'J2-val :lambda-list '(m))
(cl:defmethod J2-val ((m <Joint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:J2-val is deprecated.  Use dobot-msg:J2 instead.")
  (J2 m))

(cl:ensure-generic-function 'J3-val :lambda-list '(m))
(cl:defmethod J3-val ((m <Joint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:J3-val is deprecated.  Use dobot-msg:J3 instead.")
  (J3 m))

(cl:ensure-generic-function 'J4-val :lambda-list '(m))
(cl:defmethod J4-val ((m <Joint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:J4-val is deprecated.  Use dobot-msg:J4 instead.")
  (J4 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Joint>) ostream)
  "Serializes a message object of type '<Joint>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'J1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'J2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'J3))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'J4))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Joint>) istream)
  "Deserializes a message object of type '<Joint>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'J1) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'J2) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'J3) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'J4) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Joint>)))
  "Returns string type for a message object of type '<Joint>"
  "dobot/Joint")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Joint)))
  "Returns string type for a message object of type 'Joint"
  "dobot/Joint")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Joint>)))
  "Returns md5sum for a message object of type '<Joint>"
  "7711e0b495c20fbc4282f337768fa3e4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Joint)))
  "Returns md5sum for a message object of type 'Joint"
  "7711e0b495c20fbc4282f337768fa3e4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Joint>)))
  "Returns full string definition for message of type '<Joint>"
  (cl:format cl:nil "float32 J1~%float32 J2~%float32 J3~%float32 J4~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Joint)))
  "Returns full string definition for message of type 'Joint"
  (cl:format cl:nil "float32 J1~%float32 J2~%float32 J3~%float32 J4~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Joint>))
  (cl:+ 0
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Joint>))
  "Converts a ROS message object to a list"
  (cl:list 'Joint
    (cl:cons ':J1 (J1 msg))
    (cl:cons ':J2 (J2 msg))
    (cl:cons ':J3 (J3 msg))
    (cl:cons ':J4 (J4 msg))
))
