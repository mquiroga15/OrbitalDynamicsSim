#ifndef RTW_HEADER_propagatorSimple_h_
#define RTW_HEADER_propagatorSimple_h_
#ifndef propagatorSimple_COMMON_INCLUDES_
#define propagatorSimple_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "propagatorSimple_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME propagatorSimple
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (14)     
#define NBLOCKIO (28) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (13)   
#elif NCSTATES != 13
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T gws1dy0r5h [ 3 ] ; real_T i55c2f2ohg [ 3 ] ; real_T
g5bjapwpnv [ 4 ] ; real_T dp0ykzxsqj ; real_T jo5kxmwsrg [ 3 ] ; real_T
e5avjshcym [ 3 ] ; real_T okd1bno3dz ; real_T aphuuotnaa ; real_T fke25c2lg0
[ 4 ] ; real_T i1ocln1mfn [ 3 ] ; real_T l32o5rugbc [ 3 ] ; real_T i5rdyvyzhc
[ 3 ] ; real_T h03wa5ojtf ; real_T hpqqv1x55k ; real_T hatpfo3hlm ; real_T
dl1iix2aol [ 3 ] ; real_T cm2sh5gwjs ; real_T idx0fxvvk3 ; real_T mfuo45igdq
; real_T d3trp0rw53 ; real_T g34dv5hrtq [ 4 ] ; real_T epczetk5lz [ 3 ] ;
real_T dclql12erk [ 3 ] ; real_T jlqp2xyqeo [ 3 ] ; real_T da0wq0ncuu [ 3 ] ;
real_T lyaqu2ph4w [ 3 ] ; real_T mi1sjd5xhd [ 3 ] ; real_T axt2x3q3hy [ 3 ] ;
} B ; typedef struct { real_T h3cflltm3q [ 3 ] ; real_T f0h4bwqduk [ 3 ] ;
struct { void * AQHandles ; } chu05kbpxu ; struct { void * AQHandles ; }
czhwoklxpu ; struct { void * AQHandles ; } j4pv5v0dny ; struct { void *
AQHandles ; } ovdng33q0b ; struct { void * AQHandles ; } iwpwwackcm ; struct
{ void * AQHandles ; } mnprgchfjq ; int8_T g4aaasm3l1 ; int8_T odwn4dj4lo ;
int8_T oqf0svuwls ; int8_T lbrqpwfmha ; int8_T mjolfyo1k3 ; int8_T pyb2cpctgm
; boolean_T jdbvpmwjyw ; boolean_T a2s0znbkm5 ; boolean_T ah5wpklf0e ;
boolean_T nbxd2gjju2 ; boolean_T irz00m5icq ; boolean_T mojmy2zhqz ; } DW ;
typedef struct { real_T fay2cpmqpg [ 13 ] ; } X ; typedef struct { real_T
fay2cpmqpg [ 13 ] ; } XDot ; typedef struct { boolean_T fay2cpmqpg [ 13 ] ; }
XDis ; typedef struct { real_T fay2cpmqpg [ 13 ] ; } CStateAbsTol ; typedef
struct { real_T fay2cpmqpg [ 13 ] ; } CXPtMin ; typedef struct { real_T
fay2cpmqpg [ 13 ] ; } CXPtMax ; typedef struct { real_T nitbrmp5jx ; real_T
cxmntq42lq ; real_T mry5gqeihh ; real_T hi2lkxa1hh ; real_T nvpkxxqfbb ; }
ZCV ; typedef struct { real_T hs1awvyyae [ 3 ] ; real_T ecbpwue5ri [ 3 ] ;
real_T dtc4ufbswj [ 4 ] ; real_T prj3orfldf ; real_T fdj51o4wpi [ 3 ] ; }
ExtY ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct
P_ { real_T area ; real_T burnOverride ; real_T initMass ; real_T ref ;
real_T thrust ; real_T thrustingThreshold ; real_T NormalizeVector1_maxzero ;
real_T NormalizeVector_maxzero ; real_T NormalizeVector_maxzero_pntl1pmm30 ;
real_T NormalizeVector_maxzero_afn2dyubdl ; real_T
SpacecraftDynamics_startDate ; real_T SpacecraftDynamics_mass ; real_T
SpacecraftDynamics_emptyMass ; real_T SpacecraftDynamics_fullMass ; real_T
SpacecraftDynamics_inertia [ 9 ] ; real_T SpacecraftDynamics_emptyInertia [ 9
] ; real_T SpacecraftDynamics_fullInertia [ 9 ] ; real_T
SpacecraftDynamics_semiMajorAxis ; real_T SpacecraftDynamics_eccentricity ;
real_T SpacecraftDynamics_inclination ; real_T SpacecraftDynamics_raan ;
real_T SpacecraftDynamics_argPeriapsis ; real_T
SpacecraftDynamics_trueAnomaly ; real_T SpacecraftDynamics_trueLon ; real_T
SpacecraftDynamics_argLat ; real_T SpacecraftDynamics_lonPeriapsis ; real_T
SpacecraftDynamics_inertialPosition [ 3 ] ; real_T
SpacecraftDynamics_inertialVelocity [ 3 ] ; real_T
SpacecraftDynamics_fixedPosition [ 3 ] ; real_T
SpacecraftDynamics_fixedVelocity [ 3 ] ; real_T SpacecraftDynamics_attitude [
4 ] ; real_T SpacecraftDynamics_attitudeRate [ 3 ] ; real_T
SpacecraftDynamics_customR ; real_T SpacecraftDynamics_customF ; real_T
SpacecraftDynamics_customMu ; real_T SpacecraftDynamics_customJ2 ; real_T
SpacecraftDynamics_customOmega ; real_T SpacecraftDynamics_cbRA ; real_T
SpacecraftDynamics_cbRARate ; real_T SpacecraftDynamics_cbDec ; real_T
SpacecraftDynamics_cbDecRate ; real_T SpacecraftDynamics_cbRotAngle ; real_T
SpacecraftDynamics_cbRotRate ; real_T SpacecraftDynamics_F107ExtrapValue ;
real_T SpacecraftDynamics_MagneticIndexExtrapValue ; real_T
SpacecraftDynamics_fluxFlags [ 23 ] ; real_T SpacecraftDynamics_dragCoeff ;
real_T SpacecraftDynamics_dragArea ; real_T
SpacecraftDynamics_customThirdBodyMu ; real_T SpacecraftDynamics_fluxPressure
; real_T Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T
Constant_Value ; real_T Constant_Value_ln0uq0icxn ; real_T
Constant_Value_pnqibv1hlu ; real_T Constant_Value_o4isoro52y ; } ; extern
const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern ExtY rtY ; extern P rtP ; extern mxArray *
mr_propagatorSimple_GetDWork ( ) ; extern void mr_propagatorSimple_SetDWork (
const mxArray * ssDW ) ; extern mxArray *
mr_propagatorSimple_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * propagatorSimple_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
