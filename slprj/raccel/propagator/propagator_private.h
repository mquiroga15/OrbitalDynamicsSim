#ifndef RTW_HEADER_propagator_private_h_
#define RTW_HEADER_propagator_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "propagator.h"
#include "propagator_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern void j4vfdi3pbp ( SimStruct * rtS_e ) ; extern void han5olaoaa (
SimStruct * rtS_p ) ; extern void g1wscpgucy ( SimStruct * rtS_i , real_T *
dkhdckluxa , ghkd4q2mtt * localP ) ; extern void jdz3rajayv ( SimStruct *
rtS_i ) ; extern void jhjh0hwnqp ( SimStruct * rtS_m ) ; extern void
ndeg5uxc4f ( SimStruct * rtS_e , real_T * dsbjayox5m , ki5czxt4jx * localP )
;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
