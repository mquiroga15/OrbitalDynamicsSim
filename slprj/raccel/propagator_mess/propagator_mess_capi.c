#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "propagator_mess_capi_host.h"
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
#include "propagator_mess.h"
#include "propagator_mess_capi.h"
#include "propagator_mess_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"propagator_mess/Moon/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
1 , 0 , TARGET_STRING ( "propagator_mess/Moon/Earth-Moon Position" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"propagator_mess/Normalize Vector/Math Function1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"propagator_mess/Normalize Vector/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 4 , 3 , TARGET_STRING (
"propagator_mess/Normalize Vector/Product" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"propagator_mess/Normalize Vector/Sum of Elements" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"propagator_mess/Normalize Vector/Switch" ) , TARGET_STRING ( "" ) , 0 , 0 ,
2 , 0 , 0 } , { 7 , 0 , TARGET_STRING ( "propagator_mess/burn/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"propagator_mess/burn/Sqrt" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } ,
{ 9 , 0 , TARGET_STRING ( "propagator_mess/controller/intertia?" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"propagator_mess/controller/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 11 , 0 , TARGET_STRING ( "propagator_mess/plant/Spacecraft Dynamics" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 1 , 0
, 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 2 , 0
, 2 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 3 , 0
, 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 4 , 0
, 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"propagator_mess/controller/Quaternion Inverse/Divide" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"propagator_mess/controller/Quaternion Inverse/Divide1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"propagator_mess/controller/Quaternion Inverse/Divide2" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"propagator_mess/controller/Quaternion Inverse/Divide3" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"propagator_mess/controller/Subsystem/Gain" ) , TARGET_STRING (
"DesiredWMagnitude" ) , 0 , 0 , 1 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"propagator_mess/controller/Subsystem/Max" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"propagator_mess/controller/Subsystem/Divide1" ) , TARGET_STRING (
"DesiredWUnitVector" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"propagator_mess/controller/Subsystem/Divide2" ) , TARGET_STRING ( "DesiredW"
) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"propagator_mess/controller/Subsystem/Sin" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"propagator_mess/Moon/r over cubed norm/Normalize Vector/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 26 , 1 , TARGET_STRING (
"propagator_mess/Moon/r over cubed norm/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"propagator_mess/Moon/r over cubed norm1/Normalize Vector/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 28 , 2 , TARGET_STRING (
"propagator_mess/Moon/r over cubed norm1/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/OR"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"propagator_mess/controller/Quaternion Inverse/Quaternion Norm/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"propagator_mess/controller/Quaternion Inverse/Quaternion Norm/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"propagator_mess/controller/Quaternion Inverse/Quaternion Norm/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"propagator_mess/controller/Quaternion Inverse/Quaternion Norm/Product3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"propagator_mess/controller/Quaternion Inverse/Quaternion Norm/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 41 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Abs1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 42 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/is 180deg Rot"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 46 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 47 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 48 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/is 180deg Rot"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 50 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 103 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 106 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 108 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 113 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 116 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 121 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 122 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 124 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 125 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 126 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 127 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 128 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 130 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 131 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 133 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 134 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 135 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 136 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 137 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 138 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 139 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 140 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 141 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 142 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 143 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 144 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 145 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 146 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 147 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 148 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 149 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 150 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 151 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 152 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 153 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 154 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 155 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 156 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 157 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 158 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 159 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 160 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 161 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 162 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 163 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 164 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 165 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 166 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 167 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 168 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 169 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 170 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 171 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 172 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 173 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 174 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 175 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 176 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 177 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 178 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 179 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 180 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 181 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 182 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 183 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 184 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 185 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 186 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 187 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 188 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 189 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 190 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 191 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 192 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 193 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 194 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 195 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 196 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 197 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 198 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 199 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 200 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 201 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 202 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 203 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 204 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 205 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 206 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 207 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 208 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 209 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 210 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 211 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 212 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 213 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 214 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 215 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 216 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 217 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 218 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 219 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 220 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 221 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 222 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 223 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 224 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 225 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 226 , 13 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 227 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 228 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 229 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 230 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 231 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 232 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 233 , 17 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 234 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 235 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 236 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 237 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 238 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 239 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 240 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 241 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 242 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 243 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 244 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 245 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 246 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 247 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 248 , 13 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 249 , 13 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 250 , 13 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 251 , 13 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 252 , 13 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 253 , 13 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 254 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 255 , 17 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 256 , 17 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 257 , 17 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 258 , 17 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 259 , 17 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 260 , 17 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 261 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 262 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 263 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 264 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 265 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 266 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 267 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 268 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 269 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 270 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 271 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 272 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 273 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 274 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 275 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 276 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 277 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 278 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 279 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 280 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 281 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 282 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 283 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 284 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 285 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 286 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 287 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 288 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 289 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 290 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 291 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 292 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 293 , 0 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 294 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 295 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 296 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 297 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 298 , 18 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 299 , TARGET_STRING (
"propagator_mess/Normalize Vector" ) , TARGET_STRING ( "maxzero" ) , 0 , 1 ,
0 } , { 300 , TARGET_STRING ( "propagator_mess/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 301 , TARGET_STRING (
"propagator_mess/burn/burn direction (b)" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 302 , TARGET_STRING (
"propagator_mess/controller/Attitude Profile (Custom Tracking)" ) ,
TARGET_STRING ( "primaryAlignment" ) , 0 , 3 , 0 } , { 303 , TARGET_STRING (
"propagator_mess/controller/Attitude Profile (Custom Tracking)" ) ,
TARGET_STRING ( "secondaryAlignment" ) , 0 , 3 , 0 } , { 304 , TARGET_STRING
( "propagator_mess/controller/Attitude Profile (Custom Tracking)" ) ,
TARGET_STRING ( "secondaryConstraint" ) , 0 , 3 , 0 } , { 305 , TARGET_STRING
( "propagator_mess/controller/intertia?" ) , TARGET_STRING ( "Gain" ) , 0 , 1
, 0 } , { 306 , TARGET_STRING ( "propagator_mess/plant/Spacecraft Dynamics" )
, TARGET_STRING ( "startDate" ) , 0 , 1 , 0 } , { 307 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "mass" ) , 0
, 1 , 0 } , { 308 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "emptyMass" )
, 0 , 1 , 0 } , { 309 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "fullMass" )
, 0 , 1 , 0 } , { 310 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "inertia" ) ,
0 , 4 , 0 } , { 311 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"emptyInertia" ) , 0 , 4 , 0 } , { 312 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "fullInertia"
) , 0 , 4 , 0 } , { 313 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"semiMajorAxis" ) , 0 , 1 , 0 } , { 314 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"eccentricity" ) , 0 , 1 , 0 } , { 315 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "inclination"
) , 0 , 1 , 0 } , { 316 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "raan" ) , 0
, 1 , 0 } , { 317 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"argPeriapsis" ) , 0 , 1 , 0 } , { 318 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "trueAnomaly"
) , 0 , 1 , 0 } , { 319 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "trueLon" ) ,
0 , 1 , 0 } , { 320 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "argLat" ) ,
0 , 1 , 0 } , { 321 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"lonPeriapsis" ) , 0 , 1 , 0 } , { 322 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"inertialPosition" ) , 0 , 3 , 0 } , { 323 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"inertialVelocity" ) , 0 , 3 , 0 } , { 324 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"fixedPosition" ) , 0 , 3 , 0 } , { 325 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"fixedVelocity" ) , 0 , 3 , 0 } , { 326 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "attitude" )
, 0 , 5 , 0 } , { 327 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"attitudeRate" ) , 0 , 3 , 0 } , { 328 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "customR" ) ,
0 , 1 , 0 } , { 329 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "customF" ) ,
0 , 1 , 0 } , { 330 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "customMu" )
, 0 , 1 , 0 } , { 331 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "customJ2" )
, 0 , 1 , 0 } , { 332 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "customOmega"
) , 0 , 1 , 0 } , { 333 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRA" ) , 0
, 1 , 0 } , { 334 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRARate" )
, 0 , 1 , 0 } , { 335 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDec" ) , 0
, 1 , 0 } , { 336 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDecRate" )
, 0 , 1 , 0 } , { 337 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotAngle"
) , 0 , 1 , 0 } , { 338 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotRate" )
, 0 , 1 , 0 } , { 339 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"F107ExtrapValue" ) , 0 , 1 , 0 } , { 340 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"MagneticIndexExtrapValue" ) , 0 , 1 , 0 } , { 341 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "fluxFlags" )
, 0 , 6 , 0 } , { 342 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "dragCoeff" )
, 0 , 1 , 0 } , { 343 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "dragArea" )
, 0 , 1 , 0 } , { 344 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"customThirdBodyMu" ) , 0 , 1 , 0 } , { 345 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"reflectivityCoeff" ) , 0 , 1 , 0 } , { 346 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING ( "srpArea" ) ,
0 , 1 , 0 } , { 347 , TARGET_STRING (
"propagator_mess/plant/Spacecraft Dynamics" ) , TARGET_STRING (
"fluxPressure" ) , 0 , 1 , 0 } , { 348 , TARGET_STRING (
"propagator_mess/Moon/r over cubed norm/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 1 , 0 } , { 349 , TARGET_STRING (
"propagator_mess/Moon/r over cubed norm1/Normalize Vector" ) , TARGET_STRING
( "maxzero" ) , 0 , 1 , 0 } , { 350 , TARGET_STRING (
"propagator_mess/controller/Subsystem/Constant3" ) , TARGET_STRING ( "Value"
) , 0 , 1 , 0 } , { 351 , TARGET_STRING (
"propagator_mess/controller/Subsystem/Gain" ) , TARGET_STRING ( "Gain" ) , 0
, 1 , 0 } , { 352 , TARGET_STRING (
"propagator_mess/Moon/r over cubed norm/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 353 , TARGET_STRING (
"propagator_mess/Moon/r over cubed norm1/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 354 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 355 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 356 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 357 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 358 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 359 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 360 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 361 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 362 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 363 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 364 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 365 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 366 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 367 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 368 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 369 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 370 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 371 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 372 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 373 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 374 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 375 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 376 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 377 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 378 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 379 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 380 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 381 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 382 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 383 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 384 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 385 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 386 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 387 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 388 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 389 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 390 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 391 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 392 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 393 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 394 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 395 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 396 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 397 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 398 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 399 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 400 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 401 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 402 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 403 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 404 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 405 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 406 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 407 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 408 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 409 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 410 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 411 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 412 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 413 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 414 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 415 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 416 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 417 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 418 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 419 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 420 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 421 , TARGET_STRING (
 "propagator_mess/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 422 , 0
, TARGET_STRING ( "propagator_mess/Out1" ) , TARGET_STRING ( "" ) , 1 , 0 , 0
, 0 , 0 } , { 423 , 0 , TARGET_STRING ( "propagator_mess/Out2" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 2 , 0 , 0 } , { 424 , 0 , TARGET_STRING (
"propagator_mess/Out6" ) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 0 } , { 0 ,
0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 425 , TARGET_STRING (
"thrust" ) , 0 , 1 , 0 } , { 426 , TARGET_STRING ( "thrustingThreshold" ) , 0
, 1 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . bgbtt23c0k [ 0 ] , & rtB .
bx3cvl5uiz [ 0 ] , & rtB . k5tn3yiqj3 , & rtB . d0ib2dx4fe [ 0 ] , & rtB .
nhrxnqfbca [ 0 ] , & rtB . k2avwoc5wb , & rtB . ofpmzqumwk [ 0 ] , & rtB .
audwxioxgw [ 0 ] , & rtB . ae3swytvn2 , & rtB . k355e5zk3q [ 0 ] , & rtB .
a4tcgdymxo [ 0 ] , & rtB . arwfsx1c32 [ 0 ] , & rtB . hlmjufbfzm [ 0 ] , &
rtB . nt5sg2upub [ 0 ] , & rtB . kzhucwwulf [ 0 ] , & rtB . k2zs0lhjgw , &
rtB . ltf3fgreck , & rtB . fpbnczepo1 , & rtB . doai2pg1cl , & rtB .
h4mfwwgnvq , & rtB . laac5xjlbm , & rtB . fqqpqgtlkx , & rtB . dauygg5stf [ 0
] , & rtB . ieom4l2aca [ 0 ] , & rtB . hy4u1hiacf , & rtB . izx5zcfvng , &
rtB . afjrrpylsm [ 0 ] , & rtB . ddfwx2qqfx , & rtB . p1raas45by [ 0 ] , &
rtB . otkalc5z2p , & rtB . gfcwzsw34m [ 0 ] , & rtB . h3lvgmqzml , & rtB .
hmb3awxckt , & rtB . jdqzqfspf2 , & rtB . ngn3moazdi , & rtB . jvuc0le4q3 , &
rtB . eb2e1mdic4 , & rtB . euwo1qdqmo , & rtB . i4u5fx5szz , & rtB .
e2gtkbsz4u , & rtB . cqbxpcl0oz , & rtB . gdhbqmyg0b , & rtB . prp1ucytv2 , &
rtB . c1zrhc0om4 , & rtB . gq4fcmaya1 [ 0 ] , & rtB . ca23knnadp , & rtB .
h3gkldsu5p , & rtB . oiqlexlgvc , & rtB . hmzl0kxb5i [ 0 ] , & rtB .
jfqgnnmqi2 , & rtB . e2hmr0pg2j , & rtB . gf14qi0ft4 , & rtB . mrh3hgkyix , &
rtB . mmtnicim0g , & rtB . ewjyyaemel , & rtB . fnotdny0aw , & rtB .
lzf3tsjegz , & rtB . lmaab1wk0y , & rtB . ndq1n2kfaz , & rtB . pguabx1cto , &
rtB . fnirgo0g2g , & rtB . b3w4mxih4m , & rtB . mdq0frigxm , & rtB .
ogn4x3aekj , & rtB . lvr0odfzan , & rtB . cld1gnmiha , & rtB . nerb5vqqa1 , &
rtB . dyopyqfiiz , & rtB . fwc4xsxw0y , & rtB . gzomq0mpad , & rtB .
krro3sx5eh , & rtB . j4ac0y4t4l , & rtB . lxx4v22huu , & rtB . htnnm4f3rh , &
rtB . fvq5v0wagk , & rtB . k4awz1ldew , & rtB . cjld52211r , & rtB .
auarppakcs , & rtB . glrz0fqwdf , & rtB . pxykpx3utl , & rtB . eovkmmninw , &
rtB . e11xhbvgcn , & rtB . a1s4at4lm4 , & rtB . c2ijsxda10 , & rtB .
mwj3z5max0 , & rtB . evytg2f1rb , & rtB . agqcqrtnf5 , & rtB . cuuj3fvjnn , &
rtB . eh0zzd3ivm , & rtB . pexcqd2hxn , & rtB . lrvcier1zo , & rtB .
nbjuy34gmx , & rtB . n3u455z5vd , & rtB . nwlgc3xdop , & rtB . hrb3hht5h5 , &
rtB . f45rm2aeyq , & rtB . ihjztibink , & rtB . cpwidezqla , & rtB .
mc4f0d3lut , & rtB . ljzogtduwf , & rtB . b4estcjfih , & rtB . kgd04xzdcr , &
rtB . kys5r5rnhm , & rtB . bvdtunmm2l , & rtB . bu03rsjny0 , & rtB .
lzvpeuheiw , & rtB . nrgobxxknb , & rtB . nsbbt0ui4m , & rtB . ffgcxxhqpv , &
rtB . p1b4ouryys , & rtB . hijd3slb5g , & rtB . cpugdcfsva , & rtB .
ibzftcigfp , & rtB . ffany32ds0 , & rtB . nvfug0zbsd , & rtB . j51hkj22hh , &
rtB . fnchlgrhy1 , & rtB . iv1zebcrw0 , & rtB . bbmvbfy3xw , & rtB .
izutnvqezp , & rtB . lmhsnxyy4q , & rtB . hqx3a1htma , & rtB . bub3yuwkxt , &
rtB . f3mrc3vc3b , & rtB . p5l2rwol21 , & rtB . blbi1d4frb , & rtB .
hxgi0xdlub , & rtB . bhbqr2nhuh , & rtB . hjrd3gzp4f , & rtB . p2yp23ndmz , &
rtB . gp240aqkxe , & rtB . b5a1ov1jzy , & rtB . ovvxwk1jiq , & rtB .
h4rmfdgf0s , & rtB . bro0vmqilm , & rtB . kag1u0rpls , & rtB . h41evd2kyt , &
rtB . g0rq0ffe0b , & rtB . fxaaaizfeq , & rtB . i3eaqfvfes , & rtB .
duapfbhlag , & rtB . b2hp5ba3p2 , & rtB . bfwlh2c3lp , & rtB . ibk1aebidb , &
rtB . e5yqtsqdlf , & rtB . j54fki4555 , & rtB . izcjgemuly , & rtB .
cong315ffk , & rtB . ltxwu1wbdg , & rtB . i1dhvddm4u , & rtB . ise3xsizba , &
rtB . mnsykknszb , & rtB . omx2xnlsa1 , & rtB . agup1a4qnr , & rtB .
cd1tlnr0ka , & rtB . hm01nu4z13 , & rtB . putja2b5qr , & rtB . jpvkqtqg1d , &
rtB . onpisizxqk , & rtB . o0tpy5m2a3 , & rtB . jmje0s3ed4 , & rtB .
axy1wb5dew , & rtB . ez3px2f12w , & rtB . huigacutkc , & rtB . irrpou22a5 , &
rtB . nshogscuz4 , & rtB . fbh3yondzh , & rtB . jp1zla2mmw , & rtB .
ayzdydcyuo , & rtB . dq0jdlm22o , & rtB . kbgh1p1ypy , & rtB . ib1lbtcpxj , &
rtB . nn3dmihxcr , & rtB . e5dii5jmkf , & rtB . b4ce03c3q3 , & rtB .
i1s3nz0b2c , & rtB . lvxpzjcgrg , & rtB . esuxzqzc3e , & rtB . potvsxkx01 , &
rtB . gf3ts2bej4 , & rtB . odsldvzxxp , & rtB . lcxoofz3se , & rtB .
ifprj4pxcq , & rtB . ovz0nwm1on , & rtB . eytlynbjva , & rtB . bvo45ceokr , &
rtB . pb1v3invgy , & rtB . n5clxvomtk , & rtB . cmh3zwuall , & rtB .
lhz1tawstz , & rtB . jchb5pmsuf , & rtB . cllshkgqxc , & rtB . bgxtukegxj , &
rtB . lbpc2rtdzm , & rtB . ewy3jij3q3 , & rtB . p1b1vua5ww , & rtB .
crqbet2uyu , & rtB . omgykybnkk , & rtB . fmiaebyuq2 , & rtB . cpzrof34di , &
rtB . khmphxxnqx , & rtB . pfsgvsrsph , & rtB . jlfd2y5x1w , & rtB .
cdaty0q5m2 , & rtB . njld3k1qrm , & rtB . fsshl4j1bv , & rtB . ds4c2tg21v , &
rtB . ayuxs0ixd0 , & rtB . bxpyh5b5sb , & rtB . ik4sy1j3h3 , & rtB .
gr3vzqq0k2 , & rtB . csam3nbmnv , & rtB . ha34k0ralw , & rtB . dmb351qbiu , &
rtB . kik3dr2bde , & rtB . jsjiibmmb5 , & rtB . fgb5bbkkin , & rtB .
odfficsjsx , & rtB . g0w3taummx , & rtB . iwq3si5wmy , & rtB . iynuazrp2u , &
rtB . dcb0udynvi , & rtB . n4mym2lzqe , & rtB . fav00lw5cz , & rtB .
bkduzupwea , & rtB . l45mf0o4u2 , & rtB . anlmlhp1oi [ 0 ] , & rtB .
ozxav1l23g , & rtB . mw05jharoi , & rtB . abxvqxzhfn , & rtB . ddfgltz1rj , &
rtB . ksubd4yx0s , & rtB . i0zpzjz1tn , & rtB . ksgblwhab0 [ 0 ] , & rtB .
ikhr2twr1o , & rtB . k2kdormzza , & rtB . dfam4nj1zr , & rtB . aovhnrymq5 , &
rtB . jpo5sph0q1 , & rtB . hrqm2zvjsf , & rtB . n11ptzoliw [ 0 ] , & rtB .
mrqou5vw32 [ 0 ] , & rtB . dlsbihrftu [ 0 ] , & rtB . erva203ps4 , & rtB .
k3s03wnqyx , & rtB . ok3kiaidlm , & rtB . bdqojbbgd5 , & rtB . anwtn11pnf , &
rtB . bglurjstz2 , & rtB . hhlzwpbyhq , & rtB . adxtwyvkd4 , & rtB .
dbypezaw4s , & rtB . hxr4w1btbv , & rtB . mm21k3kcs1 , & rtB . jzn0z4pyml [ 0
] , & rtB . evw1t5tqi5 , & rtB . ojqiuyxzjb , & rtB . g04kcj5oqt , & rtB .
ie0zpjfucm , & rtB . iw4qe0xhxt , & rtB . doyhm1jj3o , & rtB . hcdyqjud1p [ 0
] , & rtB . ntssr1yofu , & rtB . edjdhkdp1x , & rtB . iakvbkhnvj , & rtB .
bmlivgiev2 , & rtB . dqpet4lo3w , & rtB . l4o1umfkt1 , & rtB . hr4m43b2n4 , &
rtB . cbocl1hpbq , & rtB . olf5prulwz , & rtB . oxzxh3v5fy , & rtB .
e4g1z1dwbh , & rtB . mpoydqprac , & rtB . pvqqvby1ba , & rtB . dszvcwvdxm , &
rtB . piejtcrnzv , & rtB . oijvyuq1by , & rtB . bf1yimqzt3 , & rtB .
k1bjosm2vf , & rtB . dcaagf4d5p , & rtB . j4awxs2u4k , & rtB . ag2kakw2ry , &
rtB . eoa0k1dz04 , & rtB . de0udbsnbd , & rtB . ifdfwkuzvv , & rtB .
hzt4twlnb2 , & rtB . i4xi3ehe1s , & rtB . ndv5zqmwap , & rtB . mdyfrrogj0 , &
rtB . mjaw2a3ohe , & rtB . lik24trukk , & rtB . ifebfwzvxn , & rtB .
g2k5b3dnmw , & rtB . cctvh4lyu1 , & rtB . bg5rx3ttpk , & rtB . dkmxufila5 , &
rtB . kz1x3kfm3o , & rtB . eayvbdphup , & rtP .
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
Gain2_Gain_gjtdi0t0m2 , & rtP . kn1zy4gjusi . Constant_Value , & rtP .
ki5dfllwmd . Constant_Value , & rtP . ikzxkzczgl . Constant_Value , & rtP .
flcsttob5qv . Constant_Value , & rtP . hjybai3dqf . Constant_Value , & rtP .
mjycmbyayp . Constant_Value , & rtP . Constant_Value_chw2nw4nzm , & rtP .
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
Gain_Gain_ngjiudsjxj , & rtP . Gain2_Gain_ivtf4mjc5h , & rtP . pofcv4yf1q .
Constant_Value , & rtP . lramtmlkmq . Constant_Value , & rtP . jxiate0wnc .
Constant_Value , & rtP . kpu1x5dwrk . Constant_Value , & rtP . gnme1gu3zy .
Constant_Value , & rtP . lf2tg5j2nw . Constant_Value , & rtY . oa14kct43f [ 0
] , & rtY . ls24iwwnva [ 0 ] , & rtY . grvimhmmhj [ 0 ] , & rtP . thrust , &
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
, { 1711510981U , 181310340U , 3324002518U , 151476577U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * propagator_mess_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void propagator_mess_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
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
void propagator_mess_host_InitializeDataMapInfo (
propagator_mess_host_DataMapInfo_T * dataMap , const char * path ) {
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
