;; Auto-generated. Do not edit!


(when (boundp 'dobot::CartesianSimple)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'CartesianSimple (find-package "DOBOT")))
(unless (find-package "DOBOT::CARTESIANSIMPLE")
  (make-package "DOBOT::CARTESIANSIMPLE"))

(in-package "ROS")
;;//! \htmlinclude CartesianSimple.msg.html


(defclass dobot::CartesianSimple
  :super ros::object
  :slots (_x _y _z _r ))

(defmethod dobot::CartesianSimple
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:z __z) 0.0)
    ((:r __r) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _z (float __z))
   (setq _r (float __r))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:z
   (&optional __z)
   (if __z (setq _z __z)) _z)
  (:r
   (&optional __r)
   (if __r (setq _r __r)) _r)
  (:serialization-length
   ()
   (+
    ;; float32 _x
    4
    ;; float32 _y
    4
    ;; float32 _z
    4
    ;; float32 _r
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _x
       (sys::poke _x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _y
       (sys::poke _y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _z
       (sys::poke _z (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _r
       (sys::poke _r (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _x
     (setq _x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _y
     (setq _y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _z
     (setq _z (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _r
     (setq _r (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get dobot::CartesianSimple :md5sum-) "cc13c46bdf00e218620490fb1dd05090")
(setf (get dobot::CartesianSimple :datatype-) "dobot/CartesianSimple")
(setf (get dobot::CartesianSimple :definition-)
      "float32 x
float32 y
float32 z
float32 r

")



(provide :dobot/CartesianSimple "cc13c46bdf00e218620490fb1dd05090")


