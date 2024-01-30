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
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 1 , 0 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 2 , 0 , 1 ,
0 , 0 } , { 3 , 0 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "" ) , 4 , 0 , 2 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"propagatorSimple/Moon/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 5 , 0 , TARGET_STRING ( "propagatorSimple/Moon/Earth-Moon Position" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm/Normalize Vector/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 7 , 1 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm1/Normalize Vector/Math Function1" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 9 , 2 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm1/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 10 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "startDate" ) , 0
, 2 , 0 } , { 11 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "mass" ) , 0 , 2 , 0 } , { 12 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "emptyMass" ) , 0
, 2 , 0 } , { 13 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "fullMass" ) , 0 , 2 , 0 } , { 14 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "inertia" ) , 0 ,
3 , 0 } , { 15 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "emptyInertia" ) , 0 , 3 , 0 } , { 16 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "fullInertia" ) ,
0 , 3 , 0 } , { 17 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "semiMajorAxis" ) , 0 , 2 , 0 } , { 18 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "eccentricity" ) ,
0 , 2 , 0 } , { 19 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "inclination" ) , 0 , 2 , 0 } , { 20 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "raan" ) , 0 , 2 ,
0 } , { 21 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "argPeriapsis" ) , 0 , 2 , 0 } , { 22 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "trueAnomaly" ) ,
0 , 2 , 0 } , { 23 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "trueLon" ) , 0 , 2 , 0 } , { 24 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "argLat" ) , 0 , 2
, 0 } , { 25 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "lonPeriapsis" ) , 0 , 2 , 0 } , { 26 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "inertialPosition"
) , 0 , 4 , 0 } , { 27 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "inertialVelocity"
) , 0 , 4 , 0 } , { 28 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "fixedPosition" )
, 0 , 4 , 0 } , { 29 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics"
) , TARGET_STRING ( "fixedVelocity" ) , 0 , 4 , 0 } , { 30 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "attitude" ) , 0 ,
5 , 0 } , { 31 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "attitudeRate" ) , 0 , 4 , 0 } , { 32 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "customR" ) , 0 ,
2 , 0 } , { 33 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customF" ) , 0 , 2 , 0 } , { 34 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "customMu" ) , 0 ,
2 , 0 } , { 35 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customJ2" ) , 0 , 2 , 0 } , { 36 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "customOmega" ) ,
0 , 2 , 0 } , { 37 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" )
, TARGET_STRING ( "cbRA" ) , 0 , 2 , 0 } , { 38 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRARate" ) , 0 ,
2 , 0 } , { 39 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "cbDec" ) , 0 , 2 , 0 } , { 40 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDecRate" ) , 0
, 2 , 0 } , { 41 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "cbRotAngle" ) , 0 , 2 , 0 } , { 42 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotRate" ) , 0
, 2 , 0 } , { 43 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "F107ExtrapValue" ) , 0 , 2 , 0 } , { 44 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING (
"MagneticIndexExtrapValue" ) , 0 , 2 , 0 } , { 45 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "fluxFlags" ) , 0
, 6 , 0 } , { 46 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "dragCoeff" ) , 0 , 2 , 0 } , { 47 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "dragArea" ) , 0 ,
2 , 0 } , { 48 , TARGET_STRING ( "propagatorSimple/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customThirdBodyMu" ) , 0 , 2 , 0 } , { 49 , TARGET_STRING (
"propagatorSimple/Spacecraft Dynamics" ) , TARGET_STRING ( "fluxPressure" ) ,
0 , 2 , 0 } , { 50 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm/Normalize Vector" ) , TARGET_STRING
( "maxzero" ) , 0 , 2 , 0 } , { 51 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm1/Normalize Vector" ) , TARGET_STRING
( "maxzero" ) , 0 , 2 , 0 } , { 52 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 53 , TARGET_STRING (
"propagatorSimple/Moon/r over cubed norm1/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 54 , 0 ,
TARGET_STRING ( "propagatorSimple/x_icrf (m)" ) , TARGET_STRING ( "" ) , 1 ,
0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING ( "propagatorSimple/v_icrf (m//s)"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"propagatorSimple/q_icrf2b" ) , TARGET_STRING ( "" ) , 3 , 0 , 1 , 0 , 0 } ,
{ 57 , 0 , TARGET_STRING ( "propagatorSimple/t_UTC (JD)" ) , TARGET_STRING (
"" ) , 4 , 0 , 2 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"propagatorSimple/Moon position" ) , TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 0
} , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 59 , TARGET_STRING (
"area" ) , 0 , 2 , 0 } , { 60 , TARGET_STRING ( "ref" ) , 0 , 2 , 0 } , { 0 ,
( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . gws1dy0r5h [ 0 ] , & rtB .
i55c2f2ohg [ 0 ] , & rtB . g5bjapwpnv [ 0 ] , & rtB . dp0ykzxsqj , & rtB .
dl1iix2aol [ 0 ] , & rtB . jo5kxmwsrg [ 0 ] , & rtB . cm2sh5gwjs , & rtB .
axt2x3q3hy [ 0 ] , & rtB . idx0fxvvk3 , & rtB . mi1sjd5xhd [ 0 ] , & rtP .
SpacecraftDynamics_startDate , & rtP . SpacecraftDynamics_mass , & rtP .
SpacecraftDynamics_emptyMass , & rtP . SpacecraftDynamics_fullMass , & rtP .
SpacecraftDynamics_inertia [ 0 ] , & rtP . SpacecraftDynamics_emptyInertia [
0 ] , & rtP . SpacecraftDynamics_fullInertia [ 0 ] , & rtP .
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
SpacecraftDynamics_fluxPressure , & rtP . NormalizeVector_maxzero , & rtP .
NormalizeVector_maxzero_pntl1pmm30 , & rtP . Constant_Value , & rtP .
Constant_Value_ln0uq0icxn , & rtY . hs1awvyyae [ 0 ] , & rtY . ecbpwue5ri [ 0
] , & rtY . dtc4ufbswj [ 0 ] , & rtY . prj3orfldf , & rtY . fdj51o4wpi [ 0 ]
, & rtP . area , & rtP . ref , } ; static int32_T * rtVarDimsAddrMap [ ] = {
( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_SCALAR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 3 , 1 , 4 , 1 , 1 , 1 , 3 , 3 , 1 , 3 , 1 , 4 , 1 , 23 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 10 ,
rtRootInputs , 0 , rtRootOutputs , 5 } , { rtBlockParameters , 44 ,
rtModelParameters , 2 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 173308293U , 2939699539U , 392776264U , 601710810U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * propagatorSimple_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
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
