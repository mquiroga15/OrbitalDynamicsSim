#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "propagator_capi_host.h"
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
#include "propagator.h"
#include "propagator_capi.h"
#include "propagator_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"propagator/Moon/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 ,
0 , TARGET_STRING ( "propagator/Moon/Earth-Moon Position" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"propagator/Normalize Vector/Math Function1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"propagator/Normalize Vector/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 4 , 3 , TARGET_STRING ( "propagator/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"propagator/Normalize Vector/Sum of Elements" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"propagator/Normalize Vector/Switch" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0
, 0 } , { 7 , 0 , TARGET_STRING ( "propagator/burn/Gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING ( "propagator/burn/Sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"propagator/controller/intertia?" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 10 , 0 , TARGET_STRING ( "propagator/controller/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 12 , 0 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" )
, TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 2 , 0 , 2 ,
0 , 0 } , { 14 , 0 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" )
, TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 4 , 0 , 1 ,
0 , 0 } , { 16 , 0 , TARGET_STRING (
"propagator/controller/Quaternion Inverse/Divide" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"propagator/controller/Quaternion Inverse/Divide1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"propagator/controller/Quaternion Inverse/Divide2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"propagator/controller/Quaternion Inverse/Divide3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"propagator/controller/Subsystem/Gain" ) , TARGET_STRING (
"DesiredWMagnitude" ) , 0 , 0 , 1 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"propagator/controller/Subsystem/Max" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 ,
0 , 0 } , { 22 , 0 , TARGET_STRING (
"propagator/controller/Subsystem/Divide1" ) , TARGET_STRING (
"DesiredWUnitVector" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"propagator/controller/Subsystem/Divide2" ) , TARGET_STRING ( "DesiredW" ) ,
0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"propagator/controller/Subsystem/Sin" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 ,
0 , 0 } , { 25 , 0 , TARGET_STRING (
"propagator/Moon/r over cubed norm/Normalize Vector/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 26 , 1 , TARGET_STRING (
"propagator/Moon/r over cubed norm/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"propagator/Moon/r over cubed norm1/Normalize Vector/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 28 , 2 , TARGET_STRING (
"propagator/Moon/r over cubed norm1/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/OR"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"propagator/controller/Quaternion Inverse/Quaternion Norm/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"propagator/controller/Quaternion Inverse/Quaternion Norm/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"propagator/controller/Quaternion Inverse/Quaternion Norm/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"propagator/controller/Quaternion Inverse/Quaternion Norm/Product3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"propagator/controller/Quaternion Inverse/Quaternion Norm/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 41 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Abs1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 42 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/is 180deg Rot"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 46 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 47 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 48 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/is 180deg Rot"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 50 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 103 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 106 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 108 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 113 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 116 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 121 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 122 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 124 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 125 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 126 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 127 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 128 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 130 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 131 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 133 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 134 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 135 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 136 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 137 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 138 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 139 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 140 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 141 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 142 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 143 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 144 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 145 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 146 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 147 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 148 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 149 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 150 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 151 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 152 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 153 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 154 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 155 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 156 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 157 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 158 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 159 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 160 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 161 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 162 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 163 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 164 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 165 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 166 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 167 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 168 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 169 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 170 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 171 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 172 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 173 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 174 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 175 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 176 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 177 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 178 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 179 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 180 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 181 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 182 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 183 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 184 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 185 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 186 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 187 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 188 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 189 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 190 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 191 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 192 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 193 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 194 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 195 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 196 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 197 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 198 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 199 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 200 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 201 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 202 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 203 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 204 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 205 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 206 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 207 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 208 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 209 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 210 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 211 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 212 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 213 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 214 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 215 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 216 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 217 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 218 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 219 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 220 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 221 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 222 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 223 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 224 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 225 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 226 , 13 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 227 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 228 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 229 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 230 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 231 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 232 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 233 , 17 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 234 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 235 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 236 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 237 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 238 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 239 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 240 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 241 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 242 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 243 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 244 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 245 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 246 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 247 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 248 , 13 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 249 , 13 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 250 , 13 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 251 , 13 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 252 , 13 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 253 , 13 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 254 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 255 , 17 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 256 , 17 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 257 , 17 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 258 , 17 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 259 , 17 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 260 , 17 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 261 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 262 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 263 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 264 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 265 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 266 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 267 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 268 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 269 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 270 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 271 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 272 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 273 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 274 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 275 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 276 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 277 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 278 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 279 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 280 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 281 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 282 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 283 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 284 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 285 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 286 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 287 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 288 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 289 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 290 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 291 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 292 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 293 , 0 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 294 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 295 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 296 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 297 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 298 , 18 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 299 , TARGET_STRING (
"propagator/Normalize Vector" ) , TARGET_STRING ( "maxzero" ) , 0 , 1 , 0 } ,
{ 300 , TARGET_STRING ( "propagator/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 301 , TARGET_STRING (
"propagator/burn/burn direction (b)" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 302 , TARGET_STRING (
"propagator/controller/Attitude Profile (Custom Tracking)" ) , TARGET_STRING
( "primaryAlignment" ) , 0 , 3 , 0 } , { 303 , TARGET_STRING (
"propagator/controller/Attitude Profile (Custom Tracking)" ) , TARGET_STRING
( "secondaryAlignment" ) , 0 , 3 , 0 } , { 304 , TARGET_STRING (
"propagator/controller/Attitude Profile (Custom Tracking)" ) , TARGET_STRING
( "secondaryConstraint" ) , 0 , 3 , 0 } , { 305 , TARGET_STRING (
"propagator/controller/intertia?" ) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 }
, { 306 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "startDate" ) , 0 , 1 , 0 } , { 307 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "mass" ) , 0 , 1 ,
0 } , { 308 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "emptyMass" ) , 0 , 1 , 0 } , { 309 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "fullMass" ) , 0 ,
1 , 0 } , { 310 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "inertia" ) , 0 , 4 , 0 } , { 311 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "emptyInertia" ) ,
0 , 4 , 0 } , { 312 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics"
) , TARGET_STRING ( "fullInertia" ) , 0 , 4 , 0 } , { 313 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "semiMajorAxis" )
, 0 , 1 , 0 } , { 314 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "eccentricity" ) ,
0 , 1 , 0 } , { 315 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics"
) , TARGET_STRING ( "inclination" ) , 0 , 1 , 0 } , { 316 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "raan" ) , 0 , 1 ,
0 } , { 317 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "argPeriapsis" ) , 0 , 1 , 0 } , { 318 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "trueAnomaly" ) ,
0 , 1 , 0 } , { 319 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics"
) , TARGET_STRING ( "trueLon" ) , 0 , 1 , 0 } , { 320 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "argLat" ) , 0 , 1
, 0 } , { 321 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "lonPeriapsis" ) , 0 , 1 , 0 } , { 322 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "inertialPosition"
) , 0 , 3 , 0 } , { 323 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "inertialVelocity"
) , 0 , 3 , 0 } , { 324 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "fixedPosition" )
, 0 , 3 , 0 } , { 325 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "fixedVelocity" )
, 0 , 3 , 0 } , { 326 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "attitude" ) , 0 ,
5 , 0 } , { 327 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "attitudeRate" ) , 0 , 3 , 0 } , { 328 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "customR" ) , 0 ,
1 , 0 } , { 329 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customF" ) , 0 , 1 , 0 } , { 330 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "customMu" ) , 0 ,
1 , 0 } , { 331 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customJ2" ) , 0 , 1 , 0 } , { 332 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "customOmega" ) ,
0 , 1 , 0 } , { 333 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics"
) , TARGET_STRING ( "cbRA" ) , 0 , 1 , 0 } , { 334 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRARate" ) , 0 ,
1 , 0 } , { 335 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "cbDec" ) , 0 , 1 , 0 } , { 336 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDecRate" ) , 0
, 1 , 0 } , { 337 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" )
, TARGET_STRING ( "cbRotAngle" ) , 0 , 1 , 0 } , { 338 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotRate" ) , 0
, 1 , 0 } , { 339 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" )
, TARGET_STRING ( "F107ExtrapValue" ) , 0 , 1 , 0 } , { 340 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"MagneticIndexExtrapValue" ) , 0 , 1 , 0 } , { 341 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "fluxFlags" ) , 0
, 6 , 0 } , { 342 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" )
, TARGET_STRING ( "dragCoeff" ) , 0 , 1 , 0 } , { 343 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "dragArea" ) , 0 ,
1 , 0 } , { 344 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "customThirdBodyMu" ) , 0 , 1 , 0 } , { 345 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"reflectivityCoeff" ) , 0 , 1 , 0 } , { 346 , TARGET_STRING (
"propagator/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "srpArea" ) , 0 ,
1 , 0 } , { 347 , TARGET_STRING ( "propagator/plant/Spacecraft Dynamics" ) ,
TARGET_STRING ( "fluxPressure" ) , 0 , 1 , 0 } , { 348 , TARGET_STRING (
"propagator/Moon/r over cubed norm/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 1 , 0 } , { 349 , TARGET_STRING (
"propagator/Moon/r over cubed norm1/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 1 , 0 } , { 350 , TARGET_STRING (
"propagator/controller/Subsystem/Constant3" ) , TARGET_STRING ( "Value" ) , 0
, 1 , 0 } , { 351 , TARGET_STRING ( "propagator/controller/Subsystem/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 352 , TARGET_STRING (
"propagator/Moon/r over cubed norm/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 353 , TARGET_STRING (
"propagator/Moon/r over cubed norm1/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 354 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 355 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 356 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 357 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 358 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 359 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 360 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 361 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 362 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 363 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 364 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 365 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 366 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 367 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 368 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 369 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 370 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 371 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 372 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 373 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 374 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 375 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 376 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 377 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 378 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 379 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 380 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 381 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 382 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 383 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 384 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 385 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 386 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 387 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 388 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 389 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 390 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 391 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 392 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 393 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 394 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 395 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 396 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 397 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 398 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 399 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 400 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 401 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 402 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 403 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 404 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 405 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 406 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 407 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 408 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 409 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 410 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 411 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 412 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 413 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 414 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 415 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 416 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 417 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 418 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 419 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 420 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 421 , TARGET_STRING (
 "propagator/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 422 , 0
, TARGET_STRING ( "propagator/Out1" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0
, 0 } , { 423 , 0 , TARGET_STRING ( "propagator/Out2" ) , TARGET_STRING ( ""
) , 2 , 0 , 2 , 0 , 0 } , { 424 , 0 , TARGET_STRING ( "propagator/Out6" ) ,
TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 425 , TARGET_STRING ( "thrust" ) , 0 , 1 , 0 } ,
{ 426 , TARGET_STRING ( "thrustingThreshold" ) , 0 , 1 , 0 } , { 0 , ( NULL )
, 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . peppqzqpkm [ 0 ] , & rtB .
o0gh2zo4kc [ 0 ] , & rtB . i11cgsq4w5 , & rtB . kggncznpui [ 0 ] , & rtB .
fzicnidzc0 [ 0 ] , & rtB . ahuuqt1d0n , & rtB . bfcmi54vw3 [ 0 ] , & rtB .
lbab3av5zk [ 0 ] , & rtB . gqbm3rwegd , & rtB . kvyvqxju03 [ 0 ] , & rtB .
l3lwrt4nfh [ 0 ] , & rtB . iwpc3uqyn0 [ 0 ] , & rtB . hjia2bsg3b [ 0 ] , &
rtB . epzak51t3d [ 0 ] , & rtB . ao0v42ly1v [ 0 ] , & rtB . jwkakphqwb , &
rtB . lgvhkx3bdw , & rtB . nbkishyt4e , & rtB . ccsetfod50 , & rtB .
prrlnytvmi , & rtB . f55lzt1pjb , & rtB . ek14j05v4w , & rtB . i3ooy2gh3c [ 0
] , & rtB . mmbhoqkjlg [ 0 ] , & rtB . d4gx0maojq , & rtB . p5z3a5154s , &
rtB . hdgnuross1 [ 0 ] , & rtB . g5tzrflnfu , & rtB . occpomfuif [ 0 ] , &
rtB . gufuqm2w4q , & rtB . m5p4cfawuz [ 0 ] , & rtB . o3o3rbkx4k , & rtB .
a5c1dovsit , & rtB . jo14mcnknu , & rtB . kkytydcbz4 , & rtB . jd3xtqhk4f , &
rtB . inaoc2xerg , & rtB . djdcpvtzao , & rtB . i3c14fdrua , & rtB .
kkz03dd1px , & rtB . mvri3ojh13 , & rtB . iobpi1ia3b , & rtB . iazanmkuzn , &
rtB . ctolcrefpd , & rtB . cgo5cxdgn3 [ 0 ] , & rtB . ayyiqsze1q , & rtB .
pmyy215m2l , & rtB . bko1nisczd , & rtB . o2so0mimz4 [ 0 ] , & rtB .
ififqtzmpg , & rtB . gr3quax1i2 , & rtB . j54mdey2bz , & rtB . g2o0vbut2d , &
rtB . oqqgq0slrk , & rtB . gkee4xwotb , & rtB . jng4y2afji , & rtB .
i5qdsfyc5s , & rtB . bdrl4roerl , & rtB . negg4jievw , & rtB . gzxg0prvcv , &
rtB . jaipb35fas , & rtB . gnzedmhea4 , & rtB . hnyv2qhx4k , & rtB .
am0geshi12 , & rtB . dmzbje4rgv , & rtB . bbue1bng3x , & rtB . if1tzffzza , &
rtB . apckcxm53o , & rtB . fyvruv40ea , & rtB . ajq0kdyy5x , & rtB .
arqkoves50 , & rtB . gf5d0hy1rt , & rtB . mvhciow3a3 , & rtB . jdh1qq5h5b , &
rtB . jxxkpo4mbk , & rtB . f1lalcv3v1 , & rtB . mudm3d5kna , & rtB .
gdehcgnctj , & rtB . k5x4ozqjgd , & rtB . cmufj5dgtg , & rtB . nseodi0thm , &
rtB . nk2mrciwrl , & rtB . aibmcxnmfz , & rtB . nmwgcd5mf3 , & rtB .
ipsiqdtx2y , & rtB . jok2yvqmcl , & rtB . i0ogrorvul , & rtB . pzla3hbosm , &
rtB . duc5lxno2z , & rtB . jkkk4w1eup , & rtB . lt0cnafmeb , & rtB .
lwbc41xvmv , & rtB . dyjj5gzmrh , & rtB . g3dfxa20a5 , & rtB . ouzipvhg02 , &
rtB . nu5egl3jpr , & rtB . dibqv2ltpx , & rtB . ifbvopiko5 , & rtB .
dxn1c5f430 , & rtB . ayzaokp5gy , & rtB . d0mrovptzx , & rtB . j3fks20oqe , &
rtB . el2salzuid , & rtB . play0ik4za , & rtB . ekf30mawji , & rtB .
bzaiz40jle , & rtB . e2vww44ess , & rtB . jbxny3loxr , & rtB . ec51zeoq2r , &
rtB . cfqzfvlggq , & rtB . mqoflqyp2n , & rtB . ibqgzv3vv1 , & rtB .
hm3n3iawtx , & rtB . duuv1hhabg , & rtB . dsbrz4jvtl , & rtB . bsthbobl1j , &
rtB . gjiznw31uq , & rtB . e2p5tdbdvj , & rtB . fwmywangrk , & rtB .
cdjafi5pxq , & rtB . b4kecemf31 , & rtB . lwf5ib5ucd , & rtB . dlyiidahgc , &
rtB . eztnlcuzax , & rtB . nf2iruncwf , & rtB . p0udbnohia , & rtB .
lxdmgzbfpw , & rtB . jhlmt1tq4b , & rtB . juk0crd5c3 , & rtB . hp4oakafc3 , &
rtB . hftwdjn1g0 , & rtB . dbgdgudkoq , & rtB . pmuqrnz2xk , & rtB .
brr0y4qzkl , & rtB . jeaywfv1ac , & rtB . bxzim2lzyq , & rtB . nictrou4qf , &
rtB . orif3zdn3b , & rtB . fhqz1az5kr , & rtB . ldzvobrfmv , & rtB .
g3jvhh4hav , & rtB . dzxsurh3g1 , & rtB . hau2fho0aa , & rtB . ogxdji4kue , &
rtB . fd2bqanlcc , & rtB . lunan2p3nc , & rtB . b3fqguhuub , & rtB .
dkztucilt3 , & rtB . etfxahe1zk , & rtB . ewrhh12ndt , & rtB . i0vt325y4c , &
rtB . bxwkw4ky1z , & rtB . hfrovp2ze5 , & rtB . jpnfdsiamz , & rtB .
mrnktj4pzl , & rtB . dyrgneij04 , & rtB . n12qizw2pk , & rtB . ksurxyu1ew , &
rtB . bxncybtpmq , & rtB . ouiv3ojpif , & rtB . oetfuctzdx , & rtB .
ec0g313zxm , & rtB . lmgyw4yww0 , & rtB . ig2ui1j1d2 , & rtB . k4jmvnhocb , &
rtB . mry2mf34rf , & rtB . gcw1odthbz , & rtB . lwunfrcbtr , & rtB .
pxc34pzb0n , & rtB . izcekc2rmb , & rtB . iuqibmwza1 , & rtB . n5xzeyokha , &
rtB . le4iejgi3f , & rtB . avh0p45csx , & rtB . nvkdbiidel , & rtB .
cp2lg0a2j0 , & rtB . gbdgmymvm3 , & rtB . k122ls5ddc , & rtB . ibm0ltg4u5 , &
rtB . h31nqrlldb , & rtB . li1xzbkq2o , & rtB . emzex420qv , & rtB .
jiqipy0art , & rtB . md3bqyquec , & rtB . pdy43kvudr , & rtB . hgbe0klwj5 , &
rtB . i5c4uod1ru , & rtB . ghva0cs5pv , & rtB . cfrkayrgcb , & rtB .
nfpa2stdtq , & rtB . pxkrit3cpe , & rtB . mqj0qgcyek , & rtB . fpam5yitdk , &
rtB . neiibevgpq , & rtB . kqba3x01mi , & rtB . mrvxhq5jel , & rtB .
pzwtmvcp4m , & rtB . bf5eeumnha , & rtB . nzfdxiefml , & rtB . bbmnhwq0rr , &
rtB . lx2krvsypk , & rtB . papx1e0ibu , & rtB . b32ff13ato , & rtB .
fjdjjqgoqm , & rtB . g0sgz4y4n0 , & rtB . ehguvaafyf , & rtB . lzyot4xhsg , &
rtB . g0ss0qvqh4 , & rtB . pi0zloz3av , & rtB . mxj2tyfgtv , & rtB .
g44grslwz0 , & rtB . o1h5jbax0k , & rtB . mmq4jif3xa , & rtB . fgfpsle4vd , &
rtB . f10xwh2dw1 , & rtB . e0du5fe5ij , & rtB . hofgma4ypd , & rtB .
hc0urkev2t , & rtB . jmmhtinm1t , & rtB . jcivfd5sc1 , & rtB . ak4ldfxg1f , &
rtB . d1uxjqm2m5 , & rtB . ghgwxfzqrs , & rtB . ks1zi3ssmr , & rtB .
eru0kcrai5 , & rtB . axs2frbyrx , & rtB . b2znn3iy5f [ 0 ] , & rtB .
bawrujksd0 , & rtB . ibghka43t4 , & rtB . nv52jhn4ce , & rtB . aazirs2m22 , &
rtB . ioajmttt5z , & rtB . g1bth0twee , & rtB . jascdf2bov [ 0 ] , & rtB .
ml3uqjcwxo , & rtB . odiyexmy3u , & rtB . earmzkxhyo , & rtB . jla1lojsky , &
rtB . clei5lhcim , & rtB . ftdxqcyuhu , & rtB . p3pj1jootc [ 0 ] , & rtB .
g2t1lpvxxu [ 0 ] , & rtB . kedogj1ilh [ 0 ] , & rtB . okfwxewtb3 , & rtB .
akbdqgu25i , & rtB . cdhitfgsbj , & rtB . jyki240jyc , & rtB . beh1j2gh2f , &
rtB . cmhorwyh4g , & rtB . hnezzzmczj , & rtB . anabyo4mrf , & rtB .
e3qqi3mf1s , & rtB . pd5yjynpan , & rtB . mlvev5zvuo , & rtB . jmgm3qhu4c [ 0
] , & rtB . gqodljqjue , & rtB . m4hsdttpfk , & rtB . lzaaahrvev , & rtB .
d3kvy3fm2i , & rtB . acapcxyypu , & rtB . kgzkpxarae , & rtB . gxudyvttp4 [ 0
] , & rtB . eadkyzb5gk , & rtB . emshuqba4b , & rtB . jla5taicox , & rtB .
iama2kmvpi , & rtB . jkhakmgwkg , & rtB . emkig5izkj , & rtB . kklagd15pq , &
rtB . in10r1k0id , & rtB . ejahzmn3ac , & rtB . m1hoiwiezv , & rtB .
gmlne4nmch , & rtB . jpaxve5vi5 , & rtB . l4xxom2huh , & rtB . pf1hq0hnah , &
rtB . atctczg3nb , & rtB . dnvcnxosu5 , & rtB . cb05c13aht , & rtB .
jqfmjmc45t , & rtB . n301ly5dwz , & rtB . g0qpe5txf0 , & rtB . okocscvb4s , &
rtB . mcrjj25erm , & rtB . lfbwrgjnsz , & rtB . jjo5i5iadu , & rtB .
gh4qsvdi5t , & rtB . gp4z5522c1 , & rtB . cn5tuvkjyi , & rtB . lbzbc34ql3 , &
rtB . a0m12nsxvx , & rtB . m2jg4t41fl , & rtB . cq0rvjyxa1 , & rtB .
ijibii3sox , & rtB . e1dhyxfarm , & rtB . lezubqe10f , & rtB . ovyo2ojdiq , &
rtB . hsw2izzn2y , & rtB . psrsnnlnwz , & rtP .
NormalizeVector_maxzero_cctrbp3zbr , & rtP . Constant_Value_jnwortb2ne , &
rtP . burndirectionb_Value [ 0 ] , & rtP .
AttitudeProfileCustomTracking_primaryAlignment [ 0 ] , & rtP .
AttitudeProfileCustomTracking_secondaryAlignment [ 0 ] , & rtP .
AttitudeProfileCustomTracking_secondaryConstraint [ 0 ] , & rtP .
intertia_Gain , & rtP . SpacecraftDynamics_startDate , & rtP .
SpacecraftDynamics_mass , & rtP . SpacecraftDynamics_emptyMass , & rtP .
SpacecraftDynamics_fullMass , & rtP . SpacecraftDynamics_inertia [ 0 ] , &
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
SpacecraftDynamics_reflectivityCoeff , & rtP . SpacecraftDynamics_srpArea , &
rtP . SpacecraftDynamics_fluxPressure , & rtP . NormalizeVector_maxzero , &
rtP . NormalizeVector_maxzero_gwprhsa2wo , & rtP . Constant3_Value , & rtP .
Gain_Gain_a1wggbqhys , & rtP . Constant_Value_ald5ltqbaj , & rtP .
Constant_Value_lnhw1m3oj3 , & rtP . Bias_Bias_jyt0xfb15f , & rtP .
Bias1_Bias_gwta2lnnkg , & rtP . Bias_Bias_cgigyouppa , & rtP .
Bias1_Bias_fv1d5l524l , & rtP . Constant_Value , & rtP .
Constant_Value_b03wzngqsc , & rtP . CompareToConstant_const , & rtP .
CompareToConstant_const_ofxbpdrlsc , & rtP . Constant_Value_kmsn52x30e , &
rtP . Gain_Gain_a1vp4nbb4i , & rtP . Gain1_Gain_b2rn0jf110 , & rtP .
Gain2_Gain_km53dmybtt , & rtP . Constant_Value_kr3d0vrbhe , & rtP .
Gain_Gain_l0ltiwj3qi , & rtP . Gain1_Gain_kdcd1diblx , & rtP .
Gain2_Gain_azh5n0op2m , & rtP . Constant_Value_dtzh1c5sju , & rtP .
Gain_Gain_hpwfinpjfy , & rtP . Gain1_Gain_jwifomnqko , & rtP .
Gain2_Gain_o2zg3ufaqd , & rtP . Constant_Value_kredm1stre , & rtP . Gain_Gain
, & rtP . Gain1_Gain , & rtP . Gain2_Gain , & rtP . Constant_Value_ot3w3tohe1
, & rtP . Gain_Gain_kk5emnlceo , & rtP . Gain1_Gain_n2k12gydmq , & rtP .
Gain2_Gain_k5gz3unjku , & rtP . Constant_Value_gxjiuddkly , & rtP .
Gain_Gain_lbxzbv5il0 , & rtP . Gain1_Gain_cee4wpktnf , & rtP .
Gain2_Gain_gjtdi0t0m2 , & rtP . g1wscpgucy2 . Constant_Value , & rtP .
dm5sdsidlf . Constant_Value , & rtP . oeqg1ih2ox . Constant_Value , & rtP .
ndeg5uxc4fv . Constant_Value , & rtP . dxrmmapawx . Constant_Value , & rtP .
dufiuetx43 . Constant_Value , & rtP . Constant_Value_chw2nw4nzm , & rtP .
Gain_Gain_p1bkb0yypm , & rtP . Gain1_Gain_mb5fijwxns , & rtP .
Gain2_Gain_jn5n2dhxal , & rtP . Constant_Value_agzbluonup , & rtP .
Gain_Gain_nu2zko0vyc , & rtP . Gain1_Gain_crilbizplu , & rtP .
Gain2_Gain_knjw2krbz3 , & rtP . Constant_Value_grzuu3xaow , & rtP .
Gain_Gain_pbatg3voqv , & rtP . Gain1_Gain_hc32uvnbm3 , & rtP .
Gain2_Gain_of5bdnev5d , & rtP . Bias_Bias , & rtP . Bias1_Bias , & rtP .
Constant_Value_hbwgtqn4rs , & rtP . Constant1_Value , & rtP .
Gain_Gain_jlqyqg5r1f , & rtP . Gain2_Gain_i3obaqt5n2 , & rtP .
Bias_Bias_krj4bpg32q , & rtP . Bias1_Bias_cjetlm1a0j , & rtP .
Constant_Value_ci2gownbf5 , & rtP . Constant1_Value_nyng0gouim , & rtP .
Gain_Gain_ngjiudsjxj , & rtP . Gain2_Gain_ivtf4mjc5h , & rtP . avc3ckvlc2 .
Constant_Value , & rtP . gsv54faewy . Constant_Value , & rtP . g5ve1v23po .
Constant_Value , & rtP . g35lilzjbm . Constant_Value , & rtP . btrmn3zm0r .
Constant_Value , & rtP . n5noj4hp0p . Constant_Value , & rtY . d15kddh0xt [ 0
] , & rtY . bkjkndr5fu [ 0 ] , & rtY . kfqtwcmhfv [ 0 ] , & rtP . thrust , &
rtP . thrustingThreshold , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 3 , 1 , 1 , 1 , 4 , 1 , 1 , 3 , 3 , 3 , 1 , 4 , 1 , 23 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 299 ,
rtRootInputs , 0 , rtRootOutputs , 3 } , { rtBlockParameters , 123 ,
rtModelParameters , 2 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 1695573840U , 4034585232U , 3375549286U , 2129333743U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * propagator_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void propagator_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
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
void propagator_host_InitializeDataMapInfo ( propagator_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
