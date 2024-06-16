#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "propagatorMain_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "propagatorMain.h"
#include "propagatorMain_capi.h"
#include "propagatorMain_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"propagatorMain/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 ,
0 , TARGET_STRING ( "propagatorMain/Integrator" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING ( "propagatorMain/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"propagatorMain/Earth-Moon Position" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0
, 1 } , { 4 , 0 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0
, 1 } , { 6 , 0 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 2 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 3 , 0 , 1 , 0
, 1 } , { 8 , 0 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "" ) , 4 , 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"propagatorMain/Maneuouvre logic (periapsis burn)/Subtract1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Gain1" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Divide" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Sum" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 13 , 0 , TARGET_STRING ( "propagatorMain/Thrust/Divide" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"propagatorMain/Thrust/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 15 , 0 , TARGET_STRING ( "propagatorMain/Thrust/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"propagatorMain/Thrust/Subtract" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 17 , 0 , TARGET_STRING (
"propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Divide3" ) ,
TARGET_STRING ( "sma" ) , 0 , 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Sqrt1" ) ,
TARGET_STRING ( "ecc" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Normalize Vector1/Math Function1" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Normalize Vector1/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 21 , 2 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Normalize Vector1/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Normalize Vector1/Sum of Elements" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Normalize Vector1/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"propagatorMain/Thrust/Normalize Vector/Math Function1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"propagatorMain/Thrust/Normalize Vector/Divide" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 26 , 3 , TARGET_STRING (
"propagatorMain/Thrust/Normalize Vector/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"propagatorMain/Thrust/Normalize Vector/Sum of Elements" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
"propagatorMain/Thrust/Normalize Vector/Switch" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
 "propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Normalize Vector/Math Function1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 1 , TARGET_STRING (
 "propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Normalize Vector/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 31 , TARGET_STRING ( "propagatorMain/No control"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 32 , TARGET_STRING (
"propagatorMain/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0
, 0 } , { 33 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "startDate" ) , 0 , 0 , 0 } , { 34 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "mass" ) , 0 , 0 , 0
} , { 35 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "emptyMass" ) , 0 , 0 , 0 } , { 36 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "fullMass" ) , 0 , 0
, 0 } , { 37 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "inertia" ) , 0 , 3 , 0 } , { 38 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "emptyInertia" ) , 0
, 3 , 0 } , { 39 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "fullInertia" ) , 0 , 3 , 0 } , { 40 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "semiMajorAxis" ) ,
0 , 0 , 0 } , { 41 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "eccentricity" ) , 0 , 0 , 0 } , { 42 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "inclination" ) , 0
, 0 , 0 } , { 43 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "raan" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "argPeriapsis" ) , 0
, 0 , 0 } , { 45 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "trueAnomaly" ) , 0 , 0 , 0 } , { 46 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "trueLon" ) , 0 , 0
, 0 } , { 47 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "argLat" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "lonPeriapsis" ) , 0
, 0 , 0 } , { 49 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "inertialPosition" ) , 0 , 4 , 0 } , { 50 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "inertialVelocity" )
, 0 , 4 , 0 } , { 51 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" )
, TARGET_STRING ( "fixedPosition" ) , 0 , 4 , 0 } , { 52 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "fixedVelocity" ) ,
0 , 4 , 0 } , { 53 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "attitude" ) , 0 , 5 , 0 } , { 54 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "attitudeRate" ) , 0
, 4 , 0 } , { 55 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customR" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "customF" ) , 0 , 0
, 0 } , { 57 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customMu" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "customJ2" ) , 0 , 0
, 0 } , { 59 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customOmega" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRA" ) , 0 , 0 , 0
} , { 61 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "cbRARate" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDec" ) , 0 , 0 ,
0 } , { 63 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "cbDecRate" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotAngle" ) , 0 ,
0 , 0 } , { 65 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "cbRotRate" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "F107ExtrapValue" )
, 0 , 0 , 0 } , { 67 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" )
, TARGET_STRING ( "MagneticIndexExtrapValue" ) , 0 , 0 , 0 } , { 68 ,
TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING (
"fluxFlags" ) , 0 , 6 , 0 } , { 69 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "dragCoeff" ) , 0 ,
0 , 0 } , { 70 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics" ) ,
TARGET_STRING ( "dragArea" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
"propagatorMain/Spacecraft Dynamics" ) , TARGET_STRING ( "customThirdBodyMu"
) , 0 , 0 , 0 } , { 72 , TARGET_STRING ( "propagatorMain/Spacecraft Dynamics"
) , TARGET_STRING ( "fluxPressure" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
"propagatorMain/Burn override/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 74 , TARGET_STRING (
"propagatorMain/Burn override/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 75 , TARGET_STRING (
"propagatorMain/Maneuouvre logic (periapsis burn)/Constant4" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 76 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Normalize Vector1" ) , TARGET_STRING
( "maxzero" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
"propagatorMain/Thrust/Normalize Vector" ) , TARGET_STRING ( "maxzero" ) , 0
, 0 , 0 } , { 78 , TARGET_STRING (
"propagatorMain/Maneuouvre logic (periapsis burn)/Compare To Zero/Constant" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
 "propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Normalize Vector"
) , TARGET_STRING ( "maxzero" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
"propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
"propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Constant1" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
"propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Constant2" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
"propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Constant3" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
"propagatorMain/Solar Radiation Pressure/Normalize Vector1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
"propagatorMain/Thrust/Normalize Vector/Constant" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
 "propagatorMain/Maneuouvre logic (periapsis burn)/Orb. elements/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 87 , 0 ,
TARGET_STRING ( "propagatorMain/x_icrf (m)" ) , TARGET_STRING ( "" ) , 1 , 0
, 1 , 0 , 1 } , { 88 , 0 , TARGET_STRING ( "propagatorMain/v_icrf (m//s)" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 1 } , { 89 , 0 , TARGET_STRING (
"propagatorMain/q_icrf2b" ) , TARGET_STRING ( "" ) , 3 , 0 , 2 , 0 , 1 } , {
90 , 0 , TARGET_STRING ( "propagatorMain/w_icrf2b (deg//s)" ) , TARGET_STRING
( "" ) , 4 , 0 , 1 , 0 , 1 } , { 91 , 0 , TARGET_STRING (
"propagatorMain/t_utc (JD)" ) , TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 1 } ,
{ 92 , 0 , TARGET_STRING ( "propagatorMain/m_used (kg)" ) , TARGET_STRING (
"" ) , 6 , 0 , 0 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
"propagatorMain/x_mn_icrf (m)" ) , TARGET_STRING ( "" ) , 7 , 0 , 1 , 0 , 1 }
, { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 94 , TARGET_STRING (
"area" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING ( "burnOverride" ) , 0 , 0 , 0
} , { 96 , TARGET_STRING ( "initMass" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING
( "mDot" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING ( "ref" ) , 0 , 0 , 0 } , {
99 , TARGET_STRING ( "thrust" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
"thrustingThreshold" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . nwgjkwa0ti , & rtB . gvzjviy51s ,
& rtB . ilxrm5djwj [ 0 ] , & rtB . hikecwvwoj [ 0 ] , & rtB . b5wz2e1q3r [ 0
] , & rtB . jmbluoj1sp [ 0 ] , & rtB . cfat5n44y1 [ 0 ] , & rtB . ci5ovszmua
[ 0 ] , & rtB . pubw20n1vt , & rtB . nx32abgkuf , & rtB . gjd2qdrduc [ 0 ] ,
& rtB . e21kjd2ys1 [ 0 ] , & rtB . lxdw5rcp2v [ 0 ] , & rtB . ailbretlt2 , &
rtB . fhromkhjvt , & rtB . mqyxknico2 [ 0 ] , & rtB . cia0zbdwmn , & rtB .
e1pp5d3wuf , & rtB . cthgspn3yi , & rtB . ivne3yql1p , & rtB . kc1seaev10 [ 0
] , & rtB . ewkfu1itsr [ 0 ] , & rtB . naoluu5k0n , & rtB . hwfackdzwr [ 0 ]
, & rtB . baic2rkjff , & rtB . hcmvpr3bah [ 0 ] , & rtB . molw1d13dq [ 0 ] ,
& rtB . eul1vo2rhf , & rtB . ez2krhh41l [ 0 ] , & rtB . jlyvf3hfdh , & rtB .
pyeksk1xwg [ 0 ] , & rtP . Nocontrol_Value [ 0 ] , & rtP . Integrator_IC , &
rtP . SpacecraftDynamics_startDate , & rtP . SpacecraftDynamics_mass , & rtP
. SpacecraftDynamics_emptyMass , & rtP . SpacecraftDynamics_fullMass , & rtP
. SpacecraftDynamics_inertia [ 0 ] , & rtP . SpacecraftDynamics_emptyInertia
[ 0 ] , & rtP . SpacecraftDynamics_fullInertia [ 0 ] , & rtP .
SpacecraftDynamics_semiMajorAxis , & rtP . SpacecraftDynamics_eccentricity ,
& rtP . SpacecraftDynamics_inclination , & rtP . SpacecraftDynamics_raan , &
rtP . SpacecraftDynamics_argPeriapsis , & rtP .
SpacecraftDynamics_trueAnomaly , & rtP . SpacecraftDynamics_trueLon , & rtP .
SpacecraftDynamics_argLat , & rtP . SpacecraftDynamics_lonPeriapsis , & rtP .
SpacecraftDynamics_inertialPosition [ 0 ] , & rtP .
SpacecraftDynamics_inertialVelocity [ 0 ] , & rtP .
SpacecraftDynamics_fixedPosition [ 0 ] , & rtP .
SpacecraftDynamics_fixedVelocity [ 0 ] , & rtP . SpacecraftDynamics_attitude
[ 0 ] , & rtP . SpacecraftDynamics_attitudeRate [ 0 ] , & rtP .
SpacecraftDynamics_customR , & rtP . SpacecraftDynamics_customF , & rtP .
SpacecraftDynamics_customMu , & rtP . SpacecraftDynamics_customJ2 , & rtP .
SpacecraftDynamics_customOmega , & rtP . SpacecraftDynamics_cbRA , & rtP .
SpacecraftDynamics_cbRARate , & rtP . SpacecraftDynamics_cbDec , & rtP .
SpacecraftDynamics_cbDecRate , & rtP . SpacecraftDynamics_cbRotAngle , & rtP
. SpacecraftDynamics_cbRotRate , & rtP . SpacecraftDynamics_F107ExtrapValue ,
& rtP . SpacecraftDynamics_MagneticIndexExtrapValue , & rtP .
SpacecraftDynamics_fluxFlags [ 0 ] , & rtP . SpacecraftDynamics_dragCoeff , &
rtP . SpacecraftDynamics_dragArea , & rtP .
SpacecraftDynamics_customThirdBodyMu , & rtP .
SpacecraftDynamics_fluxPressure , & rtP . Saturation_UpperSat , & rtP .
Saturation_LowerSat , & rtP . Constant4_Value , & rtP .
NormalizeVector1_maxzero , & rtP . NormalizeVector_maxzero_jpxndxsk21 , & rtP
. Constant_Value , & rtP . NormalizeVector_maxzero , & rtP .
Constant_Value_cddtuuqxak , & rtP . Constant1_Value , & rtP . Constant2_Value
, & rtP . Constant3_Value , & rtP . Constant_Value_argmstcefl , & rtP .
Constant_Value_foidw3bu40 , & rtP . Constant_Value_h1phomc44g , & rtY .
bck35osssf [ 0 ] , & rtY . hpbyogod4b [ 0 ] , & rtY . oyk5vzudyr [ 0 ] , &
rtY . nbqx155w4b [ 0 ] , & rtY . nmcvhu2gtw , & rtY . eek1p2hatd , & rtY .
iipt5qcaqw [ 0 ] , & rtP . area , & rtP . burnOverride , & rtP . initMass , &
rtP . mDot , & rtP . ref , & rtP . thrust , & rtP . thrustingThreshold , } ;
static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 1 , 1 , 3 , 1 , 4 , 1 , 3 , 3 , 1 , 3 , 1 , 4 , 1 , 23 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
( int8_T ) 0 , ( uint8_T ) 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 31 , rtRootInputs , 0 , rtRootOutputs , 7 }
, { rtBlockParameters , 56 , rtModelParameters , 7 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 2774035365U , 86531248U , 3808184636U ,
1764677076U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * propagatorMain_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void propagatorMain_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void propagatorMain_host_InitializeDataMapInfo (
propagatorMain_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
