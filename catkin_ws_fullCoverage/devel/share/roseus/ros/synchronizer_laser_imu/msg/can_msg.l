;; Auto-generated. Do not edit!


(when (boundp 'synchronizer_laser_imu::can_msg)
  (if (not (find-package "SYNCHRONIZER_LASER_IMU"))
    (make-package "SYNCHRONIZER_LASER_IMU"))
  (shadow 'can_msg (find-package "SYNCHRONIZER_LASER_IMU")))
(unless (find-package "SYNCHRONIZER_LASER_IMU::CAN_MSG")
  (make-package "SYNCHRONIZER_LASER_IMU::CAN_MSG"))

(in-package "ROS")
;;//! \htmlinclude can_msg.msg.html


(defclass synchronizer_laser_imu::can_msg
  :super ros::object
  :slots (_clean _pump _left _right _mop _park _forward _backward _wash _speed_enable _driverless _driverless_enabled _velocity _angle _angle_velocity _charge ))

(defmethod synchronizer_laser_imu::can_msg
  (:init
   (&key
    ((:clean __clean) 0)
    ((:pump __pump) 0)
    ((:left __left) 0)
    ((:right __right) 0)
    ((:mop __mop) 0)
    ((:park __park) 0)
    ((:forward __forward) 0)
    ((:backward __backward) 0)
    ((:wash __wash) 0)
    ((:speed_enable __speed_enable) 0)
    ((:driverless __driverless) 0)
    ((:driverless_enabled __driverless_enabled) 0)
    ((:velocity __velocity) 0.0)
    ((:angle __angle) 0.0)
    ((:angle_velocity __angle_velocity) 0.0)
    ((:charge __charge) 0.0)
    )
   (send-super :init)
   (setq _clean (round __clean))
   (setq _pump (round __pump))
   (setq _left (round __left))
   (setq _right (round __right))
   (setq _mop (round __mop))
   (setq _park (round __park))
   (setq _forward (round __forward))
   (setq _backward (round __backward))
   (setq _wash (round __wash))
   (setq _speed_enable (round __speed_enable))
   (setq _driverless (round __driverless))
   (setq _driverless_enabled (round __driverless_enabled))
   (setq _velocity (float __velocity))
   (setq _angle (float __angle))
   (setq _angle_velocity (float __angle_velocity))
   (setq _charge (float __charge))
   self)
  (:clean
   (&optional __clean)
   (if __clean (setq _clean __clean)) _clean)
  (:pump
   (&optional __pump)
   (if __pump (setq _pump __pump)) _pump)
  (:left
   (&optional __left)
   (if __left (setq _left __left)) _left)
  (:right
   (&optional __right)
   (if __right (setq _right __right)) _right)
  (:mop
   (&optional __mop)
   (if __mop (setq _mop __mop)) _mop)
  (:park
   (&optional __park)
   (if __park (setq _park __park)) _park)
  (:forward
   (&optional __forward)
   (if __forward (setq _forward __forward)) _forward)
  (:backward
   (&optional __backward)
   (if __backward (setq _backward __backward)) _backward)
  (:wash
   (&optional __wash)
   (if __wash (setq _wash __wash)) _wash)
  (:speed_enable
   (&optional __speed_enable)
   (if __speed_enable (setq _speed_enable __speed_enable)) _speed_enable)
  (:driverless
   (&optional __driverless)
   (if __driverless (setq _driverless __driverless)) _driverless)
  (:driverless_enabled
   (&optional __driverless_enabled)
   (if __driverless_enabled (setq _driverless_enabled __driverless_enabled)) _driverless_enabled)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:angle
   (&optional __angle)
   (if __angle (setq _angle __angle)) _angle)
  (:angle_velocity
   (&optional __angle_velocity)
   (if __angle_velocity (setq _angle_velocity __angle_velocity)) _angle_velocity)
  (:charge
   (&optional __charge)
   (if __charge (setq _charge __charge)) _charge)
  (:serialization-length
   ()
   (+
    ;; int8 _clean
    1
    ;; int8 _pump
    1
    ;; int8 _left
    1
    ;; int8 _right
    1
    ;; int8 _mop
    1
    ;; int8 _park
    1
    ;; int8 _forward
    1
    ;; int8 _backward
    1
    ;; int8 _wash
    1
    ;; int8 _speed_enable
    1
    ;; int8 _driverless
    1
    ;; int8 _driverless_enabled
    1
    ;; float32 _velocity
    4
    ;; float32 _angle
    4
    ;; float32 _angle_velocity
    4
    ;; float32 _charge
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _clean
       (write-byte _clean s)
     ;; int8 _pump
       (write-byte _pump s)
     ;; int8 _left
       (write-byte _left s)
     ;; int8 _right
       (write-byte _right s)
     ;; int8 _mop
       (write-byte _mop s)
     ;; int8 _park
       (write-byte _park s)
     ;; int8 _forward
       (write-byte _forward s)
     ;; int8 _backward
       (write-byte _backward s)
     ;; int8 _wash
       (write-byte _wash s)
     ;; int8 _speed_enable
       (write-byte _speed_enable s)
     ;; int8 _driverless
       (write-byte _driverless s)
     ;; int8 _driverless_enabled
       (write-byte _driverless_enabled s)
     ;; float32 _velocity
       (sys::poke _velocity (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _angle
       (sys::poke _angle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _angle_velocity
       (sys::poke _angle_velocity (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _charge
       (sys::poke _charge (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _clean
     (setq _clean (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _clean 127) (setq _clean (- _clean 256)))
   ;; int8 _pump
     (setq _pump (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _pump 127) (setq _pump (- _pump 256)))
   ;; int8 _left
     (setq _left (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _left 127) (setq _left (- _left 256)))
   ;; int8 _right
     (setq _right (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _right 127) (setq _right (- _right 256)))
   ;; int8 _mop
     (setq _mop (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _mop 127) (setq _mop (- _mop 256)))
   ;; int8 _park
     (setq _park (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _park 127) (setq _park (- _park 256)))
   ;; int8 _forward
     (setq _forward (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _forward 127) (setq _forward (- _forward 256)))
   ;; int8 _backward
     (setq _backward (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _backward 127) (setq _backward (- _backward 256)))
   ;; int8 _wash
     (setq _wash (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _wash 127) (setq _wash (- _wash 256)))
   ;; int8 _speed_enable
     (setq _speed_enable (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _speed_enable 127) (setq _speed_enable (- _speed_enable 256)))
   ;; int8 _driverless
     (setq _driverless (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _driverless 127) (setq _driverless (- _driverless 256)))
   ;; int8 _driverless_enabled
     (setq _driverless_enabled (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _driverless_enabled 127) (setq _driverless_enabled (- _driverless_enabled 256)))
   ;; float32 _velocity
     (setq _velocity (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _angle
     (setq _angle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _angle_velocity
     (setq _angle_velocity (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _charge
     (setq _charge (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get synchronizer_laser_imu::can_msg :md5sum-) "5b1c16ed3a8d75fe0e1a70a3ea15cf05")
(setf (get synchronizer_laser_imu::can_msg :datatype-) "synchronizer_laser_imu/can_msg")
(setf (get synchronizer_laser_imu::can_msg :definition-)
      "int8 clean
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

 

")



(provide :synchronizer_laser_imu/can_msg "5b1c16ed3a8d75fe0e1a70a3ea15cf05")


