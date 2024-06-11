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
#undef VirtualUnlock
#endif

static void hugsprim_VirtualUnlock_26(HugsStackPtr);
static void hugsprim_VirtualUnlock_26(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    res1 = VirtualUnlock(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef VirtualProtectEx
#endif

static void hugsprim_VirtualProtectEx_25(HugsStackPtr);
static void hugsprim_VirtualProtectEx_25(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsPtr arg5;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    res1 = VirtualProtectEx(arg1, arg2, arg3, arg4, arg5);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef VirtualProtect
#endif

static void hugsprim_VirtualProtect_24(HugsStackPtr);
static void hugsprim_VirtualProtect_24(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsPtr arg4;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getPtr();
    res1 = VirtualProtect(arg1, arg2, arg3, arg4);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef VirtualLock
#endif

static void hugsprim_VirtualLock_23(HugsStackPtr);
static void hugsprim_VirtualLock_23(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    res1 = VirtualLock(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef VirtualFree
#endif

static void hugsprim_VirtualFree_22(HugsStackPtr);
static void hugsprim_VirtualFree_22(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    res1 = VirtualFree(arg1, arg2, arg3);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef VirtualAlloc
#endif

static void hugsprim_VirtualAlloc_21(HugsStackPtr);
static void hugsprim_VirtualAlloc_21(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsPtr res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    res1 = VirtualAlloc(arg1, arg2, arg3, arg4);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapValidate
#endif

static void hugsprim_HeapValidate_20(HugsStackPtr);
static void hugsprim_HeapValidate_20(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    res1 = HeapValidate(arg1, arg2, arg3);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapUnlock
#endif

static void hugsprim_HeapUnlock_19(HugsStackPtr);
static void hugsprim_HeapUnlock_19(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool res1;
    arg1 = hugs->getPtr();
    res1 = HeapUnlock(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapSize
#endif

static void hugsprim_HeapSize_18(HugsStackPtr);
static void hugsprim_HeapSize_18(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    res1 = HeapSize(arg1, arg2, arg3);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapReAlloc
#endif

static void hugsprim_HeapReAlloc_17(HugsStackPtr);
static void hugsprim_HeapReAlloc_17(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsWord32 arg4;
    HsPtr res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    arg4 = hugs->getWord32();
    res1 = HeapReAlloc(arg1, arg2, arg3, arg4);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapLock
#endif

static void hugsprim_HeapLock_16(HugsStackPtr);
static void hugsprim_HeapLock_16(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool res1;
    arg1 = hugs->getPtr();
    res1 = HeapLock(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapFree
#endif

static void hugsprim_HeapFree_15(HugsStackPtr);
static void hugsprim_HeapFree_15(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    res1 = HeapFree(arg1, arg2, arg3);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapDestroy
#endif

static void hugsprim_HeapDestroy_14(HugsStackPtr);
static void hugsprim_HeapDestroy_14(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool res1;
    arg1 = hugs->getPtr();
    res1 = HeapDestroy(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapCreate
#endif

static void hugsprim_HeapCreate_13(HugsStackPtr);
static void hugsprim_HeapCreate_13(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsPtr res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    res1 = HeapCreate(arg1, arg2, arg3);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapCompact
#endif

static void hugsprim_HeapCompact_12(HugsStackPtr);
static void hugsprim_HeapCompact_12(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    res1 = HeapCompact(arg1, arg2);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef HeapAlloc
#endif

static void hugsprim_HeapAlloc_11(HugsStackPtr);
static void hugsprim_HeapAlloc_11(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsPtr res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    res1 = HeapAlloc(arg1, arg2, arg3);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GlobalUnlock
#endif

static void hugsprim_GlobalUnlock_10(HugsStackPtr);
static void hugsprim_GlobalUnlock_10(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool res1;
    arg1 = hugs->getPtr();
    res1 = GlobalUnlock(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GlobalSize
#endif

static void hugsprim_GlobalSize_9(HugsStackPtr);
static void hugsprim_GlobalSize_9(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    res1 = GlobalSize(arg1);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GlobalReAlloc
#endif

static void hugsprim_GlobalReAlloc_8(HugsStackPtr);
static void hugsprim_GlobalReAlloc_8(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsPtr res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    res1 = GlobalReAlloc(arg1, arg2, arg3);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GlobalLock
#endif

static void hugsprim_GlobalLock_7(HugsStackPtr);
static void hugsprim_GlobalLock_7(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr res1;
    arg1 = hugs->getPtr();
    res1 = GlobalLock(arg1);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GlobalHandle
#endif

static void hugsprim_GlobalHandle_6(HugsStackPtr);
static void hugsprim_GlobalHandle_6(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr res1;
    arg1 = hugs->getPtr();
    res1 = GlobalHandle(arg1);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GlobalFree
#endif

static void hugsprim_GlobalFree_5(HugsStackPtr);
static void hugsprim_GlobalFree_5(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr res1;
    arg1 = hugs->getPtr();
    res1 = GlobalFree(arg1);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GlobalFlags
#endif

static void hugsprim_GlobalFlags_4(HugsStackPtr);
static void hugsprim_GlobalFlags_4(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    res1 = GlobalFlags(arg1);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GlobalAlloc
#endif

static void hugsprim_GlobalAlloc_3(HugsStackPtr);
static void hugsprim_GlobalAlloc_3(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    res1 = GlobalAlloc(arg1, arg2);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetProcessHeaps
#endif

static void hugsprim_GetProcessHeaps_2(HugsStackPtr);
static void hugsprim_GetProcessHeaps_2(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsPtr arg2;
    HsWord32 res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    res1 = GetProcessHeaps(arg1, arg2);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetProcessHeap
#endif

static void hugsprim_GetProcessHeap_1(HugsStackPtr);
static void hugsprim_GetProcessHeap_1(HugsStackPtr hugs_root)
{
    HsPtr res1;
    res1 = GetProcessHeap();
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}
#include "string.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef memset
#endif

static void hugsprim_memset_0(HugsStackPtr);
static void hugsprim_memset_0(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsInt32 arg2;
    HsWord32 arg3;
    arg1 = hugs->getPtr();
    arg2 = hugs->getInt32();
    arg3 = hugs->getWord32();
    memset(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"c_VirtualUnlock", 3, hugsprim_VirtualUnlock_26},
    {"c_VirtualProtectEx", 6, hugsprim_VirtualProtectEx_25},
    {"c_VirtualProtect", 5, hugsprim_VirtualProtect_24},
    {"c_VirtualLock", 3, hugsprim_VirtualLock_23},
    {"c_VirtualFree", 4, hugsprim_VirtualFree_22},
    {"c_VirtualAlloc", 5, hugsprim_VirtualAlloc_21},
    {"heapValidate", 4, hugsprim_HeapValidate_20},
    {"c_HeapUnlock", 2, hugsprim_HeapUnlock_19},
    {"c_HeapSize", 4, hugsprim_HeapSize_18},
    {"c_HeapReAlloc", 5, hugsprim_HeapReAlloc_17},
    {"c_HeapLock", 2, hugsprim_HeapLock_16},
    {"c_HeapFree", 4, hugsprim_HeapFree_15},
    {"c_HeapDestroy", 2, hugsprim_HeapDestroy_14},
    {"c_HeapCreate", 4, hugsprim_HeapCreate_13},
    {"c_HeapCompact", 3, hugsprim_HeapCompact_12},
    {"c_HeapAlloc", 4, hugsprim_HeapAlloc_11},
    {"c_GlobalUnlock", 2, hugsprim_GlobalUnlock_10},
    {"c_GlobalSize", 2, hugsprim_GlobalSize_9},
    {"c_GlobalReAlloc", 4, hugsprim_GlobalReAlloc_8},
    {"c_GlobalLock", 2, hugsprim_GlobalLock_7},
    {"c_GlobalHandle", 2, hugsprim_GlobalHandle_6},
    {"c_GlobalFree", 2, hugsprim_GlobalFree_5},
    {"c_GlobalFlags", 2, hugsprim_GlobalFlags_4},
    {"c_GlobalAlloc", 3, hugsprim_GlobalAlloc_3},
    {"getProcessHeaps", 3, hugsprim_GetProcessHeaps_2},
    {"getProcessHeap", 1, hugsprim_GetProcessHeap_1},
    {"memset", 4, hugsprim_memset_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWMem
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

