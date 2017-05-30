#pragma once

// Including SDKDDKVer.h defines the highest available Windows platform.

// If you wish to build your application for a previous Windows platform, include WinSDKVer.h and
// set the _WIN32_WINNT macro to the platform you wish to support before including SDKDDKVer.h.

#ifndef _WIN32_WINNT 
//_____________________________________________ Windows 2000
//#define WINVER  0x0500
//#define _WIN32_WINNT 0x0500
//_____________________________________________ Windows 5 (XP)
#define WINVER  0x0501
#define _WIN32_WINNT 0x0502
//_____________________________________________ Windows 6 (Vista)
//#define WINVER 0x0600
//#define _WIN32_WINNT 0x0600
//_____________________________________________ Windows 7
//#define WINVER 0x0601
//#define _WIN32_WINNT 0x0601
//_____________________________________________ Windows 8
//#define WINVER 0x0602
//#define _WIN32_WINNT 0x0602
//_____________________________________________ Windows Blue
//#define WINVER 0x0603
//#define _WIN32_WINNT 0x0603
#endif

#include <SDKDDKVer.h>

