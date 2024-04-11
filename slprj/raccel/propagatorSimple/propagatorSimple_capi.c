#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "propagatorSimple_capi_host.h"
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
#include "propagatorSimple.h"
#include "propagatorSimple_capi.h"
#include "propagatorSimple_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"propagatorSimple/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1
, 0 , TARGET_STRING ( "propagatorSimple/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 2 , 0 , TARGET_STRING ( "propagatorSimple/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 ,
0 , 1 } , { 4 , 0 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 2 , 0 , 2 ,
0 , 1 } , { 6 , 0 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "" ) , 4 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"propagatorSimple/Moon/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } ,
{ 8 , 0 , TARGET_STRING ( "propagatorSimple/Moon/Earth-Moon Position" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"propagatorSimple/Normalize Vector/Math Function1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"propagatorSimple/Normalize Vector/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 1 } , { 11 , 3 , TARGET_STRING (
"propagatorSimple/Normalize Vector/Product" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"propagatorSimple/Normalize Vector/Sum of Elements" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"propagatorSimple/Normalize Vector/Switch" ) , TARGET_STRING ( "" ) , 0 , 0 ,
2 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"propagatorSimple/Periapsis burn/Sqrt" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 15 , 0 , TARGET_STRING ( "propagatorSimple/SRP/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"propagatorSimple/SRP/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 }
, { 17 , 0 , TARGET_STRING ( "propagatorSimple/SRP/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"propagatorSimple/SRP/Normalize Vector1/Math Function1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"propagatorSimple/SRP/Normalize Vector1/Divide" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 20 , 4 , TARGET_STRING (
"propagatorSimple/SRP/Normalize Vector1/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"propagatorSimple/SRP/Normalize Vector1/Sum of Elements" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"propagatorSimple/SRP/Normalize Vector1/Switch" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm/Normalize Vector/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 1 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm1/Normalize Vector/Math Function1" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 2 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm1/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 27 , TARGET_STRING (
"propagatorSimple/Normalize Vector" ) , TARGET_STRING ( "maxzero" ) , 0 , 0 ,
0 } , { 28 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "startDate" ) , 0 , 0 , 0 } , { 29 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "mass" ) , 0 , 0 ,
0 } , { 30 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "emptyMass" ) , 0 , 0 , 0 } , { 31 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "fullMass" ) , 0 ,
0 , 0 } , { 32 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "inertia" ) , 0 , 3 , 0 } , { 33 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "emptyInertia" ) ,
0 , 3 , 0 } , { 34 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "fullInertia" ) , 0 , 3 , 0 } , { 35 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "semiMajorAxis" )
, 0 , 0 , 0 } , { 36 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics"
) , TARGET_STRING ( "eccentricity" ) , 0 , 0 , 0 } , { 37 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "inclination" ) ,
0 , 0 , 0 } , { 38 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "raan" ) , 0 , 0 , 0 } , { 39 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "argPeriapsis" ) ,
0 , 0 , 0 } , { 40 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "trueAnomaly" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "trueLon" ) , 0 ,
0 , 0 } , { 42 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "argLat" ) , 0 , 0 , 0 } , { 43 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "lonPeriapsis" ) ,
0 , 0 , 0 } , { 44 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "inertialPosition" ) , 0 , 4 , 0 } , { 45 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "inertialVelocity"
) , 0 , 4 , 0 } , { 46 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "fixedPosition" )
, 0 , 4 , 0 } , { 47 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics"
) , TARGET_STRING ( "fixedVelocity" ) , 0 , 4 , 0 } , { 48 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "attitude" ) , 0 ,
5 , 0 } , { 49 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "attitudeRate" ) , 0 , 4 , 0 } , { 50 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "customR" ) , 0 ,
0 , 0 } , { 51 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customF" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "customMu" ) , 0 ,
0 , 0 } , { 53 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customJ2" ) , 0 , 0 , 0 } , { 54 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "customOmega" ) ,
0 , 0 , 0 } , { 55 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "cbRA" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRARate" ) , 0 ,
0 , 0 } , { 57 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "cbDec" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDecRate" ) , 0
, 0 , 0 } , { 59 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "cbRotAngle" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotRate" ) , 0
, 0 , 0 } , { 61 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "F107ExtrapValue" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING (
"MagneticIndexExtrapValue" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "fluxFlags" ) , 0
, 6 , 0 } , { 64 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "dragCoeff" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "dragArea" ) , 0 ,
0 , 0 } , { 66 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customThirdBodyMu" ) , 0 , 0 , 0 } , { 67 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "fluxPressure" ) ,
0 , 0 , 0 } , { 68 , TARGET_STRING (
"propagatorSimple/Burn override/Saturation" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 69 , TARGET_STRING (
"propagatorSimple/Burn override/Saturation" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 70 , TARGET_STRING (
"propagatorSimple/Normalize Vector/Constant" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 71 , TARGET_STRING ( "propagatorSimple/SRP/Normalize Vector1"
) , TARGET_STRING ( "maxzero" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm/Normalize Vector" ) , TARGET_STRING
( "maxzero" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm1/Normalize Vector" ) , TARGET_STRING
( "maxzero" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"propagatorSimple/SRP/Normalize Vector1/Constant" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 76 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm1/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 77 , 0 ,
TARGET_STRING ( "propagatorSimple/x_icrf (m)" ) , TARGET_STRING ( "" ) , 1 ,
0 , 1 , 0 , 1 } , { 78 , 0 , TARGET_STRING ( "propagatorSimple/v_icrf (m//s)"
) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 1 } , { 79 , 0 , TARGET_STRING (
"propagatorSimple/q_icrf2b" ) , TARGET_STRING ( "" ) , 3 , 0 , 2 , 0 , 1 } ,
{ 80 , 0 , TARGET_STRING ( "propagatorSimple/t_UTC (JD)" ) , TARGET_STRING (
"" ) , 4 , 0 , 0 , 0 , 1 } , { 81 , 0 , TARGET_STRING (
"propagatorSimple/Moon position" ) , TARGET_STRING ( "" ) , 5 , 0 , 1 , 0 , 1
} , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 82 , TARGET_STRING (
"area" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING ( "burnOverride" ) , 0 , 0 , 0
} , { 84 , TARGET_STRING ( "initMass" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING
( "ref" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING ( "thrust" ) , 0 , 0 , 0 } , {
87 , TARGET_STRING ( "thrustingThreshold" ) , 0 , 0 , 0 } , { 0 , ( NULL ) ,
0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . hatpfo3hlm , & rtB . dclql12erk [
0 ] , & rtB . jlqp2xyqeo [ 0 ] , & rtB . gws1dy0r5h [ 0 ] , & rtB .
i55c2f2ohg [ 0 ] , & rtB . g5bjapwpnv [ 0 ] , & rtB . dp0ykzxsqj , & rtB .
dl1iix2aol [ 0 ] , & rtB . jo5kxmwsrg [ 0 ] , & rtB . d3trp0rw53 , & rtB .
epczetk5lz [ 0 ] , & rtB . lyaqu2ph4w [ 0 ] , & rtB . mfuo45igdq , & rtB .
g34dv5hrtq [ 0 ] , & rtB . hpqqv1x55k , & rtB . l32o5rugbc [ 0 ] , & rtB .
i5rdyvyzhc [ 0 ] , & rtB . kjn2jj22l2 [ 0 ] , & rtB . aphuuotnaa , & rtB .
i1ocln1mfn [ 0 ] , & rtB . da0wq0ncuu [ 0 ] , & rtB . okd1bno3dz , & rtB .
fke25c2lg0 [ 0 ] , & rtB . cm2sh5gwjs , & rtB . axt2x3q3hy [ 0 ] , & rtB .
idx0fxvvk3 , & rtB . mi1sjd5xhd [ 0 ] , & rtP .
NormalizeVector_maxzero_afn2dyubdl , & rtP . SpacecraftDynamics_startDate , &
rtP . SpacecraftDynamics_mass , & rtP . SpacecraftDynamics_emptyMass , & rtP
. SpacecraftDynamics_fullMass , & rtP . SpacecraftDynamics_inertia [ 0 ] , &
rtP . SpacecraftDynamics_emptyInertia [ 0 ] , & rtP .
SpacecraftDynamics_fullInertia [ 0 ] , & rtP .
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
Saturation_LowerSat , & rtP . Constant_Value_pnqibv1hlu , & rtP .
NormalizeVector1_maxzero , & rtP . NormalizeVector_maxzero , & rtP .
NormalizeVector_maxzero_pntl1pmm30 , & rtP . Constant_Value_o4isoro52y , &
rtP . Constant_Value , & rtP . Constant_Value_ln0uq0icxn , & rtY . hs1awvyyae
[ 0 ] , & rtY . ecbpwue5ri [ 0 ] , & rtY . dtc4ufbswj [ 0 ] , & rtY .
prj3orfldf , & rtY . fdj51o4wpi [ 0 ] , & rtP . area , & rtP . burnOverride ,
& rtP . initMass , & rtP . ref , & rtP . thrust , & rtP . thrustingThreshold
, } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
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
mmiStatic = { { rtBlockSignals , 27 , rtRootInputs , 0 , rtRootOutputs , 5 }
, { rtBlockParameters , 50 , rtModelParameters , 6 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 1546992258U , 3800706779U , 621087585U ,
1314787068U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * propagatorSimple_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void propagatorSimple_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
* rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
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
void propagatorSimple_host_InitializeDataMapInfo (
propagatorSimple_host_DataMapInfo_T * dataMap , const char * path ) {
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
