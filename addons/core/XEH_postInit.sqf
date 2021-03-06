#include "script_component.hpp"

["unit", {
  hatchet_player = (_this select 0);
}, true] call CBA_fnc_addPlayerEventHandler;

["vehicle", FUNC(handleVehicleChanged), true] call CBA_fnc_addPlayerEventHandler;
["turret", {
  [hatchet_player, vehicle hatchet_player] call FUNC(handleVehicleChanged)
}, true] call CBA_fnc_addPlayerEventHandler;
