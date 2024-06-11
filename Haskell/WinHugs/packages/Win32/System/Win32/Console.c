/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsGDI.h"
#include "HsWin32.h"
#include "WndProc.h"

static HugsAPI5 *hugs = 0;
#include "windows.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef GenerateConsoleCtrlEvent
#endif

static void hugsprim_GenerateConsoleCtrlEvent_4(HugsStackPtr);
static void hugsprim_GenerateConsoleCtrlEvent_4(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsBool res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    res1 = GenerateConsoleCtrlEvent(arg1, arg2);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SetConsoleOutputCP
#endif

static void hugsprim_SetConsoleOutputCP_3(HugsStackPtr);
static void hugsprim_SetConsoleOutputCP_3(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    SetConsoleOutputCP(arg1);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetConsoleOutputCP
#endif

static void hugsprim_GetConsoleOutputCP_2(HugsStackPtr);
static void hugsprim_GetConsoleOutputCP_2(HugsStackPtr hugs_root)
{
    HsWord32 res1;
    res1 = GetConsoleOutputCP();
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef SetConsoleCP
#endif

static void hugsprim_SetConsoleCP_1(HugsStackPtr);
static void hugsprim_SetConsoleCP_1(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    SetConsoleCP(arg1);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef GetConsoleCP
#endif

static void hugsprim_GetConsoleCP_0(HugsStackPtr);
static void hugsprim_GetConsoleCP_0(HugsStackPtr hugs_root)
{
    HsWord32 res1;
    res1 = GetConsoleCP();
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"c_GenerateConsoleCtrlEvent", 3, hugsprim_GenerateConsoleCtrlEvent_4},
    {"setConsoleOutputCP", 2, hugsprim_SetConsoleOutputCP_3},
    {"getConsoleOutputCP", 1, hugsprim_GetConsoleOutputCP_2},
    {"setConsoleCP", 2, hugsprim_SetConsoleCP_1},
    {"getConsoleCP", 1, hugsprim_GetConsoleCP_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWConsole
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

