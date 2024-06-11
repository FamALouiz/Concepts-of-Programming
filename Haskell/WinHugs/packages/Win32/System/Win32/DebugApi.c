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
#undef DebugBreak
#endif

static void hugsprim_DebugBreak_11(HugsStackPtr);
static void hugsprim_DebugBreak_11(HugsStackPtr hugs_root)
{
    DebugBreak();
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef IsDebuggerPresent
#endif

static void hugsprim_IsDebuggerPresent_10(HugsStackPtr);
static void hugsprim_IsDebuggerPresent_10(HugsStackPtr hugs_root)
{
    HsBool res1;
    res1 = IsDebuggerPresent();
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef OutputDebugStringW
#endif

static void hugsprim_OutputDebugStringW_9(HugsStackPtr);
static void hugsprim_OutputDebugStringW_9(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    OutputDebugStringW(arg1);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SetThreadContext
#endif

static void hugsprim_SetThreadContext_8(HugsStackPtr);
static void hugsprim_SetThreadContext_8(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = SetThreadContext(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetThreadContext
#endif

static void hugsprim_GetThreadContext_7(HugsStackPtr);
static void hugsprim_GetThreadContext_7(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = GetThreadContext(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef WriteProcessMemory
#endif

static void hugsprim_WriteProcessMemory_6(HugsStackPtr);
static void hugsprim_WriteProcessMemory_6(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsWord32 arg4;
    HsPtr arg5;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    res1 = WriteProcessMemory(arg1, arg2, arg3, arg4, arg5);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef ReadProcessMemory
#endif

static void hugsprim_ReadProcessMemory_5(HugsStackPtr);
static void hugsprim_ReadProcessMemory_5(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsWord32 arg4;
    HsPtr arg5;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    res1 = ReadProcessMemory(arg1, arg2, arg3, arg4, arg5);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef DebugActiveProcess
#endif

static void hugsprim_DebugActiveProcess_4(HugsStackPtr);
static void hugsprim_DebugActiveProcess_4(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsBool res1;
    arg1 = hugs->getWord32();
    res1 = DebugActiveProcess(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef ContinueDebugEvent
#endif

static void hugsprim_ContinueDebugEvent_3(HugsStackPtr);
static void hugsprim_ContinueDebugEvent_3(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsBool res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    res1 = ContinueDebugEvent(arg1, arg2, arg3);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef WaitForDebugEvent
#endif

static void hugsprim_WaitForDebugEvent_2(HugsStackPtr);
static void hugsprim_WaitForDebugEvent_2(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    res1 = WaitForDebugEvent(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef ResumeThread
#endif

static void hugsprim_ResumeThread_1(HugsStackPtr);
static void hugsprim_ResumeThread_1(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    res1 = ResumeThread(arg1);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SuspendThread
#endif

static void hugsprim_SuspendThread_0(HugsStackPtr);
static void hugsprim_SuspendThread_0(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    res1 = SuspendThread(arg1);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"debugBreak", 1, hugsprim_DebugBreak_11},
    {"isDebuggerPresent", 1, hugsprim_IsDebuggerPresent_10},
    {"c_OutputDebugString", 2, hugsprim_OutputDebugStringW_9},
    {"c_SetThreadContext", 3, hugsprim_SetThreadContext_8},
    {"c_GetThreadContext", 3, hugsprim_GetThreadContext_7},
    {"c_WriteProcessMemory", 6, hugsprim_WriteProcessMemory_6},
    {"c_ReadProcessMemory", 6, hugsprim_ReadProcessMemory_5},
    {"c_DebugActiveProcess", 2, hugsprim_DebugActiveProcess_4},
    {"c_ContinueDebugEvent", 4, hugsprim_ContinueDebugEvent_3},
    {"c_WaitForDebugEvent", 3, hugsprim_WaitForDebugEvent_2},
    {"c_ResumeThread", 2, hugsprim_ResumeThread_1},
    {"c_SuspendThread", 2, hugsprim_SuspendThread_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWDebugApi
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

