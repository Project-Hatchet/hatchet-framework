#include "script_component.hpp"

[
  COMPONENT_NAME,
  QGVAR(ButtonPress),
  "Vehicle Interaction",
  {[vehicle hatchet_player, GVAR(currentButton)] call FUNC(buttonDown)},
  {[vehicle hatchet_player, GVAR(currentButton)] call FUNC(buttonUp)},
  [33, [false, false, false]],
  false
] call CBA_fnc_addKeybind;

[
  QGVAR(removeActions),
  "CHECKBOX",
  "Remove Vanilla Actions",
  [COMPONENT_NAME, "Actions"],
  [true],
  nil,
  {}
] call CBA_fnc_addSetting;

[
  QGVAR(updateEvery),
  "SLIDER",
  "Label update rates (frames between)",
  [COMPONENT_NAME, "Performance"],
  [0,10,5,0],
  nil,
  {}
] call CBA_fnc_addSetting;

[
  QGVAR(pointingEnabled),
  "CHECKBOX",
  "Enable pointing system(uses remoteCall)",
  [COMPONENT_NAME, "Performance"],
  [true],
  nil,
  {}
] call CBA_fnc_addSetting;

[
  QGVAR(showLabel),
  "CHECKBOX",
  "Show Label",
  [COMPONENT_NAME, "Labels"],
  [true],
  nil,
  {}
] call CBA_fnc_addSetting;

[
  QGVAR(showKeybind),
  "CHECKBOX",
  "Show Keybind",
  [COMPONENT_NAME, "Labels"],
  [true],
  nil,
  {}
] call CBA_fnc_addSetting;
