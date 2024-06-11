/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsGDI.h"
#include "HsWin32.h"
#include "WndProc.h"
#include "mapi.h"
#include "windows.h"

static HugsAPI5 *hugs = 0;

static void hugsprim_v6909_4(HugsStackPtr);
static void hugsprim_v6909_4(HugsStackPtr hugs_root)
{
    HsWord32 (*v6909)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3, HsWord32 arg4, HsWord32 arg5);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsWord32 arg4;
    HsWord32 arg5;
    HsWord32 res1;
    v6909 = (HsWord32 (*)(HsWord32, HsWord32, HsPtr, HsWord32, HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    arg4 = hugs->getWord32();
    arg5 = hugs->getWord32();
    res1 = v6909(arg1, arg2, arg3, arg4, arg5);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_v6910_3(HugsStackPtr);
static void hugsprim_v6910_3(HugsStackPtr hugs_root)
{
    HsWord32 (*v6910)(HsPtr arg1);
    HsPtr arg1;
    HsWord32 res1;
    v6910 = (HsWord32 (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    res1 = v6910(arg1);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_v6911_2(HugsStackPtr);
static void hugsprim_v6911_2(HugsStackPtr hugs_root)
{
    HsWord32 (*v6911)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3, HsWord32 arg4, HsWord32 arg5, HsPtr arg6);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    HsWord32 arg4;
    HsWord32 arg5;
    HsPtr arg6;
    HsWord32 res1;
    v6911 = (HsWord32 (*)(HsWord32, HsWord32, HsPtr, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    arg4 = hugs->getWord32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getPtr();
    res1 = v6911(arg1, arg2, arg3, arg4, arg5, arg6);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_v6912_1(HugsStackPtr);
static void hugsprim_v6912_1(HugsStackPtr hugs_root)
{
    HsWord32 (*v6912)(HsWord32 arg1, HsWord32 arg2, HsWord32 arg3, HsWord32 arg4);
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsWord32 res1;
    v6912 = (HsWord32 (*)(HsWord32, HsWord32, HsWord32, HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    res1 = v6912(arg1, arg2, arg3, arg4);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_v6913_0(HugsStackPtr);
static void hugsprim_v6913_0(HugsStackPtr hugs_root)
{
    HsWord32 (*v6913)(HsWord32 arg1, HsPtr arg2, HsPtr arg3, HsWord32 arg4, HsWord32 arg5, HsPtr arg6);
    HsWord32 arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsWord32 arg4;
    HsWord32 arg5;
    HsPtr arg6;
    HsWord32 res1;
    v6913 = (HsWord32 (*)(HsWord32, HsPtr, HsPtr, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getWord32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getPtr();
    res1 = v6913(arg1, arg2, arg3, arg4, arg5, arg6);
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"mkMapiSendMail", 7, hugsprim_v6909_4},
    {"mkMapiFreeBuffer", 3, hugsprim_v6910_3},
    {"mkMapiResolveName", 8, hugsprim_v6911_2},
    {"mkMapiLogoff", 6, hugsprim_v6912_1},
    {"mkMapiLogon", 8, hugsprim_v6913_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWSimpleMAPI
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

