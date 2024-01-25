#ifndef RTW_HEADER_propagatorComplete_private_h_
#define RTW_HEADER_propagatorComplete_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "propagatorComplete.h"
#include "propagatorComplete_types.h"
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
extern void a0ekhtw23b ( SimStruct * rtS_e ) ; extern void ozgnpajdip (
SimStruct * rtS_p ) ; extern void lfxaatucky ( SimStruct * rtS_i , real_T *
myq4iv4oq2 , gniy2mtxqh * localP ) ; extern void ozjlwsvfyh ( SimStruct *
rtS_i ) ; extern void myszykblou ( SimStruct * rtS_m ) ; extern void
l3x3mdhan1 ( SimStruct * rtS_e , real_T * ee4ehsyspp , owihucf3di * localP )
;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
