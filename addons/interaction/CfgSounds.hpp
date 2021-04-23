/*
#define SOUND(NAME,PATH) class QUOTE(PREFIX##_##NAME) { name = QUOTE(NAME); sound[] = {QUOTE(\z\PREFIX\addons\COMPONENT\sounds\PATH.wss), 1, 1, 1}; titles[] = {}}

class CfgSounds {
  SOUND(Switch_Sound,switch);
  SOUND(Switch_Sound_1,switch1);
  SOUND(Switch_Sound_2,switch2);
  SOUND(Switch_Sound_3,switch3);
  SOUND(Switch_Sound_4,switch4);
  SOUND(Switch_Sound_5,switch5);
  SOUND(HeavySwitch_Sound,heavySwitch);
  SOUND(dial_sound,dial);
};
*/
class CfgSounds
{
  class hatchet_framework_Switch_Sound
  {
    name = "hatchet_framework_Switch_Sound";
    sound[] = {"\z\hatchet_framework\addons\interaction\sounds\switch.wss",1,1,1};
    titles[]={};
  };
  class hatchet_framework_Switch_Sound_1
  {
    name = "hatchet_framework_Switch_Sound_1";
    sound[] = {"\z\hatchet_framework\addons\interaction\sounds\switch1.wss",1,1,1};
    titles[]={};
  };
  class hatchet_framework_Switch_Sound_2
  {
    name = "hatchet_framework_Switch_Sound_2";
    sound[] = {"\z\hatchet_framework\addons\interaction\sounds\switch2.wss",1,1,1};
    titles[]={};
  };
  class hatchet_framework_Switch_Sound_3
  {
    name = "hatchet_framework_Switch_Sound_3";
    sound[] = {"\z\hatchet_framework\addons\interaction\sounds\switch3.wss",1,1,1};
    titles[]={};
  };
  class hatchet_framework_Switch_Sound_4
  {
    name = "hatchet_framework_Switch_Sound_4";
    sound[] = {"\z\hatchet_framework\addons\interaction\sounds\switch4.wss",1,1,1};
    titles[]={};
  };
  class hatchet_framework_Switch_Sound_5
  {
    name = "hatchet_framework_Switch_Sound_5";
    sound[] = {"\z\hatchet_framework\addons\interaction\sounds\switch5.wss",1,1,1};
    titles[]={};
  };
  class hatchet_framework_HeavySwitch_Sound
  {
    name = "hatchet_framework_HeavySwitch_Sound";
    sound[] = {"\z\hatchet_framework\addons\interaction\sounds\heavySwitch.wss",1,1,1};
    titles[]={};
  };
  class hatchet_framework_dial_sound
  {
    name = "hatchet_framework_dial_sound";
    sound[] = {"\z\hatchet_framework\addons\interaction\sounds\dial.wss",1,1,1};
    titles[]={};
  };
};
