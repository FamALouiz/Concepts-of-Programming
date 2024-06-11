/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsGDI.h"
#include "HsWin32.h"
#include "WndProc.h"
#include <tlhelp32.h>
#include <windows.h>

static HugsAPI5 *hugs = 0;
#include "tlhelp32.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef Process32NextW
#endif

static void hugsprim_Process32NextW_4(HugsStackPtr);
static void hugsprim_Process32NextW_4(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = Process32NextW(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef Process32FirstW
#endif

static void hugsprim_Process32FirstW_3(HugsStackPtr);
static void hugsprim_Process32FirstW_3(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsBool res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = Process32FirstW(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef CreateToolhelp32Snapshot
#endif

static void hugsprim_CreateToolhelp32Snapshot_2(HugsStackPtr);
static void hugsprim_CreateToolhelp32Snapshot_2(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    res1 = CreateToolhelp32Snapshot(arg1, arg2);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}
#include "windows.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef OpenProcess
#endif

static void hugsprim_OpenProcess_1(HugsStackPtr);
static void hugsprim_OpenProcess_1(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsBool arg2;
    HsWord32 arg3;
    HsPtr res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getBool();
    arg3 = hugs->getWord32();
    res1 = OpenProcess(arg1, arg2, arg3);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef Sleep
#endif

static void hugsprim_Sleep_0(HugsStackPtr);
static void hugsprim_Sleep_0(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    Sleep(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"c_Process32Next", 3, hugsprim_Process32NextW_4},
    {"c_Process32First", 3, hugsprim_Process32FirstW_3},
    {"c_CreateToolhelp32Snapshot", 3, hugsprim_CreateToolhelp32Snapshot_2},
    {"c_OpenProcess", 4, hugsprim_OpenProcess_1},
    {"sleep", 2, hugsprim_Sleep_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWProcess
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

