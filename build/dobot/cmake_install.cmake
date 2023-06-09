# Install script for directory: /home/edward/lab_10/src/dobot

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/edward/lab_10/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/msg" TYPE FILE FILES
    "/home/edward/lab_10/src/dobot/msg/CartesianSimple.msg"
    "/home/edward/lab_10/src/dobot/msg/PTPCommand.msg"
    "/home/edward/lab_10/src/dobot/msg/CartesianQuat.msg"
    "/home/edward/lab_10/src/dobot/msg/Joint.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/srv" TYPE FILE FILES
    "/home/edward/lab_10/src/dobot/srv/SetCmdTimeout.srv"
    "/home/edward/lab_10/src/dobot/srv/GetDeviceSN.srv"
    "/home/edward/lab_10/src/dobot/srv/SetDeviceName.srv"
    "/home/edward/lab_10/src/dobot/srv/GetDeviceName.srv"
    "/home/edward/lab_10/src/dobot/srv/GetDeviceVersion.srv"
    "/home/edward/lab_10/src/dobot/srv/GetPose.srv"
    "/home/edward/lab_10/src/dobot/srv/GetAlarmsState.srv"
    "/home/edward/lab_10/src/dobot/srv/ClearAllAlarmsState.srv"
    "/home/edward/lab_10/src/dobot/srv/SetHOMEParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetHOMEParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetHOMECmd.srv"
    "/home/edward/lab_10/src/dobot/srv/SetEndEffectorParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetEndEffectorParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetEndEffectorLaser.srv"
    "/home/edward/lab_10/src/dobot/srv/GetEndEffectorLaser.srv"
    "/home/edward/lab_10/src/dobot/srv/SetEndEffectorSuctionCup.srv"
    "/home/edward/lab_10/src/dobot/srv/GetEndEffectorSuctionCup.srv"
    "/home/edward/lab_10/src/dobot/srv/SetEndEffectorGripper.srv"
    "/home/edward/lab_10/src/dobot/srv/GetEndEffectorGripper.srv"
    "/home/edward/lab_10/src/dobot/srv/SetJOGJointParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetJOGJointParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetJOGCoordinateParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetJOGCoordinateParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetJOGCommonParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetJOGCommonParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetJOGCmd.srv"
    "/home/edward/lab_10/src/dobot/srv/SetPTPJointParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetPTPJointParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetPTPCoordinateParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetPTPCoordinateParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetPTPJumpParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetPTPJumpParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetPTPCommonParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetPTPCommonParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetPTPCmd.srv"
    "/home/edward/lab_10/src/dobot/srv/SetCPParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetCPParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetCPCmd.srv"
    "/home/edward/lab_10/src/dobot/srv/SetARCParams.srv"
    "/home/edward/lab_10/src/dobot/srv/GetARCParams.srv"
    "/home/edward/lab_10/src/dobot/srv/SetARCCmd.srv"
    "/home/edward/lab_10/src/dobot/srv/SetWAITCmd.srv"
    "/home/edward/lab_10/src/dobot/srv/SetTRIGCmd.srv"
    "/home/edward/lab_10/src/dobot/srv/SetIOMultiplexing.srv"
    "/home/edward/lab_10/src/dobot/srv/GetIOMultiplexing.srv"
    "/home/edward/lab_10/src/dobot/srv/SetIODO.srv"
    "/home/edward/lab_10/src/dobot/srv/GetIODO.srv"
    "/home/edward/lab_10/src/dobot/srv/SetIOPWM.srv"
    "/home/edward/lab_10/src/dobot/srv/GetIOPWM.srv"
    "/home/edward/lab_10/src/dobot/srv/GetIODI.srv"
    "/home/edward/lab_10/src/dobot/srv/GetIOADC.srv"
    "/home/edward/lab_10/src/dobot/srv/SetEMotor.srv"
    "/home/edward/lab_10/src/dobot/srv/GetInfraredSensor.srv"
    "/home/edward/lab_10/src/dobot/srv/SetInfraredSensor.srv"
    "/home/edward/lab_10/src/dobot/srv/SetColorSensor.srv"
    "/home/edward/lab_10/src/dobot/srv/GetColorSensor.srv"
    "/home/edward/lab_10/src/dobot/srv/SetQueuedCmdStartExec.srv"
    "/home/edward/lab_10/src/dobot/srv/SetQueuedCmdStopExec.srv"
    "/home/edward/lab_10/src/dobot/srv/SetQueuedCmdForceStopExec.srv"
    "/home/edward/lab_10/src/dobot/srv/SetQueuedCmdClear.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/edward/lab_10/build/dobot/catkin_generated/installspace/dobot-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/edward/lab_10/devel/include/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/edward/lab_10/devel/share/roseus/ros/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/edward/lab_10/devel/share/common-lisp/ros/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/edward/lab_10/devel/share/gennodejs/ros/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/edward/lab_10/devel/lib/python2.7/dist-packages/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/edward/lab_10/devel/lib/python2.7/dist-packages/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/edward/lab_10/build/dobot/catkin_generated/installspace/dobot.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/edward/lab_10/build/dobot/catkin_generated/installspace/dobot-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES
    "/home/edward/lab_10/build/dobot/catkin_generated/installspace/dobotConfig.cmake"
    "/home/edward/lab_10/build/dobot/catkin_generated/installspace/dobotConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot" TYPE FILE FILES "/home/edward/lab_10/src/dobot/package.xml")
endif()

