/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsOpenGL.h"

static HugsAPI5 *hugs = 0;

#ifndef ENABLE_MACRO_INTERFACE
#undef glLogicOp
#endif

static void hugsprim_glLogicOp_19(HugsStackPtr);
static void hugsprim_glLogicOp_19(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    glLogicOp(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8200_18(HugsStackPtr);
static void hugsprim_v8200_18(HugsStackPtr hugs_root)
{
    void (*v8200)(HsFloat arg1, HsFloat arg2, HsFloat arg3, HsFloat arg4);
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    HsFloat arg4;
    v8200 = (void (*)(HsFloat, HsFloat, HsFloat, HsFloat))hugs->getFunPtr();
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    arg4 = hugs->getFloat();
    v8200(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef glBlendFunc
#endif

static void hugsprim_glBlendFunc_17(HugsStackPtr);
static void hugsprim_glBlendFunc_17(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    glBlendFunc(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8201_16(HugsStackPtr);
static void hugsprim_v8201_16(HugsStackPtr hugs_root)
{
    void (*v8201)(HsWord32 arg1, HsWord32 arg2, HsWord32 arg3, HsWord32 arg4);
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    v8201 = (void (*)(HsWord32, HsWord32, HsWord32, HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    v8201(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8202_15(HugsStackPtr);
static void hugsprim_v8202_15(HugsStackPtr hugs_root)
{
    void (*v8202)(HsWord32 arg1);
    HsWord32 arg1;
    v8202 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v8202(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8203_14(HugsStackPtr);
static void hugsprim_v8203_14(HugsStackPtr hugs_root)
{
    void (*v8203)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v8203 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v8203(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8204_13(HugsStackPtr);
static void hugsprim_v8204_13(HugsStackPtr hugs_root)
{
    void (*v8204)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v8204 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v8204(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8205_12(HugsStackPtr);
static void hugsprim_v8205_12(HugsStackPtr hugs_root)
{
    void (*v8205)(HsWord32 arg1);
    HsWord32 arg1;
    v8205 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v8205(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8206_11(HugsStackPtr);
static void hugsprim_v8206_11(HugsStackPtr hugs_root)
{
    void (*v8206)(HsWord32 arg1, HsWord32 arg2);
    HsWord32 arg1;
    HsWord32 arg2;
    v8206 = (void (*)(HsWord32, HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    v8206(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8207_10(HugsStackPtr);
static void hugsprim_v8207_10(HugsStackPtr hugs_root)
{
    HsWord8 (*v8207)(HsWord32 arg1);
    HsWord32 arg1;
    HsWord8 res1;
    v8207 = (HsWord8 (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    res1 = v8207(arg1);
    hugs->putWord8(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_v8208_9(HugsStackPtr);
static void hugsprim_v8208_9(HugsStackPtr hugs_root)
{
    void (*v8208)(HsInt32 arg1, HsPtr arg2);
    HsInt32 arg1;
    HsPtr arg2;
    v8208 = (void (*)(HsInt32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getInt32();
    arg2 = hugs->getPtr();
    v8208(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8209_8(HugsStackPtr);
static void hugsprim_v8209_8(HugsStackPtr hugs_root)
{
    void (*v8209)(HsInt32 arg1, HsPtr arg2);
    HsInt32 arg1;
    HsPtr arg2;
    v8209 = (void (*)(HsInt32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getInt32();
    arg2 = hugs->getPtr();
    v8209(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef glDepthFunc
#endif

static void hugsprim_glDepthFunc_7(HugsStackPtr);
static void hugsprim_glDepthFunc_7(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    glDepthFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8210_6(HugsStackPtr);
static void hugsprim_v8210_6(HugsStackPtr hugs_root)
{
    void (*v8210)(HsWord32 arg1);
    HsWord32 arg1;
    v8210 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v8210(arg1);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef glStencilOp
#endif

static void hugsprim_glStencilOp_5(HugsStackPtr);
static void hugsprim_glStencilOp_5(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    glStencilOp(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef glStencilFunc
#endif

static void hugsprim_glStencilFunc_4(HugsStackPtr);
static void hugsprim_glStencilFunc_4(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    HsWord32 arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getWord32();
    glStencilFunc(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef glAlphaFunc
#endif

static void hugsprim_glAlphaFunc_3(HugsStackPtr);
static void hugsprim_glAlphaFunc_3(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsFloat arg2;
    arg1 = hugs->getWord32();
    arg2 = hugs->getFloat();
    glAlphaFunc(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8211_2(HugsStackPtr);
static void hugsprim_v8211_2(HugsStackPtr hugs_root)
{
    void (*v8211)(HsDouble arg1, HsDouble arg2);
    HsDouble arg1;
    HsDouble arg2;
    v8211 = (void (*)(HsDouble, HsDouble))hugs->getFunPtr();
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    v8211(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v8212_1(HugsStackPtr);
static void hugsprim_v8212_1(HugsStackPtr hugs_root)
{
    void (*v8212)(HsFloat arg1, HsWord8 arg2);
    HsFloat arg1;
    HsWord8 arg2;
    v8212 = (void (*)(HsFloat, HsWord8))hugs->getFunPtr();
    arg1 = hugs->getFloat();
    arg2 = hugs->getWord8();
    v8212(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef glScissor
#endif

static void hugsprim_glScissor_0(HugsStackPtr);
static void hugsprim_glScissor_0(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    glScissor(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glLogicOp", 2, hugsprim_glLogicOp_19},
    {"dyn_glBlendColorEXT", 6, hugsprim_v8200_18},
    {"glBlendFunc", 3, hugsprim_glBlendFunc_17},
    {"dyn_glBlendFuncSeparateEXT", 6, hugsprim_v8201_16},
    {"dyn_glBlendEquationEXT", 3, hugsprim_v8202_15},
    {"dyn_glGetQueryObjectuivARB", 5, hugsprim_v8203_14},
    {"dyn_glGetQueryivARB", 5, hugsprim_v8204_13},
    {"dyn_glEndQueryARB", 3, hugsprim_v8205_12},
    {"dyn_glBeginQueryARB", 4, hugsprim_v8206_11},
    {"dyn_glIsQueryARB", 3, hugsprim_v8207_10},
    {"dyn_glDeleteQueriesARB", 4, hugsprim_v8208_9},
    {"dyn_glGenQueriesARB", 4, hugsprim_v8209_8},
    {"glDepthFunc", 2, hugsprim_glDepthFunc_7},
    {"dyn_glActiveStencilFaceEXT", 3, hugsprim_v8210_6},
    {"glStencilOp", 4, hugsprim_glStencilOp_5},
    {"glStencilFunc", 4, hugsprim_glStencilFunc_4},
    {"glAlphaFunc", 3, hugsprim_glAlphaFunc_3},
    {"dyn_glDepthBoundsEXT", 4, hugsprim_v8211_2},
    {"dyn_glSampleCoverageARB", 4, hugsprim_v8212_1},
    {"glScissor", 5, hugsprim_glScissor_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGPerFragment
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

