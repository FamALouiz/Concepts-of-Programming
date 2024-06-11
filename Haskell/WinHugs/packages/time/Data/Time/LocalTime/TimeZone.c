/* Machine generated file, do not modify */
#include <stdlib.h>
#include "HsFFI.h"
#include "HsTime.h"
#include "HsTimeConfig.h"

static HugsAPI5 *hugs = 0;
#include "HsTime.h"

#ifndef ENABLE_MACRO_INTERFACE
#undef get_current_timezone_seconds
#endif

static void hugsprim_get_current_timezone_seconds_0(HugsStackPtr);
static void hugsprim_get_current_timezone_seconds_0(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsInt32 res1;
    arg1 = hugs->getInt32();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    res1 = get_current_timezone_seconds(arg1, arg2, arg3);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"get_current_timezone_seconds", 4, hugsprim_get_current_timezone_seconds_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initDTLTimeZone
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

