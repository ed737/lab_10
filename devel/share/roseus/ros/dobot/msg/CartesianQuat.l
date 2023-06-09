;; Auto-generated. Do not edit!


(when (boundp 'dobot::CartesianQuat)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'CartesianQuat (find-package "DOBOT")))
(unless (find-package "DOBOT::CARTESIANQUAT")
  (make-package "DOBOT::CARTESIANQUAT"))

(in-package "ROS")
;;//! \htmlinclude CartesianQuat.msg.html


(defclass dobot::CartesianQuat
  :super ros::object
  :slots (_x _y _z _w ))

(defmethod dobot::CartesianQuat
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:z __z) 0.0)
    ((:w __w) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _z (float __z))
   (setq _w (float __w))
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
  (:w
   (&optional __w)
   (if __w (setq _w __w)) _w)
  (:serialization-length
   ()
   (+
    ;; float32 _x
    4
    ;; float32 _y
    4
    ;; float32 _z
    4
    ;; float32 _w
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
     ;; float32 _w
       (sys::poke _w (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
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
   ;; float32 _w
     (setq _w (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get dobot::CartesianQuat :md5sum-) "c3a70de85a9dd451c31fa86cab10a939")
(setf (get dobot::CartesianQuat :datatype-) "dobot/CartesianQuat")
(setf (get dobot::CartesianQuat :definition-)
      "float32 x
float32 y
float32 z
float32 w
")



(provide :dobot/CartesianQuat "c3a70de85a9dd451c31fa86cab10a939")


