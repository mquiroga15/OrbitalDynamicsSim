#ifndef RTW_HEADER_hohmannTransfer_private_h_
#define RTW_HEADER_hohmannTransfer_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "hohmannTransfer.h"
#include "hohmannTransfer_types.h"
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
extern void a3nqjrtyn4 ( SimStruct * rtS_e ) ; extern void gb0wkodlsi (
SimStruct * rtS_p ) ; extern void g4qhfioife ( SimStruct * rtS_i , real_T *
hw1odo5xlb , ayst5lk51c * localP ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
