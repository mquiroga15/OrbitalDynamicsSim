#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "propagatorComplete_capi_host.h"
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
#include "propagatorComplete.h"
#include "propagatorComplete_capi.h"
#include "propagatorComplete_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 1 , 0 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 1 , 0 , 0
, 0 , 0 } , { 2 , 0 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 2 , 0 , 1
, 0 , 0 } , { 3 , 0 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 3 , 0 , 0
, 0 , 0 } , { 4 , 0 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 4 , 0 , 2
, 0 , 0 } , { 5 , 0 , TARGET_STRING ( "propagatorComplete/Moon/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"propagatorComplete/Moon/Earth-Moon Position" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"propagatorComplete/Normalize Vector/Math Function1" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"propagatorComplete/Normalize Vector/Divide" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 9 , 3 , TARGET_STRING (
"propagatorComplete/Normalize Vector/Product" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"propagatorComplete/Normalize Vector/Sum of Elements" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"propagatorComplete/Normalize Vector/Switch" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"propagatorComplete/Periapsis burn/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 13 , 0 , TARGET_STRING (
"propagatorComplete/Periapsis burn/Sqrt" ) , TARGET_STRING ( "" ) , 0 , 0 , 2
, 0 , 0 } , { 14 , 19 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"propagatorComplete/Tangential pointing/Sqrt" ) , TARGET_STRING ( "" ) , 0 ,
0 , 2 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"propagatorComplete/Tangential pointing/Compare To Constant/Compare" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 2 , 0 , 1 } , { 17 , 19 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 19 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"propagatorComplete/Moon/r over cubed norm/Normalize Vector/Math Function1" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 20 , 1 , TARGET_STRING (
"propagatorComplete/Moon/r over cubed norm/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"propagatorComplete/Moon/r over cubed norm1/Normalize Vector/Math Function1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 22 , 2 , TARGET_STRING (
"propagatorComplete/Moon/r over cubed norm1/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 19 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Quaternion Inverse/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 24 , 19 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Quaternion Inverse/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 25 , 19 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Quaternion Inverse/Divide2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 26 , 19 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Quaternion Inverse/Divide3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 27 , 19 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Subsystem/Gain" ) ,
TARGET_STRING ( "DesiredWMagnitude" ) , 0 , 0 , 2 , 0 , 0 } , { 28 , 19 ,
TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Subsystem/Max" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 29 , 19 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Subsystem/Divide1" ) ,
TARGET_STRING ( "DesiredWUnitVector" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 19 ,
TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Subsystem/Divide2" ) ,
TARGET_STRING ( "DesiredW" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 19 ,
TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Subsystem/Sin" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 32 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/OR"
) , TARGET_STRING ( "" ) , 0 , 1 , 2 , 0 , 1 } , { 33 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 34 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Quaternion Inverse/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 35 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Quaternion Inverse/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 36 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Quaternion Inverse/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 37 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Quaternion Inverse/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 38 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Quaternion Inverse/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 39 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 40 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 41 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 42 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 43 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 44 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Abs1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 45 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 46 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 47 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/is 180deg Rot"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 49 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 50 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 51 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/is 180deg Rot"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 53 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 54 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 55 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 56 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 57 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 58 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 59 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 60 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 61 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 62 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 63 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 64 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 65 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 66 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 67 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 68 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 69 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 70 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 71 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 72 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 73 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 74 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 75 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 76 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 77 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 78 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 79 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 80 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 81 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 82 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 83 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 84 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 85 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 86 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 87 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 88 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 89 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 90 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 91 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 92 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 93 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 94 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 95 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 96 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 97 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 98 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 99 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 100 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 101 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 102 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 103 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 104 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 105 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 106 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 107 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 108 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 109 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 110 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 111 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 112 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 113 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 114 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 115 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 116 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 117 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 118 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 119 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 120 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 121 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 122 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 123 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 124 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 125 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 126 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 127 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 128 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 129 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 130 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 131 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 132 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 133 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 134 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 135 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 136 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 137 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 138 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 139 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 140 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 141 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 142 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 143 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 144 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 145 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 146 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 147 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 148 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 149 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 150 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 151 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 152 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 153 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 154 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 155 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 156 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 157 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 158 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 159 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 160 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 161 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 162 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 163 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 164 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 165 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 166 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 167 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 168 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 169 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 170 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 171 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 172 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 173 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 174 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 175 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 176 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 177 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 178 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 179 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 180 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 181 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 182 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 183 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 184 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 185 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 186 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 187 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 188 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 189 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 190 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 191 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 192 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 193 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 194 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 195 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 196 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 197 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 198 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 199 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 200 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 201 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 202 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 203 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 204 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 205 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 206 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 207 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 208 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 209 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 210 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 211 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 212 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 213 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 214 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 215 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 216 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 217 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 218 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 219 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 220 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 221 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 222 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 223 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 224 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 225 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 226 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 227 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 228 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 229 , 13 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 230 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 231 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 2 , 0 , 1 } , { 232 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 233 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 234 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 235 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 236 , 17 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 237 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 238 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 2 , 0 , 1 } , { 239 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 240 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 241 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 242 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 243 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 244 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 245 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 246 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 247 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 248 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 249 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 250 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 251 , 13 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 252 , 13 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 253 , 13 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 254 , 13 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 255 , 13 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 256 , 13 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 257 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 258 , 17 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 259 , 17 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 260 , 17 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 261 , 17 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 262 , 17 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 263 , 17 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 264 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 265 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 266 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 267 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 268 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 269 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 270 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 271 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 272 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 273 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 274 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 275 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 276 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 277 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 278 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 279 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 280 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 281 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 282 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 283 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 284 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 285 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 286 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 287 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 288 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 289 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 290 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 291 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 292 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 293 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 294 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 295 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 296 , 19 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 297 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 298 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 299 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 300 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 301 , 18 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 302 , TARGET_STRING (
"propagatorComplete/Normalize Vector" ) , TARGET_STRING ( "maxzero" ) , 0 , 2
, 0 } , { 303 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics" ) ,
TARGET_STRING ( "startDate" ) , 0 , 2 , 0 } , { 304 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "mass" ) , 0 , 2
, 0 } , { 305 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics" ) ,
TARGET_STRING ( "emptyMass" ) , 0 , 2 , 0 } , { 306 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "fullMass" ) , 0
, 2 , 0 } , { 307 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics"
) , TARGET_STRING ( "inertia" ) , 0 , 3 , 0 } , { 308 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "emptyInertia" )
, 0 , 3 , 0 } , { 309 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "fullInertia" )
, 0 , 3 , 0 } , { 310 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "semiMajorAxis"
) , 0 , 2 , 0 } , { 311 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "eccentricity" )
, 0 , 2 , 0 } , { 312 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "inclination" )
, 0 , 2 , 0 } , { 313 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "raan" ) , 0 , 2
, 0 } , { 314 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics" ) ,
TARGET_STRING ( "argPeriapsis" ) , 0 , 2 , 0 } , { 315 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "trueAnomaly" )
, 0 , 2 , 0 } , { 316 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "trueLon" ) , 0
, 2 , 0 } , { 317 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics"
) , TARGET_STRING ( "argLat" ) , 0 , 2 , 0 } , { 318 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "lonPeriapsis" )
, 0 , 2 , 0 } , { 319 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING (
"inertialPosition" ) , 0 , 4 , 0 } , { 320 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING (
"inertialVelocity" ) , 0 , 4 , 0 } , { 321 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "fixedPosition"
) , 0 , 4 , 0 } , { 322 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "fixedVelocity"
) , 0 , 4 , 0 } , { 323 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "attitude" ) , 0
, 5 , 0 } , { 324 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics"
) , TARGET_STRING ( "attitudeRate" ) , 0 , 4 , 0 } , { 325 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "customR" ) , 0
, 2 , 0 } , { 326 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics"
) , TARGET_STRING ( "customF" ) , 0 , 2 , 0 } , { 327 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "customMu" ) , 0
, 2 , 0 } , { 328 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics"
) , TARGET_STRING ( "customJ2" ) , 0 , 2 , 0 } , { 329 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "customOmega" )
, 0 , 2 , 0 } , { 330 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRA" ) , 0 , 2
, 0 } , { 331 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics" ) ,
TARGET_STRING ( "cbRARate" ) , 0 , 2 , 0 } , { 332 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDec" ) , 0 ,
2 , 0 } , { 333 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics" )
, TARGET_STRING ( "cbDecRate" ) , 0 , 2 , 0 } , { 334 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotAngle" ) ,
0 , 2 , 0 } , { 335 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotRate" ) ,
0 , 2 , 0 } , { 336 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING (
"F107ExtrapValue" ) , 0 , 2 , 0 } , { 337 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING (
"MagneticIndexExtrapValue" ) , 0 , 2 , 0 } , { 338 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "fluxFlags" ) ,
0 , 6 , 0 } , { 339 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "dragCoeff" ) ,
0 , 2 , 0 } , { 340 , TARGET_STRING (
"propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING ( "dragArea" ) , 0
, 2 , 0 } , { 341 , TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics"
) , TARGET_STRING ( "customThirdBodyMu" ) , 0 , 2 , 0 } , { 342 ,
TARGET_STRING ( "propagatorComplete/Spacecraft Dynamics" ) , TARGET_STRING (
"fluxPressure" ) , 0 , 2 , 0 } , { 343 , TARGET_STRING (
"propagatorComplete/Normalize Vector/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 2 , 0 } , { 344 , TARGET_STRING (
"propagatorComplete/Periapsis burn/-v_e (b)" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 345 , TARGET_STRING (
"propagatorComplete/Moon/r over cubed norm/Normalize Vector" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 2 , 0 } , { 346 , TARGET_STRING (
"propagatorComplete/Moon/r over cubed norm1/Normalize Vector" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 2 , 0 } , { 347 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/M_b (N-m)" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 2 , 0 } , { 348 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)"
) , TARGET_STRING ( "primaryAlignment" ) , 0 , 4 , 0 } , { 349 ,
TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)"
) , TARGET_STRING ( "secondaryAlignment" ) , 0 , 4 , 0 } , { 350 ,
TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)"
) , TARGET_STRING ( "secondaryConstraint" ) , 0 , 4 , 0 } , { 351 ,
TARGET_STRING ( "propagatorComplete/Tangential pointing/controller/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 352 , TARGET_STRING (
"propagatorComplete/Moon/r over cubed norm/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 353 , TARGET_STRING (
"propagatorComplete/Moon/r over cubed norm1/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 354 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Subsystem/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 355 , TARGET_STRING (
"propagatorComplete/Tangential pointing/controller/Subsystem/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 356 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 357 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 358 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 359 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 360 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 361 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 362 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 2 , 0 } , { 363 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 2 , 0 } , { 364 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 365 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 366 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 367 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 368 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 369 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 370 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 371 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 372 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 373 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 374 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 375 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 376 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 377 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 378 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 379 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 380 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 381 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 382 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 383 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 384 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 385 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 386 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 387 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/CalcC1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 388 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 389 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 390 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 391 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 392 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 393 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 394 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 395 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 396 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 397 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 398 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 399 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 400 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 401 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 402 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 403 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 404 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 405 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 406 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 407 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 408 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 409 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 410 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 411 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 412 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 413 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 414 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 415 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 416 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 417 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 418 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 419 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 420 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 421 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 422 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 423 , TARGET_STRING (
 "propagatorComplete/Tangential pointing/controller/Attitude Profile (Custom Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 424 , 0
, TARGET_STRING ( "propagatorComplete/x_icrf (m)" ) , TARGET_STRING ( "" ) ,
1 , 0 , 0 , 0 , 0 } , { 425 , 0 , TARGET_STRING (
"propagatorComplete/q_icrf2b" ) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 }
, { 426 , 0 , TARGET_STRING ( "propagatorComplete/Moon position" ) ,
TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 427 , TARGET_STRING ( "area" ) , 0 , 2 , 0 } , {
428 , TARGET_STRING ( "ref" ) , 0 , 2 , 0 } , { 429 , TARGET_STRING (
"thrust" ) , 0 , 2 , 0 } , { 430 , TARGET_STRING ( "thrustingThreshold" ) , 0
, 2 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . i1gdupwxmv [ 0 ] , & rtB .
dga5uve4em [ 0 ] , & rtB . oroad0ht0q [ 0 ] , & rtB . hmmusp0g1o [ 0 ] , &
rtB . h5ch5oexhd , & rtB . fqb0csb24q [ 0 ] , & rtB . dve3qulja2 [ 0 ] , &
rtB . p0dt0zhwqq , & rtB . ixoaxw0z3z [ 0 ] , & rtB . kodulhrduv [ 0 ] , &
rtB . jp4wysmwga , & rtB . bg4fufsmy1 [ 0 ] , & rtB . jbhis4zpvx [ 0 ] , &
rtB . fj3nbz2brp , & rtB . mhwydlezwh [ 0 ] , & rtB . acj4h4hesu , & rtB .
ohiivs4pv5 , & rtB . mhwydlezwh [ 0 ] , & rtB . ccgjqwq00r [ 0 ] , & rtB .
jvs22ygnlb , & rtB . nid0rlczhv [ 0 ] , & rtB . bf0fs5uttf , & rtB .
a4nzpbifls [ 0 ] , & rtB . dxg13zvbtq , & rtB . brmutb1g1u , & rtB .
d5xucg4nfl , & rtB . fisaz5rh1d , & rtB . itjtebuhln , & rtB . cmnnpvygtl , &
rtB . kudzc132rw [ 0 ] , & rtB . gwno0h0ad0 [ 0 ] , & rtB . ov2djkilpt , &
rtB . dzsozrxxtr , & rtB . cq5px5e2vv [ 0 ] , & rtB . mvf1ryalzv , & rtB .
jis02iihtm , & rtB . eezuitvkf2 , & rtB . al1oahzn31 , & rtB . laettbhgce , &
rtB . g2a20n1njt , & rtB . j0rfilwsfi , & rtB . h2pfhvsedk , & rtB .
lkjfpajzl3 , & rtB . mxgn531rcl , & rtB . pmv4ecy5zz , & rtB . ljosvnlw4m , &
rtB . kbuzajo4k4 , & rtB . bhu2xuh1yz [ 0 ] , & rtB . pigzm5qj1u , & rtB .
dbndv1qsaf , & rtB . hkemz4k3jv , & rtB . f4v0hwmwl1 [ 0 ] , & rtB .
lslovmufsj , & rtB . os1djyx3gq , & rtB . kl1dujwoxs , & rtB . gbfdgx02zs , &
rtB . jaody4hpx1 , & rtB . ilwyp1idaz , & rtB . egepo0qoxn , & rtB .
hlmoxwhlpo , & rtB . eakab5nckm , & rtB . dglowvh22n , & rtB . nmhsnnyyjb , &
rtB . lc0hygznhb , & rtB . fsobn51cwo , & rtB . f2tagcydxx , & rtB .
paao34dbge , & rtB . nbej345zml , & rtB . jwb0ahpfau , & rtB . a4dmsmw4dd , &
rtB . jbnkmaznx1 , & rtB . mwkyl1qnsr , & rtB . nslfaccjkc , & rtB .
kadajiqlk2 , & rtB . glweuu0jof , & rtB . lliptltvxv , & rtB . mn52oa3uc3 , &
rtB . cgtdzhnvtm , & rtB . lopw34lvpy , & rtB . em1armpiip , & rtB .
gut2lsy3r3 , & rtB . ehfpacwyjv , & rtB . bowxeudhcu , & rtB . nceipi1mwm , &
rtB . lcks1hemgj , & rtB . ox0cvbvwwa , & rtB . piqzipmsmc , & rtB .
htgin2wwsm , & rtB . gruwqijb1i , & rtB . hjsxgh2rxw , & rtB . dw4tvopbpl , &
rtB . j5yfzbfhkx , & rtB . docpe423pw , & rtB . cabu5lfoiu , & rtB .
eyooagp31g , & rtB . e40sm1esb2 , & rtB . g20f0tyemp , & rtB . crbkqa4zcg , &
rtB . bzdn302vol , & rtB . gh5tcqmmg2 , & rtB . cfpt44ankl , & rtB .
ix4zrpudlv , & rtB . a3mxf5yduh , & rtB . fbluqzqpjw , & rtB . huximy5ggo , &
rtB . g4niedc4jf , & rtB . icur5un0um , & rtB . pjczvjoh14 , & rtB .
fhdzfrquqm , & rtB . dzwjok5d2k , & rtB . hjewv5w14n , & rtB . iip1hriuva , &
rtB . eft0lj40ww , & rtB . a1k1ptiumf , & rtB . lfzqhovs4q , & rtB .
byibualgjm , & rtB . mpkbaajjfa , & rtB . mgnz2gf0nd , & rtB . pvaph1jxlp , &
rtB . nl1z4fd3ri , & rtB . chxdayrvyc , & rtB . j5rgjgk55e , & rtB .
meo1lsqulq , & rtB . mesawx2zut , & rtB . lasrw5ukka , & rtB . ntuzztetrw , &
rtB . mlh0r04pcn , & rtB . mqkkf3g1ci , & rtB . j3m24zp1b2 , & rtB .
fotwyiilg0 , & rtB . hxnnbjicyn , & rtB . blzjelfrwf , & rtB . n2b3wgfs0b , &
rtB . dfev1qf3y5 , & rtB . m0smnb2oey , & rtB . dmaqam0v0h , & rtB .
l3kopglscf , & rtB . bw4dogjhdp , & rtB . dgbrfjrsnf , & rtB . nhs31lz5yi , &
rtB . jopolvtd1q , & rtB . pwxw3btyt3 , & rtB . dw5fo1tslt , & rtB .
m2biuhqq4b , & rtB . bhi3oqiriq , & rtB . bmv5sjbgiy , & rtB . kwxnygmwo4 , &
rtB . g5vqg0l4d3 , & rtB . ecfsbxh50q , & rtB . hw3bubstlq , & rtB .
geezzyxovx , & rtB . iavnjulq1p , & rtB . aocyydnhyx , & rtB . btadruhgyg , &
rtB . pxr5jc1icn , & rtB . algyw44cxb , & rtB . g152ybx4et , & rtB .
i1atw1qe0l , & rtB . l1ngpg1edp , & rtB . kiyhu3ma0g , & rtB . jwrsvb1440 , &
rtB . k00ajdwzvi , & rtB . lskzsfnyns , & rtB . kez0ugcrs0 , & rtB .
c2npgjvga0 , & rtB . pwqzgmz2tj , & rtB . fg3nxicf2i , & rtB . bxqqxtzuxt , &
rtB . kkv2b3yior , & rtB . f44ipg1ur0 , & rtB . ooh1cadzi5 , & rtB .
pbeueed2ng , & rtB . dmedi11jmf , & rtB . mpeaonrxvr , & rtB . iht2w3ghnc , &
rtB . kdx1qa01wj , & rtB . fiboaixvje , & rtB . izfh0vk2px , & rtB .
khln1tu5lr , & rtB . poi0qfbtfo , & rtB . ahqfyi5siw , & rtB . g3ilclrl2u , &
rtB . hfmydjiw53 , & rtB . bfoonghqhn , & rtB . ehb0gpswkj , & rtB .
nd0dstt5ik , & rtB . gup3rd5lxw , & rtB . m4je0ufogy , & rtB . ae4zf0ag3n , &
rtB . biiv5ksp0r , & rtB . kcvwsci02p , & rtB . nvrevwa3no , & rtB .
lznbj03k3c , & rtB . gxyluj3lik , & rtB . exthhhc1td , & rtB . o2x0gibmio , &
rtB . iz2unhnnvm , & rtB . p3mjwuaxhd , & rtB . ghcfxitfo5 , & rtB .
krv2csy3hb , & rtB . jmbstbx22u , & rtB . g2dk3vwizf , & rtB . c1csrsuck1 , &
rtB . o50igbierp , & rtB . czkyqqofo0 , & rtB . ndll0vzw51 , & rtB .
kbxzvlztyd , & rtB . i2cow4avdn , & rtB . cxb5fcymvn , & rtB . k00n2fvjcp , &
rtB . pe4px3w4eb , & rtB . es1g3iquza , & rtB . nek3egkkpc , & rtB .
fzg5vrlob2 , & rtB . a2nehhwcyt , & rtB . mjsbtbhsim , & rtB . ayoaoq4qke , &
rtB . p1mt4d4lqw , & rtB . p5qkzgyoui , & rtB . o14k0syu0t , & rtB .
ipamocjtp5 , & rtB . clluii5k4r , & rtB . jtm20p3hzi , & rtB . pk5w14pzrn , &
rtB . nsovsetmi4 , & rtB . oma1tfw5tf , & rtB . bq3ac2ejs1 , & rtB .
c15nat5wlb , & rtB . b03rarcdmq , & rtB . pdtl1hmtz4 [ 0 ] , & rtB .
ljatzgyper , & rtB . bmnjmdzbfg , & rtB . id1wdzpi4i , & rtB . fdiv1m4ppv , &
rtB . fkqjxvrclw , & rtB . g1rck4njgs , & rtB . mml3u50iev [ 0 ] , & rtB .
h1melgebni , & rtB . ii1deoyvuv , & rtB . enyjgablpy , & rtB . bjydpcizvi , &
rtB . c50wznxnuu , & rtB . luhuz1y0pa , & rtB . btbmowyvpj [ 0 ] , & rtB .
dignlydsoz [ 0 ] , & rtB . p1f1e3cdzh [ 0 ] , & rtB . gdquahf0f2 , & rtB .
fymi0gmyip , & rtB . nieicv1rhk , & rtB . cbatohx55z , & rtB . igelp4q2vf , &
rtB . pqp513dsef , & rtB . jv1m44ghwg , & rtB . nx0f4e5b5g , & rtB .
nv0ask5hgo , & rtB . gnoip5fbwb , & rtB . lpoqde35x5 , & rtB . canhkothbr [ 0
] , & rtB . c0gwhqfxol , & rtB . flrignulms , & rtB . ikcevoxr4b , & rtB .
acueu1fhlu , & rtB . mia3lzsnht , & rtB . lnqzfviuoy , & rtB . a3ighfvleh [ 0
] , & rtB . hwj20d3bno , & rtB . osslghchcb , & rtB . d31av4qw31 , & rtB .
hy5wnoloht , & rtB . kfcou4bvza , & rtB . el0adgnog1 , & rtB . gvuzrrlgxw , &
rtB . apg0lfybz1 , & rtB . oeuiuc0rml , & rtB . pctmp0afbx , & rtB .
m4kkl4ufjq , & rtB . congrphuyl , & rtB . gmkpt4ng2s , & rtB . lguqhr3eed , &
rtB . omhh14un54 , & rtB . iw3dewpgzo , & rtB . ctzop00roh , & rtB .
fnimcmg5s3 , & rtB . gawqjwnyv5 , & rtB . fu5mr4vpex , & rtB . m5up2n1nbo , &
rtB . jmgq2pwzfq , & rtB . bw45iqqgvl , & rtB . igvpzctkst , & rtB .
cm4esdumwi , & rtB . a4vdkamzyo , & rtB . iahogspbv0 , & rtB . ea3joyevwd , &
rtB . k4qexhdxn1 , & rtB . gd4e0o2c2n , & rtB . b0nxk2epl4 , & rtB .
fyxniedijj , & rtB . mjy2c1ieko , & rtB . fse0xextas , & rtB . gbpehgsgh2 , &
rtB . eua3hgkuqw , & rtB . ekgziriw0z , & rtP .
NormalizeVector_maxzero_hb0qhx1yar , & rtP . SpacecraftDynamics_startDate , &
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
SpacecraftDynamics_fluxPressure , & rtP . Constant_Value_l03ciegqnh , & rtP .
v_eb_Value [ 0 ] , & rtP . NormalizeVector_maxzero , & rtP .
NormalizeVector_maxzero_pntl1pmm30 , & rtP . M_bNm_Y0 , & rtP .
AttitudeProfileCustomTracking_primaryAlignment [ 0 ] , & rtP .
AttitudeProfileCustomTracking_secondaryAlignment [ 0 ] , & rtP .
AttitudeProfileCustomTracking_secondaryConstraint [ 0 ] , & rtP .
Gain_Gain_nm01mepo3f , & rtP . Constant_Value_lw5gurrfpk , & rtP .
Constant_Value_ln0uq0icxn , & rtP . Constant3_Value , & rtP .
Gain_Gain_kx3qnhmcxx , & rtP . Bias_Bias_g0qrwws1na , & rtP .
Bias1_Bias_atthryq0zv , & rtP . Bias_Bias , & rtP . Bias1_Bias , & rtP .
Constant_Value , & rtP . Constant_Value_pns05g3b55 , & rtP .
CompareToConstant_const , & rtP . CompareToConstant_const_nyz535bbbu , & rtP
. Constant_Value_c0wdwq4tzn , & rtP . Gain_Gain_g15jpqvdyg , & rtP .
Gain1_Gain_faqugitdim , & rtP . Gain2_Gain_int0dpavpw , & rtP .
Constant_Value_iapa0kts2j , & rtP . Gain_Gain_kfeeor2lhw , & rtP .
Gain1_Gain_gbvqsckych , & rtP . Gain2_Gain_p3jp4v4bbc , & rtP .
Constant_Value_hsfi4e2uaa , & rtP . Gain_Gain_aa0wcaoaaz , & rtP .
Gain1_Gain_epvwxefqmi , & rtP . Gain2_Gain_hhmnogiwlf , & rtP .
Constant_Value_c5ijra1dvs , & rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP .
Gain2_Gain , & rtP . Constant_Value_nknymy1wan , & rtP . Gain_Gain_fkrnrvat52
, & rtP . Gain1_Gain_nkhck1ygxr , & rtP . Gain2_Gain_iquz4fnlzi , & rtP .
Constant_Value_bh2wousvvw , & rtP . Gain_Gain_mpa02bou1h , & rtP .
Gain1_Gain_oerlhbnxof , & rtP . Gain2_Gain_lhluacmlha , & rtP . lfxaatuckyk .
Constant_Value , & rtP . bgq2api2xe . Constant_Value , & rtP . bngxmawtie .
Constant_Value , & rtP . l3x3mdhan1r . Constant_Value , & rtP . k4vsitdlsd .
Constant_Value , & rtP . pazq3m0j3m . Constant_Value , & rtP .
Constant_Value_hrp2o0rwmd , & rtP . Gain_Gain_gfy041jfbg , & rtP .
Gain1_Gain_d1qclj2egp , & rtP . Gain2_Gain_fw4b3tt5vg , & rtP .
Constant_Value_ibbq1bfjl1 , & rtP . Gain_Gain_ky20gmonrh , & rtP .
Gain1_Gain_k1fon0cayn , & rtP . Gain2_Gain_khli3wzwff , & rtP .
Constant_Value_ozvaaxtkzl , & rtP . Gain_Gain_lsbmbjfguo , & rtP .
Gain1_Gain_dc5430g0dt , & rtP . Gain2_Gain_k1wqp4egyq , & rtP .
Bias_Bias_abfrdlc52d , & rtP . Bias1_Bias_hcyhgh541x , & rtP .
Constant_Value_plvwaiy2qy , & rtP . Constant1_Value , & rtP .
Gain_Gain_bkh01xyo4j , & rtP . Gain2_Gain_b0l1sq1lnj , & rtP .
Bias_Bias_djq3n4uzff , & rtP . Bias1_Bias_dlcxjxahid , & rtP .
Constant_Value_lh1chvuth3 , & rtP . Constant1_Value_eyzq52s3pd , & rtP .
Gain_Gain_dfsvhso0x2 , & rtP . Gain2_Gain_jkoscwfz0l , & rtP . khi00wnpar .
Constant_Value , & rtP . p2jn3lrd2r . Constant_Value , & rtP . lhwjkdp01r .
Constant_Value , & rtP . azhxucr5v2 . Constant_Value , & rtP . iim0uzjq2f .
Constant_Value , & rtP . jq4zzibyuf . Constant_Value , & rtY . bruvjfgo5t [ 0
] , & rtY . kgnzuhgazc [ 0 ] , & rtY . jjprc2gsjk [ 0 ] , & rtP . area , &
rtP . ref , & rtP . thrust , & rtP . thrustingThreshold , } ; static int32_T
* rtVarDimsAddrMap [ ] = { ( NULL ) } ;
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
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_SCALAR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 3 , 1 , 4 , 1 , 1 , 1 , 3 , 3 , 1 , 3 , 1 , 4 , 1 , 23 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 302 ,
rtRootInputs , 0 , rtRootOutputs , 3 } , { rtBlockParameters , 122 ,
rtModelParameters , 4 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 722722470U , 2369403267U , 702987444U , 3972630618U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * propagatorComplete_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void propagatorComplete_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
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
void propagatorComplete_host_InitializeDataMapInfo (
propagatorComplete_host_DataMapInfo_T * dataMap , const char * path ) {
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
