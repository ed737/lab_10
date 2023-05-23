
"use strict";

let GetDeviceName = require('./GetDeviceName.js')
let GetColorSensor = require('./GetColorSensor.js')
let SetHOMECmd = require('./SetHOMECmd.js')
let SetEMotor = require('./SetEMotor.js')
let SetCPCmd = require('./SetCPCmd.js')
let SetPTPJointParams = require('./SetPTPJointParams.js')
let GetJOGCommonParams = require('./GetJOGCommonParams.js')
let GetIOMultiplexing = require('./GetIOMultiplexing.js')
let SetDeviceName = require('./SetDeviceName.js')
let SetJOGCmd = require('./SetJOGCmd.js')
let SetCmdTimeout = require('./SetCmdTimeout.js')
let SetQueuedCmdStartExec = require('./SetQueuedCmdStartExec.js')
let SetIOPWM = require('./SetIOPWM.js')
let GetPose = require('./GetPose.js')
let GetEndEffectorParams = require('./GetEndEffectorParams.js')
let SetQueuedCmdForceStopExec = require('./SetQueuedCmdForceStopExec.js')
let SetEndEffectorParams = require('./SetEndEffectorParams.js')
let GetJOGJointParams = require('./GetJOGJointParams.js')
let SetPTPCoordinateParams = require('./SetPTPCoordinateParams.js')
let GetARCParams = require('./GetARCParams.js')
let GetPTPJumpParams = require('./GetPTPJumpParams.js')
let SetEndEffectorSuctionCup = require('./SetEndEffectorSuctionCup.js')
let SetPTPJumpParams = require('./SetPTPJumpParams.js')
let SetJOGCoordinateParams = require('./SetJOGCoordinateParams.js')
let GetDeviceVersion = require('./GetDeviceVersion.js')
let GetEndEffectorGripper = require('./GetEndEffectorGripper.js')
let GetAlarmsState = require('./GetAlarmsState.js')
let GetPTPCoordinateParams = require('./GetPTPCoordinateParams.js')
let GetEndEffectorLaser = require('./GetEndEffectorLaser.js')
let ClearAllAlarmsState = require('./ClearAllAlarmsState.js')
let SetCPParams = require('./SetCPParams.js')
let GetIOPWM = require('./GetIOPWM.js')
let SetPTPCommonParams = require('./SetPTPCommonParams.js')
let SetIOMultiplexing = require('./SetIOMultiplexing.js')
let SetPTPCmd = require('./SetPTPCmd.js')
let SetColorSensor = require('./SetColorSensor.js')
let GetIODI = require('./GetIODI.js')
let SetARCParams = require('./SetARCParams.js')
let GetDeviceSN = require('./GetDeviceSN.js')
let SetARCCmd = require('./SetARCCmd.js')
let GetPTPJointParams = require('./GetPTPJointParams.js')
let GetIOADC = require('./GetIOADC.js')
let SetHOMEParams = require('./SetHOMEParams.js')
let SetEndEffectorGripper = require('./SetEndEffectorGripper.js')
let GetCPCmd = require('./GetCPCmd.js')
let GetInfraredSensor = require('./GetInfraredSensor.js')
let SetJOGCommonParams = require('./SetJOGCommonParams.js')
let SetEndEffectorLaser = require('./SetEndEffectorLaser.js')
let SetJOGJointParams = require('./SetJOGJointParams.js')
let GetIODO = require('./GetIODO.js')
let SetWAITCmd = require('./SetWAITCmd.js')
let SetTRIGCmd = require('./SetTRIGCmd.js')
let SetQueuedCmdStopExec = require('./SetQueuedCmdStopExec.js')
let GetHOMEParams = require('./GetHOMEParams.js')
let SetInfraredSensor = require('./SetInfraredSensor.js')
let GetPTPCommonParams = require('./GetPTPCommonParams.js')
let SetQueuedCmdClear = require('./SetQueuedCmdClear.js')
let GetJOGCoordinateParams = require('./GetJOGCoordinateParams.js')
let GetCPParams = require('./GetCPParams.js')
let GetEndEffectorSuctionCup = require('./GetEndEffectorSuctionCup.js')
let SetIODO = require('./SetIODO.js')

module.exports = {
  GetDeviceName: GetDeviceName,
  GetColorSensor: GetColorSensor,
  SetHOMECmd: SetHOMECmd,
  SetEMotor: SetEMotor,
  SetCPCmd: SetCPCmd,
  SetPTPJointParams: SetPTPJointParams,
  GetJOGCommonParams: GetJOGCommonParams,
  GetIOMultiplexing: GetIOMultiplexing,
  SetDeviceName: SetDeviceName,
  SetJOGCmd: SetJOGCmd,
  SetCmdTimeout: SetCmdTimeout,
  SetQueuedCmdStartExec: SetQueuedCmdStartExec,
  SetIOPWM: SetIOPWM,
  GetPose: GetPose,
  GetEndEffectorParams: GetEndEffectorParams,
  SetQueuedCmdForceStopExec: SetQueuedCmdForceStopExec,
  SetEndEffectorParams: SetEndEffectorParams,
  GetJOGJointParams: GetJOGJointParams,
  SetPTPCoordinateParams: SetPTPCoordinateParams,
  GetARCParams: GetARCParams,
  GetPTPJumpParams: GetPTPJumpParams,
  SetEndEffectorSuctionCup: SetEndEffectorSuctionCup,
  SetPTPJumpParams: SetPTPJumpParams,
  SetJOGCoordinateParams: SetJOGCoordinateParams,
  GetDeviceVersion: GetDeviceVersion,
  GetEndEffectorGripper: GetEndEffectorGripper,
  GetAlarmsState: GetAlarmsState,
  GetPTPCoordinateParams: GetPTPCoordinateParams,
  GetEndEffectorLaser: GetEndEffectorLaser,
  ClearAllAlarmsState: ClearAllAlarmsState,
  SetCPParams: SetCPParams,
  GetIOPWM: GetIOPWM,
  SetPTPCommonParams: SetPTPCommonParams,
  SetIOMultiplexing: SetIOMultiplexing,
  SetPTPCmd: SetPTPCmd,
  SetColorSensor: SetColorSensor,
  GetIODI: GetIODI,
  SetARCParams: SetARCParams,
  GetDeviceSN: GetDeviceSN,
  SetARCCmd: SetARCCmd,
  GetPTPJointParams: GetPTPJointParams,
  GetIOADC: GetIOADC,
  SetHOMEParams: SetHOMEParams,
  SetEndEffectorGripper: SetEndEffectorGripper,
  GetCPCmd: GetCPCmd,
  GetInfraredSensor: GetInfraredSensor,
  SetJOGCommonParams: SetJOGCommonParams,
  SetEndEffectorLaser: SetEndEffectorLaser,
  SetJOGJointParams: SetJOGJointParams,
  GetIODO: GetIODO,
  SetWAITCmd: SetWAITCmd,
  SetTRIGCmd: SetTRIGCmd,
  SetQueuedCmdStopExec: SetQueuedCmdStopExec,
  GetHOMEParams: GetHOMEParams,
  SetInfraredSensor: SetInfraredSensor,
  GetPTPCommonParams: GetPTPCommonParams,
  SetQueuedCmdClear: SetQueuedCmdClear,
  GetJOGCoordinateParams: GetJOGCoordinateParams,
  GetCPParams: GetCPParams,
  GetEndEffectorSuctionCup: GetEndEffectorSuctionCup,
  SetIODO: SetIODO,
};
