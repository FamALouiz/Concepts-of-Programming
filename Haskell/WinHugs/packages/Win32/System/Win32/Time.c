/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsGDI.h"
#include "HsWin32.h"
#include "WndProc.h"
#include "windows.h"

static HugsAPI5 *hugs = 0;
#include "windows.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef GetTimeFormatW
#endif

static void hugsprim_GetTimeFormatW_17(HugsStackPtr);
static void hugsprim_GetTimeFormatW_17(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsPtr arg4;
    HsPtr arg5;
    HsInt32 arg6;
    HsInt32 res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    arg4 = hugs->getPtr();
    arg5 = hugs->getPtr();
    arg6 = hugs->getInt32();
    res1 = GetTimeFormatW(arg1, arg2, arg3, arg4, arg5, arg6);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef QueryPerformanceCounter
#endif

static void hugsprim_QueryPerformanceCounter_16(HugsStackPtr);
static void hugsprim_QueryPerformanceCounter_16(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool res1;
    arg1 = hugs->getPtr();
    res1 = QueryPerformanceCounter(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef QueryPerformanceFrequency
#endif

static void hugsprim_QueryPerformanceFrequency_15(HugsStackPtr);
static void hugsprim_QueryPerformanceFrequency_15(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool res1;
    arg1 = hugs->getPtr();
    res1 = QueryPerformanceFrequency(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef LocalFileTimeToFileTime
#endif

static void hugsprim_LocalFileTimeToFileTime_14(HugsStackPtr);
static void hugsprim_LocalFileTimeToFileTime_14(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = LocalFileTimeToFileTime(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef FileTimeToLocalFileTime
#endif

static void hugsprim_FileTimeToLocalFileTime_13(HugsStackPtr);
static void hugsprim_FileTimeToLocalFileTime_13(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = FileTimeToLocalFileTime(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SetFileTime
#endif

static void hugsprim_SetFileTime_12(HugsStackPtr);
static void hugsprim_SetFileTime_12(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsPtr arg4;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getPtr();
    res1 = SetFileTime(arg1, arg2, arg3, arg4);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetFileTime
#endif

static void hugsprim_GetFileTime_11(HugsStackPtr);
static void hugsprim_GetFileTime_11(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsPtr arg4;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getPtr();
    res1 = GetFileTime(arg1, arg2, arg3, arg4);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef FileTimeToSystemTime
#endif

static void hugsprim_FileTimeToSystemTime_10(HugsStackPtr);
static void hugsprim_FileTimeToSystemTime_10(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = FileTimeToSystemTime(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SystemTimeToFileTime
#endif

static void hugsprim_SystemTimeToFileTime_9(HugsStackPtr);
static void hugsprim_SystemTimeToFileTime_9(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = SystemTimeToFileTime(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetTimeZoneInformation
#endif

static void hugsprim_GetTimeZoneInformation_8(HugsStackPtr);
static void hugsprim_GetTimeZoneInformation_8(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    res1 = GetTimeZoneInformation(arg1);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SetSystemTimeAdjustment
#endif

static void hugsprim_SetSystemTimeAdjustment_7(HugsStackPtr);
static void hugsprim_SetSystemTimeAdjustment_7(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsBool arg2;
    HsBool res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getBool();
    res1 = SetSystemTimeAdjustment(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetTickCount
#endif

static void hugsprim_GetTickCount_6(HugsStackPtr);
static void hugsprim_GetTickCount_6(HugsStackPtr hugs_root)
{
    HsWord32 res1;
    res1 = GetTickCount();
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetSystemTimeAdjustment
#endif

static void hugsprim_GetSystemTimeAdjustment_5(HugsStackPtr);
static void hugsprim_GetSystemTimeAdjustment_5(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    res1 = GetSystemTimeAdjustment(arg1, arg2, arg3);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SetLocalTime
#endif

static void hugsprim_SetLocalTime_4(HugsStackPtr);
static void hugsprim_SetLocalTime_4(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool res1;
    arg1 = hugs->getPtr();
    res1 = SetLocalTime(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetLocalTime
#endif

static void hugsprim_GetLocalTime_3(HugsStackPtr);
static void hugsprim_GetLocalTime_3(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    GetLocalTime(arg1);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetSystemTimeAsFileTime
#endif

static void hugsprim_GetSystemTimeAsFileTime_2(HugsStackPtr);
static void hugsprim_GetSystemTimeAsFileTime_2(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    GetSystemTimeAsFileTime(arg1);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SetSystemTime
#endif

static void hugsprim_SetSystemTime_1(HugsStackPtr);
static void hugsprim_SetSystemTime_1(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool res1;
    arg1 = hugs->getPtr();
    res1 = SetSystemTime(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetSystemTime
#endif

static void hugsprim_GetSystemTime_0(HugsStackPtr);
static void hugsprim_GetSystemTime_0(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    GetSystemTime(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"c_GetTimeFormat", 7, hugsprim_GetTimeFormatW_17},
    {"c_QueryPerformanceCounter", 2, hugsprim_QueryPerformanceCounter_16},
    {"c_QueryPerformanceFrequency", 2, hugsprim_QueryPerformanceFrequency_15},
    {"c_LocalFileTimeToFileTime", 3, hugsprim_LocalFileTimeToFileTime_14},
    {"c_FileTimeToLocalFileTime", 3, hugsprim_FileTimeToLocalFileTime_13},
    {"c_SetFileTime", 5, hugsprim_SetFileTime_12},
    {"c_GetFileTime", 5, hugsprim_GetFileTime_11},
    {"c_FileTimeToSystemTime", 3, hugsprim_FileTimeToSystemTime_10},
    {"c_SystemTimeToFileTime", 3, hugsprim_SystemTimeToFileTime_9},
    {"c_GetTimeZoneInformation", 2, hugsprim_GetTimeZoneInformation_8},
    {"c_SetSystemTimeAdjustment", 3, hugsprim_SetSystemTimeAdjustment_7},
    {"getTickCount", 1, hugsprim_GetTickCount_6},
    {"c_GetSystemTimeAdjustment", 4, hugsprim_GetSystemTimeAdjustment_5},
    {"c_SetLocalTime", 2, hugsprim_SetLocalTime_4},
    {"c_GetLocalTime", 2, hugsprim_GetLocalTime_3},
    {"c_GetSystemTimeAsFileTime", 2, hugsprim_GetSystemTimeAsFileTime_2},
    {"c_SetSystemTime", 2, hugsprim_SetSystemTime_1},
    {"c_GetSystemTime", 2, hugsprim_GetSystemTime_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWTime
#endif

static struct hugs_primInfo hugs_prims = { hugs_primControl, hugs_primTable, 0 };

#ifdef __cplusplus
extern "C" {
#endif
#ifndef __cplusplus
DLLEXPORT(int)  HugsAPIVersion(void);
#endif
DLLEXPORT(int)  HugsAPIVersion() {return (5);}
DLLEXPORT(void) initModule(HugsAPI5 *);
DLLEXPORT(void) initModule(HugsAPI5 *hugsAPI) {
    hugs = hugsAPI;
    hugs->registerPrims(&hugs_prims);
}
#ifdef __cplusplus
}
#endif

