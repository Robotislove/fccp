
(cl:in-package :asdf)

(defsystem "synchronizer_laser_imu-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "can_msg" :depends-on ("_package_can_msg"))
    (:file "_package_can_msg" :depends-on ("_package"))
  ))