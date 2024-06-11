/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsOpenGL.h"

static HugsAPI5 *hugs = 0;

static void hugsprim_v7972_3(HugsStackPtr);
static void hugsprim_v7972_3(HugsStackPtr hugs_root)
{
    void (*v7972)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v7972 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v7972(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7973_2(HugsStackPtr);
static void hugsprim_v7973_2(HugsStackPtr hugs_root)
{
    void (*v7973)(HsWord32 arg1);
    HsWord32 arg1;
    v7973 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v7973(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7974_1(HugsStackPtr);
static void hugsprim_v7974_1(HugsStackPtr hugs_root)
{
    void (*v7974)(HsWord32 arg1, HsWord8 arg2, HsWord32 arg3, HsWord32 arg4, HsPtr arg5);
    HsWord32 arg1;
    HsWord8 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsPtr arg5;
    v7974 = (void (*)(HsWord32, HsWord8, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord8();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    v7974(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7975_0(HugsStackPtr);
static void hugsprim_v7975_0(HugsStackPtr hugs_root)
{
    void (*v7975)(HsWord32 arg1, HsWord32 arg2, HsWord8 arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord8 arg3;
    v7975 = (void (*)(HsWord32, HsWord32, HsWord8))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord8();
    v7975(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"dyn_glGetMinmaxParameteriv", 5, hugsprim_v7972_3},
    {"dyn_glResetMinmax", 3, hugsprim_v7973_2},
    {"dyn_glGetMinmax", 7, hugsprim_v7974_1},
    {"dyn_glMinmax", 5, hugsprim_v7975_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGPMinmax
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

