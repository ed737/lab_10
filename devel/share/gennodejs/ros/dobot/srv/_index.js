
"use strict";

let GetPTPJointParams = require('./GetPTPJointParams.js')
let SetIODO = require('./SetIODO.js')
let SetJOGCoordinateParams = require('./SetJOGCoordinateParams.js')
let GetIOMultiplexing = require('./GetIOMultiplexing.js')
let SetEndEffectorLaser = require('./SetEndEffectorLaser.js')
let SetCPCmd = require('./SetCPCmd.js')
let SetCmdTimeout = require('./SetCmdTimeout.js')
let GetCPCmd = require('./GetCPCmd.js')
let GetHOMEParams = require('./GetHOMEParams.js')
let SetEMotor = require('./SetEMotor.js')
let SetQueuedCmdForceStopExec = require('./SetQueuedCmdForceStopExec.js')
let SetHOMEParams = require('./SetHOMEParams.js')
let GetDeviceSN = require('./GetDeviceSN.js')
let SetARCParams = require('./SetARCParams.js')
let SetDeviceName = require('./SetDeviceName.js')
let SetInfraredSensor = require('./SetInfraredSensor.js')
let SetQueuedCmdStartExec = require('./SetQueuedCmdStartExec.js')
let SetEndEffectorSuctionCup = require('./SetEndEffectorSuctionCup.js')
let GetJOGCoordinateParams = require('./GetJOGCoordinateParams.js')
let SetColorSensor = require('./SetColorSensor.js')
let SetPTPCoordinateParams = require('./SetPTPCoordinateParams.js')
let GetIODO = require('./GetIODO.js')
let ClearAllAlarmsState = require('./ClearAllAlarmsState.js')
let GetPTPCoordinateParams = require('./GetPTPCoordinateParams.js')
let GetIOPWM = require('./GetIOPWM.js')
let GetCPParams = require('./GetCPParams.js')
let SetIOPWM = require('./SetIOPWM.js')
let SetEndEffectorGripper = require('./SetEndEffectorGripper.js')
let GetInfraredSensor = require('./GetInfraredSensor.js')
let SetPTPJointParams = require('./SetPTPJointParams.js')
let SetCPParams = require('./SetCPParams.js')
let SetPTPJumpParams = require('./SetPTPJumpParams.js')
let GetIODI = require('./GetIODI.js')
let GetEndEffectorLaser = require('./GetEndEffectorLaser.js')
let GetEndEffectorSuctionCup = require('./GetEndEffectorSuctionCup.js')
let GetDeviceName = require('./GetDeviceName.js')
let SetQueuedCmdClear = require('./SetQueuedCmdClear.js')
let SetEndEffectorParams = require('./SetEndEffectorParams.js')
let SetPTPCmd = require('./SetPTPCmd.js')
let GetDeviceVersion = require('./GetDeviceVersion.js')
let GetARCParams = require('./GetARCParams.js')
let GetJOGCommonParams = require('./GetJOGCommonParams.js')
let SetQueuedCmdStopExec = require('./SetQueuedCmdStopExec.js')
let SetTRIGCmd = require('./SetTRIGCmd.js')
let GetIOADC = require('./GetIOADC.js')
let GetPose = require('./GetPose.js')
let GetPTPJumpParams = require('./GetPTPJumpParams.js')
let GetJOGJointParams = require('./GetJOGJointParams.js')
let GetAlarmsState = require('./GetAlarmsState.js')
let GetColorSensor = require('./GetColorSensor.js')
let GetEndEffectorGripper = require('./GetEndEffectorGripper.js')
let SetARCCmd = require('./SetARCCmd.js')
let SetPTPCommonParams = require('./SetPTPCommonParams.js')
let SetJOGJointParams = require('./SetJOGJointParams.js')
let GetPTPCommonParams = require('./GetPTPCommonParams.js')
let SetIOMultiplexing = require('./SetIOMultiplexing.js')
let GetEndEffectorParams = require('./GetEndEffectorParams.js')
let SetJOGCmd = require('./SetJOGCmd.js')
let SetHOMECmd = require('./SetHOMECmd.js')
let SetWAITCmd = require('./SetWAITCmd.js')
let SetJOGCommonParams = require('./SetJOGCommonParams.js')

module.exports = {
  GetPTPJointParams: GetPTPJointParams,
  SetIODO: SetIODO,
  SetJOGCoordinateParams: SetJOGCoordinateParams,
  GetIOMultiplexing: GetIOMultiplexing,
  SetEndEffectorLaser: SetEndEffectorLaser,
  SetCPCmd: SetCPCmd,
  SetCmdTimeout: SetCmdTimeout,
  GetCPCmd: GetCPCmd,
  GetHOMEParams: GetHOMEParams,
  SetEMotor: SetEMotor,
  SetQueuedCmdForceStopExec: SetQueuedCmdForceStopExec,
  SetHOMEParams: SetHOMEParams,
  GetDeviceSN: GetDeviceSN,
  SetARCParams: SetARCParams,
  SetDeviceName: SetDeviceName,
  SetInfraredSensor: SetInfraredSensor,
  SetQueuedCmdStartExec: SetQueuedCmdStartExec,
  SetEndEffectorSuctionCup: SetEndEffectorSuctionCup,
  GetJOGCoordinateParams: GetJOGCoordinateParams,
  SetColorSensor: SetColorSensor,
  SetPTPCoordinateParams: SetPTPCoordinateParams,
  GetIODO: GetIODO,
  ClearAllAlarmsState: ClearAllAlarmsState,
  GetPTPCoordinateParams: GetPTPCoordinateParams,
  GetIOPWM: GetIOPWM,
  GetCPParams: GetCPParams,
  SetIOPWM: SetIOPWM,
  SetEndEffectorGripper: SetEndEffectorGripper,
  GetInfraredSensor: GetInfraredSensor,
  SetPTPJointParams: SetPTPJointParams,
  SetCPParams: SetCPParams,
  SetPTPJumpParams: SetPTPJumpParams,
  GetIODI: GetIODI,
  GetEndEffectorLaser: GetEndEffectorLaser,
  GetEndEffectorSuctionCup: GetEndEffectorSuctionCup,
  GetDeviceName: GetDeviceName,
  SetQueuedCmdClear: SetQueuedCmdClear,
  SetEndEffectorParams: SetEndEffectorParams,
  SetPTPCmd: SetPTPCmd,
  GetDeviceVersion: GetDeviceVersion,
  GetARCParams: GetARCParams,
  GetJOGCommonParams: GetJOGCommonParams,
  SetQueuedCmdStopExec: SetQueuedCmdStopExec,
  SetTRIGCmd: SetTRIGCmd,
  GetIOADC: GetIOADC,
  GetPose: GetPose,
  GetPTPJumpParams: GetPTPJumpParams,
  GetJOGJointParams: GetJOGJointParams,
  GetAlarmsState: GetAlarmsState,
  GetColorSensor: GetColorSensor,
  GetEndEffectorGripper: GetEndEffectorGripper,
  SetARCCmd: SetARCCmd,
  SetPTPCommonParams: SetPTPCommonParams,
  SetJOGJointParams: SetJOGJointParams,
  GetPTPCommonParams: GetPTPCommonParams,
  SetIOMultiplexing: SetIOMultiplexing,
  GetEndEffectorParams: GetEndEffectorParams,
  SetJOGCmd: SetJOGCmd,
  SetHOMECmd: SetHOMECmd,
  SetWAITCmd: SetWAITCmd,
  SetJOGCommonParams: SetJOGCommonParams,
};
