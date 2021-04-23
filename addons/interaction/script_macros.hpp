#include "\x\cba\addons\main\script_macros_common.hpp"

#define PARAMS params ["_name","_condition","_subItems",["_positionType", nil],["_position", nil],["_label", nil],["_radius", nil],["_clickSound",""],["_interactCondition",{true}],["_buttonConfig", nil], ["_animConfig", nil], ["_knobConfig", nil]]
#define BTNPARAMS params ["_buttonDown", "_buttonUp", "_buttonHold", ["_knobClick", nil]]
#define ANIMPARAMS ["_animation", "_animationSpeed", "_animLooping", "_animationSteps", "_animationLabels", "_animStart", "_animEnd"]
#define KNOBPARAMS ["_animation", "_scrollIncrement", "_dragRange", "_animLooping", "_animLimits", "_animSpeed", "_dragStart", "_dragging", "_dragStop"]
#define FNC_STRING(NAME) (if(!isNil{missionNameSpace getVariable NAME}) then {missionNameSpace getVariable NAME} else {{nil}})
#define ISFULLARRAY(ARR) (!isNil QUOTE(ARR) && {typeName ARR == "ARRAY"} && {count ARR > 0})
