
(cl:in-package :asdf)

(defsystem "dobot-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "CartesianQuat" :depends-on ("_package_CartesianQuat"))
    (:file "_package_CartesianQuat" :depends-on ("_package"))
    (:file "CartesianSimple" :depends-on ("_package_CartesianSimple"))
    (:file "_package_CartesianSimple" :depends-on ("_package"))
    (:file "Joint" :depends-on ("_package_Joint"))
    (:file "_package_Joint" :depends-on ("_package"))
    (:file "PTPCommand" :depends-on ("_package_PTPCommand"))
    (:file "_package_PTPCommand" :depends-on ("_package"))
  ))