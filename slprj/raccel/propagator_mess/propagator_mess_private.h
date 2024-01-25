#ifndef RTW_HEADER_propagator_mess_private_h_
#define RTW_HEADER_propagator_mess_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "propagator_mess.h"
#include "propagator_mess_types.h"
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
extern void bws3mqikn5 ( SimStruct * rtS_e ) ; extern void hpyc3dfmoq (
SimStruct * rtS_p ) ; extern void kn1zy4gjus ( SimStruct * rtS_i , real_T *
pk1tnftsp4 , gs2ijlv4j1 * localP ) ; extern void klheluama3 ( SimStruct *
rtS_i ) ; extern void c4g0dev3fk ( SimStruct * rtS_m ) ; extern void
flcsttob5q ( SimStruct * rtS_e , real_T * cjbxlzcsil , lrmiux2z5f * localP )
;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
