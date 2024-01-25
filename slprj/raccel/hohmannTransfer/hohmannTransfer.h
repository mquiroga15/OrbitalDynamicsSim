#ifndef RTW_HEADER_hohmannTransfer_h_
#define RTW_HEADER_hohmannTransfer_h_
#ifndef hohmannTransfer_COMMON_INCLUDES_
#define hohmannTransfer_COMMON_INCLUDES_
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
#include "hohmannTransfer_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME hohmannTransfer
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (7)     
#define NBLOCKIO (15) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (14)   
#elif NCSTATES != 14
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
typedef struct { int8_T oyspsrk4g1 ; } halomrxoyj ; typedef struct { real_T
nzurnwciyf [ 3 ] ; real_T p3vyjcdubp [ 4 ] ; real_T m0ioxdh3or [ 3 ] ; real_T
dakutnsmfw [ 3 ] ; real_T c1fk35dky4 ; real_T at5sbzwrhg [ 3 ] ; real_T
o3m5ydpoky ; real_T edbbi1bfho ; real_T b0dtdlqq2o ; real_T fgdrtjrvrb ;
real_T m4a2cinl4g [ 3 ] ; real_T js4yiqrdiq [ 3 ] ; real_T hewskagvmt ;
real_T k2a22kk5dj ; real_T b2vfeufs1i [ 3 ] ; } B ; typedef struct { real_T
hd4234m0gw [ 3 ] ; real_T onc542rist [ 3 ] ; struct { void * AQHandles ; }
jsu32xmjyl ; struct { void * AQHandles ; } b3gciis4ho ; struct { void *
AQHandles ; } owdomrfbzv ; int_T kcjmwir3mt ; int_T kynjefawrl ; int_T
iiycts3fjl ; int_T dl5mmzqld5 ; int_T hkfawwla0v ; int_T bbxgelugbh ; int8_T
ld3yg5jcxp ; int8_T hjghnpuor3 ; int8_T kwunuqciq1 ; int8_T cw3hlepmld ;
int8_T hoalbnfsar ; int8_T glabhvsl3y ; int8_T b0fmwhbbrk ; int8_T bsuceiev0a
; int8_T mmwkq4lupp ; int8_T jlhd4xqlsh ; int8_T mwdke3sfpt ; int8_T
bkz3eaxsch ; int8_T hj11go0d1m ; int8_T fjn2bnhyci ; int8_T li5j0khjhl ;
int8_T n1xhajawvv ; boolean_T jm1ravnfof ; halomrxoyj ffvtff1vg1 ; halomrxoyj
ahwcaguhri ; halomrxoyj dgo50cfy4t ; halomrxoyj bsvvloijiw ; halomrxoyj
lmmxizmujp ; halomrxoyj ohrauwpzja ; halomrxoyj hwyzimvcur ; halomrxoyj
ahruhtq5f1 ; halomrxoyj bz3ncnuprc ; halomrxoyj dhhhtxmmu2 ; halomrxoyj
dyyezhnzbv ; halomrxoyj g4qhfioifem ; } DW ; typedef struct { real_T
hkkkjazogu [ 14 ] ; } X ; typedef struct { real_T hkkkjazogu [ 14 ] ; } XDot
; typedef struct { boolean_T hkkkjazogu [ 14 ] ; } XDis ; typedef struct {
real_T hkkkjazogu [ 14 ] ; } CStateAbsTol ; typedef struct { real_T
hkkkjazogu [ 14 ] ; } CXPtMin ; typedef struct { real_T hkkkjazogu [ 14 ] ; }
CXPtMax ; typedef struct { real_T dotfen2dvj ; real_T gtwguj24uw ; real_T
f2o4fvgfai ; real_T iy1dwrul50 ; real_T pyyz5awvv3 ; real_T czguy1hb4b ; }
ZCV ; typedef struct { real_T hwdkmahxje [ 3 ] ; real_T ahjfqn40yh [ 4 ] ; }
ExtY ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct
ayst5lk51c_ { real_T Constant_Value ; } ; struct P_ { real_T burnDuration1 ;
real_T burnDuration2 ; real_T deltav1Direction [ 3 ] ; real_T
deltav2Direction [ 3 ] ; real_T mDot ; real_T t1 ; real_T t2 ; real_T
CompareToConstant_const ; real_T CompareToConstant_const_jr0taz5ops ; real_T
AttitudeProfile_primaryAlignment [ 3 ] ; real_T
AttitudeProfile_secondaryAlignment [ 3 ] ; real_T
AttitudeProfile_secondaryConstraint [ 3 ] ; real_T Gain2_Gain ; real_T
Gain_Gain ; real_T Gain1_Gain ; real_T Gain_Gain_eejksydamw ; real_T
Gain2_Gain_adqwyb1fpl ; real_T Gain1_Gain_cpmrppil5o ; real_T
Gain_Gain_epxgvv3uaq ; real_T Gain1_Gain_np3xblzbry ; real_T
Gain2_Gain_aoe1z0xtjy ; real_T Bias_Bias ; real_T Bias1_Bias ; real_T
Gain2_Gain_ppedexqizl ; real_T Gain_Gain_lncck3b1ht ; real_T
Gain1_Gain_fnkgiav0mq ; real_T Gain_Gain_o5kojjvc1w ; real_T
Gain2_Gain_n3y32qpatl ; real_T Gain1_Gain_mr00sswlmu ; real_T
Gain_Gain_on1psqnxfu ; real_T Gain1_Gain_lessdreht2 ; real_T
Gain2_Gain_nwpd5c3tm4 ; real_T Bias_Bias_jsr34fusav ; real_T
Bias1_Bias_lnezxfgswe ; real_T Gain2_Gain_iunbs3mto0 ; real_T
Gain_Gain_cxjdjqmywq ; real_T Gain1_Gain_kgcnisrm24 ; real_T
Gain_Gain_hrj3uk023h ; real_T Gain2_Gain_atw2ondk21 ; real_T
Gain1_Gain_ne3jwokduq ; real_T Gain_Gain_ja3rm2ptei ; real_T
Gain1_Gain_af1zmxkcba ; real_T Gain2_Gain_j3vsc1nqxy ; real_T
Bias_Bias_hhpw4p034x ; real_T Bias1_Bias_fa10flfbfk ; real_T
Gain_Gain_aaczryqecx ; real_T Innerloopcontroller_Gain ; real_T
Constant_Value ; real_T Constant_Value_cjycj0fc0i ; real_T
Constant_Value_librqjr13m ; real_T Bias_Bias_icxn3xlw3j ; real_T
Bias1_Bias_l44fxvj4xh ; real_T Constant_Value_j41k2nqkzj ; real_T
Constant_Value_kydselcoow ; real_T Constant_Value_gu4cnegeyw ; real_T
Constant_Value_bmyicrezz3 ; real_T Constant_Value_blehlmxsbk ; real_T
Gain_Gain_kownsvaqu5 ; real_T Constant_Value_ixf35js4xe ; real_T
Constant1_Value ; real_T Gain2_Gain_ehq1npccz3 ; real_T Gain_Gain_byt1irk5mi
; real_T Constant_Value_iujxws1jti ; real_T Constant1_Value_j3skpjyilw ;
real_T Gain2_Gain_oxh0cjyqdd ; real_T Constant_Value_jbtr4ekwkp ; real_T
Constant_Value_npk3m1qn01 ; real_T Constant_Value_hqi1uun2ik ; real_T
Constant3_Value ; real_T SpacecraftDynamics_startDate ; real_T
SpacecraftDynamics_mass ; real_T SpacecraftDynamics_emptyMass ; real_T
SpacecraftDynamics_fullMass ; real_T SpacecraftDynamics_inertia [ 9 ] ;
real_T SpacecraftDynamics_emptyInertia [ 9 ] ; real_T
SpacecraftDynamics_fullInertia [ 9 ] ; real_T
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
SpacecraftDynamics_customThirdBodyMu ; real_T
SpacecraftDynamics_reflectivityCoeff ; real_T SpacecraftDynamics_srpArea ;
real_T SpacecraftDynamics_fluxPressure ; real_T Pointingcommand_Y0 ; real_T
Pointingcommand_YFinal ; real_T Pointingcommand_Y0_lnsmjwn4r0 ; real_T
Pointingcommand_YFinal_j0uizzisgh ; real_T Offtime_Y0 ; real_T Offtime_YFinal
; real_T Ontime_Y0 ; real_T Ontime_YFinal ; real_T Ontime_Y0_of0gxorjhk ;
real_T Ontime_YFinal_aqks3lcw4k ; real_T Offtime_Y0_a00myhhy4g ; real_T
Offtime_YFinal_phvdvlycqf ; real_T Exhaustdirection_Value [ 3 ] ; ayst5lk51c
ffvtff1vg1 ; ayst5lk51c ahwcaguhri ; ayst5lk51c dgo50cfy4t ; ayst5lk51c
bsvvloijiw ; ayst5lk51c lmmxizmujp ; ayst5lk51c ohrauwpzja ; ayst5lk51c
hwyzimvcur ; ayst5lk51c ahruhtq5f1 ; ayst5lk51c bz3ncnuprc ; ayst5lk51c
dhhhtxmmu2 ; ayst5lk51c dyyezhnzbv ; ayst5lk51c g4qhfioifem ; } ; extern
const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern ExtY rtY ; extern P rtP ; extern mxArray *
mr_hohmannTransfer_GetDWork ( ) ; extern void mr_hohmannTransfer_SetDWork (
const mxArray * ssDW ) ; extern mxArray *
mr_hohmannTransfer_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * hohmannTransfer_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
