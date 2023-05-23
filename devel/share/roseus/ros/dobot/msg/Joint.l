;; Auto-generated. Do not edit!


(when (boundp 'dobot::Joint)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'Joint (find-package "DOBOT")))
(unless (find-package "DOBOT::JOINT")
  (make-package "DOBOT::JOINT"))

(in-package "ROS")
;;//! \htmlinclude Joint.msg.html


(defclass dobot::Joint
  :super ros::object
  :slots (_J1 _J2 _J3 _J4 ))

(defmethod dobot::Joint
  (:init
   (&key
    ((:J1 __J1) 0.0)
    ((:J2 __J2) 0.0)
    ((:J3 __J3) 0.0)
    ((:J4 __J4) 0.0)
    )
   (send-super :init)
   (setq _J1 (float __J1))
   (setq _J2 (float __J2))
   (setq _J3 (float __J3))
   (setq _J4 (float __J4))
   self)
  (:J1
   (&optional __J1)
   (if __J1 (setq _J1 __J1)) _J1)
  (:J2
   (&optional __J2)
   (if __J2 (setq _J2 __J2)) _J2)
  (:J3
   (&optional __J3)
   (if __J3 (setq _J3 __J3)) _J3)
  (:J4
   (&optional __J4)
   (if __J4 (setq _J4 __J4)) _J4)
  (:serialization-length
   ()
   (+
    ;; float32 _J1
    4
    ;; float32 _J2
    4
    ;; float32 _J3
    4
    ;; float32 _J4
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _J1
       (sys::poke _J1 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _J2
       (sys::poke _J2 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _J3
       (sys::poke _J3 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _J4
       (sys::poke _J4 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _J1
     (setq _J1 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _J2
     (setq _J2 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _J3
     (setq _J3 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _J4
     (setq _J4 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get dobot::Joint :md5sum-) "7711e0b495c20fbc4282f337768fa3e4")
(setf (get dobot::Joint :datatype-) "dobot/Joint")
(setf (get dobot::Joint :definition-)
      "float32 J1
float32 J2
float32 J3
float32 J4
")



(provide :dobot/Joint "7711e0b495c20fbc4282f337768fa3e4")


