#include "hohmannTransfer.h"
#include "rtwtypes.h"
#include "hohmannTransfer_private.h"
#include "mwmathutil.h"
#include <string.h>
#include "rt_logging_mmi.h"
#include "hohmannTransfer_capi.h"
#include "hohmannTransfer_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , &
stopRequested ) ; } rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 } ;
const char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const
char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; ExtY rtY ; static SimStruct model_S ; SimStruct *
const rtS = & model_S ; void a3nqjrtyn4 ( SimStruct * rtS_e ) { if (
ssGetTaskTime ( rtS_e , 2 ) != ssGetTStart ( rtS_e ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ; } } void gb0wkodlsi (
SimStruct * rtS_p ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ;
} void g4qhfioife ( SimStruct * rtS_i , real_T * hw1odo5xlb , ayst5lk51c *
localP ) { if ( ssIsSampleHit ( rtS_i , 2 , 0 ) ) { * hw1odo5xlb = localP ->
Constant_Value ; } } void MdlInitialize ( void ) { real_T ecc_loc ; real_T
incl_loc ; real_T pData_idx_0 ; real_T pData_idx_0_p ; real_T pData_idx_1 ;
real_T pData_idx_1_e ; real_T pData_idx_1_p ; real_T pData_idx_3 ; real_T
pData_idx_3_e ; real_T pData_idx_3_p ; real_T pData_idx_4 ; real_T
pData_idx_4_e ; real_T pData_idx_4_i ; real_T pData_idx_4_p ; real_T
pData_idx_5 ; real_T pData_idx_6 ; real_T pData_idx_7 ; real_T pData_idx_7_p
; real_T r_pqw_X ; real_T r_pqw_denom ; real_T slr ; real_T v_pqw_prod ; rtDW
. jm1ravnfof = false ; if ( rtP . SpacecraftDynamics_inclination *
0.017453292519943295 < 1.0E-10 ) { incl_loc = 1.0E-10 ; } else { incl_loc =
rtP . SpacecraftDynamics_inclination * 0.017453292519943295 ; } if ( rtP .
SpacecraftDynamics_eccentricity < 1.0E-10 ) { ecc_loc = 1.0E-10 ; } else {
ecc_loc = rtP . SpacecraftDynamics_eccentricity ; } if ( muDoubleScalarAbs (
ecc_loc - 1.0 ) < 1.0E-10 ) { slr = 2.0 * rtP .
SpacecraftDynamics_semiMajorAxis ; } else if ( ecc_loc > 1.0 ) { slr = (
ecc_loc * ecc_loc - 1.0 ) * rtP . SpacecraftDynamics_semiMajorAxis ; } else {
slr = ( 1.0 - ecc_loc * ecc_loc ) * rtP . SpacecraftDynamics_semiMajorAxis ;
} r_pqw_denom = muDoubleScalarCos ( muDoubleScalarMod ( rtP .
SpacecraftDynamics_trueAnomaly * 0.017453292519943295 , 6.2831853071795862 )
) * ecc_loc + 1.0 ; r_pqw_X = muDoubleScalarCos ( muDoubleScalarMod ( rtP .
SpacecraftDynamics_trueAnomaly * 0.017453292519943295 , 6.2831853071795862 )
) * slr / r_pqw_denom ; r_pqw_denom = muDoubleScalarSin ( muDoubleScalarMod (
rtP . SpacecraftDynamics_trueAnomaly * 0.017453292519943295 ,
6.2831853071795862 ) ) * slr / r_pqw_denom ; if ( muDoubleScalarAbs ( slr )
>= 1.0E-10 ) { v_pqw_prod = muDoubleScalarSqrt ( 3.986004418E+14 / slr ) ; }
else { v_pqw_prod = 1.9964980385665295E+12 ; } slr = - muDoubleScalarSin (
muDoubleScalarMod ( rtP . SpacecraftDynamics_trueAnomaly *
0.017453292519943295 , 6.2831853071795862 ) ) * v_pqw_prod ; ecc_loc = (
muDoubleScalarCos ( muDoubleScalarMod ( rtP . SpacecraftDynamics_trueAnomaly
* 0.017453292519943295 , 6.2831853071795862 ) ) + ecc_loc ) * v_pqw_prod ;
v_pqw_prod = muDoubleScalarCos ( - muDoubleScalarMod ( rtP .
SpacecraftDynamics_raan * 0.017453292519943295 , 6.2831853071795862 ) ) ;
pData_idx_3 = muDoubleScalarSin ( - muDoubleScalarMod ( rtP .
SpacecraftDynamics_raan * 0.017453292519943295 , 6.2831853071795862 ) ) ;
pData_idx_1 = - muDoubleScalarSin ( - muDoubleScalarMod ( rtP .
SpacecraftDynamics_raan * 0.017453292519943295 , 6.2831853071795862 ) ) ;
pData_idx_4 = muDoubleScalarCos ( - muDoubleScalarMod ( rtP .
SpacecraftDynamics_raan * 0.017453292519943295 , 6.2831853071795862 ) ) ;
pData_idx_4_p = muDoubleScalarCos ( - incl_loc ) ; pData_idx_7 =
muDoubleScalarSin ( - incl_loc ) ; pData_idx_5 = - muDoubleScalarSin ( -
incl_loc ) ; incl_loc = muDoubleScalarCos ( - incl_loc ) ; pData_idx_0 =
muDoubleScalarCos ( - muDoubleScalarMod ( rtP .
SpacecraftDynamics_argPeriapsis * 0.017453292519943295 , 6.2831853071795862 )
) ; pData_idx_3_p = muDoubleScalarSin ( - muDoubleScalarMod ( rtP .
SpacecraftDynamics_argPeriapsis * 0.017453292519943295 , 6.2831853071795862 )
) ; pData_idx_1_p = - muDoubleScalarSin ( - muDoubleScalarMod ( rtP .
SpacecraftDynamics_argPeriapsis * 0.017453292519943295 , 6.2831853071795862 )
) ; pData_idx_4_e = muDoubleScalarCos ( - muDoubleScalarMod ( rtP .
SpacecraftDynamics_argPeriapsis * 0.017453292519943295 , 6.2831853071795862 )
) ; pData_idx_0_p = pData_idx_3 * 0.0 + v_pqw_prod ; pData_idx_3_e = (
v_pqw_prod * 0.0 + pData_idx_3 * pData_idx_4_p ) + 0.0 * pData_idx_5 ;
pData_idx_6 = ( v_pqw_prod * 0.0 + pData_idx_3 * pData_idx_7 ) + 0.0 *
incl_loc ; pData_idx_1_e = pData_idx_4 * 0.0 + pData_idx_1 ; pData_idx_4_i =
( pData_idx_1 * 0.0 + pData_idx_4 * pData_idx_4_p ) + 0.0 * pData_idx_5 ;
pData_idx_7_p = ( pData_idx_1 * 0.0 + pData_idx_4 * pData_idx_7 ) + 0.0 *
incl_loc ; pData_idx_5 += 0.0 * pData_idx_4_p ; incl_loc += 0.0 * pData_idx_7
; v_pqw_prod = ( pData_idx_0_p * pData_idx_0 + pData_idx_3_e * pData_idx_1_p
) + pData_idx_6 * 0.0 ; pData_idx_3 = ( pData_idx_0_p * pData_idx_3_p +
pData_idx_3_e * pData_idx_4_e ) + pData_idx_6 * 0.0 ; pData_idx_6 +=
pData_idx_0_p * 0.0 + pData_idx_3_e * 0.0 ; pData_idx_1 = ( pData_idx_0 *
pData_idx_1_e + pData_idx_1_p * pData_idx_4_i ) + pData_idx_7_p * 0.0 ;
pData_idx_4 = ( pData_idx_3_p * pData_idx_1_e + pData_idx_4_i * pData_idx_4_e
) + pData_idx_7_p * 0.0 ; pData_idx_7 = ( pData_idx_1_e * 0.0 + pData_idx_4_i
* 0.0 ) + pData_idx_7_p ; pData_idx_4_p = ( pData_idx_0 * 0.0 + pData_idx_1_p
* pData_idx_5 ) + incl_loc * 0.0 ; pData_idx_3_p = ( pData_idx_3_p * 0.0 +
pData_idx_4_e * pData_idx_5 ) + incl_loc * 0.0 ; incl_loc += pData_idx_5 *
0.0 ; rtX . hkkkjazogu [ 0 ] = ( v_pqw_prod * r_pqw_X + pData_idx_3 *
r_pqw_denom ) + pData_idx_6 * 0.0 ; rtX . hkkkjazogu [ 1 ] = ( pData_idx_1 *
r_pqw_X + pData_idx_4 * r_pqw_denom ) + pData_idx_7 * 0.0 ; rtX . hkkkjazogu
[ 2 ] = ( pData_idx_4_p * r_pqw_X + pData_idx_3_p * r_pqw_denom ) + incl_loc
* 0.0 ; rtX . hkkkjazogu [ 3 ] = ( v_pqw_prod * slr + pData_idx_3 * ecc_loc )
+ pData_idx_6 * 0.0 ; rtX . hkkkjazogu [ 4 ] = ( pData_idx_1 * slr +
pData_idx_4 * ecc_loc ) + pData_idx_7 * 0.0 ; rtX . hkkkjazogu [ 5 ] = (
pData_idx_4_p * slr + pData_idx_3_p * ecc_loc ) + incl_loc * 0.0 ; rtX .
hkkkjazogu [ 6 ] = rtP . SpacecraftDynamics_attitude [ 0 ] ; rtX . hkkkjazogu
[ 7 ] = rtP . SpacecraftDynamics_attitude [ 1 ] ; rtX . hkkkjazogu [ 8 ] =
rtP . SpacecraftDynamics_attitude [ 2 ] ; rtX . hkkkjazogu [ 9 ] = rtP .
SpacecraftDynamics_attitude [ 3 ] ; rtX . hkkkjazogu [ 10 ] = rtP .
SpacecraftDynamics_attitudeRate [ 0 ] * 0.017453292519943295 ; rtX .
hkkkjazogu [ 11 ] = rtP . SpacecraftDynamics_attitudeRate [ 1 ] *
0.017453292519943295 ; rtX . hkkkjazogu [ 12 ] = rtP .
SpacecraftDynamics_attitudeRate [ 2 ] * 0.017453292519943295 ; rtX .
hkkkjazogu [ 13 ] = muDoubleScalarMin ( muDoubleScalarMax ( rtP .
SpacecraftDynamics_mass , rtP . SpacecraftDynamics_emptyMass ) , rtP .
SpacecraftDynamics_fullMass ) ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "TargetAttitude" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "TargetAttitude" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "hohmannTransfer/Attitude controller/Attitude Profile"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "TargetAttitude" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 4 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. owdomrfbzv . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"05e28b34-b3ca-4950-8f2e-752bbb0e8496" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . owdomrfbzv . AQHandles , hDT , & srcInfo ) ; if ( rtDW . owdomrfbzv .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . owdomrfbzv . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . owdomrfbzv
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . owdomrfbzv . AQHandles ,
ssGetTaskTime ( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
owdomrfbzv . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
owdomrfbzv . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "hohmannTransfer/Position" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. jsu32xmjyl . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"4d8e6af8-6c44-4d3b-b360-cce82f09d548" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "m" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . jsu32xmjyl . AQHandles , hDT , & srcInfo ) ; if ( rtDW . jsu32xmjyl .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . jsu32xmjyl . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
jsu32xmjyl . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . jsu32xmjyl .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . jsu32xmjyl . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . jsu32xmjyl . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . jsu32xmjyl . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . jsu32xmjyl . AQHandles , 1 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "hohmannTransfer/Attitude" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 4 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. b3gciis4ho . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"50433d25-4fa3-4ed7-8966-aea00323cfc6" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . b3gciis4ho . AQHandles , hDT , & srcInfo ) ; if ( rtDW . b3gciis4ho .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . b3gciis4ho . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
b3gciis4ho . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . b3gciis4ho .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . b3gciis4ho . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . b3gciis4ho . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . b3gciis4ho . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . b3gciis4ho . AQHandles , 2 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } rtDW . fjn2bnhyci = 0 ; rtDW .
ld3yg5jcxp = 0 ; rtDW . hjghnpuor3 = 0 ; rtDW . kwunuqciq1 = 0 ; rtDW .
cw3hlepmld = 0 ; gb0wkodlsi ( rtS ) ; gb0wkodlsi ( rtS ) ; gb0wkodlsi ( rtS )
; rtDW . hoalbnfsar = - 1 ; rtDW . glabhvsl3y = 0 ; gb0wkodlsi ( rtS ) ;
gb0wkodlsi ( rtS ) ; gb0wkodlsi ( rtS ) ; rtDW . b0fmwhbbrk = - 1 ; rtDW .
bsuceiev0a = 0 ; rtDW . mmwkq4lupp = 0 ; gb0wkodlsi ( rtS ) ; gb0wkodlsi (
rtS ) ; gb0wkodlsi ( rtS ) ; rtDW . jlhd4xqlsh = - 1 ; rtDW . mwdke3sfpt = 0
; rtDW . bkz3eaxsch = 0 ; gb0wkodlsi ( rtS ) ; gb0wkodlsi ( rtS ) ;
gb0wkodlsi ( rtS ) ; rtDW . hj11go0d1m = - 1 ; rtDW . li5j0khjhl = 0 ; rtDW .
n1xhajawvv = 0 ; MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T
kbzgvucs5l ; real_T nikazgwtln ; real_T fykbtv2qkj ; real_T g4inyy3en5 ;
real_T namtanbatn [ 4 ] ; real_T axkclusir1 ; real_T b3esak3oeo ; real_T
bmj40ruuza ; real_T ckjmj2gd4y ; real_T dco4lck5le_idx_0 ; real_T
dco4lck5le_idx_1 ; real_T dco4lck5le_idx_2 ; real_T dzh2tpafbj_idx_0 ; real_T
dzh2tpafbj_idx_1 ; real_T dzh2tpafbj_idx_2 ; real_T e4abopy5gl ; real_T
egqb2rgll2 ; real_T g0bnjb5mrq ; real_T g1dyzm0x3p ; real_T jyqosqviji ;
real_T klr2fw2fel ; real_T lxq2bbdrb2 ; real_T m1bnf41cgh ; real_T mqtekulc5j
; real_T pData_idx_0 ; real_T pData_idx_0_e ; real_T pData_idx_0_p ; real_T
pData_idx_1 ; real_T pData_idx_1_e ; real_T pData_idx_1_p ; real_T
pData_idx_2 ; real_T pData_idx_2_e ; real_T pData_idx_2_p ; real_T
pData_idx_3 ; real_T pData_idx_3_p ; real_T pData_idx_4 ; real_T pData_idx_5
; real_T pData_idx_6 ; real_T pData_idx_7 ; real_T pData_idx_8 ; real_T
pData_idx_8_p ; int8_T rtAction ; int8_T rtPrevAction ; boolean_T k2lzqdkbot
; boolean_T pcubkmdtr4 ; srClearBC ( rtDW . g4qhfioifem . oyspsrk4g1 ) ; if (
rtDW . jm1ravnfof ) { rtDW . jm1ravnfof = false ; e4abopy5gl = rtX .
hkkkjazogu [ 6 ] ; bmj40ruuza = rtX . hkkkjazogu [ 8 ] ; m1bnf41cgh = rtX .
hkkkjazogu [ 8 ] ; dco4lck5le_idx_2 = rtX . hkkkjazogu [ 7 ] ;
dzh2tpafbj_idx_0 = rtX . hkkkjazogu [ 7 ] ; rtX . hkkkjazogu [ 6 ] *= 1.0 /
muDoubleScalarSqrt ( ( ( rtX . hkkkjazogu [ 6 ] * rtX . hkkkjazogu [ 6 ] +
rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 7 ] ) + rtX . hkkkjazogu [ 8 ] *
rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] * rtX . hkkkjazogu [ 9 ] )
; rtX . hkkkjazogu [ 7 ] *= 1.0 / muDoubleScalarSqrt ( ( ( e4abopy5gl *
e4abopy5gl + rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 7 ] ) + rtX .
hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] * rtX .
hkkkjazogu [ 9 ] ) ; rtX . hkkkjazogu [ 8 ] *= 1.0 / muDoubleScalarSqrt ( ( (
e4abopy5gl * e4abopy5gl + dzh2tpafbj_idx_0 * dco4lck5le_idx_2 ) + rtX .
hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] * rtX .
hkkkjazogu [ 9 ] ) ; rtX . hkkkjazogu [ 9 ] *= 1.0 / muDoubleScalarSqrt ( ( (
e4abopy5gl * e4abopy5gl + dzh2tpafbj_idx_0 * dco4lck5le_idx_2 ) + m1bnf41cgh
* bmj40ruuza ) + rtX . hkkkjazogu [ 9 ] * rtX . hkkkjazogu [ 9 ] ) ; }
namtanbatn [ 0 ] = 1.0 / muDoubleScalarSqrt ( ( ( rtX . hkkkjazogu [ 6 ] *
rtX . hkkkjazogu [ 6 ] + rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 7 ] ) +
rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] *
rtX . hkkkjazogu [ 9 ] ) * rtX . hkkkjazogu [ 6 ] ; namtanbatn [ 1 ] = 1.0 /
muDoubleScalarSqrt ( ( ( rtX . hkkkjazogu [ 6 ] * rtX . hkkkjazogu [ 6 ] +
rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 7 ] ) + rtX . hkkkjazogu [ 8 ] *
rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] * rtX . hkkkjazogu [ 9 ] )
* rtX . hkkkjazogu [ 7 ] ; namtanbatn [ 2 ] = 1.0 / muDoubleScalarSqrt ( ( (
rtX . hkkkjazogu [ 6 ] * rtX . hkkkjazogu [ 6 ] + rtX . hkkkjazogu [ 7 ] *
rtX . hkkkjazogu [ 7 ] ) + rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] )
+ rtX . hkkkjazogu [ 9 ] * rtX . hkkkjazogu [ 9 ] ) * rtX . hkkkjazogu [ 8 ]
; namtanbatn [ 3 ] = 1.0 / muDoubleScalarSqrt ( ( ( rtX . hkkkjazogu [ 6 ] *
rtX . hkkkjazogu [ 6 ] + rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 7 ] ) +
rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] *
rtX . hkkkjazogu [ 9 ] ) * rtX . hkkkjazogu [ 9 ] ; e4abopy5gl = 1.0 /
muDoubleScalarSqrt ( ( ( rtX . hkkkjazogu [ 6 ] * rtX . hkkkjazogu [ 6 ] +
rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 7 ] ) + rtX . hkkkjazogu [ 8 ] *
rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] * rtX . hkkkjazogu [ 9 ] )
* rtX . hkkkjazogu [ 6 ] ; bmj40ruuza = 1.0 / muDoubleScalarSqrt ( ( ( rtX .
hkkkjazogu [ 6 ] * rtX . hkkkjazogu [ 6 ] + rtX . hkkkjazogu [ 7 ] * rtX .
hkkkjazogu [ 7 ] ) + rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] ) + rtX
. hkkkjazogu [ 9 ] * rtX . hkkkjazogu [ 9 ] ) * rtX . hkkkjazogu [ 7 ] ;
dzh2tpafbj_idx_1 = 1.0 / muDoubleScalarSqrt ( ( ( rtX . hkkkjazogu [ 6 ] *
rtX . hkkkjazogu [ 6 ] + rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 7 ] ) +
rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] *
rtX . hkkkjazogu [ 9 ] ) * rtX . hkkkjazogu [ 8 ] ; dzh2tpafbj_idx_2 = 1.0 /
muDoubleScalarSqrt ( ( ( rtX . hkkkjazogu [ 6 ] * rtX . hkkkjazogu [ 6 ] +
rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 7 ] ) + rtX . hkkkjazogu [ 8 ] *
rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] * rtX . hkkkjazogu [ 9 ] )
* rtX . hkkkjazogu [ 9 ] ; g1dyzm0x3p = rtX . hkkkjazogu [ 13 ] ; klr2fw2fel
= rtB . c1fk35dky4 ; if ( rtX . hkkkjazogu [ 13 ] < 1.000000000001 * rtP .
SpacecraftDynamics_emptyMass ) { klr2fw2fel = muDoubleScalarMax ( rtB .
c1fk35dky4 , 0.0 ) ; } else if ( rtX . hkkkjazogu [ 13 ] > 0.999999999999 *
rtP . SpacecraftDynamics_fullMass ) { klr2fw2fel = muDoubleScalarMin ( rtB .
c1fk35dky4 , 0.0 ) ; } if ( rtX . hkkkjazogu [ 13 ] < rtP .
SpacecraftDynamics_emptyMass ) { g1dyzm0x3p = rtP .
SpacecraftDynamics_emptyMass ; } else if ( rtX . hkkkjazogu [ 13 ] > rtP .
SpacecraftDynamics_fullMass ) { g1dyzm0x3p = rtP .
SpacecraftDynamics_fullMass ; } dco4lck5le_idx_2 = 1.0 / ( rtP .
SpacecraftDynamics_fullMass - rtP . SpacecraftDynamics_emptyMass ) * ( rtP .
SpacecraftDynamics_fullInertia [ 0 ] - rtP . SpacecraftDynamics_emptyInertia
[ 0 ] ) ; dco4lck5le_idx_0 = 1.0 / ( rtP . SpacecraftDynamics_fullMass - rtP
. SpacecraftDynamics_emptyMass ) * ( rtP . SpacecraftDynamics_fullInertia [ 3
] - rtP . SpacecraftDynamics_emptyInertia [ 3 ] ) ; pData_idx_6 = 1.0 / ( rtP
. SpacecraftDynamics_fullMass - rtP . SpacecraftDynamics_emptyMass ) * ( rtP
. SpacecraftDynamics_fullInertia [ 6 ] - rtP .
SpacecraftDynamics_emptyInertia [ 6 ] ) ; m1bnf41cgh = 1.0 / ( rtP .
SpacecraftDynamics_fullMass - rtP . SpacecraftDynamics_emptyMass ) * ( rtP .
SpacecraftDynamics_fullInertia [ 1 ] - rtP . SpacecraftDynamics_emptyInertia
[ 1 ] ) ; pData_idx_4 = 1.0 / ( rtP . SpacecraftDynamics_fullMass - rtP .
SpacecraftDynamics_emptyMass ) * ( rtP . SpacecraftDynamics_fullInertia [ 4 ]
- rtP . SpacecraftDynamics_emptyInertia [ 4 ] ) ; pData_idx_7 = 1.0 / ( rtP .
SpacecraftDynamics_fullMass - rtP . SpacecraftDynamics_emptyMass ) * ( rtP .
SpacecraftDynamics_fullInertia [ 7 ] - rtP . SpacecraftDynamics_emptyInertia
[ 7 ] ) ; dco4lck5le_idx_1 = 1.0 / ( rtP . SpacecraftDynamics_fullMass - rtP
. SpacecraftDynamics_emptyMass ) * ( rtP . SpacecraftDynamics_fullInertia [ 2
] - rtP . SpacecraftDynamics_emptyInertia [ 2 ] ) ; pData_idx_5 = 1.0 / ( rtP
. SpacecraftDynamics_fullMass - rtP . SpacecraftDynamics_emptyMass ) * ( rtP
. SpacecraftDynamics_fullInertia [ 5 ] - rtP .
SpacecraftDynamics_emptyInertia [ 5 ] ) ; pData_idx_8 = 1.0 / ( rtP .
SpacecraftDynamics_fullMass - rtP . SpacecraftDynamics_emptyMass ) * ( rtP .
SpacecraftDynamics_fullInertia [ 8 ] - rtP . SpacecraftDynamics_emptyInertia
[ 8 ] ) ; dzh2tpafbj_idx_0 = ( g1dyzm0x3p - rtP .
SpacecraftDynamics_emptyMass ) * dco4lck5le_idx_2 + rtP .
SpacecraftDynamics_emptyInertia [ 0 ] ; mqtekulc5j = ( g1dyzm0x3p - rtP .
SpacecraftDynamics_emptyMass ) * dco4lck5le_idx_0 + rtP .
SpacecraftDynamics_emptyInertia [ 3 ] ; jyqosqviji = ( g1dyzm0x3p - rtP .
SpacecraftDynamics_emptyMass ) * pData_idx_6 + rtP .
SpacecraftDynamics_emptyInertia [ 6 ] ; ckjmj2gd4y = ( g1dyzm0x3p - rtP .
SpacecraftDynamics_emptyMass ) * m1bnf41cgh + rtP .
SpacecraftDynamics_emptyInertia [ 1 ] ; lxq2bbdrb2 = ( g1dyzm0x3p - rtP .
SpacecraftDynamics_emptyMass ) * pData_idx_4 + rtP .
SpacecraftDynamics_emptyInertia [ 4 ] ; g0bnjb5mrq = ( g1dyzm0x3p - rtP .
SpacecraftDynamics_emptyMass ) * pData_idx_7 + rtP .
SpacecraftDynamics_emptyInertia [ 7 ] ; egqb2rgll2 = ( g1dyzm0x3p - rtP .
SpacecraftDynamics_emptyMass ) * dco4lck5le_idx_1 + rtP .
SpacecraftDynamics_emptyInertia [ 2 ] ; axkclusir1 = ( g1dyzm0x3p - rtP .
SpacecraftDynamics_emptyMass ) * pData_idx_5 + rtP .
SpacecraftDynamics_emptyInertia [ 5 ] ; pData_idx_8_p = ( g1dyzm0x3p - rtP .
SpacecraftDynamics_emptyMass ) * pData_idx_8 + rtP .
SpacecraftDynamics_emptyInertia [ 8 ] ; pData_idx_0 = 1.0 /
muDoubleScalarSqrt ( ( ( namtanbatn [ 0 ] * namtanbatn [ 0 ] + bmj40ruuza *
bmj40ruuza ) + dzh2tpafbj_idx_1 * dzh2tpafbj_idx_1 ) + dzh2tpafbj_idx_2 *
dzh2tpafbj_idx_2 ) * e4abopy5gl ; pData_idx_1 = 1.0 / muDoubleScalarSqrt ( (
( namtanbatn [ 0 ] * namtanbatn [ 0 ] + bmj40ruuza * bmj40ruuza ) +
dzh2tpafbj_idx_1 * dzh2tpafbj_idx_1 ) + dzh2tpafbj_idx_2 * dzh2tpafbj_idx_2 )
* - namtanbatn [ 1 ] ; pData_idx_2 = 1.0 / muDoubleScalarSqrt ( ( (
namtanbatn [ 0 ] * namtanbatn [ 0 ] + bmj40ruuza * bmj40ruuza ) +
dzh2tpafbj_idx_1 * dzh2tpafbj_idx_1 ) + dzh2tpafbj_idx_2 * dzh2tpafbj_idx_2 )
* - namtanbatn [ 2 ] ; pData_idx_3 = 1.0 / muDoubleScalarSqrt ( ( (
namtanbatn [ 0 ] * namtanbatn [ 0 ] + bmj40ruuza * bmj40ruuza ) +
dzh2tpafbj_idx_1 * dzh2tpafbj_idx_1 ) + dzh2tpafbj_idx_2 * dzh2tpafbj_idx_2 )
* - namtanbatn [ 3 ] ; pData_idx_0_p = 1.0 / muDoubleScalarSqrt ( ( (
e4abopy5gl * e4abopy5gl + namtanbatn [ 1 ] * namtanbatn [ 1 ] ) + namtanbatn
[ 2 ] * namtanbatn [ 2 ] ) + namtanbatn [ 3 ] * namtanbatn [ 3 ] ) *
namtanbatn [ 0 ] ; pData_idx_1_p = 1.0 / muDoubleScalarSqrt ( ( ( e4abopy5gl
* e4abopy5gl + namtanbatn [ 1 ] * namtanbatn [ 1 ] ) + namtanbatn [ 2 ] *
namtanbatn [ 2 ] ) + namtanbatn [ 3 ] * namtanbatn [ 3 ] ) * - bmj40ruuza ;
pData_idx_2_p = 1.0 / muDoubleScalarSqrt ( ( ( e4abopy5gl * e4abopy5gl +
namtanbatn [ 1 ] * namtanbatn [ 1 ] ) + namtanbatn [ 2 ] * namtanbatn [ 2 ] )
+ namtanbatn [ 3 ] * namtanbatn [ 3 ] ) * - dzh2tpafbj_idx_1 ; pData_idx_3_p
= 1.0 / muDoubleScalarSqrt ( ( ( e4abopy5gl * e4abopy5gl + namtanbatn [ 1 ] *
namtanbatn [ 1 ] ) + namtanbatn [ 2 ] * namtanbatn [ 2 ] ) + namtanbatn [ 3 ]
* namtanbatn [ 3 ] ) * - dzh2tpafbj_idx_2 ; pData_idx_0_e = pData_idx_0 * 0.0
- ( ( rtX . hkkkjazogu [ 0 ] * pData_idx_1_p + pData_idx_2_p * rtX .
hkkkjazogu [ 1 ] ) + pData_idx_3_p * rtX . hkkkjazogu [ 2 ] ) ; pData_idx_1_e
= ( rtX . hkkkjazogu [ 0 ] * pData_idx_0_p + pData_idx_1 * 0.0 ) + (
pData_idx_2_p * rtX . hkkkjazogu [ 2 ] - pData_idx_3_p * rtX . hkkkjazogu [ 1
] ) ; pData_idx_2_e = ( pData_idx_0_p * rtX . hkkkjazogu [ 1 ] + pData_idx_2
* 0.0 ) + ( rtX . hkkkjazogu [ 0 ] * pData_idx_3_p - pData_idx_1_p * rtX .
hkkkjazogu [ 2 ] ) ; b3esak3oeo = ( pData_idx_0_p * rtX . hkkkjazogu [ 2 ] +
pData_idx_3 * 0.0 ) + ( pData_idx_1_p * rtX . hkkkjazogu [ 1 ] - rtX .
hkkkjazogu [ 0 ] * pData_idx_2_p ) ; pData_idx_1_p = ( ( ( rtX . hkkkjazogu [
0 ] * pData_idx_0 + pData_idx_1_p * 0.0 ) + ( pData_idx_2 * rtX . hkkkjazogu
[ 2 ] - pData_idx_3 * rtX . hkkkjazogu [ 1 ] ) ) * e4abopy5gl + pData_idx_0_e
* namtanbatn [ 1 ] ) + ( pData_idx_2_e * dzh2tpafbj_idx_2 - dzh2tpafbj_idx_1
* b3esak3oeo ) ; pData_idx_2_p = ( ( ( pData_idx_0 * rtX . hkkkjazogu [ 1 ] +
pData_idx_2_p * 0.0 ) + ( rtX . hkkkjazogu [ 0 ] * pData_idx_3 - pData_idx_1
* rtX . hkkkjazogu [ 2 ] ) ) * e4abopy5gl + pData_idx_0_e * namtanbatn [ 2 ]
) + ( bmj40ruuza * b3esak3oeo - pData_idx_1_e * dzh2tpafbj_idx_2 ) ;
pData_idx_3 = ( ( ( pData_idx_0 * rtX . hkkkjazogu [ 2 ] + pData_idx_3_p *
0.0 ) + ( pData_idx_1 * rtX . hkkkjazogu [ 1 ] - rtX . hkkkjazogu [ 0 ] *
pData_idx_2 ) ) * e4abopy5gl + pData_idx_0_e * namtanbatn [ 3 ] ) + (
pData_idx_1_e * dzh2tpafbj_idx_1 - bmj40ruuza * pData_idx_2_e ) ; pData_idx_0
= 1.1958013254E+15 / muDoubleScalarPower ( muDoubleScalarSqrt ( (
pData_idx_1_p * pData_idx_1_p + pData_idx_2_p * pData_idx_2_p ) + pData_idx_3
* pData_idx_3 ) , 5.0 ) * pData_idx_1_p ; pData_idx_1 = 1.1958013254E+15 /
muDoubleScalarPower ( muDoubleScalarSqrt ( ( pData_idx_1_p * pData_idx_1_p +
pData_idx_2_p * pData_idx_2_p ) + pData_idx_3 * pData_idx_3 ) , 5.0 ) *
pData_idx_2_p ; pData_idx_2 = 1.1958013254E+15 / muDoubleScalarPower (
muDoubleScalarSqrt ( ( pData_idx_1_p * pData_idx_1_p + pData_idx_2_p *
pData_idx_2_p ) + pData_idx_3 * pData_idx_3 ) , 5.0 ) * pData_idx_3 ;
pData_idx_0_p = ( dzh2tpafbj_idx_0 * pData_idx_1_p + mqtekulc5j *
pData_idx_2_p ) + jyqosqviji * pData_idx_3 ; pData_idx_1_e = ( pData_idx_1_p
* ckjmj2gd4y + pData_idx_2_p * lxq2bbdrb2 ) + pData_idx_3 * g0bnjb5mrq ;
pData_idx_2_p = ( pData_idx_1_p * egqb2rgll2 + pData_idx_2_p * axkclusir1 ) +
pData_idx_3 * pData_idx_8_p ; b3esak3oeo = ( ( lxq2bbdrb2 * pData_idx_8_p -
g0bnjb5mrq * axkclusir1 ) * dzh2tpafbj_idx_0 - ( ckjmj2gd4y * pData_idx_8_p -
g0bnjb5mrq * egqb2rgll2 ) * mqtekulc5j ) + ( ckjmj2gd4y * axkclusir1 -
lxq2bbdrb2 * egqb2rgll2 ) * jyqosqviji ; pData_idx_0_e = ( dzh2tpafbj_idx_0 *
rtX . hkkkjazogu [ 10 ] + mqtekulc5j * rtX . hkkkjazogu [ 11 ] ) + jyqosqviji
* rtX . hkkkjazogu [ 12 ] ; pData_idx_1_p = ( rtX . hkkkjazogu [ 10 ] *
ckjmj2gd4y + rtX . hkkkjazogu [ 11 ] * lxq2bbdrb2 ) + g0bnjb5mrq * rtX .
hkkkjazogu [ 12 ] ; pData_idx_2_e = ( rtX . hkkkjazogu [ 10 ] * egqb2rgll2 +
rtX . hkkkjazogu [ 11 ] * axkclusir1 ) + rtX . hkkkjazogu [ 12 ] *
pData_idx_8_p ; dco4lck5le_idx_2 = ( ( ( pData_idx_1 * pData_idx_2_p -
pData_idx_1_e * pData_idx_2 ) + rtB . at5sbzwrhg [ 0 ] ) - ( (
dco4lck5le_idx_2 * klr2fw2fel * rtX . hkkkjazogu [ 10 ] + dco4lck5le_idx_0 *
klr2fw2fel * rtX . hkkkjazogu [ 11 ] ) + pData_idx_6 * klr2fw2fel * rtX .
hkkkjazogu [ 12 ] ) ) - ( rtX . hkkkjazogu [ 11 ] * pData_idx_2_e -
pData_idx_1_p * rtX . hkkkjazogu [ 12 ] ) ; m1bnf41cgh = ( ( ( pData_idx_0_p
* pData_idx_2 - pData_idx_0 * pData_idx_2_p ) + rtB . at5sbzwrhg [ 1 ] ) - (
( m1bnf41cgh * klr2fw2fel * rtX . hkkkjazogu [ 10 ] + pData_idx_4 *
klr2fw2fel * rtX . hkkkjazogu [ 11 ] ) + pData_idx_7 * klr2fw2fel * rtX .
hkkkjazogu [ 12 ] ) ) - ( pData_idx_0_e * rtX . hkkkjazogu [ 12 ] - rtX .
hkkkjazogu [ 10 ] * pData_idx_2_e ) ; dco4lck5le_idx_1 = ( ( ( pData_idx_0 *
pData_idx_1_e - pData_idx_0_p * pData_idx_1 ) + rtB . at5sbzwrhg [ 2 ] ) - (
( dco4lck5le_idx_1 * klr2fw2fel * rtX . hkkkjazogu [ 10 ] + pData_idx_5 *
klr2fw2fel * rtX . hkkkjazogu [ 11 ] ) + pData_idx_8 * klr2fw2fel * rtX .
hkkkjazogu [ 12 ] ) ) - ( rtX . hkkkjazogu [ 10 ] * pData_idx_1_p -
pData_idx_0_e * rtX . hkkkjazogu [ 11 ] ) ; pData_idx_0 = rtP .
Exhaustdirection_Value [ 0 ] * klr2fw2fel ; pData_idx_1 = rtP .
Exhaustdirection_Value [ 1 ] * klr2fw2fel ; pData_idx_2 = rtP .
Exhaustdirection_Value [ 2 ] * klr2fw2fel ; pData_idx_0_p = 1.0 /
muDoubleScalarSqrt ( ( ( e4abopy5gl * e4abopy5gl + - bmj40ruuza * -
bmj40ruuza ) + - dzh2tpafbj_idx_1 * - dzh2tpafbj_idx_1 ) + - dzh2tpafbj_idx_2
* - dzh2tpafbj_idx_2 ) * namtanbatn [ 0 ] ; pData_idx_1_p = 1.0 /
muDoubleScalarSqrt ( ( ( e4abopy5gl * e4abopy5gl + - bmj40ruuza * -
bmj40ruuza ) + - dzh2tpafbj_idx_1 * - dzh2tpafbj_idx_1 ) + - dzh2tpafbj_idx_2
* - dzh2tpafbj_idx_2 ) * bmj40ruuza ; pData_idx_2_p = 1.0 /
muDoubleScalarSqrt ( ( ( e4abopy5gl * e4abopy5gl + - bmj40ruuza * -
bmj40ruuza ) + - dzh2tpafbj_idx_1 * - dzh2tpafbj_idx_1 ) + - dzh2tpafbj_idx_2
* - dzh2tpafbj_idx_2 ) * dzh2tpafbj_idx_1 ; dco4lck5le_idx_0 = 1.0 /
muDoubleScalarSqrt ( ( ( e4abopy5gl * e4abopy5gl + - bmj40ruuza * -
bmj40ruuza ) + - dzh2tpafbj_idx_1 * - dzh2tpafbj_idx_1 ) + - dzh2tpafbj_idx_2
* - dzh2tpafbj_idx_2 ) * dzh2tpafbj_idx_2 ; pData_idx_0_e = 1.0 /
muDoubleScalarSqrt ( ( ( namtanbatn [ 0 ] * namtanbatn [ 0 ] + - bmj40ruuza *
- bmj40ruuza ) + - dzh2tpafbj_idx_1 * - dzh2tpafbj_idx_1 ) + -
dzh2tpafbj_idx_2 * - dzh2tpafbj_idx_2 ) * e4abopy5gl ; pData_idx_1_e = 1.0 /
muDoubleScalarSqrt ( ( ( namtanbatn [ 0 ] * namtanbatn [ 0 ] + - bmj40ruuza *
- bmj40ruuza ) + - dzh2tpafbj_idx_1 * - dzh2tpafbj_idx_1 ) + -
dzh2tpafbj_idx_2 * - dzh2tpafbj_idx_2 ) * bmj40ruuza ; pData_idx_2_e = 1.0 /
muDoubleScalarSqrt ( ( ( namtanbatn [ 0 ] * namtanbatn [ 0 ] + - bmj40ruuza *
- bmj40ruuza ) + - dzh2tpafbj_idx_1 * - dzh2tpafbj_idx_1 ) + -
dzh2tpafbj_idx_2 * - dzh2tpafbj_idx_2 ) * dzh2tpafbj_idx_1 ; pData_idx_3 =
1.0 / muDoubleScalarSqrt ( ( ( namtanbatn [ 0 ] * namtanbatn [ 0 ] + -
bmj40ruuza * - bmj40ruuza ) + - dzh2tpafbj_idx_1 * - dzh2tpafbj_idx_1 ) + -
dzh2tpafbj_idx_2 * - dzh2tpafbj_idx_2 ) * dzh2tpafbj_idx_2 ; klr2fw2fel =
pData_idx_0_p * 0.0 - ( ( pData_idx_0 * pData_idx_1_e + pData_idx_2_e *
pData_idx_1 ) + pData_idx_3 * pData_idx_2 ) ; pData_idx_6 = ( pData_idx_0 *
pData_idx_0_e + pData_idx_1_p * 0.0 ) + ( pData_idx_2_e * pData_idx_2 -
pData_idx_3 * pData_idx_1 ) ; pData_idx_4 = ( pData_idx_0_e * pData_idx_1 +
pData_idx_2_p * 0.0 ) + ( pData_idx_0 * pData_idx_3 - pData_idx_1_e *
pData_idx_2 ) ; pData_idx_3_p = ( pData_idx_0_e * pData_idx_2 +
dco4lck5le_idx_0 * 0.0 ) + ( pData_idx_1_e * pData_idx_1 - pData_idx_0 *
pData_idx_2_e ) ; rtB . nzurnwciyf [ 0 ] = rtX . hkkkjazogu [ 0 ] ; rtB .
nzurnwciyf [ 1 ] = rtX . hkkkjazogu [ 1 ] ; rtB . nzurnwciyf [ 2 ] = rtX .
hkkkjazogu [ 2 ] ; rtDW . hd4234m0gw [ 0 ] = ( ( ( ( pData_idx_0 *
pData_idx_0_p + pData_idx_1_e * 0.0 ) + ( pData_idx_2_p * pData_idx_2 -
dco4lck5le_idx_0 * pData_idx_1 ) ) * namtanbatn [ 0 ] + klr2fw2fel * -
bmj40ruuza ) + ( pData_idx_4 * - dzh2tpafbj_idx_2 - - dzh2tpafbj_idx_1 *
pData_idx_3_p ) ) / g1dyzm0x3p + - 3.986004418E+14 / ( ( ( rtX . hkkkjazogu [
0 ] * rtX . hkkkjazogu [ 0 ] + rtX . hkkkjazogu [ 1 ] * rtX . hkkkjazogu [ 1
] ) + rtX . hkkkjazogu [ 2 ] * rtX . hkkkjazogu [ 2 ] ) * muDoubleScalarSqrt
( ( rtX . hkkkjazogu [ 0 ] * rtX . hkkkjazogu [ 0 ] + rtX . hkkkjazogu [ 1 ]
* rtX . hkkkjazogu [ 1 ] ) + rtX . hkkkjazogu [ 2 ] * rtX . hkkkjazogu [ 2 ]
) ) * rtX . hkkkjazogu [ 0 ] ; rtDW . hd4234m0gw [ 1 ] = ( ( ( (
pData_idx_0_p * pData_idx_1 + pData_idx_2_e * 0.0 ) + ( pData_idx_0 *
dco4lck5le_idx_0 - pData_idx_1_p * pData_idx_2 ) ) * namtanbatn [ 0 ] +
klr2fw2fel * - dzh2tpafbj_idx_1 ) + ( - bmj40ruuza * pData_idx_3_p -
pData_idx_6 * - dzh2tpafbj_idx_2 ) ) / g1dyzm0x3p + - 3.986004418E+14 / ( ( (
rtX . hkkkjazogu [ 0 ] * rtX . hkkkjazogu [ 0 ] + rtX . hkkkjazogu [ 1 ] *
rtX . hkkkjazogu [ 1 ] ) + rtX . hkkkjazogu [ 2 ] * rtX . hkkkjazogu [ 2 ] )
* muDoubleScalarSqrt ( ( rtX . hkkkjazogu [ 0 ] * rtX . hkkkjazogu [ 0 ] +
rtX . hkkkjazogu [ 1 ] * rtX . hkkkjazogu [ 1 ] ) + rtX . hkkkjazogu [ 2 ] *
rtX . hkkkjazogu [ 2 ] ) ) * rtX . hkkkjazogu [ 1 ] ; rtDW . hd4234m0gw [ 2 ]
= ( ( ( ( pData_idx_0_p * pData_idx_2 + pData_idx_3 * 0.0 ) + ( pData_idx_1_p
* pData_idx_1 - pData_idx_0 * pData_idx_2_p ) ) * namtanbatn [ 0 ] +
klr2fw2fel * - dzh2tpafbj_idx_2 ) + ( pData_idx_6 * - dzh2tpafbj_idx_1 - -
bmj40ruuza * pData_idx_4 ) ) / g1dyzm0x3p + - 3.986004418E+14 / ( ( ( rtX .
hkkkjazogu [ 0 ] * rtX . hkkkjazogu [ 0 ] + rtX . hkkkjazogu [ 1 ] * rtX .
hkkkjazogu [ 1 ] ) + rtX . hkkkjazogu [ 2 ] * rtX . hkkkjazogu [ 2 ] ) *
muDoubleScalarSqrt ( ( rtX . hkkkjazogu [ 0 ] * rtX . hkkkjazogu [ 0 ] + rtX
. hkkkjazogu [ 1 ] * rtX . hkkkjazogu [ 1 ] ) + rtX . hkkkjazogu [ 2 ] * rtX
. hkkkjazogu [ 2 ] ) ) * rtX . hkkkjazogu [ 2 ] ; rtB . p3vyjcdubp [ 0 ] =
1.0 / muDoubleScalarSqrt ( ( ( namtanbatn [ 0 ] * namtanbatn [ 0 ] +
bmj40ruuza * bmj40ruuza ) + dzh2tpafbj_idx_1 * dzh2tpafbj_idx_1 ) +
dzh2tpafbj_idx_2 * dzh2tpafbj_idx_2 ) * namtanbatn [ 0 ] ; rtB . p3vyjcdubp [
1 ] = 1.0 / muDoubleScalarSqrt ( ( ( e4abopy5gl * e4abopy5gl + namtanbatn [ 1
] * namtanbatn [ 1 ] ) + namtanbatn [ 2 ] * namtanbatn [ 2 ] ) + namtanbatn [
3 ] * namtanbatn [ 3 ] ) * bmj40ruuza ; rtB . p3vyjcdubp [ 2 ] = 1.0 /
muDoubleScalarSqrt ( ( ( e4abopy5gl * e4abopy5gl + namtanbatn [ 1 ] *
namtanbatn [ 1 ] ) + namtanbatn [ 2 ] * namtanbatn [ 2 ] ) + namtanbatn [ 3 ]
* namtanbatn [ 3 ] ) * dzh2tpafbj_idx_1 ; rtB . p3vyjcdubp [ 3 ] = 1.0 /
muDoubleScalarSqrt ( ( ( e4abopy5gl * e4abopy5gl + namtanbatn [ 1 ] *
namtanbatn [ 1 ] ) + namtanbatn [ 2 ] * namtanbatn [ 2 ] ) + namtanbatn [ 3 ]
* namtanbatn [ 3 ] ) * dzh2tpafbj_idx_2 ; rtB . m0ioxdh3or [ 0 ] = rtX .
hkkkjazogu [ 10 ] * 57.295779513082323 ; rtB . m0ioxdh3or [ 1 ] = rtX .
hkkkjazogu [ 11 ] * 57.295779513082323 ; rtB . m0ioxdh3or [ 2 ] = rtX .
hkkkjazogu [ 12 ] * 57.295779513082323 ; rtDW . onc542rist [ 0 ] = ( (
lxq2bbdrb2 * pData_idx_8_p - g0bnjb5mrq * axkclusir1 ) * ( 1.0 / b3esak3oeo )
* dco4lck5le_idx_2 + ( mqtekulc5j * pData_idx_8_p - jyqosqviji * axkclusir1 )
* ( 1.0 / b3esak3oeo ) * m1bnf41cgh ) + ( mqtekulc5j * g0bnjb5mrq -
jyqosqviji * lxq2bbdrb2 ) * ( 1.0 / b3esak3oeo ) * dco4lck5le_idx_1 ; rtDW .
onc542rist [ 1 ] = ( ( ckjmj2gd4y * pData_idx_8_p - g0bnjb5mrq * egqb2rgll2 )
* ( 1.0 / b3esak3oeo ) * dco4lck5le_idx_2 + ( dzh2tpafbj_idx_0 *
pData_idx_8_p - jyqosqviji * egqb2rgll2 ) * ( 1.0 / b3esak3oeo ) * m1bnf41cgh
) + ( dzh2tpafbj_idx_0 * g0bnjb5mrq - jyqosqviji * ckjmj2gd4y ) * ( 1.0 /
b3esak3oeo ) * dco4lck5le_idx_1 ; rtDW . onc542rist [ 2 ] = ( ( ckjmj2gd4y *
axkclusir1 - lxq2bbdrb2 * egqb2rgll2 ) * ( 1.0 / b3esak3oeo ) *
dco4lck5le_idx_2 + ( dzh2tpafbj_idx_0 * axkclusir1 - mqtekulc5j * egqb2rgll2
) * ( 1.0 / b3esak3oeo ) * m1bnf41cgh ) + ( dzh2tpafbj_idx_0 * lxq2bbdrb2 -
mqtekulc5j * ckjmj2gd4y ) * ( 1.0 / b3esak3oeo ) * dco4lck5le_idx_1 ; rtY .
hwdkmahxje [ 0 ] = rtB . nzurnwciyf [ 0 ] ; rtY . hwdkmahxje [ 1 ] = rtB .
nzurnwciyf [ 1 ] ; rtY . hwdkmahxje [ 2 ] = rtB . nzurnwciyf [ 2 ] ; rtY .
ahjfqn40yh [ 0 ] = rtB . p3vyjcdubp [ 0 ] ; rtY . ahjfqn40yh [ 1 ] = rtB .
p3vyjcdubp [ 1 ] ; rtY . ahjfqn40yh [ 2 ] = rtB . p3vyjcdubp [ 2 ] ; rtY .
ahjfqn40yh [ 3 ] = rtB . p3vyjcdubp [ 3 ] ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { { if ( rtDW . jsu32xmjyl . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . jsu32xmjyl . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . nzurnwciyf [ 0 ] + 0 ) ; } } { if ( rtDW . b3gciis4ho .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . b3gciis4ho .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . p3vyjcdubp [ 0 ] +
0 ) ; } } rtDW . kcjmwir3mt = ( ssGetTaskTime ( rtS , 1 ) >= rtP . t1 + rtP .
burnDuration1 ) ; if ( rtDW . kcjmwir3mt == 1 ) { g1dyzm0x3p = rtP .
Pointingcommand_YFinal ; } else { g1dyzm0x3p = rtP . Pointingcommand_Y0 ; }
rtDW . kynjefawrl = ( ssGetTaskTime ( rtS , 1 ) >= rtP . t1 + rtP .
burnDuration1 ) ; if ( rtDW . kynjefawrl == 1 ) { klr2fw2fel = rtP .
Pointingcommand_YFinal_j0uizzisgh ; } else { klr2fw2fel = rtP .
Pointingcommand_Y0_lnsmjwn4r0 ; } rtB . dakutnsmfw [ 0 ] = rtP .
deltav1Direction [ 0 ] * g1dyzm0x3p + rtP . deltav2Direction [ 0 ] *
klr2fw2fel ; rtB . dakutnsmfw [ 1 ] = rtP . deltav1Direction [ 1 ] *
g1dyzm0x3p + rtP . deltav2Direction [ 1 ] * klr2fw2fel ; rtB . dakutnsmfw [ 2
] = rtP . deltav1Direction [ 2 ] * g1dyzm0x3p + rtP . deltav2Direction [ 2 ]
* klr2fw2fel ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) && ssIsSampleHit ( rtS ,
2 , 0 ) ) { dco4lck5le_idx_0 = rtB . dakutnsmfw [ 0 ] ; dco4lck5le_idx_1 =
rtB . dakutnsmfw [ 1 ] ; dco4lck5le_idx_2 = rtB . dakutnsmfw [ 2 ] ;
g1dyzm0x3p = ( ( rtB . p3vyjcdubp [ 0 ] * rtB . p3vyjcdubp [ 0 ] + rtB .
p3vyjcdubp [ 1 ] * rtB . p3vyjcdubp [ 1 ] ) + rtB . p3vyjcdubp [ 2 ] * rtB .
p3vyjcdubp [ 2 ] ) + rtB . p3vyjcdubp [ 3 ] * rtB . p3vyjcdubp [ 3 ] ;
e4abopy5gl = - rtB . p3vyjcdubp [ 2 ] / g1dyzm0x3p ; bmj40ruuza = rtB .
p3vyjcdubp [ 0 ] / g1dyzm0x3p ; b3esak3oeo = - rtB . p3vyjcdubp [ 1 ] /
g1dyzm0x3p ; g1dyzm0x3p = - rtB . p3vyjcdubp [ 3 ] / g1dyzm0x3p ; m1bnf41cgh
= ( ( bmj40ruuza * bmj40ruuza + b3esak3oeo * b3esak3oeo ) + e4abopy5gl *
e4abopy5gl ) + g1dyzm0x3p * g1dyzm0x3p ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( rtDW . ld3yg5jcxp != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
ld3yg5jcxp = 0 ; } klr2fw2fel = muDoubleScalarSqrt ( m1bnf41cgh ) ; } else if
( m1bnf41cgh < 0.0 ) { klr2fw2fel = - muDoubleScalarSqrt ( muDoubleScalarAbs
( m1bnf41cgh ) ) ; rtDW . ld3yg5jcxp = 1 ; } else { klr2fw2fel =
muDoubleScalarSqrt ( m1bnf41cgh ) ; } mqtekulc5j = e4abopy5gl / klr2fw2fel ;
jyqosqviji = - ( e4abopy5gl / klr2fw2fel ) ; ckjmj2gd4y = bmj40ruuza /
klr2fw2fel ; lxq2bbdrb2 = b3esak3oeo / klr2fw2fel ; g0bnjb5mrq = - (
b3esak3oeo / klr2fw2fel ) ; egqb2rgll2 = g1dyzm0x3p / klr2fw2fel ; axkclusir1
= - ( g1dyzm0x3p / klr2fw2fel ) ; g1dyzm0x3p = ( ( ckjmj2gd4y * ckjmj2gd4y +
g0bnjb5mrq * g0bnjb5mrq ) + jyqosqviji * jyqosqviji ) + axkclusir1 *
axkclusir1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . hjghnpuor3 != 0 )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
hjghnpuor3 = 0 ; } bmj40ruuza = muDoubleScalarSqrt ( g1dyzm0x3p ) ; } else if
( g1dyzm0x3p < 0.0 ) { bmj40ruuza = - muDoubleScalarSqrt ( muDoubleScalarAbs
( g1dyzm0x3p ) ) ; rtDW . hjghnpuor3 = 1 ; } else { bmj40ruuza =
muDoubleScalarSqrt ( g1dyzm0x3p ) ; } g1dyzm0x3p = - mqtekulc5j / bmj40ruuza
; klr2fw2fel = - egqb2rgll2 / bmj40ruuza ; b3esak3oeo = - lxq2bbdrb2 /
bmj40ruuza ; bmj40ruuza = ckjmj2gd4y / bmj40ruuza ; e4abopy5gl = ( ( ( rtP .
Constant_Value - g1dyzm0x3p * g1dyzm0x3p ) - klr2fw2fel * klr2fw2fel ) * rtP
. Gain2_Gain * dco4lck5le_idx_0 + ( b3esak3oeo * g1dyzm0x3p + bmj40ruuza *
klr2fw2fel ) * rtP . Gain_Gain * dco4lck5le_idx_1 ) + ( b3esak3oeo *
klr2fw2fel - bmj40ruuza * g1dyzm0x3p ) * rtP . Gain1_Gain * dco4lck5le_idx_2
; m1bnf41cgh = ( ( ( rtP . Constant_Value_cjycj0fc0i - b3esak3oeo *
b3esak3oeo ) - klr2fw2fel * klr2fw2fel ) * rtP . Gain2_Gain_adqwyb1fpl *
dco4lck5le_idx_1 + ( b3esak3oeo * g1dyzm0x3p - bmj40ruuza * klr2fw2fel ) *
rtP . Gain_Gain_eejksydamw * dco4lck5le_idx_0 ) + ( bmj40ruuza * b3esak3oeo +
g1dyzm0x3p * klr2fw2fel ) * rtP . Gain1_Gain_cpmrppil5o * dco4lck5le_idx_2 ;
dco4lck5le_idx_2 = ( ( b3esak3oeo * klr2fw2fel + bmj40ruuza * g1dyzm0x3p ) *
rtP . Gain_Gain_epxgvv3uaq * dco4lck5le_idx_0 + ( g1dyzm0x3p * klr2fw2fel -
bmj40ruuza * b3esak3oeo ) * rtP . Gain1_Gain_np3xblzbry * dco4lck5le_idx_1 )
+ ( ( rtP . Constant_Value_librqjr13m - b3esak3oeo * b3esak3oeo ) -
g1dyzm0x3p * g1dyzm0x3p ) * rtP . Gain2_Gain_aoe1z0xtjy * dco4lck5le_idx_2 ;
g1dyzm0x3p = ( rtP . AttitudeProfile_primaryAlignment [ 0 ] * e4abopy5gl +
rtP . AttitudeProfile_primaryAlignment [ 1 ] * m1bnf41cgh ) + rtP .
AttitudeProfile_primaryAlignment [ 2 ] * dco4lck5le_idx_2 ; klr2fw2fel = ( (
e4abopy5gl * e4abopy5gl + m1bnf41cgh * m1bnf41cgh ) + dco4lck5le_idx_2 *
dco4lck5le_idx_2 ) * rtB . fgdrtjrvrb ; if ( ssIsMajorTimeStep ( rtS ) ) { if
( rtDW . kwunuqciq1 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
kwunuqciq1 = 0 ; } b3esak3oeo = muDoubleScalarSqrt ( klr2fw2fel ) ; } else if
( klr2fw2fel < 0.0 ) { b3esak3oeo = - muDoubleScalarSqrt ( muDoubleScalarAbs
( klr2fw2fel ) ) ; rtDW . kwunuqciq1 = 1 ; } else { b3esak3oeo =
muDoubleScalarSqrt ( klr2fw2fel ) ; } g1dyzm0x3p += b3esak3oeo ; klr2fw2fel =
( rtP . AttitudeProfile_primaryAlignment [ 0 ] * e4abopy5gl + rtP .
AttitudeProfile_primaryAlignment [ 1 ] * m1bnf41cgh ) + rtP .
AttitudeProfile_primaryAlignment [ 2 ] * dco4lck5le_idx_2 ; b3esak3oeo = ( (
e4abopy5gl * e4abopy5gl + m1bnf41cgh * m1bnf41cgh ) + dco4lck5le_idx_2 *
dco4lck5le_idx_2 ) * rtB . b0dtdlqq2o ; if ( ssIsMajorTimeStep ( rtS ) ) { if
( rtDW . cw3hlepmld != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
cw3hlepmld = 0 ; } bmj40ruuza = muDoubleScalarSqrt ( b3esak3oeo ) ; } else if
( b3esak3oeo < 0.0 ) { bmj40ruuza = - muDoubleScalarSqrt ( muDoubleScalarAbs
( b3esak3oeo ) ) ; rtDW . cw3hlepmld = 1 ; } else { bmj40ruuza =
muDoubleScalarSqrt ( b3esak3oeo ) ; } klr2fw2fel /= bmj40ruuza ; rtPrevAction
= rtDW . hoalbnfsar ; if ( muDoubleScalarAbs ( klr2fw2fel + rtP . Bias_Bias )
< 1.0E-6 ) { rtAction = 0 ; } else if ( muDoubleScalarAbs ( klr2fw2fel + rtP
. Bias1_Bias ) < 1.0E-6 ) { rtAction = 1 ; } else { rtAction = 2 ; } rtDW .
hoalbnfsar = rtAction ; if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtPrevAction )
{ case 0 : gb0wkodlsi ( rtS ) ; break ; case 1 : gb0wkodlsi ( rtS ) ; break ;
case 2 : gb0wkodlsi ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { a3nqjrtyn4 ( rtS ) ; } g4qhfioife ( rtS , &
kbzgvucs5l , & rtP . ohrauwpzja ) ; srUpdateBC ( rtDW . ohrauwpzja .
oyspsrk4g1 ) ; break ; case 1 : if ( rtAction != rtPrevAction ) { a3nqjrtyn4
( rtS ) ; } g4qhfioife ( rtS , & kbzgvucs5l , & rtP . lmmxizmujp ) ;
srUpdateBC ( rtDW . lmmxizmujp . oyspsrk4g1 ) ; break ; default : if (
rtAction != rtPrevAction ) { a3nqjrtyn4 ( rtS ) ; } g4qhfioife ( rtS , &
kbzgvucs5l , & rtP . bsvvloijiw ) ; srUpdateBC ( rtDW . bsvvloijiw .
oyspsrk4g1 ) ; break ; } if ( kbzgvucs5l != rtP . CompareToConstant_const ) {
dzh2tpafbj_idx_0 = rtP . AttitudeProfile_primaryAlignment [ 1 ] *
dco4lck5le_idx_2 - rtP . AttitudeProfile_primaryAlignment [ 2 ] * m1bnf41cgh
; dzh2tpafbj_idx_1 = rtP . AttitudeProfile_primaryAlignment [ 2 ] *
e4abopy5gl - rtP . AttitudeProfile_primaryAlignment [ 0 ] * dco4lck5le_idx_2
; dzh2tpafbj_idx_2 = rtP . AttitudeProfile_primaryAlignment [ 0 ] *
m1bnf41cgh - rtP . AttitudeProfile_primaryAlignment [ 1 ] * e4abopy5gl ; }
else { dzh2tpafbj_idx_0 = rtB . m4a2cinl4g [ 0 ] ; dzh2tpafbj_idx_1 = rtB .
m4a2cinl4g [ 1 ] ; dzh2tpafbj_idx_2 = rtB . m4a2cinl4g [ 2 ] ; } klr2fw2fel =
( ( g1dyzm0x3p * g1dyzm0x3p + dzh2tpafbj_idx_0 * dzh2tpafbj_idx_0 ) +
dzh2tpafbj_idx_1 * dzh2tpafbj_idx_1 ) + dzh2tpafbj_idx_2 * dzh2tpafbj_idx_2 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . glabhvsl3y != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
glabhvsl3y = 0 ; } bmj40ruuza = muDoubleScalarSqrt ( klr2fw2fel ) ; } else if
( klr2fw2fel < 0.0 ) { bmj40ruuza = - muDoubleScalarSqrt ( muDoubleScalarAbs
( klr2fw2fel ) ) ; rtDW . glabhvsl3y = 1 ; } else { bmj40ruuza =
muDoubleScalarSqrt ( klr2fw2fel ) ; } g1dyzm0x3p /= bmj40ruuza ; klr2fw2fel =
dzh2tpafbj_idx_0 / bmj40ruuza ; b3esak3oeo = dzh2tpafbj_idx_1 / bmj40ruuza ;
bmj40ruuza = dzh2tpafbj_idx_2 / bmj40ruuza ; rtPrevAction = rtDW . b0fmwhbbrk
; if ( rtB . o3m5ydpoky < 1.0E-6 ) { rtAction = 0 ; } else if ( rtB .
edbbi1bfho < 1.0E-6 ) { rtAction = 1 ; } else { rtAction = 2 ; } rtDW .
b0fmwhbbrk = rtAction ; if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtPrevAction )
{ case 0 : gb0wkodlsi ( rtS ) ; break ; case 1 : gb0wkodlsi ( rtS ) ; break ;
case 2 : gb0wkodlsi ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { a3nqjrtyn4 ( rtS ) ; } g4qhfioife ( rtS , &
nikazgwtln , & rtP . g4qhfioifem ) ; srUpdateBC ( rtDW . g4qhfioifem .
oyspsrk4g1 ) ; break ; case 1 : if ( rtAction != rtPrevAction ) { a3nqjrtyn4
( rtS ) ; } g4qhfioife ( rtS , & nikazgwtln , & rtP . dyyezhnzbv ) ;
srUpdateBC ( rtDW . dyyezhnzbv . oyspsrk4g1 ) ; break ; default : if (
rtAction != rtPrevAction ) { a3nqjrtyn4 ( rtS ) ; } g4qhfioife ( rtS , &
nikazgwtln , & rtP . dhhhtxmmu2 ) ; srUpdateBC ( rtDW . dhhhtxmmu2 .
oyspsrk4g1 ) ; break ; } pcubkmdtr4 = ( nikazgwtln != rtP .
Constant_Value_j41k2nqkzj ) ; g0bnjb5mrq = ( ( ckjmj2gd4y * ckjmj2gd4y +
g0bnjb5mrq * g0bnjb5mrq ) + jyqosqviji * jyqosqviji ) + axkclusir1 *
axkclusir1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . bsuceiev0a != 0 )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
bsuceiev0a = 0 ; } jyqosqviji = muDoubleScalarSqrt ( g0bnjb5mrq ) ; } else if
( g0bnjb5mrq < 0.0 ) { jyqosqviji = - muDoubleScalarSqrt ( muDoubleScalarAbs
( g0bnjb5mrq ) ) ; rtDW . bsuceiev0a = 1 ; } else { jyqosqviji =
muDoubleScalarSqrt ( g0bnjb5mrq ) ; } mqtekulc5j = - mqtekulc5j / jyqosqviji
; egqb2rgll2 = - egqb2rgll2 / jyqosqviji ; g0bnjb5mrq = - lxq2bbdrb2 /
jyqosqviji ; jyqosqviji = ckjmj2gd4y / jyqosqviji ; ckjmj2gd4y = ( ( ( rtP .
Constant_Value_jbtr4ekwkp - mqtekulc5j * mqtekulc5j ) - egqb2rgll2 *
egqb2rgll2 ) * rtP . Gain2_Gain_ppedexqizl * rtP .
AttitudeProfile_secondaryConstraint [ 0 ] + ( g0bnjb5mrq * mqtekulc5j +
jyqosqviji * egqb2rgll2 ) * rtP . Gain_Gain_lncck3b1ht * rtP .
AttitudeProfile_secondaryConstraint [ 1 ] ) + ( g0bnjb5mrq * egqb2rgll2 -
jyqosqviji * mqtekulc5j ) * rtP . Gain1_Gain_fnkgiav0mq * rtP .
AttitudeProfile_secondaryConstraint [ 2 ] ; lxq2bbdrb2 = ( ( ( rtP .
Constant_Value_npk3m1qn01 - g0bnjb5mrq * g0bnjb5mrq ) - egqb2rgll2 *
egqb2rgll2 ) * rtP . Gain2_Gain_n3y32qpatl * rtP .
AttitudeProfile_secondaryConstraint [ 1 ] + ( g0bnjb5mrq * mqtekulc5j -
jyqosqviji * egqb2rgll2 ) * rtP . Gain_Gain_o5kojjvc1w * rtP .
AttitudeProfile_secondaryConstraint [ 0 ] ) + ( jyqosqviji * g0bnjb5mrq +
mqtekulc5j * egqb2rgll2 ) * rtP . Gain1_Gain_mr00sswlmu * rtP .
AttitudeProfile_secondaryConstraint [ 2 ] ; mqtekulc5j = ( ( g0bnjb5mrq *
egqb2rgll2 + jyqosqviji * mqtekulc5j ) * rtP . Gain_Gain_on1psqnxfu * rtP .
AttitudeProfile_secondaryConstraint [ 0 ] + ( mqtekulc5j * egqb2rgll2 -
jyqosqviji * g0bnjb5mrq ) * rtP . Gain1_Gain_lessdreht2 * rtP .
AttitudeProfile_secondaryConstraint [ 1 ] ) + ( ( rtP .
Constant_Value_hqi1uun2ik - g0bnjb5mrq * g0bnjb5mrq ) - mqtekulc5j *
mqtekulc5j ) * rtP . Gain2_Gain_nwpd5c3tm4 * rtP .
AttitudeProfile_secondaryConstraint [ 2 ] ; egqb2rgll2 = ( ( e4abopy5gl *
e4abopy5gl + m1bnf41cgh * m1bnf41cgh ) + dco4lck5le_idx_2 * dco4lck5le_idx_2
) * ( ( ckjmj2gd4y * ckjmj2gd4y + lxq2bbdrb2 * lxq2bbdrb2 ) + mqtekulc5j *
mqtekulc5j ) ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . mmwkq4lupp != 0
) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
mmwkq4lupp = 0 ; } jyqosqviji = muDoubleScalarSqrt ( egqb2rgll2 ) ; } else if
( egqb2rgll2 < 0.0 ) { jyqosqviji = - muDoubleScalarSqrt ( muDoubleScalarAbs
( egqb2rgll2 ) ) ; rtDW . mmwkq4lupp = 1 ; } else { jyqosqviji =
muDoubleScalarSqrt ( egqb2rgll2 ) ; } egqb2rgll2 = ( ( e4abopy5gl *
ckjmj2gd4y + m1bnf41cgh * lxq2bbdrb2 ) + dco4lck5le_idx_2 * mqtekulc5j ) /
jyqosqviji ; rtPrevAction = rtDW . jlhd4xqlsh ; if ( muDoubleScalarAbs (
egqb2rgll2 + rtP . Bias_Bias_jsr34fusav ) < 1.0E-6 ) { rtAction = 0 ; } else
if ( muDoubleScalarAbs ( egqb2rgll2 + rtP . Bias1_Bias_lnezxfgswe ) < 1.0E-6
) { rtAction = 1 ; } else { rtAction = 2 ; } rtDW . jlhd4xqlsh = rtAction ;
if ( rtPrevAction != rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; switch ( rtPrevAction ) { case 0 : gb0wkodlsi ( rtS ) ; break ;
case 1 : gb0wkodlsi ( rtS ) ; break ; case 2 : gb0wkodlsi ( rtS ) ; break ; }
} switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { a3nqjrtyn4
( rtS ) ; } g4qhfioife ( rtS , & fykbtv2qkj , & rtP . bz3ncnuprc ) ;
srUpdateBC ( rtDW . bz3ncnuprc . oyspsrk4g1 ) ; break ; case 1 : if (
rtAction != rtPrevAction ) { a3nqjrtyn4 ( rtS ) ; } g4qhfioife ( rtS , &
fykbtv2qkj , & rtP . ahruhtq5f1 ) ; srUpdateBC ( rtDW . ahruhtq5f1 .
oyspsrk4g1 ) ; break ; default : if ( rtAction != rtPrevAction ) { a3nqjrtyn4
( rtS ) ; } g4qhfioife ( rtS , & fykbtv2qkj , & rtP . hwyzimvcur ) ;
srUpdateBC ( rtDW . hwyzimvcur . oyspsrk4g1 ) ; break ; } k2lzqdkbot = (
fykbtv2qkj != rtP . Constant_Value_kydselcoow ) ; dzh2tpafbj_idx_0 =
m1bnf41cgh * mqtekulc5j - dco4lck5le_idx_2 * lxq2bbdrb2 ; dzh2tpafbj_idx_1 =
dco4lck5le_idx_2 * ckjmj2gd4y - e4abopy5gl * mqtekulc5j ; dzh2tpafbj_idx_2 =
e4abopy5gl * lxq2bbdrb2 - m1bnf41cgh * ckjmj2gd4y ; dco4lck5le_idx_0 =
dzh2tpafbj_idx_0 * m1bnf41cgh ; dco4lck5le_idx_1 = dzh2tpafbj_idx_0 *
dco4lck5le_idx_2 ; mqtekulc5j = dzh2tpafbj_idx_1 * e4abopy5gl ;
dzh2tpafbj_idx_0 = dzh2tpafbj_idx_1 * dco4lck5le_idx_2 - dzh2tpafbj_idx_2 *
m1bnf41cgh ; dzh2tpafbj_idx_1 = dzh2tpafbj_idx_2 * e4abopy5gl -
dco4lck5le_idx_1 ; dzh2tpafbj_idx_2 = dco4lck5le_idx_0 - mqtekulc5j ;
m1bnf41cgh = ( ( g1dyzm0x3p * g1dyzm0x3p + klr2fw2fel * klr2fw2fel ) +
b3esak3oeo * b3esak3oeo ) + bmj40ruuza * bmj40ruuza ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( rtDW . mwdke3sfpt != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
mwdke3sfpt = 0 ; } e4abopy5gl = muDoubleScalarSqrt ( m1bnf41cgh ) ; } else if
( m1bnf41cgh < 0.0 ) { e4abopy5gl = - muDoubleScalarSqrt ( muDoubleScalarAbs
( m1bnf41cgh ) ) ; rtDW . mwdke3sfpt = 1 ; } else { e4abopy5gl =
muDoubleScalarSqrt ( m1bnf41cgh ) ; } ckjmj2gd4y = b3esak3oeo / e4abopy5gl ;
mqtekulc5j = bmj40ruuza / e4abopy5gl ; lxq2bbdrb2 = klr2fw2fel / e4abopy5gl ;
dco4lck5le_idx_2 = g1dyzm0x3p / e4abopy5gl ; e4abopy5gl = ( ( ( rtP .
Constant_Value_gu4cnegeyw - ckjmj2gd4y * ckjmj2gd4y ) - mqtekulc5j *
mqtekulc5j ) * rtP . Gain2_Gain_iunbs3mto0 * dzh2tpafbj_idx_0 + ( lxq2bbdrb2
* ckjmj2gd4y + dco4lck5le_idx_2 * mqtekulc5j ) * rtP . Gain_Gain_cxjdjqmywq *
dzh2tpafbj_idx_1 ) + ( lxq2bbdrb2 * mqtekulc5j - dco4lck5le_idx_2 *
ckjmj2gd4y ) * rtP . Gain1_Gain_kgcnisrm24 * dzh2tpafbj_idx_2 ; m1bnf41cgh =
( ( ( rtP . Constant_Value_bmyicrezz3 - lxq2bbdrb2 * lxq2bbdrb2 ) -
mqtekulc5j * mqtekulc5j ) * rtP . Gain2_Gain_atw2ondk21 * dzh2tpafbj_idx_1 +
( lxq2bbdrb2 * ckjmj2gd4y - dco4lck5le_idx_2 * mqtekulc5j ) * rtP .
Gain_Gain_hrj3uk023h * dzh2tpafbj_idx_0 ) + ( dco4lck5le_idx_2 * lxq2bbdrb2 +
ckjmj2gd4y * mqtekulc5j ) * rtP . Gain1_Gain_ne3jwokduq * dzh2tpafbj_idx_2 ;
ckjmj2gd4y = ( ( lxq2bbdrb2 * mqtekulc5j + dco4lck5le_idx_2 * ckjmj2gd4y ) *
rtP . Gain_Gain_ja3rm2ptei * dzh2tpafbj_idx_0 + ( ckjmj2gd4y * mqtekulc5j -
dco4lck5le_idx_2 * lxq2bbdrb2 ) * rtP . Gain1_Gain_af1zmxkcba *
dzh2tpafbj_idx_1 ) + ( ( rtP . Constant_Value_blehlmxsbk - lxq2bbdrb2 *
lxq2bbdrb2 ) - ckjmj2gd4y * ckjmj2gd4y ) * rtP . Gain2_Gain_j3vsc1nqxy *
dzh2tpafbj_idx_2 ; dco4lck5le_idx_0 = e4abopy5gl ; dco4lck5le_idx_1 =
m1bnf41cgh ; mqtekulc5j = ( rtB . js4yiqrdiq [ 0 ] * e4abopy5gl + rtB .
js4yiqrdiq [ 1 ] * m1bnf41cgh ) + rtB . js4yiqrdiq [ 2 ] * ckjmj2gd4y ;
lxq2bbdrb2 = ( ( e4abopy5gl * e4abopy5gl + m1bnf41cgh * m1bnf41cgh ) +
ckjmj2gd4y * ckjmj2gd4y ) * rtB . hewskagvmt ; if ( ssIsMajorTimeStep ( rtS )
) { if ( rtDW . bkz3eaxsch != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
bkz3eaxsch = 0 ; } dco4lck5le_idx_2 = muDoubleScalarSqrt ( lxq2bbdrb2 ) ; }
else if ( lxq2bbdrb2 < 0.0 ) { dco4lck5le_idx_2 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( lxq2bbdrb2 ) ) ; rtDW . bkz3eaxsch = 1 ; } else {
dco4lck5le_idx_2 = muDoubleScalarSqrt ( lxq2bbdrb2 ) ; } mqtekulc5j /=
dco4lck5le_idx_2 ; rtPrevAction = rtDW . hj11go0d1m ; if ( muDoubleScalarAbs
( mqtekulc5j + rtP . Bias_Bias_hhpw4p034x ) < 1.0E-6 ) { rtAction = 0 ; }
else if ( muDoubleScalarAbs ( mqtekulc5j + rtP . Bias1_Bias_fa10flfbfk ) <
1.0E-6 ) { rtAction = 1 ; } else { rtAction = 2 ; } rtDW . hj11go0d1m =
rtAction ; if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtPrevAction )
{ case 0 : gb0wkodlsi ( rtS ) ; break ; case 1 : gb0wkodlsi ( rtS ) ; break ;
case 2 : gb0wkodlsi ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { a3nqjrtyn4 ( rtS ) ; } g4qhfioife ( rtS , &
g4inyy3en5 , & rtP . dgo50cfy4t ) ; srUpdateBC ( rtDW . dgo50cfy4t .
oyspsrk4g1 ) ; break ; case 1 : if ( rtAction != rtPrevAction ) { a3nqjrtyn4
( rtS ) ; } g4qhfioife ( rtS , & g4inyy3en5 , & rtP . ahwcaguhri ) ;
srUpdateBC ( rtDW . ahwcaguhri . oyspsrk4g1 ) ; break ; default : if (
rtAction != rtPrevAction ) { a3nqjrtyn4 ( rtS ) ; } g4qhfioife ( rtS , &
g4inyy3en5 , & rtP . ffvtff1vg1 ) ; srUpdateBC ( rtDW . ffvtff1vg1 .
oyspsrk4g1 ) ; break ; } if ( pcubkmdtr4 || k2lzqdkbot ) { namtanbatn [ 0 ] =
g1dyzm0x3p ; namtanbatn [ 1 ] = klr2fw2fel ; namtanbatn [ 2 ] = b3esak3oeo ;
namtanbatn [ 3 ] = bmj40ruuza ; } else { if ( g4inyy3en5 != rtP .
CompareToConstant_const_jr0taz5ops ) { dzh2tpafbj_idx_0 = rtB . js4yiqrdiq [
1 ] * ckjmj2gd4y - rtB . js4yiqrdiq [ 2 ] * m1bnf41cgh ; dzh2tpafbj_idx_1 =
rtB . js4yiqrdiq [ 2 ] * e4abopy5gl - rtB . js4yiqrdiq [ 0 ] * ckjmj2gd4y ;
dzh2tpafbj_idx_2 = rtB . js4yiqrdiq [ 0 ] * m1bnf41cgh - rtB . js4yiqrdiq [ 1
] * e4abopy5gl ; } else { dzh2tpafbj_idx_0 = rtB . b2vfeufs1i [ 0 ] ;
dzh2tpafbj_idx_1 = rtB . b2vfeufs1i [ 1 ] ; dzh2tpafbj_idx_2 = rtB .
b2vfeufs1i [ 2 ] ; } e4abopy5gl = ( ( e4abopy5gl * e4abopy5gl + m1bnf41cgh *
m1bnf41cgh ) + ckjmj2gd4y * ckjmj2gd4y ) * rtB . k2a22kk5dj ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . li5j0khjhl != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
li5j0khjhl = 0 ; } m1bnf41cgh = muDoubleScalarSqrt ( e4abopy5gl ) ; } else if
( e4abopy5gl < 0.0 ) { m1bnf41cgh = - muDoubleScalarSqrt ( muDoubleScalarAbs
( e4abopy5gl ) ) ; rtDW . li5j0khjhl = 1 ; } else { m1bnf41cgh =
muDoubleScalarSqrt ( e4abopy5gl ) ; } e4abopy5gl = ( ( rtB . js4yiqrdiq [ 0 ]
* dco4lck5le_idx_0 + rtB . js4yiqrdiq [ 1 ] * dco4lck5le_idx_1 ) + rtB .
js4yiqrdiq [ 2 ] * ckjmj2gd4y ) + m1bnf41cgh ; ckjmj2gd4y = ( ( e4abopy5gl *
e4abopy5gl + dzh2tpafbj_idx_0 * dzh2tpafbj_idx_0 ) + dzh2tpafbj_idx_1 *
dzh2tpafbj_idx_1 ) + dzh2tpafbj_idx_2 * dzh2tpafbj_idx_2 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . n1xhajawvv != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
n1xhajawvv = 0 ; } m1bnf41cgh = muDoubleScalarSqrt ( ckjmj2gd4y ) ; } else if
( ckjmj2gd4y < 0.0 ) { m1bnf41cgh = - muDoubleScalarSqrt ( muDoubleScalarAbs
( ckjmj2gd4y ) ) ; rtDW . n1xhajawvv = 1 ; } else { m1bnf41cgh =
muDoubleScalarSqrt ( ckjmj2gd4y ) ; } ckjmj2gd4y = dzh2tpafbj_idx_2 /
m1bnf41cgh ; mqtekulc5j = dzh2tpafbj_idx_1 / m1bnf41cgh ; lxq2bbdrb2 =
dzh2tpafbj_idx_0 / m1bnf41cgh ; e4abopy5gl /= m1bnf41cgh ; namtanbatn [ 0 ] =
( ( g1dyzm0x3p * e4abopy5gl - klr2fw2fel * lxq2bbdrb2 ) - b3esak3oeo *
mqtekulc5j ) - bmj40ruuza * ckjmj2gd4y ; namtanbatn [ 1 ] = ( ( g1dyzm0x3p *
lxq2bbdrb2 + klr2fw2fel * e4abopy5gl ) + b3esak3oeo * ckjmj2gd4y ) -
bmj40ruuza * mqtekulc5j ; namtanbatn [ 2 ] = ( ( g1dyzm0x3p * mqtekulc5j -
klr2fw2fel * ckjmj2gd4y ) + b3esak3oeo * e4abopy5gl ) + bmj40ruuza *
lxq2bbdrb2 ; namtanbatn [ 3 ] = ( ( g1dyzm0x3p * ckjmj2gd4y + klr2fw2fel *
mqtekulc5j ) - b3esak3oeo * lxq2bbdrb2 ) + bmj40ruuza * e4abopy5gl ; } { if (
rtDW . owdomrfbzv . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . owdomrfbzv . AQHandles , ssGetTaskTime ( rtS , 2 ) , ( char * ) &
namtanbatn [ 0 ] + 0 ) ; } } if ( namtanbatn [ 0 ] > 1.0 ) { g1dyzm0x3p = 1.0
; } else if ( namtanbatn [ 0 ] < - 1.0 ) { g1dyzm0x3p = - 1.0 ; } else {
g1dyzm0x3p = namtanbatn [ 0 ] ; } klr2fw2fel = muDoubleScalarAcos (
g1dyzm0x3p ) ; g1dyzm0x3p = rtP . Gain_Gain_aaczryqecx * klr2fw2fel ;
klr2fw2fel = muDoubleScalarMax ( muDoubleScalarSin ( klr2fw2fel ) , rtP .
Constant3_Value ) ; rtB . at5sbzwrhg [ 0 ] = ( 1.0 / klr2fw2fel * namtanbatn
[ 1 ] * g1dyzm0x3p - rtB . m0ioxdh3or [ 0 ] ) * rtP .
Innerloopcontroller_Gain ; rtB . at5sbzwrhg [ 1 ] = ( 1.0 / klr2fw2fel *
namtanbatn [ 2 ] * g1dyzm0x3p - rtB . m0ioxdh3or [ 1 ] ) * rtP .
Innerloopcontroller_Gain ; rtB . at5sbzwrhg [ 2 ] = ( 1.0 / klr2fw2fel *
namtanbatn [ 3 ] * g1dyzm0x3p - rtB . m0ioxdh3or [ 2 ] ) * rtP .
Innerloopcontroller_Gain ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW .
iiycts3fjl = ( ssGetTaskTime ( rtS , 1 ) >= rtP . t2 + rtP . burnDuration2 )
; rtDW . dl5mmzqld5 = ( ssGetTaskTime ( rtS , 1 ) >= rtP . t2 ) ; rtDW .
hkfawwla0v = ( ssGetTaskTime ( rtS , 1 ) >= rtP . t1 ) ; rtDW . bbxgelugbh =
( ssGetTaskTime ( rtS , 1 ) >= rtP . t1 + rtP . burnDuration1 ) ; if ( rtDW .
hkfawwla0v == 1 ) { g1dyzm0x3p = rtP . Ontime_YFinal_aqks3lcw4k ; } else {
g1dyzm0x3p = rtP . Ontime_Y0_of0gxorjhk ; } if ( rtDW . bbxgelugbh == 1 ) {
b3esak3oeo = rtP . Offtime_YFinal_phvdvlycqf ; } else { b3esak3oeo = rtP .
Offtime_Y0_a00myhhy4g ; } if ( rtDW . dl5mmzqld5 == 1 ) { klr2fw2fel = rtP .
Ontime_YFinal ; } else { klr2fw2fel = rtP . Ontime_Y0 ; } if ( rtDW .
iiycts3fjl == 1 ) { e4abopy5gl = rtP . Offtime_YFinal ; } else { e4abopy5gl =
rtP . Offtime_Y0 ; } rtB . c1fk35dky4 = ( ( g1dyzm0x3p - b3esak3oeo ) + (
klr2fw2fel - e4abopy5gl ) ) * - rtP . mDot ; } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID3 ( int_T tid ) { real_T azdofskry3_idx_0 ; real_T
azdofskry3_idx_2 ; real_T hsjzehf02q ; azdofskry3_idx_0 = ( rtP .
AttitudeProfile_primaryAlignment [ 0 ] * rtP .
AttitudeProfile_secondaryAlignment [ 0 ] + rtP .
AttitudeProfile_primaryAlignment [ 1 ] * rtP .
AttitudeProfile_secondaryAlignment [ 1 ] ) + rtP .
AttitudeProfile_primaryAlignment [ 2 ] * rtP .
AttitudeProfile_secondaryAlignment [ 2 ] ; hsjzehf02q = ( ( rtP .
AttitudeProfile_primaryAlignment [ 0 ] * rtP .
AttitudeProfile_primaryAlignment [ 0 ] + rtP .
AttitudeProfile_primaryAlignment [ 1 ] * rtP .
AttitudeProfile_primaryAlignment [ 1 ] ) + rtP .
AttitudeProfile_primaryAlignment [ 2 ] * rtP .
AttitudeProfile_primaryAlignment [ 2 ] ) * ( ( rtP .
AttitudeProfile_secondaryAlignment [ 0 ] * rtP .
AttitudeProfile_secondaryAlignment [ 0 ] + rtP .
AttitudeProfile_secondaryAlignment [ 1 ] * rtP .
AttitudeProfile_secondaryAlignment [ 1 ] ) + rtP .
AttitudeProfile_secondaryAlignment [ 2 ] * rtP .
AttitudeProfile_secondaryAlignment [ 2 ] ) ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( rtDW . fjn2bnhyci != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW
. fjn2bnhyci = 0 ; } hsjzehf02q = muDoubleScalarSqrt ( hsjzehf02q ) ; } else
if ( hsjzehf02q < 0.0 ) { hsjzehf02q = - muDoubleScalarSqrt (
muDoubleScalarAbs ( hsjzehf02q ) ) ; rtDW . fjn2bnhyci = 1 ; } else {
hsjzehf02q = muDoubleScalarSqrt ( hsjzehf02q ) ; } azdofskry3_idx_0 /=
hsjzehf02q ; rtB . o3m5ydpoky = muDoubleScalarAbs ( azdofskry3_idx_0 + rtP .
Bias_Bias_icxn3xlw3j ) ; rtB . edbbi1bfho = muDoubleScalarAbs (
azdofskry3_idx_0 + rtP . Bias1_Bias_l44fxvj4xh ) ; if ( rtP .
AttitudeProfile_primaryAlignment [ 0 ] > rtP .
AttitudeProfile_primaryAlignment [ 2 ] ) { azdofskry3_idx_0 = rtP .
Gain_Gain_kownsvaqu5 * rtP . AttitudeProfile_primaryAlignment [ 1 ] ;
hsjzehf02q = rtP . AttitudeProfile_primaryAlignment [ 0 ] ; azdofskry3_idx_2
= rtP . Constant_Value_ixf35js4xe ; } else { azdofskry3_idx_0 = rtP .
Constant1_Value ; hsjzehf02q = rtP . Gain2_Gain_ehq1npccz3 * rtP .
AttitudeProfile_primaryAlignment [ 2 ] ; azdofskry3_idx_2 = rtP .
AttitudeProfile_primaryAlignment [ 1 ] ; } rtB . m4a2cinl4g [ 0 ] = rtP .
AttitudeProfile_primaryAlignment [ 1 ] * azdofskry3_idx_2 - hsjzehf02q * rtP
. AttitudeProfile_primaryAlignment [ 2 ] ; rtB . m4a2cinl4g [ 1 ] =
azdofskry3_idx_0 * rtP . AttitudeProfile_primaryAlignment [ 2 ] - rtP .
AttitudeProfile_primaryAlignment [ 0 ] * azdofskry3_idx_2 ; rtB . m4a2cinl4g
[ 2 ] = rtP . AttitudeProfile_primaryAlignment [ 0 ] * hsjzehf02q -
azdofskry3_idx_0 * rtP . AttitudeProfile_primaryAlignment [ 1 ] ;
azdofskry3_idx_0 = rtP . AttitudeProfile_primaryAlignment [ 1 ] * rtP .
AttitudeProfile_secondaryAlignment [ 2 ] - rtP .
AttitudeProfile_secondaryAlignment [ 1 ] * rtP .
AttitudeProfile_primaryAlignment [ 2 ] ; hsjzehf02q = rtP .
AttitudeProfile_secondaryAlignment [ 0 ] * rtP .
AttitudeProfile_primaryAlignment [ 2 ] - rtP .
AttitudeProfile_primaryAlignment [ 0 ] * rtP .
AttitudeProfile_secondaryAlignment [ 2 ] ; azdofskry3_idx_2 = rtP .
AttitudeProfile_primaryAlignment [ 0 ] * rtP .
AttitudeProfile_secondaryAlignment [ 1 ] - rtP .
AttitudeProfile_secondaryAlignment [ 0 ] * rtP .
AttitudeProfile_primaryAlignment [ 1 ] ; rtB . js4yiqrdiq [ 0 ] = hsjzehf02q
* rtP . AttitudeProfile_primaryAlignment [ 2 ] - rtP .
AttitudeProfile_primaryAlignment [ 1 ] * azdofskry3_idx_2 ; rtB . js4yiqrdiq
[ 1 ] = rtP . AttitudeProfile_primaryAlignment [ 0 ] * azdofskry3_idx_2 -
azdofskry3_idx_0 * rtP . AttitudeProfile_primaryAlignment [ 2 ] ; rtB .
js4yiqrdiq [ 2 ] = azdofskry3_idx_0 * rtP . AttitudeProfile_primaryAlignment
[ 1 ] - rtP . AttitudeProfile_primaryAlignment [ 0 ] * hsjzehf02q ; rtB .
b0dtdlqq2o = ( rtP . AttitudeProfile_primaryAlignment [ 0 ] * rtP .
AttitudeProfile_primaryAlignment [ 0 ] + rtP .
AttitudeProfile_primaryAlignment [ 1 ] * rtP .
AttitudeProfile_primaryAlignment [ 1 ] ) + rtP .
AttitudeProfile_primaryAlignment [ 2 ] * rtP .
AttitudeProfile_primaryAlignment [ 2 ] ; rtB . fgdrtjrvrb = ( rtP .
AttitudeProfile_primaryAlignment [ 0 ] * rtP .
AttitudeProfile_primaryAlignment [ 0 ] + rtP .
AttitudeProfile_primaryAlignment [ 1 ] * rtP .
AttitudeProfile_primaryAlignment [ 1 ] ) + rtP .
AttitudeProfile_primaryAlignment [ 2 ] * rtP .
AttitudeProfile_primaryAlignment [ 2 ] ; rtB . hewskagvmt = ( rtB .
js4yiqrdiq [ 0 ] * rtB . js4yiqrdiq [ 0 ] + rtB . js4yiqrdiq [ 1 ] * rtB .
js4yiqrdiq [ 1 ] ) + rtB . js4yiqrdiq [ 2 ] * rtB . js4yiqrdiq [ 2 ] ; rtB .
k2a22kk5dj = ( rtB . js4yiqrdiq [ 0 ] * rtB . js4yiqrdiq [ 0 ] + rtB .
js4yiqrdiq [ 1 ] * rtB . js4yiqrdiq [ 1 ] ) + rtB . js4yiqrdiq [ 2 ] * rtB .
js4yiqrdiq [ 2 ] ; if ( rtB . js4yiqrdiq [ 0 ] > rtB . js4yiqrdiq [ 2 ] ) {
azdofskry3_idx_0 = rtP . Gain_Gain_byt1irk5mi * rtB . js4yiqrdiq [ 1 ] ;
hsjzehf02q = rtB . js4yiqrdiq [ 0 ] ; azdofskry3_idx_2 = rtP .
Constant_Value_iujxws1jti ; } else { azdofskry3_idx_0 = rtP .
Constant1_Value_j3skpjyilw ; hsjzehf02q = rtP . Gain2_Gain_oxh0cjyqdd * rtB .
js4yiqrdiq [ 2 ] ; azdofskry3_idx_2 = rtB . js4yiqrdiq [ 1 ] ; } rtB .
b2vfeufs1i [ 0 ] = rtB . js4yiqrdiq [ 1 ] * azdofskry3_idx_2 - hsjzehf02q *
rtB . js4yiqrdiq [ 2 ] ; rtB . b2vfeufs1i [ 1 ] = azdofskry3_idx_0 * rtB .
js4yiqrdiq [ 2 ] - rtB . js4yiqrdiq [ 0 ] * azdofskry3_idx_2 ; rtB .
b2vfeufs1i [ 2 ] = rtB . js4yiqrdiq [ 0 ] * hsjzehf02q - azdofskry3_idx_0 *
rtB . js4yiqrdiq [ 1 ] ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T
tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot * _rtXdot ;
int32_T mode ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; mode = 0 ; if ( rtX
. hkkkjazogu [ 13 ] < 1.000000000001 * rtP . SpacecraftDynamics_emptyMass ) {
mode = 1 ; } else if ( rtX . hkkkjazogu [ 13 ] > 0.999999999999 * rtP .
SpacecraftDynamics_fullMass ) { mode = 2 ; } _rtXdot -> hkkkjazogu [ 13 ] =
rtB . c1fk35dky4 ; if ( mode == 1 ) { _rtXdot -> hkkkjazogu [ 13 ] =
muDoubleScalarMax ( rtB . c1fk35dky4 , 0.0 ) ; } else if ( mode == 2 ) {
_rtXdot -> hkkkjazogu [ 13 ] = muDoubleScalarMin ( rtB . c1fk35dky4 , 0.0 ) ;
} _rtXdot -> hkkkjazogu [ 0 ] = rtX . hkkkjazogu [ 3 ] ; _rtXdot ->
hkkkjazogu [ 1 ] = rtX . hkkkjazogu [ 4 ] ; _rtXdot -> hkkkjazogu [ 2 ] = rtX
. hkkkjazogu [ 5 ] ; _rtXdot -> hkkkjazogu [ 3 ] = rtDW . hd4234m0gw [ 0 ] ;
_rtXdot -> hkkkjazogu [ 4 ] = rtDW . hd4234m0gw [ 1 ] ; _rtXdot -> hkkkjazogu
[ 5 ] = rtDW . hd4234m0gw [ 2 ] ; _rtXdot -> hkkkjazogu [ 6 ] = ( ( - rtX .
hkkkjazogu [ 10 ] * rtX . hkkkjazogu [ 7 ] + - rtX . hkkkjazogu [ 11 ] * rtX
. hkkkjazogu [ 8 ] ) + - rtX . hkkkjazogu [ 12 ] * rtX . hkkkjazogu [ 9 ] ) *
0.5 ; _rtXdot -> hkkkjazogu [ 7 ] = ( ( rtX . hkkkjazogu [ 6 ] * rtX .
hkkkjazogu [ 10 ] + rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 12 ] ) - rtX
. hkkkjazogu [ 9 ] * rtX . hkkkjazogu [ 11 ] ) * 0.5 ; _rtXdot -> hkkkjazogu
[ 8 ] = ( ( rtX . hkkkjazogu [ 6 ] * rtX . hkkkjazogu [ 11 ] - rtX .
hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 12 ] ) + rtX . hkkkjazogu [ 9 ] * rtX .
hkkkjazogu [ 10 ] ) * 0.5 ; _rtXdot -> hkkkjazogu [ 9 ] = ( ( rtX .
hkkkjazogu [ 6 ] * rtX . hkkkjazogu [ 12 ] + rtX . hkkkjazogu [ 7 ] * rtX .
hkkkjazogu [ 11 ] ) - rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 10 ] ) *
0.5 ; _rtXdot -> hkkkjazogu [ 10 ] = rtDW . onc542rist [ 0 ] ; _rtXdot ->
hkkkjazogu [ 11 ] = rtDW . onc542rist [ 1 ] ; _rtXdot -> hkkkjazogu [ 12 ] =
rtDW . onc542rist [ 2 ] ; } void MdlProjection ( void ) { real_T pData_idx_0
; real_T pData_idx_0_e ; real_T pData_idx_0_p ; real_T pData_idx_1 ; real_T
pData_idx_1_p ; pData_idx_0 = rtX . hkkkjazogu [ 6 ] ; pData_idx_1 = rtX .
hkkkjazogu [ 8 ] ; pData_idx_1_p = rtX . hkkkjazogu [ 8 ] ; pData_idx_0_p =
rtX . hkkkjazogu [ 7 ] ; pData_idx_0_e = rtX . hkkkjazogu [ 7 ] ; rtX .
hkkkjazogu [ 6 ] *= 1.0 / muDoubleScalarSqrt ( ( ( rtX . hkkkjazogu [ 6 ] *
rtX . hkkkjazogu [ 6 ] + rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [ 7 ] ) +
rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu [ 9 ] *
rtX . hkkkjazogu [ 9 ] ) ; rtX . hkkkjazogu [ 7 ] *= 1.0 / muDoubleScalarSqrt
( ( ( pData_idx_0 * pData_idx_0 + rtX . hkkkjazogu [ 7 ] * rtX . hkkkjazogu [
7 ] ) + rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] ) + rtX . hkkkjazogu
[ 9 ] * rtX . hkkkjazogu [ 9 ] ) ; rtX . hkkkjazogu [ 8 ] *= 1.0 /
muDoubleScalarSqrt ( ( ( pData_idx_0 * pData_idx_0 + pData_idx_0_e *
pData_idx_0_p ) + rtX . hkkkjazogu [ 8 ] * rtX . hkkkjazogu [ 8 ] ) + rtX .
hkkkjazogu [ 9 ] * rtX . hkkkjazogu [ 9 ] ) ; rtX . hkkkjazogu [ 9 ] *= 1.0 /
muDoubleScalarSqrt ( ( ( pData_idx_0 * pData_idx_0 + pData_idx_0_e *
pData_idx_0_p ) + pData_idx_1_p * pData_idx_1 ) + rtX . hkkkjazogu [ 9 ] *
rtX . hkkkjazogu [ 9 ] ) ; } void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ;
_rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV ->
dotfen2dvj = ssGetT ( rtS ) - ( rtP . t1 + rtP . burnDuration1 ) ; _rtZCSV ->
gtwguj24uw = ssGetT ( rtS ) - ( rtP . t1 + rtP . burnDuration1 ) ; _rtZCSV ->
f2o4fvgfai = ssGetT ( rtS ) - ( rtP . t2 + rtP . burnDuration2 ) ; _rtZCSV ->
iy1dwrul50 = ssGetT ( rtS ) - rtP . t2 ; _rtZCSV -> pyyz5awvv3 = ssGetT ( rtS
) - rtP . t1 ; _rtZCSV -> czguy1hb4b = ssGetT ( rtS ) - ( rtP . t1 + rtP .
burnDuration1 ) ; } void MdlTerminate ( void ) { { if ( rtDW . owdomrfbzv .
AQHandles ) { sdiTerminateStreaming ( & rtDW . owdomrfbzv . AQHandles ) ; } }
{ if ( rtDW . jsu32xmjyl . AQHandles ) { sdiTerminateStreaming ( & rtDW .
jsu32xmjyl . AQHandles ) ; } } { if ( rtDW . b3gciis4ho . AQHandles ) {
sdiTerminateStreaming ( & rtDW . b3gciis4ho . AQHandles ) ; } } } static void
mr_hohmannTransfer_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_hohmannTransfer_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_hohmannTransfer_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_hohmannTransfer_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_hohmannTransfer_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_hohmannTransfer_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_hohmannTransfer_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_hohmannTransfer_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_hohmannTransfer_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_hohmannTransfer_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_hohmannTransfer_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_hohmannTransfer_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_hohmannTransfer_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_hohmannTransfer_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_hohmannTransfer_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_hohmannTransfer_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_hohmannTransfer_GetDWork ( ) { static
const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
rtB ) , sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 37 ]
= { "rtDW.hd4234m0gw" , "rtDW.onc542rist" , "rtDW.kcjmwir3mt" ,
"rtDW.kynjefawrl" , "rtDW.iiycts3fjl" , "rtDW.dl5mmzqld5" , "rtDW.hkfawwla0v"
, "rtDW.bbxgelugbh" , "rtDW.ld3yg5jcxp" , "rtDW.hjghnpuor3" ,
"rtDW.kwunuqciq1" , "rtDW.cw3hlepmld" , "rtDW.hoalbnfsar" , "rtDW.glabhvsl3y"
, "rtDW.b0fmwhbbrk" , "rtDW.bsuceiev0a" , "rtDW.mmwkq4lupp" ,
"rtDW.jlhd4xqlsh" , "rtDW.mwdke3sfpt" , "rtDW.bkz3eaxsch" , "rtDW.hj11go0d1m"
, "rtDW.fjn2bnhyci" , "rtDW.li5j0khjhl" , "rtDW.n1xhajawvv" ,
"rtDW.jm1ravnfof" , "rtDW.ffvtff1vg1.oyspsrk4g1" ,
"rtDW.ahwcaguhri.oyspsrk4g1" , "rtDW.dgo50cfy4t.oyspsrk4g1" ,
"rtDW.bsvvloijiw.oyspsrk4g1" , "rtDW.lmmxizmujp.oyspsrk4g1" ,
"rtDW.ohrauwpzja.oyspsrk4g1" , "rtDW.hwyzimvcur.oyspsrk4g1" ,
"rtDW.ahruhtq5f1.oyspsrk4g1" , "rtDW.bz3ncnuprc.oyspsrk4g1" ,
"rtDW.dhhhtxmmu2.oyspsrk4g1" , "rtDW.dyyezhnzbv.oyspsrk4g1" ,
"rtDW.g4qhfioifem.oyspsrk4g1" , } ; mxArray * rtdwData = mxCreateStructMatrix
( 1 , 1 , 37 , rtdwDataFieldNames ) ; mr_hohmannTransfer_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( rtDW . hd4234m0gw ) , sizeof ( rtDW .
hd4234m0gw ) ) ; mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 1 , (
const void * ) & ( rtDW . onc542rist ) , sizeof ( rtDW . onc542rist ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) &
( rtDW . kcjmwir3mt ) , sizeof ( rtDW . kcjmwir3mt ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) &
( rtDW . kynjefawrl ) , sizeof ( rtDW . kynjefawrl ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) &
( rtDW . iiycts3fjl ) , sizeof ( rtDW . iiycts3fjl ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) &
( rtDW . dl5mmzqld5 ) , sizeof ( rtDW . dl5mmzqld5 ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) &
( rtDW . hkfawwla0v ) , sizeof ( rtDW . hkfawwla0v ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) &
( rtDW . bbxgelugbh ) , sizeof ( rtDW . bbxgelugbh ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) &
( rtDW . ld3yg5jcxp ) , sizeof ( rtDW . ld3yg5jcxp ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) &
( rtDW . hjghnpuor3 ) , sizeof ( rtDW . hjghnpuor3 ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * )
& ( rtDW . kwunuqciq1 ) , sizeof ( rtDW . kwunuqciq1 ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * )
& ( rtDW . cw3hlepmld ) , sizeof ( rtDW . cw3hlepmld ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * )
& ( rtDW . hoalbnfsar ) , sizeof ( rtDW . hoalbnfsar ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * )
& ( rtDW . glabhvsl3y ) , sizeof ( rtDW . glabhvsl3y ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * )
& ( rtDW . b0fmwhbbrk ) , sizeof ( rtDW . b0fmwhbbrk ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * )
& ( rtDW . bsuceiev0a ) , sizeof ( rtDW . bsuceiev0a ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * )
& ( rtDW . mmwkq4lupp ) , sizeof ( rtDW . mmwkq4lupp ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * )
& ( rtDW . jlhd4xqlsh ) , sizeof ( rtDW . jlhd4xqlsh ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * )
& ( rtDW . mwdke3sfpt ) , sizeof ( rtDW . mwdke3sfpt ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * )
& ( rtDW . bkz3eaxsch ) , sizeof ( rtDW . bkz3eaxsch ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * )
& ( rtDW . hj11go0d1m ) , sizeof ( rtDW . hj11go0d1m ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * )
& ( rtDW . fjn2bnhyci ) , sizeof ( rtDW . fjn2bnhyci ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * )
& ( rtDW . li5j0khjhl ) , sizeof ( rtDW . li5j0khjhl ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * )
& ( rtDW . n1xhajawvv ) , sizeof ( rtDW . n1xhajawvv ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * )
& ( rtDW . jm1ravnfof ) , sizeof ( rtDW . jm1ravnfof ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * )
& ( rtDW . ffvtff1vg1 . oyspsrk4g1 ) , sizeof ( rtDW . ffvtff1vg1 .
oyspsrk4g1 ) ) ; mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 26 ,
( const void * ) & ( rtDW . ahwcaguhri . oyspsrk4g1 ) , sizeof ( rtDW .
ahwcaguhri . oyspsrk4g1 ) ) ; mr_hohmannTransfer_cacheDataAsMxArray (
rtdwData , 0 , 27 , ( const void * ) & ( rtDW . dgo50cfy4t . oyspsrk4g1 ) ,
sizeof ( rtDW . dgo50cfy4t . oyspsrk4g1 ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * )
& ( rtDW . bsvvloijiw . oyspsrk4g1 ) , sizeof ( rtDW . bsvvloijiw .
oyspsrk4g1 ) ) ; mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 29 ,
( const void * ) & ( rtDW . lmmxizmujp . oyspsrk4g1 ) , sizeof ( rtDW .
lmmxizmujp . oyspsrk4g1 ) ) ; mr_hohmannTransfer_cacheDataAsMxArray (
rtdwData , 0 , 30 , ( const void * ) & ( rtDW . ohrauwpzja . oyspsrk4g1 ) ,
sizeof ( rtDW . ohrauwpzja . oyspsrk4g1 ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * )
& ( rtDW . hwyzimvcur . oyspsrk4g1 ) , sizeof ( rtDW . hwyzimvcur .
oyspsrk4g1 ) ) ; mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 32 ,
( const void * ) & ( rtDW . ahruhtq5f1 . oyspsrk4g1 ) , sizeof ( rtDW .
ahruhtq5f1 . oyspsrk4g1 ) ) ; mr_hohmannTransfer_cacheDataAsMxArray (
rtdwData , 0 , 33 , ( const void * ) & ( rtDW . bz3ncnuprc . oyspsrk4g1 ) ,
sizeof ( rtDW . bz3ncnuprc . oyspsrk4g1 ) ) ;
mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * )
& ( rtDW . dhhhtxmmu2 . oyspsrk4g1 ) , sizeof ( rtDW . dhhhtxmmu2 .
oyspsrk4g1 ) ) ; mr_hohmannTransfer_cacheDataAsMxArray ( rtdwData , 0 , 35 ,
( const void * ) & ( rtDW . dyyezhnzbv . oyspsrk4g1 ) , sizeof ( rtDW .
dyyezhnzbv . oyspsrk4g1 ) ) ; mr_hohmannTransfer_cacheDataAsMxArray (
rtdwData , 0 , 36 , ( const void * ) & ( rtDW . g4qhfioifem . oyspsrk4g1 ) ,
sizeof ( rtDW . g4qhfioifem . oyspsrk4g1 ) ) ; mxSetFieldByNumber ( ssDW , 0
, 1 , rtdwData ) ; } return ssDW ; } void mr_hohmannTransfer_SetDWork ( const
mxArray * ssDW ) { ( void ) ssDW ; mr_hohmannTransfer_restoreDataFromMxArray
( ( void * ) & ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . hd4234m0gw
) , rtdwData , 0 , 0 , sizeof ( rtDW . hd4234m0gw ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . onc542rist
) , rtdwData , 0 , 1 , sizeof ( rtDW . onc542rist ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . kcjmwir3mt
) , rtdwData , 0 , 2 , sizeof ( rtDW . kcjmwir3mt ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . kynjefawrl
) , rtdwData , 0 , 3 , sizeof ( rtDW . kynjefawrl ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . iiycts3fjl
) , rtdwData , 0 , 4 , sizeof ( rtDW . iiycts3fjl ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . dl5mmzqld5
) , rtdwData , 0 , 5 , sizeof ( rtDW . dl5mmzqld5 ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . hkfawwla0v
) , rtdwData , 0 , 6 , sizeof ( rtDW . hkfawwla0v ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . bbxgelugbh
) , rtdwData , 0 , 7 , sizeof ( rtDW . bbxgelugbh ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . ld3yg5jcxp
) , rtdwData , 0 , 8 , sizeof ( rtDW . ld3yg5jcxp ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . hjghnpuor3
) , rtdwData , 0 , 9 , sizeof ( rtDW . hjghnpuor3 ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . kwunuqciq1
) , rtdwData , 0 , 10 , sizeof ( rtDW . kwunuqciq1 ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . cw3hlepmld
) , rtdwData , 0 , 11 , sizeof ( rtDW . cw3hlepmld ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . hoalbnfsar
) , rtdwData , 0 , 12 , sizeof ( rtDW . hoalbnfsar ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . glabhvsl3y
) , rtdwData , 0 , 13 , sizeof ( rtDW . glabhvsl3y ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . b0fmwhbbrk
) , rtdwData , 0 , 14 , sizeof ( rtDW . b0fmwhbbrk ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . bsuceiev0a
) , rtdwData , 0 , 15 , sizeof ( rtDW . bsuceiev0a ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . mmwkq4lupp
) , rtdwData , 0 , 16 , sizeof ( rtDW . mmwkq4lupp ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . jlhd4xqlsh
) , rtdwData , 0 , 17 , sizeof ( rtDW . jlhd4xqlsh ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . mwdke3sfpt
) , rtdwData , 0 , 18 , sizeof ( rtDW . mwdke3sfpt ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . bkz3eaxsch
) , rtdwData , 0 , 19 , sizeof ( rtDW . bkz3eaxsch ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . hj11go0d1m
) , rtdwData , 0 , 20 , sizeof ( rtDW . hj11go0d1m ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . fjn2bnhyci
) , rtdwData , 0 , 21 , sizeof ( rtDW . fjn2bnhyci ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . li5j0khjhl
) , rtdwData , 0 , 22 , sizeof ( rtDW . li5j0khjhl ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . n1xhajawvv
) , rtdwData , 0 , 23 , sizeof ( rtDW . n1xhajawvv ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . jm1ravnfof
) , rtdwData , 0 , 24 , sizeof ( rtDW . jm1ravnfof ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . ffvtff1vg1
. oyspsrk4g1 ) , rtdwData , 0 , 25 , sizeof ( rtDW . ffvtff1vg1 . oyspsrk4g1
) ) ; mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ahwcaguhri . oyspsrk4g1 ) , rtdwData , 0 , 26 , sizeof ( rtDW . ahwcaguhri .
oyspsrk4g1 ) ) ; mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & (
rtDW . dgo50cfy4t . oyspsrk4g1 ) , rtdwData , 0 , 27 , sizeof ( rtDW .
dgo50cfy4t . oyspsrk4g1 ) ) ; mr_hohmannTransfer_restoreDataFromMxArray ( (
void * ) & ( rtDW . bsvvloijiw . oyspsrk4g1 ) , rtdwData , 0 , 28 , sizeof (
rtDW . bsvvloijiw . oyspsrk4g1 ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . lmmxizmujp
. oyspsrk4g1 ) , rtdwData , 0 , 29 , sizeof ( rtDW . lmmxizmujp . oyspsrk4g1
) ) ; mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ohrauwpzja . oyspsrk4g1 ) , rtdwData , 0 , 30 , sizeof ( rtDW . ohrauwpzja .
oyspsrk4g1 ) ) ; mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & (
rtDW . hwyzimvcur . oyspsrk4g1 ) , rtdwData , 0 , 31 , sizeof ( rtDW .
hwyzimvcur . oyspsrk4g1 ) ) ; mr_hohmannTransfer_restoreDataFromMxArray ( (
void * ) & ( rtDW . ahruhtq5f1 . oyspsrk4g1 ) , rtdwData , 0 , 32 , sizeof (
rtDW . ahruhtq5f1 . oyspsrk4g1 ) ) ;
mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW . bz3ncnuprc
. oyspsrk4g1 ) , rtdwData , 0 , 33 , sizeof ( rtDW . bz3ncnuprc . oyspsrk4g1
) ) ; mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dhhhtxmmu2 . oyspsrk4g1 ) , rtdwData , 0 , 34 , sizeof ( rtDW . dhhhtxmmu2 .
oyspsrk4g1 ) ) ; mr_hohmannTransfer_restoreDataFromMxArray ( ( void * ) & (
rtDW . dyyezhnzbv . oyspsrk4g1 ) , rtdwData , 0 , 35 , sizeof ( rtDW .
dyyezhnzbv . oyspsrk4g1 ) ) ; mr_hohmannTransfer_restoreDataFromMxArray ( (
void * ) & ( rtDW . g4qhfioifem . oyspsrk4g1 ) , rtdwData , 0 , 36 , sizeof (
rtDW . g4qhfioifem . oyspsrk4g1 ) ) ; } } mxArray *
mr_hohmannTransfer_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 14 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 7 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 442 ) ; ssSetNumBlockIO ( rtS , 15 ) ;
ssSetNumBlockParams ( rtS , 207 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 1925305032U ) ;
ssSetChecksumVal ( rtS , 1 , 1243318243U ) ; ssSetChecksumVal ( rtS , 2 ,
4267994078U ) ; ssSetChecksumVal ( rtS , 3 , 515748055U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { ssSetY ( rtS , & rtY ) ; ( void ) memset ( & rtY , 0 , sizeof (
ExtY ) ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( rtY ) , "YOut" ) ; } {
real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void )
memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) &
rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof
( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T *
) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo
) ; dtInfo . numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [
0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable
= & rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
hohmannTransfer_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "hohmannTransfer" ) ;
ssSetPath ( rtS , "hohmannTransfer" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 1.0E+6 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 14 } ;
static int_T rt_LoggedStateNumDimensions [ ] = { 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 14 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_LoggedStateLabels [ ] = { "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" } ; static boolean_T rt_LoggedStateCrossMdlRef
[ ] = { 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { {
0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 1 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 1 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . hkkkjazogu [ 0 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; { static void * rt_LoggedOutputSignalPtrs [ ] = { & rtY .
hwdkmahxje [ 0 ] , & rtY . ahjfqn40yh [ 0 ] } ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( ( LogSignalPtrsType ) rt_LoggedOutputSignalPtrs )
) ; } { static int_T rt_LoggedOutputWidths [ ] = { 3 , 4 } ; static int_T
rt_LoggedOutputNumDimensions [ ] = { 1 , 1 } ; static int_T
rt_LoggedOutputDimensions [ ] = { 3 , 4 } ; static boolean_T
rt_LoggedOutputIsVarDims [ ] = { 0 , 0 } ; static void *
rt_LoggedCurrentSignalDimensions [ ] = { ( NULL ) , ( NULL ) } ; static int_T
rt_LoggedCurrentSignalDimensionsSize [ ] = { 4 , 4 } ; static BuiltInDTypeId
rt_LoggedOutputDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedOutputComplexSignals [ ] = { 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingPreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) } ; static const
char_T * rt_LoggedOutputLabels_0 [ ] = { "" } ; static const char_T *
rt_LoggedOutputBlockNames_0 [ ] = { "hohmannTransfer/Position" } ; static
const char_T * rt_LoggedOutputLabels_1 [ ] = { "" } ; static const char_T *
rt_LoggedOutputBlockNames_1 [ ] = { "hohmannTransfer/Attitude" } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo rt_LoggedOutputSignalInfo [
] = { { 1 , rt_LoggedOutputWidths , rt_LoggedOutputNumDimensions ,
rt_LoggedOutputDimensions , rt_LoggedOutputIsVarDims ,
rt_LoggedCurrentSignalDimensions , rt_LoggedCurrentSignalDimensionsSize ,
rt_LoggedOutputDataTypeIds , rt_LoggedOutputComplexSignals , ( NULL ) ,
rt_LoggingPreprocessingFcnPtrs , { rt_LoggedOutputLabels_0 } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedOutputBlockNames_0 } , { ( NULL ) } , ( NULL )
, rt_RTWLogDataTypeConvert , ( NULL ) } , { 1 , rt_LoggedOutputWidths + 1 ,
rt_LoggedOutputNumDimensions + 1 , rt_LoggedOutputDimensions + 1 ,
rt_LoggedOutputIsVarDims + 1 , rt_LoggedCurrentSignalDimensions + 1 ,
rt_LoggedCurrentSignalDimensionsSize + 1 , rt_LoggedOutputDataTypeIds + 1 ,
rt_LoggedOutputComplexSignals + 1 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 1 , { rt_LoggedOutputLabels_1 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_1 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 1 , ( NULL ) } } ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , rt_LoggedOutputSignalInfo ) ;
rt_LoggedCurrentSignalDimensions [ 0 ] = & rt_LoggedOutputWidths [ 0 ] ;
rt_LoggedCurrentSignalDimensions [ 1 ] = & rt_LoggedOutputWidths [ 1 ] ; }
rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "tmp_raccel_yout1,tmp_raccel_yout2" )
; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , &
statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 14 ] ; static real_T absTol [ 14 ] = { 1.0E-10 , 1.0E-10
, 1.0E-10 , 1.0E-10 , 1.0E-10 , 1.0E-10 , 1.0E-10 , 1.0E-10 , 1.0E-10 ,
1.0E-10 , 1.0E-10 , 1.0E-10 , 1.0E-10 , 1.0E-10 } ; static uint8_T
absTolControl [ 14 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U } ; static real_T contStateJacPerturbBoundMinVec [ 14 ] ;
static real_T contStateJacPerturbBoundMaxVec [ 14 ] ; static uint8_T
zcAttributes [ 6 ] = { ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 2 ]
= { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . c1fk35dky4 ) , ( NULL ) }
, { 3 * sizeof ( real_T ) , ( char * ) ( & rtB . at5sbzwrhg [ 0 ] ) , ( NULL
) } } ; { int i ; for ( i = 0 ; i < 14 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 1.0E-10 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.1 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 2 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode45" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 6 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 6 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 1925305032U ) ; ssSetChecksumVal ( rtS , 1 ,
1243318243U ) ; ssSetChecksumVal ( rtS , 2 , 4267994078U ) ; ssSetChecksumVal
( rtS , 3 , 515748055U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 17 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = ( sysRanDType * ) &
rtDW . g4qhfioifem . oyspsrk4g1 ; systemRan [ 2 ] = ( sysRanDType * ) & rtDW
. dyyezhnzbv . oyspsrk4g1 ; systemRan [ 3 ] = ( sysRanDType * ) & rtDW .
dhhhtxmmu2 . oyspsrk4g1 ; systemRan [ 4 ] = ( sysRanDType * ) & rtDW .
bz3ncnuprc . oyspsrk4g1 ; systemRan [ 5 ] = ( sysRanDType * ) & rtDW .
ahruhtq5f1 . oyspsrk4g1 ; systemRan [ 6 ] = ( sysRanDType * ) & rtDW .
hwyzimvcur . oyspsrk4g1 ; systemRan [ 7 ] = ( sysRanDType * ) & rtDW .
ohrauwpzja . oyspsrk4g1 ; systemRan [ 8 ] = ( sysRanDType * ) & rtDW .
lmmxizmujp . oyspsrk4g1 ; systemRan [ 9 ] = ( sysRanDType * ) & rtDW .
bsvvloijiw . oyspsrk4g1 ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [
11 ] = ( sysRanDType * ) & rtDW . dgo50cfy4t . oyspsrk4g1 ; systemRan [ 12 ]
= ( sysRanDType * ) & rtDW . ahwcaguhri . oyspsrk4g1 ; systemRan [ 13 ] = (
sysRanDType * ) & rtDW . ffvtff1vg1 . oyspsrk4g1 ; systemRan [ 14 ] = &
rtAlwaysEnabled ; systemRan [ 15 ] = & rtAlwaysEnabled ; systemRan [ 16 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_hohmannTransfer_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_hohmannTransfer_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_hohmannTransfer_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID3 ( tid ) ; }
