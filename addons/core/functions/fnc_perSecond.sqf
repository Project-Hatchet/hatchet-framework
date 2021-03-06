#include "script_component.hpp"
/*
 * hatchet_core_fnc_perSecond
 *
 * Function will run relevante modules' per second functions
 *
 * Params: array[array[(object) vehicle], (scalar)pfhId]
 * Returns: nothing
 *
 * Author: Yax
 */

params ["_args", "_pfhId"];
_args params ["_vehicle"];

// shutdown conditions
if (
  !((vehicle hatchet_player) isEqualTo _vehicle) ||
  !(alive hatchet_player) ||
  !(alive _vehicle)
) exitWith {
  [_pfhId] call CBA_fnc_removePerFrameHandler;
  GVAR(perSecondHandler) = nil;
};

if (GVAR(paused)) exitWith {};

private _modules = (_vehicle getVariable [QGVAR(modules), []]);
[_vehicle, _modules] spawn {
  params ["_vehicle", "_modules"];
  private _moduleDelay = 1 / ((count _modules) + 1);
  private ["_func"];
  { //forEach vehicle hatchet_core_modules
    sleep _moduleDelay;
    if (_x # 1) then {
      _func = missionNameSpace getVariable (_x # 4);
      if (!isNil {_func}) then {[_vehicle] call _func;};
    };
  } forEach _modules;
};
