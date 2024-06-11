/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsOpenGL.h"

static HugsAPI5 *hugs = 0;

static void hugsprim_v7057_10(HugsStackPtr);
static void hugsprim_v7057_10(HugsStackPtr hugs_root)
{
    HsWord8 (*v7057)(HsWord32 arg1);
    HsWord32 arg1;
    HsWord8 res1;
    v7057 = (HsWord8 (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    res1 = v7057(arg1);
    hugs->putWord8(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_v7058_9(HugsStackPtr);
static void hugsprim_v7058_9(HugsStackPtr hugs_root)
{
    HsPtr (*v7058)(HsWord32 arg1, HsWord32 arg2);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr res1;
    v7058 = (HsPtr (*)(HsWord32, HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    res1 = v7058(arg1, arg2);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_v7059_8(HugsStackPtr);
static void hugsprim_v7059_8(HugsStackPtr hugs_root)
{
    void (*v7059)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v7059 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v7059(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7060_7(HugsStackPtr);
static void hugsprim_v7060_7(HugsStackPtr hugs_root)
{
    void (*v7060)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v7060 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v7060(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7061_6(HugsStackPtr);
static void hugsprim_v7061_6(HugsStackPtr hugs_root)
{
    void (*v7061)(HsWord32 arg1, HsInt32 arg2, HsInt32 arg3, HsPtr arg4);
    HsWord32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsPtr arg4;
    v7061 = (void (*)(HsWord32, HsInt32, HsInt32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getPtr();
    v7061(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7062_5(HugsStackPtr);
static void hugsprim_v7062_5(HugsStackPtr hugs_root)
{
    void (*v7062)(HsWord32 arg1, HsInt32 arg2, HsInt32 arg3, HsPtr arg4);
    HsWord32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsPtr arg4;
    v7062 = (void (*)(HsWord32, HsInt32, HsInt32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getPtr();
    v7062(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7063_4(HugsStackPtr);
static void hugsprim_v7063_4(HugsStackPtr hugs_root)
{
    void (*v7063)(HsWord32 arg1, HsInt32 arg2, HsPtr arg3, HsWord32 arg4);
    HsWord32 arg1;
    HsInt32 arg2;
    HsPtr arg3;
    HsWord32 arg4;
    v7063 = (void (*)(HsWord32, HsInt32, HsPtr, HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getPtr();
    arg4 = hugs->getWord32();
    v7063(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7064_3(HugsStackPtr);
static void hugsprim_v7064_3(HugsStackPtr hugs_root)
{
    void (*v7064)(HsWord32 arg1, HsWord32 arg2);
    HsWord32 arg1;
    HsWord32 arg2;
    v7064 = (void (*)(HsWord32, HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    v7064(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7065_2(HugsStackPtr);
static void hugsprim_v7065_2(HugsStackPtr hugs_root)
{
    HsWord8 (*v7065)(HsWord32 arg1);
    HsWord32 arg1;
    HsWord8 res1;
    v7065 = (HsWord8 (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    res1 = v7065(arg1);
    hugs->putWord8(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_v7066_1(HugsStackPtr);
static void hugsprim_v7066_1(HugsStackPtr hugs_root)
{
    void (*v7066)(HsInt32 arg1, HsPtr arg2);
    HsInt32 arg1;
    HsPtr arg2;
    v7066 = (void (*)(HsInt32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getInt32();
    arg2 = hugs->getPtr();
    v7066(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v7067_0(HugsStackPtr);
static void hugsprim_v7067_0(HugsStackPtr hugs_root)
{
    void (*v7067)(HsInt32 arg1, HsPtr arg2);
    HsInt32 arg1;
    HsPtr arg2;
    v7067 = (void (*)(HsInt32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getInt32();
    arg2 = hugs->getPtr();
    v7067(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"dyn_glUnmapBufferARB", 3, hugsprim_v7057_10},
    {"dyn_glMapBufferARB", 4, hugsprim_v7058_9},
    {"dyn_glGetBufferPointervARB", 5, hugsprim_v7059_8},
    {"dyn_glGetBufferParameterivARB", 5, hugsprim_v7060_7},
    {"dyn_glGetBufferSubDataARB", 6, hugsprim_v7061_6},
    {"dyn_glBufferSubDataARB", 6, hugsprim_v7062_5},
    {"dyn_glBufferDataARB", 6, hugsprim_v7063_4},
    {"dyn_glBindBufferARB", 4, hugsprim_v7064_3},
    {"dyn_glIsBufferARB", 3, hugsprim_v7065_2},
    {"dyn_glDeleteBuffersARB", 4, hugsprim_v7066_1},
    {"dyn_glGenBuffersARB", 4, hugsprim_v7067_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGBufferObjects
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

