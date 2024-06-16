#ifndef RTW_HEADER_propagatorMain_h_
#define RTW_HEADER_propagatorMain_h_
#ifndef propagatorMain_COMMON_INCLUDES_
#define propagatorMain_COMMON_INCLUDES_
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
#include "propagatorMain_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME propagatorMain
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (18)     
#define NBLOCKIO (31) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (15)   
#elif NCSTATES != 15
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
typedef struct { real_T b5wz2e1q3r [ 3 ] ; real_T jmbluoj1sp [ 3 ] ; real_T
cfat5n44y1 [ 4 ] ; real_T ci5ovszmua [ 3 ] ; real_T pubw20n1vt ; real_T
gvzjviy51s ; real_T hikecwvwoj [ 3 ] ; real_T jlyvf3hfdh ; real_T cthgspn3yi
; real_T e1pp5d3wuf ; real_T nx32abgkuf ; real_T nwgjkwa0ti ; real_T
lxdw5rcp2v [ 3 ] ; real_T naoluu5k0n ; real_T ivne3yql1p ; real_T hwfackdzwr
[ 4 ] ; real_T kc1seaev10 [ 3 ] ; real_T gjd2qdrduc [ 3 ] ; real_T e21kjd2ys1
[ 3 ] ; real_T eul1vo2rhf ; real_T baic2rkjff ; real_T ez2krhh41l [ 4 ] ;
real_T hcmvpr3bah [ 3 ] ; real_T fhromkhjvt ; real_T cia0zbdwmn ; real_T
ailbretlt2 ; real_T mqyxknico2 [ 3 ] ; real_T ilxrm5djwj [ 3 ] ; real_T
molw1d13dq [ 3 ] ; real_T ewkfu1itsr [ 3 ] ; real_T pyeksk1xwg [ 3 ] ; } B ;
typedef struct { real_T m0s1rjpd4e [ 3 ] ; real_T ci1edd4nj3 [ 3 ] ; struct {
void * AQHandles ; } ny4c53recd ; struct { void * AQHandles ; } g5nmlj15wz ;
struct { void * AQHandles ; } ey5pzbfvpp ; struct { void * AQHandles ; }
ds12hzh3pt ; struct { void * AQHandles ; } aeff0k5pep ; struct { void *
AQHandles ; } obcya3tamr ; struct { void * AQHandles ; } dwnk2lieit ; struct
{ void * AQHandles ; } eyj12p0xo4 ; struct { void * AQHandles ; } hdogczrjkq
; struct { void * AQHandles ; } l1sxaadtmn ; int8_T pnk35gmy12 ; int8_T
dlqq3wiqav ; int8_T appywquule ; int8_T bk0zkljr42 ; int8_T i23zpgf5ke ;
int8_T ihd503kyln ; boolean_T elz4cbgcbh ; boolean_T cx1ziv5lns ; boolean_T
g2bncjomtk ; boolean_T dyygij3dkg ; boolean_T lwzqppaede ; } DW ; typedef
struct { real_T ixkpyckmot [ 14 ] ; real_T ktrnjvscja ; } X ; typedef struct
{ real_T ixkpyckmot [ 14 ] ; real_T ktrnjvscja ; } XDot ; typedef struct {
boolean_T ixkpyckmot [ 14 ] ; boolean_T ktrnjvscja ; } XDis ; typedef struct
{ real_T ixkpyckmot [ 14 ] ; real_T ktrnjvscja ; } CStateAbsTol ; typedef
struct { real_T ixkpyckmot [ 14 ] ; real_T ktrnjvscja ; } CXPtMin ; typedef
struct { real_T ixkpyckmot [ 14 ] ; real_T ktrnjvscja ; } CXPtMax ; typedef
struct { real_T ivnixqwm21 ; real_T ktz5k1mpbl ; real_T c3fbovxh2e ; real_T
le0du3uvwq ; } ZCV ; typedef struct { real_T bck35osssf [ 3 ] ; real_T
hpbyogod4b [ 3 ] ; real_T oyk5vzudyr [ 4 ] ; real_T nbqx155w4b [ 3 ] ; real_T
nmcvhu2gtw ; real_T eek1p2hatd ; real_T iipt5qcaqw [ 3 ] ; } ExtY ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
area ; real_T burnOverride ; real_T initMass ; real_T mDot ; real_T ref ;
real_T thrust ; real_T thrustingThreshold ; real_T NormalizeVector_maxzero ;
real_T NormalizeVector1_maxzero ; real_T NormalizeVector_maxzero_jpxndxsk21 ;
real_T Constant_Value ; real_T SpacecraftDynamics_startDate ; real_T
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
SpacecraftDynamics_customThirdBodyMu ; real_T SpacecraftDynamics_fluxPressure
; real_T Integrator_IC ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Constant4_Value ; real_T
Constant_Value_cddtuuqxak ; real_T Constant1_Value ; real_T Constant2_Value ;
real_T Constant3_Value ; real_T Constant_Value_h1phomc44g ; real_T
Nocontrol_Value [ 3 ] ; real_T Constant_Value_argmstcefl ; real_T
Constant_Value_foidw3bu40 ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern ExtY rtY ; extern P rtP ; extern mxArray * mr_propagatorMain_GetDWork
( ) ; extern void mr_propagatorMain_SetDWork ( const mxArray * ssDW ) ;
extern mxArray * mr_propagatorMain_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * propagatorMain_GetCAPIStaticMap ( void
) ; extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
