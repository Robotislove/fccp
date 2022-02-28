; Auto-generated. Do not edit!


(cl:in-package synchronizer_laser_imu-msg)


;//! \htmlinclude can_msg.msg.html

(cl:defclass <can_msg> (roslisp-msg-protocol:ros-message)
  ((clean
    :reader clean
    :initarg :clean
    :type cl:fixnum
    :initform 0)
   (pump
    :reader pump
    :initarg :pump
    :type cl:fixnum
    :initform 0)
   (left
    :reader left
    :initarg :left
    :type cl:fixnum
    :initform 0)
   (right
    :reader right
    :initarg :right
    :type cl:fixnum
    :initform 0)
   (mop
    :reader mop
    :initarg :mop
    :type cl:fixnum
    :initform 0)
   (park
    :reader park
    :initarg :park
    :type cl:fixnum
    :initform 0)
   (forward
    :reader forward
    :initarg :forward
    :type cl:fixnum
    :initform 0)
   (backward
    :reader backward
    :initarg :backward
    :type cl:fixnum
    :initform 0)
   (wash
    :reader wash
    :initarg :wash
    :type cl:fixnum
    :initform 0)
   (speed_enable
    :reader speed_enable
    :initarg :speed_enable
    :type cl:fixnum
    :initform 0)
   (driverless
    :reader driverless
    :initarg :driverless
    :type cl:fixnum
    :initform 0)
   (driverless_enabled
    :reader driverless_enabled
    :initarg :driverless_enabled
    :type cl:fixnum
    :initform 0)
   (velocity
    :reader velocity
    :initarg :velocity
    :type cl:float
    :initform 0.0)
   (angle
    :reader angle
    :initarg :angle
    :type cl:float
    :initform 0.0)
   (angle_velocity
    :reader angle_velocity
    :initarg :angle_velocity
    :type cl:float
    :initform 0.0)
   (charge
    :reader charge
    :initarg :charge
    :type cl:float
    :initform 0.0))
)

(cl:defclass can_msg (<can_msg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <can_msg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'can_msg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name synchronizer_laser_imu-msg:<can_msg> is deprecated: use synchronizer_laser_imu-msg:can_msg instead.")))

(cl:ensure-generic-function 'clean-val :lambda-list '(m))
(cl:defmethod clean-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:clean-val is deprecated.  Use synchronizer_laser_imu-msg:clean instead.")
  (clean m))

(cl:ensure-generic-function 'pump-val :lambda-list '(m))
(cl:defmethod pump-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:pump-val is deprecated.  Use synchronizer_laser_imu-msg:pump instead.")
  (pump m))

(cl:ensure-generic-function 'left-val :lambda-list '(m))
(cl:defmethod left-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:left-val is deprecated.  Use synchronizer_laser_imu-msg:left instead.")
  (left m))

(cl:ensure-generic-function 'right-val :lambda-list '(m))
(cl:defmethod right-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:right-val is deprecated.  Use synchronizer_laser_imu-msg:right instead.")
  (right m))

(cl:ensure-generic-function 'mop-val :lambda-list '(m))
(cl:defmethod mop-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:mop-val is deprecated.  Use synchronizer_laser_imu-msg:mop instead.")
  (mop m))

(cl:ensure-generic-function 'park-val :lambda-list '(m))
(cl:defmethod park-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:park-val is deprecated.  Use synchronizer_laser_imu-msg:park instead.")
  (park m))

(cl:ensure-generic-function 'forward-val :lambda-list '(m))
(cl:defmethod forward-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:forward-val is deprecated.  Use synchronizer_laser_imu-msg:forward instead.")
  (forward m))

(cl:ensure-generic-function 'backward-val :lambda-list '(m))
(cl:defmethod backward-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:backward-val is deprecated.  Use synchronizer_laser_imu-msg:backward instead.")
  (backward m))

(cl:ensure-generic-function 'wash-val :lambda-list '(m))
(cl:defmethod wash-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:wash-val is deprecated.  Use synchronizer_laser_imu-msg:wash instead.")
  (wash m))

(cl:ensure-generic-function 'speed_enable-val :lambda-list '(m))
(cl:defmethod speed_enable-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:speed_enable-val is deprecated.  Use synchronizer_laser_imu-msg:speed_enable instead.")
  (speed_enable m))

(cl:ensure-generic-function 'driverless-val :lambda-list '(m))
(cl:defmethod driverless-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:driverless-val is deprecated.  Use synchronizer_laser_imu-msg:driverless instead.")
  (driverless m))

(cl:ensure-generic-function 'driverless_enabled-val :lambda-list '(m))
(cl:defmethod driverless_enabled-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:driverless_enabled-val is deprecated.  Use synchronizer_laser_imu-msg:driverless_enabled instead.")
  (driverless_enabled m))

(cl:ensure-generic-function 'velocity-val :lambda-list '(m))
(cl:defmethod velocity-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:velocity-val is deprecated.  Use synchronizer_laser_imu-msg:velocity instead.")
  (velocity m))

(cl:ensure-generic-function 'angle-val :lambda-list '(m))
(cl:defmethod angle-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:angle-val is deprecated.  Use synchronizer_laser_imu-msg:angle instead.")
  (angle m))

(cl:ensure-generic-function 'angle_velocity-val :lambda-list '(m))
(cl:defmethod angle_velocity-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:angle_velocity-val is deprecated.  Use synchronizer_laser_imu-msg:angle_velocity instead.")
  (angle_velocity m))

(cl:ensure-generic-function 'charge-val :lambda-list '(m))
(cl:defmethod charge-val ((m <can_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader synchronizer_laser_imu-msg:charge-val is deprecated.  Use synchronizer_laser_imu-msg:charge instead.")
  (charge m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <can_msg>) ostream)
  "Serializes a message object of type '<can_msg>"
  (cl:let* ((signed (cl:slot-value msg 'clean)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'pump)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'left)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'right)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'mop)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'park)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'forward)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'backward)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'wash)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'speed_enable)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'driverless)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'driverless_enabled)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'velocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'angle_velocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'charge))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <can_msg>) istream)
  "Deserializes a message object of type '<can_msg>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'clean) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'pump) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'left) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'right) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mop) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'park) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'forward) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'backward) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'wash) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'speed_enable) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'driverless) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'driverless_enabled) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'velocity) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'angle) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'angle_velocity) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'charge) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<can_msg>)))
  "Returns string type for a message object of type '<can_msg>"
  "synchronizer_laser_imu/can_msg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'can_msg)))
  "Returns string type for a message object of type 'can_msg"
  "synchronizer_laser_imu/can_msg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<can_msg>)))
  "Returns md5sum for a message object of type '<can_msg>"
  "5b1c16ed3a8d75fe0e1a70a3ea15cf05")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'can_msg)))
  "Returns md5sum for a message object of type 'can_msg"
  "5b1c16ed3a8d75fe0e1a70a3ea15cf05")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<can_msg>)))
  "Returns full string definition for message of type '<can_msg>"
  (cl:format cl:nil "int8 clean~%int8 pump~%int8 left~%int8 right~%int8 mop~%int8 park~%int8 forward~%int8 backward~%int8 wash~%int8 speed_enable~%int8 driverless~%int8 driverless_enabled~%float32 velocity~%float32 angle~%float32 angle_velocity~%float32 charge~%~% ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'can_msg)))
  "Returns full string definition for message of type 'can_msg"
  (cl:format cl:nil "int8 clean~%int8 pump~%int8 left~%int8 right~%int8 mop~%int8 park~%int8 forward~%int8 backward~%int8 wash~%int8 speed_enable~%int8 driverless~%int8 driverless_enabled~%float32 velocity~%float32 angle~%float32 angle_velocity~%float32 charge~%~% ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <can_msg>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <can_msg>))
  "Converts a ROS message object to a list"
  (cl:list 'can_msg
    (cl:cons ':clean (clean msg))
    (cl:cons ':pump (pump msg))
    (cl:cons ':left (left msg))
    (cl:cons ':right (right msg))
    (cl:cons ':mop (mop msg))
    (cl:cons ':park (park msg))
    (cl:cons ':forward (forward msg))
    (cl:cons ':backward (backward msg))
    (cl:cons ':wash (wash msg))
    (cl:cons ':speed_enable (speed_enable msg))
    (cl:cons ':driverless (driverless msg))
    (cl:cons ':driverless_enabled (driverless_enabled msg))
    (cl:cons ':velocity (velocity msg))
    (cl:cons ':angle (angle msg))
    (cl:cons ':angle_velocity (angle_velocity msg))
    (cl:cons ':charge (charge msg))
))
