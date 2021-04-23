// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX hatchet_framework
#define SUBPREFIX addons

#include "script_version.hpp"

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.00

#ifdef COMPONENT_BEAUTIFIED
  #define COMPONENT_NAME QUOTE(Hatchet - COMPONENT_BEAUTIFIED)
#else
  #define COMPONENT_NAME QUOTE(Hatchet - COMPONENT)
#endif
