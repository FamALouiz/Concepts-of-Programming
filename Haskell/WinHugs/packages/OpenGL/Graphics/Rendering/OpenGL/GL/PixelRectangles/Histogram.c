/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsOpenGL.h"

static HugsAPI5 *hugs = 0;

static void hugsprim_v7950_3(HugsStackPtr);
static void hugsprim_v7950_3(HugsStackPtr hugs_root)
{
    void (*v7950)(HsWord32 arg1);
    HsWord32 arg1;
    v7950 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v7950(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7951_2(HugsStackPtr);
static void hugsprim_v7951_2(HugsStackPtr hugs_root)
{
    void (*v7951)(HsWord32 arg1, HsWord8 arg2, HsWord32 arg3, HsWord32 arg4, HsPtr arg5);
    HsWord32 arg1;
    HsWord8 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsPtr arg5;
    v7951 = (void (*)(HsWord32, HsWord8, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord8();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    v7951(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7952_1(HugsStackPtr);
static void hugsprim_v7952_1(HugsStackPtr hugs_root)
{
    void (*v7952)(HsWord32 arg1, HsInt32 arg2, HsWord32 arg3, HsWord8 arg4);
    HsWord32 arg1;
    HsInt32 arg2;
    HsWord32 arg3;
    HsWord8 arg4;
    v7952 = (void (*)(HsWord32, HsInt32, HsWord32, HsWord8))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord8();
    v7952(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7953_0(HugsStackPtr);
static void hugsprim_v7953_0(HugsStackPtr hugs_root)
{
    void (*v7953)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v7953 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v7953(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"dyn_glResetHistogram", 3, hugsprim_v7950_3},
    {"dyn_glGetHistogram", 7, hugsprim_v7951_2},
    {"dyn_glHistogram", 6, hugsprim_v7952_1},
    {"dyn_glGetHistogramParameteriv", 5, hugsprim_v7953_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGPHistogram
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

