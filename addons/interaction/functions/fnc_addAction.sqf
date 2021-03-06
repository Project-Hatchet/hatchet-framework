#include "script_component.hpp"
/*
 * hatchet_interaction_fnc_addAction
 */

params ["_label", "_code", "_condition", "_action"];

private _actionConfig = (configFile >> "CfgActions" >> _action);
private _actionId = hatchet_player addAction [
  _label,
  _code,
  nil,
  getNumber (_actionConfig >> "priority"),
  false,
  true,
  getText (_actionConfig >> "shortcut"),
  _condition
];
GVAR(actionIds) pushBack _actionId;
