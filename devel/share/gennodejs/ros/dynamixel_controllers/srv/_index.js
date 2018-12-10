
"use strict";

let SetCompliancePunch = require('./SetCompliancePunch.js')
let RestartController = require('./RestartController.js')
let SetComplianceSlope = require('./SetComplianceSlope.js')
let SetComplianceMargin = require('./SetComplianceMargin.js')
let StopController = require('./StopController.js')
let StartController = require('./StartController.js')
let SetSpeed = require('./SetSpeed.js')
let TorqueEnable = require('./TorqueEnable.js')
let SetTorqueLimit = require('./SetTorqueLimit.js')

module.exports = {
  SetCompliancePunch: SetCompliancePunch,
  RestartController: RestartController,
  SetComplianceSlope: SetComplianceSlope,
  SetComplianceMargin: SetComplianceMargin,
  StopController: StopController,
  StartController: StartController,
  SetSpeed: SetSpeed,
  TorqueEnable: TorqueEnable,
  SetTorqueLimit: SetTorqueLimit,
};
