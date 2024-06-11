/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsGDI.h"
#include "HsWin32.h"
#include "WndProc.h"
#include <windows.h>

static HugsAPI5 *hugs = 0;
#include "windows.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef RegUnLoadKeyW
#endif

static void hugsprim_RegUnLoadKeyW_21(HugsStackPtr);
static void hugsprim_RegUnLoadKeyW_21(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = RegUnLoadKeyW(arg1, arg2);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegSetValueExW
#endif

static void hugsprim_RegSetValueExW_20(HugsStackPtr);
static void hugsprim_RegSetValueExW_20(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsPtr arg5;
    HsInt arg6;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    arg6 = hugs->getInt();
    res1 = RegSetValueExW(arg1, arg2, arg3, arg4, arg5, arg6);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegSetValueW
#endif

static void hugsprim_RegSetValueW_19(HugsStackPtr);
static void hugsprim_RegSetValueW_19(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 arg3;
    HsPtr arg4;
    HsInt arg5;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getWord32();
    arg4 = hugs->getPtr();
    arg5 = hugs->getInt();
    res1 = RegSetValueW(arg1, arg2, arg3, arg4, arg5);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegSaveKeyW
#endif

static void hugsprim_RegSaveKeyW_18(HugsStackPtr);
static void hugsprim_RegSaveKeyW_18(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    res1 = RegSaveKeyW(arg1, arg2, arg3);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegRestoreKeyW
#endif

static void hugsprim_RegRestoreKeyW_17(HugsStackPtr);
static void hugsprim_RegRestoreKeyW_17(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 arg3;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getWord32();
    res1 = RegRestoreKeyW(arg1, arg2, arg3);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegReplaceKeyW
#endif

static void hugsprim_RegReplaceKeyW_16(HugsStackPtr);
static void hugsprim_RegReplaceKeyW_16(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsPtr arg4;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getPtr();
    res1 = RegReplaceKeyW(arg1, arg2, arg3, arg4);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegQueryValueExW
#endif

static void hugsprim_RegQueryValueExW_15(HugsStackPtr);
static void hugsprim_RegQueryValueExW_15(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsPtr arg4;
    HsPtr arg5;
    HsPtr arg6;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getPtr();
    arg5 = hugs->getPtr();
    arg6 = hugs->getPtr();
    res1 = RegQueryValueExW(arg1, arg2, arg3, arg4, arg5, arg6);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegQueryValueW
#endif

static void hugsprim_RegQueryValueW_14(HugsStackPtr);
static void hugsprim_RegQueryValueW_14(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsPtr arg4;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getPtr();
    res1 = RegQueryValueW(arg1, arg2, arg3, arg4);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegQueryInfoKeyW
#endif

static void hugsprim_RegQueryInfoKeyW_13(HugsStackPtr);
static void hugsprim_RegQueryInfoKeyW_13(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsPtr arg4;
    HsPtr arg5;
    HsPtr arg6;
    HsPtr arg7;
    HsPtr arg8;
    HsPtr arg9;
    HsPtr arg10;
    HsPtr arg11;
    HsPtr arg12;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getPtr();
    arg5 = hugs->getPtr();
    arg6 = hugs->getPtr();
    arg7 = hugs->getPtr();
    arg8 = hugs->getPtr();
    arg9 = hugs->getPtr();
    arg10 = hugs->getPtr();
    arg11 = hugs->getPtr();
    arg12 = hugs->getPtr();
    res1 = RegQueryInfoKeyW(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegOpenKeyExW
#endif

static void hugsprim_RegOpenKeyExW_12(HugsStackPtr);
static void hugsprim_RegOpenKeyExW_12(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsPtr arg5;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    res1 = RegOpenKeyExW(arg1, arg2, arg3, arg4, arg5);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegOpenKeyW
#endif

static void hugsprim_RegOpenKeyW_11(HugsStackPtr);
static void hugsprim_RegOpenKeyW_11(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    res1 = RegOpenKeyW(arg1, arg2, arg3);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegNotifyChangeKeyValue
#endif

static void hugsprim_RegNotifyChangeKeyValue_10(HugsStackPtr);
static void hugsprim_RegNotifyChangeKeyValue_10(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool arg2;
    HsWord32 arg3;
    HsPtr arg4;
    HsBool arg5;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getBool();
    arg3 = hugs->getWord32();
    arg4 = hugs->getPtr();
    arg5 = hugs->getBool();
    res1 = RegNotifyChangeKeyValue(arg1, arg2, arg3, arg4, arg5);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegLoadKeyW
#endif

static void hugsprim_RegLoadKeyW_9(HugsStackPtr);
static void hugsprim_RegLoadKeyW_9(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    res1 = RegLoadKeyW(arg1, arg2, arg3);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegFlushKey
#endif

static void hugsprim_RegFlushKey_8(HugsStackPtr);
static void hugsprim_RegFlushKey_8(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    res1 = RegFlushKey(arg1);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegEnumValueW
#endif

static void hugsprim_RegEnumValueW_7(HugsStackPtr);
static void hugsprim_RegEnumValueW_7(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsPtr arg4;
    HsPtr arg5;
    HsPtr arg6;
    HsPtr arg7;
    HsPtr arg8;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    arg4 = hugs->getPtr();
    arg5 = hugs->getPtr();
    arg6 = hugs->getPtr();
    arg7 = hugs->getPtr();
    arg8 = hugs->getPtr();
    res1 = RegEnumValueW(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegEnumKeyW
#endif

static void hugsprim_RegEnumKeyW_6(HugsStackPtr);
static void hugsprim_RegEnumKeyW_6(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsWord32 arg4;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    arg4 = hugs->getWord32();
    res1 = RegEnumKeyW(arg1, arg2, arg3, arg4);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegDeleteValueW
#endif

static void hugsprim_RegDeleteValueW_5(HugsStackPtr);
static void hugsprim_RegDeleteValueW_5(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = RegDeleteValueW(arg1, arg2);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegDeleteKeyW
#endif

static void hugsprim_RegDeleteKeyW_4(HugsStackPtr);
static void hugsprim_RegDeleteKeyW_4(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = RegDeleteKeyW(arg1, arg2);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegCreateKeyExW
#endif

static void hugsprim_RegCreateKeyExW_3(HugsStackPtr);
static void hugsprim_RegCreateKeyExW_3(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 arg3;
    HsPtr arg4;
    HsWord32 arg5;
    HsWord32 arg6;
    HsPtr arg7;
    HsPtr arg8;
    HsPtr arg9;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getWord32();
    arg4 = hugs->getPtr();
    arg5 = hugs->getWord32();
    arg6 = hugs->getWord32();
    arg7 = hugs->getPtr();
    arg8 = hugs->getPtr();
    arg9 = hugs->getPtr();
    res1 = RegCreateKeyExW(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegCreateKeyW
#endif

static void hugsprim_RegCreateKeyW_2(HugsStackPtr);
static void hugsprim_RegCreateKeyW_2(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    res1 = RegCreateKeyW(arg1, arg2, arg3);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegConnectRegistryW
#endif

static void hugsprim_RegConnectRegistryW_1(HugsStackPtr);
static void hugsprim_RegConnectRegistryW_1(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    res1 = RegConnectRegistryW(arg1, arg2, arg3);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef RegCloseKey
#endif

static void hugsprim_RegCloseKey_0(HugsStackPtr);
static void hugsprim_RegCloseKey_0(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    res1 = RegCloseKey(arg1);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"c_RegUnLoadKey", 3, hugsprim_RegUnLoadKeyW_21},
    {"c_RegSetValueEx", 7, hugsprim_RegSetValueExW_20},
    {"c_RegSetValue", 6, hugsprim_RegSetValueW_19},
    {"c_RegSaveKey", 4, hugsprim_RegSaveKeyW_18},
    {"c_RegRestoreKey", 4, hugsprim_RegRestoreKeyW_17},
    {"c_RegReplaceKey", 5, hugsprim_RegReplaceKeyW_16},
    {"c_RegQueryValueEx", 7, hugsprim_RegQueryValueExW_15},
    {"c_RegQueryValue", 5, hugsprim_RegQueryValueW_14},
    {"c_RegQueryInfoKey", 13, hugsprim_RegQueryInfoKeyW_13},
    {"c_RegOpenKeyEx", 6, hugsprim_RegOpenKeyExW_12},
    {"c_RegOpenKey", 4, hugsprim_RegOpenKeyW_11},
    {"c_RegNotifyChangeKeyValue", 6, hugsprim_RegNotifyChangeKeyValue_10},
    {"c_RegLoadKey", 4, hugsprim_RegLoadKeyW_9},
    {"c_RegFlushKey", 2, hugsprim_RegFlushKey_8},
    {"c_RegEnumValue", 9, hugsprim_RegEnumValueW_7},
    {"c_RegEnumKey", 5, hugsprim_RegEnumKeyW_6},
    {"c_RegDeleteValue", 3, hugsprim_RegDeleteValueW_5},
    {"c_RegDeleteKey", 3, hugsprim_RegDeleteKeyW_4},
    {"c_RegCreateKeyEx", 10, hugsprim_RegCreateKeyExW_3},
    {"c_RegCreateKey", 4, hugsprim_RegCreateKeyW_2},
    {"c_RegConnectRegistry", 4, hugsprim_RegConnectRegistryW_1},
    {"c_RegCloseKey", 2, hugsprim_RegCloseKey_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWRegistry
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

