/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsGDI.h"
#include "HsWin32.h"
#include "WndProc.h"

static HugsAPI5 *hugs = 0;
#include "HsWin32.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef prim_SUBLANGID
#endif

static void hugsprim_prim_SUBLANGID_14(HugsStackPtr);
static void hugsprim_prim_SUBLANGID_14(HugsStackPtr hugs_root)
{
    HsWord16 arg1;
    HsWord16 res1;
    arg1 = hugs->getWord16();
    res1 = prim_SUBLANGID(arg1);
    hugs->putWord16(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef prim_PRIMARYLANGID
#endif

static void hugsprim_prim_PRIMARYLANGID_13(HugsStackPtr);
static void hugsprim_prim_PRIMARYLANGID_13(HugsStackPtr hugs_root)
{
    HsWord16 arg1;
    HsWord16 res1;
    arg1 = hugs->getWord16();
    res1 = prim_PRIMARYLANGID(arg1);
    hugs->putWord16(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef prim_MAKELANGID
#endif

static void hugsprim_prim_MAKELANGID_12(HugsStackPtr);
static void hugsprim_prim_MAKELANGID_12(HugsStackPtr hugs_root)
{
    HsWord16 arg1;
    HsWord16 arg2;
    HsWord16 res1;
    arg1 = hugs->getWord16();
    arg2 = hugs->getWord16();
    res1 = prim_MAKELANGID(arg1, arg2);
    hugs->putWord16(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef prim_SORTIDFROMLCID
#endif

static void hugsprim_prim_SORTIDFROMLCID_11(HugsStackPtr);
static void hugsprim_prim_SORTIDFROMLCID_11(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord16 res1;
    arg1 = hugs->getWord32();
    res1 = prim_SORTIDFROMLCID(arg1);
    hugs->putWord16(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef prim_LANGIDFROMLCID
#endif

static void hugsprim_prim_LANGIDFROMLCID_10(HugsStackPtr);
static void hugsprim_prim_LANGIDFROMLCID_10(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord16 res1;
    arg1 = hugs->getWord32();
    res1 = prim_LANGIDFROMLCID(arg1);
    hugs->putWord16(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef prim_MAKELCID
#endif

static void hugsprim_prim_MAKELCID_9(HugsStackPtr);
static void hugsprim_prim_MAKELCID_9(HugsStackPtr hugs_root)
{
    HsWord16 arg1;
    HsWord16 arg2;
    HsWord32 res1;
    arg1 = hugs->getWord16();
    arg2 = hugs->getWord16();
    res1 = prim_MAKELCID(arg1, arg2);
    hugs->putWord32(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef castFunPtrToLONG
#endif

static void hugsprim_castFunPtrToLONG_8(HugsStackPtr);
static void hugsprim_castFunPtrToLONG_8(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    HsInt32 res1;
    arg1 = hugs->getFunPtr();
    res1 = castFunPtrToLONG(arg1);
    hugs->putInt32(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef castPtrToUINT
#endif

static void hugsprim_castPtrToUINT_7(HugsStackPtr);
static void hugsprim_castPtrToUINT_7(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsWord32 res1;
    arg1 = hugs->getPtr();
    res1 = castPtrToUINT(arg1);
    hugs->putWord32(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef castUINTToPtr
#endif

static void hugsprim_castUINTToPtr_6(HugsStackPtr);
static void hugsprim_castUINTToPtr_6(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsPtr res1;
    arg1 = hugs->getWord32();
    res1 = castUINTToPtr(arg1);
    hugs->putPtr(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef hIWORD
#endif

static void hugsprim_hIWORD_5(HugsStackPtr);
static void hugsprim_hIWORD_5(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord16 res1;
    arg1 = hugs->getWord32();
    res1 = hIWORD(arg1);
    hugs->putWord16(res1);
    hugs->returnId(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef lOWORD
#endif

static void hugsprim_lOWORD_4(HugsStackPtr);
static void hugsprim_lOWORD_4(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord16 res1;
    arg1 = hugs->getWord32();
    res1 = lOWORD(arg1);
    hugs->putWord16(res1);
    hugs->returnId(hugs_root,1);
}
#include "errors.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef getErrorMessage
#endif

static void hugsprim_getErrorMessage_3(HugsStackPtr);
static void hugsprim_getErrorMessage_3(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsPtr res1;
    arg1 = hugs->getWord32();
    res1 = getErrorMessage(arg1);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}
#include "windows.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef GetLastError
#endif

static void hugsprim_GetLastError_2(HugsStackPtr);
static void hugsprim_GetLastError_2(HugsStackPtr hugs_root)
{
    HsWord32 res1;
    res1 = GetLastError();
    hugs->putWord32(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef LocalFree
#endif

static void hugsprim_LocalFree_1(HugsStackPtr);
static void hugsprim_LocalFree_1(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr res1;
    arg1 = hugs->getPtr();
    res1 = LocalFree(arg1);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

#ifndef ENABLE_MACRO_INTERFACE
#undef DeleteObject
#endif

static void hugsprim_DeleteObject_0(HugsStackPtr);
static void hugsprim_DeleteObject_0(HugsStackPtr hugs_root)
{
    hugs->putFunPtr((HsFunPtr)&DeleteObject);
}

static struct hugs_primitive hugs_primTable[] = {
    {"sUBLANGID", 1, hugsprim_prim_SUBLANGID_14},
    {"pRIMARYLANGID", 1, hugsprim_prim_PRIMARYLANGID_13},
    {"mAKELANGID", 2, hugsprim_prim_MAKELANGID_12},
    {"sORTIDFROMLCID", 1, hugsprim_prim_SORTIDFROMLCID_11},
    {"lANGIDFROMLCID", 1, hugsprim_prim_LANGIDFROMLCID_10},
    {"mAKELCID", 2, hugsprim_prim_MAKELCID_9},
    {"castFunPtrToLONG", 1, hugsprim_castFunPtrToLONG_8},
    {"castPtrToUINT", 1, hugsprim_castPtrToUINT_7},
    {"castUINTToPtr", 1, hugsprim_castUINTToPtr_6},
    {"hIWORD", 1, hugsprim_hIWORD_5},
    {"lOWORD", 1, hugsprim_lOWORD_4},
    {"getErrorMessage", 2, hugsprim_getErrorMessage_3},
    {"getLastError", 1, hugsprim_GetLastError_2},
    {"localFree", 2, hugsprim_LocalFree_1},
    {"deleteObject_p", 0, hugsprim_DeleteObject_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initSWTypes
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

