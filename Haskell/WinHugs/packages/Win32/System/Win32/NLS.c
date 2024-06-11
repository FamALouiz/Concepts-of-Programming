/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsGDI.h"
#include "HsWin32.h"
#include "WndProc.h"
#include "errors.h"
#include "win32debug.h"
#include <windows.h>

static HugsAPI5 *hugs = 0;
#include "windows.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef GetOEMCP
#endif

static void hugsprim_GetOEMCP_12(HugsStackPtr);
static void hugsprim_GetOEMCP_12(HugsStackPtr hugs_root)
{
    HsWord32 res1;
    res1 = GetOEMCP();
    hugs->putWord32(res1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetSystemDefaultLangID
#endif

static void hugsprim_GetSystemDefaultLangID_11(HugsStackPtr);
static void hugsprim_GetSystemDefaultLangID_11(HugsStackPtr hugs_root)
{
    HsWord16 res1;
    res1 = GetSystemDefaultLangID();
    hugs->putWord16(res1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetSystemDefaultLCID
#endif

static void hugsprim_GetSystemDefaultLCID_10(HugsStackPtr);
static void hugsprim_GetSystemDefaultLCID_10(HugsStackPtr hugs_root)
{
    HsWord32 res1;
    res1 = GetSystemDefaultLCID();
    hugs->putWord32(res1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetThreadLocale
#endif

static void hugsprim_GetThreadLocale_9(HugsStackPtr);
static void hugsprim_GetThreadLocale_9(HugsStackPtr hugs_root)
{
    HsWord32 res1;
    res1 = GetThreadLocale();
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetUserDefaultLangID
#endif

static void hugsprim_GetUserDefaultLangID_8(HugsStackPtr);
static void hugsprim_GetUserDefaultLangID_8(HugsStackPtr hugs_root)
{
    HsWord16 res1;
    res1 = GetUserDefaultLangID();
    hugs->putWord16(res1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetUserDefaultLCID
#endif

static void hugsprim_GetUserDefaultLCID_7(HugsStackPtr);
static void hugsprim_GetUserDefaultLCID_7(HugsStackPtr hugs_root)
{
    HsWord32 res1;
    res1 = GetUserDefaultLCID();
    hugs->putWord32(res1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef IsValidCodePage
#endif

static void hugsprim_IsValidCodePage_6(HugsStackPtr);
static void hugsprim_IsValidCodePage_6(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsBool res1;
    arg1 = hugs->getWord32();
    res1 = IsValidCodePage(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef IsValidLocale
#endif

static void hugsprim_IsValidLocale_5(HugsStackPtr);
static void hugsprim_IsValidLocale_5(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsBool res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    res1 = IsValidLocale(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef LCMapStringW
#endif

static void hugsprim_LCMapStringW_4(HugsStackPtr);
static void hugsprim_LCMapStringW_4(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsInt arg4;
    HsPtr arg5;
    HsInt arg6;
    HsInt res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    arg4 = hugs->getInt();
    arg5 = hugs->getPtr();
    arg6 = hugs->getInt();
    res1 = LCMapStringW(arg1, arg2, arg3, arg4, arg5, arg6);
    hugs->putInt(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SetLocaleInfoW
#endif

static void hugsprim_SetLocaleInfoW_3(HugsStackPtr);
static void hugsprim_SetLocaleInfoW_3(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsBool res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    res1 = SetLocaleInfoW(arg1, arg2, arg3);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SetThreadLocale
#endif

static void hugsprim_SetThreadLocale_2(HugsStackPtr);
static void hugsprim_SetThreadLocale_2(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    SetThreadLocale(arg1);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetACP
#endif

static void hugsprim_GetACP_1(HugsStackPtr);
static void hugsprim_GetACP_1(HugsStackPtr hugs_root)
{
    HsWord32 res1;
    res1 = GetACP();
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef ConvertDefaultLocale
#endif

static void hugsprim_ConvertDefaultLocale_0(HugsStackPtr);
static void hugsprim_ConvertDefaultLocale_0(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 res1;
    arg1 = hugs->getWord32();
    res1 = ConvertDefaultLocale(arg1);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"getOEMCP", 0, hugsprim_GetOEMCP_12},
    {"getSystemDefaultLangID", 0, hugsprim_GetSystemDefaultLangID_11},
    {"getSystemDefaultLCID", 0, hugsprim_GetSystemDefaultLCID_10},
    {"getThreadLocale", 1, hugsprim_GetThreadLocale_9},
    {"getUserDefaultLangID", 0, hugsprim_GetUserDefaultLangID_8},
    {"getUserDefaultLCID", 0, hugsprim_GetUserDefaultLCID_7},
    {"isValidCodePage", 2, hugsprim_IsValidCodePage_6},
    {"isValidLocale", 3, hugsprim_IsValidLocale_5},
    {"c_LCMapString", 7, hugsprim_LCMapStringW_4},
    {"c_SetLocaleInfo", 4, hugsprim_SetLocaleInfoW_3},
    {"setThreadLocale", 2, hugsprim_SetThreadLocale_2},
    {"getACP", 1, hugsprim_GetACP_1},
    {"convertDefaultLocale", 2, hugsprim_ConvertDefaultLocale_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWNLS
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

