/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsGDI.h"
#include "HsWin32.h"
#include "WndProc.h"
#include "windows.h"

static HugsAPI5 *hugs = 0;
#include "HsWin32.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef UnmapViewOfFileFinaliser
#endif

static void hugsprim_UnmapViewOfFileFinaliser_4(HugsStackPtr);
static void hugsprim_UnmapViewOfFileFinaliser_4(HugsStackPtr hugs_root)
{
    hugs->putFunPtr((HsFunPtr)&UnmapViewOfFileFinaliser);
}
#include "windows.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef UnmapViewOfFile
#endif

static void hugsprim_UnmapViewOfFile_3(HugsStackPtr);
static void hugsprim_UnmapViewOfFile_3(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsBool res1;
    arg1 = hugs->getPtr();
    res1 = UnmapViewOfFile(arg1);
    hugs->putBool(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef MapViewOfFileEx
#endif

static void hugsprim_MapViewOfFileEx_2(HugsStackPtr);
static void hugsprim_MapViewOfFileEx_2(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsWord32 arg5;
    HsPtr arg6;
    HsPtr res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getPtr();
    res1 = MapViewOfFileEx(arg1, arg2, arg3, arg4, arg5, arg6);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef CreateFileMappingW
#endif

static void hugsprim_CreateFileMappingW_1(HugsStackPtr);
static void hugsprim_CreateFileMappingW_1(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsWord32 arg5;
    HsPtr arg6;
    HsPtr res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getPtr();
    res1 = CreateFileMappingW(arg1, arg2, arg3, arg4, arg5, arg6);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef OpenFileMappingW
#endif

static void hugsprim_OpenFileMappingW_0(HugsStackPtr);
static void hugsprim_OpenFileMappingW_0(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsBool arg2;
    HsPtr arg3;
    HsPtr res1;
    arg1 = hugs->getWord32();
    arg2 = hugs->getBool();
    arg3 = hugs->getPtr();
    res1 = OpenFileMappingW(arg1, arg2, arg3);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"c_UnmapViewOfFileFinaliser", 0, hugsprim_UnmapViewOfFileFinaliser_4},
    {"c_UnmapViewOfFile", 2, hugsprim_UnmapViewOfFile_3},
    {"c_MapViewOfFileEx", 7, hugsprim_MapViewOfFileEx_2},
    {"c_CreateFileMapping", 7, hugsprim_CreateFileMappingW_1},
    {"c_OpenFileMapping", 4, hugsprim_OpenFileMappingW_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWFileMapping
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

