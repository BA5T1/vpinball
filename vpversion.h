#pragma once

#include "git_version.h"

// Update VERSION_START_SHA in .github\workflows\vpinball.yml to point to the latest commit.
#define VP_VERSION_MAJOR    10 // X Digits
#define VP_VERSION_MINOR    8  // Max 2 Digits
#define VP_VERSION_REV      0  // Max 1 Digit

#define VPXLAUNCHER 0.82

#define CURRENT_FILE_FORMAT_VERSION  1080
#define NO_ENCRYPTION_FORMAT_VERSION 1050
#define NEW_SOUND_FORMAT_VERSION     1031 // introduced surround option

#define _STR(x)    #x
#define STR(x)     _STR(x)

#define VP_VERSION_DIGITS VP_VERSION_MAJOR,VP_VERSION_MINOR,VP_VERSION_REV,GIT_REVISION
#define VP_VERSION_STRING_DIGITS STR(VP_VERSION_MAJOR) STR(VP_VERSION_MINOR) STR(VP_VERSION_REV) STR(GIT_REVISION)
#define VP_VERSION_STRING_POINTS STR(VP_VERSION_MAJOR) "." STR(VP_VERSION_MINOR) "." STR(VP_VERSION_REV) "." STR(GIT_REVISION)
#define VP_VERSION_STRING_COMMAS STR(VP_VERSION_MAJOR) ", " STR(VP_VERSION_MINOR) ", " STR(VP_VERSION_REV) ", " STR(GIT_REVISION)
#define VP_VERSION_STRING_POINTS_FULL STR(VP_VERSION_MAJOR) "." STR(VP_VERSION_MINOR) "." STR(VP_VERSION_REV) "." STR(GIT_REVISION) "." GIT_SHA

// Complete version string for log, crash handler,...
#ifdef ENABLE_SDL
//#define VP_VERSION_STRING_FULL_LITERAL "v" STR(VP_VERSION_MAJOR) "." STR(VP_VERSION_MINOR) "." STR(VP_VERSION_REV) \
	" Beta (Rev. " STR(GIT_REVISION) " (" GIT_SHA "), " GET_PLATFORM_OS " OpenGL " GET_PLATFORM_BITS "bits)"
#define VP_VERSION_STRING_FULL_LITERAL                                                                                                                                                       \
   "v"                                                                                                                                                                                       \
   "10.8.0 (Rev. 2028 x64) with VPX Launcher v." STR(VPXLAUNCHER)
#else
#define VP_VERSION_STRING_FULL_LITERAL "v" STR(VP_VERSION_MAJOR) "." STR(VP_VERSION_MINOR) "." STR(VP_VERSION_REV) \
	" Beta (Rev. " STR(GIT_REVISION) " (" GIT_SHA "), " GET_PLATFORM_OS " DirectX " GET_PLATFORM_BITS "bits)"
#endif

#define PASTE2(a,b) a##b
#define PASTE(a,b) PASTE2(a,b)
