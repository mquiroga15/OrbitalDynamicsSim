#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "hohmannTransfer_capi_host.h"
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
#include "hohmannTransfer.h"
#include "hohmannTransfer_capi.h"
#include "hohmannTransfer_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 16 , TARGET_STRING
( "hohmannTransfer/Attitude controller" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 1 , 16 , TARGET_STRING (
"hohmannTransfer/Attitude controller/Inner loop controller" ) , TARGET_STRING
( "Moment" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"hohmannTransfer/Maneuver/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 3 , 0 , TARGET_STRING ( "hohmannTransfer/Spacecraft/Max mass flow rate"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 2
, 0 , 2 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 3
, 0 , 0 , 0 , 2 } , { 7 , 16 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel1/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 8 , 16 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel1/Abs1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 9 , 16 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 10 , 16 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 11 , 16 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 12 , 16 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 13 , 16 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 14 , 16 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 15 , 16 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 16 , TARGET_STRING (
"hohmannTransfer/Attitude controller/Attitude Profile" ) , TARGET_STRING (
"primaryAlignment" ) , 0 , 3 , 0 } , { 17 , TARGET_STRING (
"hohmannTransfer/Attitude controller/Attitude Profile" ) , TARGET_STRING (
"secondaryAlignment" ) , 0 , 3 , 0 } , { 18 , TARGET_STRING (
"hohmannTransfer/Attitude controller/Attitude Profile" ) , TARGET_STRING (
"secondaryConstraint" ) , 0 , 3 , 0 } , { 19 , TARGET_STRING (
"hohmannTransfer/Attitude controller/Inner loop controller" ) , TARGET_STRING
( "Gain" ) , 0 , 1 , 0 } , { 20 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Exhaust direction" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 21 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"startDate" ) , 0 , 1 , 0 } , { 22 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING ( "mass" )
, 0 , 1 , 0 } , { 23 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"emptyMass" ) , 0 , 1 , 0 } , { 24 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"fullMass" ) , 0 , 1 , 0 } , { 25 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"inertia" ) , 0 , 4 , 0 } , { 26 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"emptyInertia" ) , 0 , 4 , 0 } , { 27 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"fullInertia" ) , 0 , 4 , 0 } , { 28 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"semiMajorAxis" ) , 0 , 1 , 0 } , { 29 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"eccentricity" ) , 0 , 1 , 0 } , { 30 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"inclination" ) , 0 , 1 , 0 } , { 31 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING ( "raan" )
, 0 , 1 , 0 } , { 32 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"argPeriapsis" ) , 0 , 1 , 0 } , { 33 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"trueAnomaly" ) , 0 , 1 , 0 } , { 34 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"trueLon" ) , 0 , 1 , 0 } , { 35 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING ( "argLat"
) , 0 , 1 , 0 } , { 36 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"lonPeriapsis" ) , 0 , 1 , 0 } , { 37 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"inertialPosition" ) , 0 , 3 , 0 } , { 38 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"inertialVelocity" ) , 0 , 3 , 0 } , { 39 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"fixedPosition" ) , 0 , 3 , 0 } , { 40 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"fixedVelocity" ) , 0 , 3 , 0 } , { 41 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"attitude" ) , 0 , 5 , 0 } , { 42 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"attitudeRate" ) , 0 , 3 , 0 } , { 43 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"customR" ) , 0 , 1 , 0 } , { 44 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"customF" ) , 0 , 1 , 0 } , { 45 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"customMu" ) , 0 , 1 , 0 } , { 46 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"customJ2" ) , 0 , 1 , 0 } , { 47 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"customOmega" ) , 0 , 1 , 0 } , { 48 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRA" )
, 0 , 1 , 0 } , { 49 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"cbRARate" ) , 0 , 1 , 0 } , { 50 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDec"
) , 0 , 1 , 0 } , { 51 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"cbDecRate" ) , 0 , 1 , 0 } , { 52 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"cbRotAngle" ) , 0 , 1 , 0 } , { 53 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"cbRotRate" ) , 0 , 1 , 0 } , { 54 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"F107ExtrapValue" ) , 0 , 1 , 0 } , { 55 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"MagneticIndexExtrapValue" ) , 0 , 1 , 0 } , { 56 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"fluxFlags" ) , 0 , 6 , 0 } , { 57 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"dragCoeff" ) , 0 , 1 , 0 } , { 58 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"dragArea" ) , 0 , 1 , 0 } , { 59 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"customThirdBodyMu" ) , 0 , 1 , 0 } , { 60 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"reflectivityCoeff" ) , 0 , 1 , 0 } , { 61 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"srpArea" ) , 0 , 1 , 0 } , { 62 , TARGET_STRING (
"hohmannTransfer/Spacecraft/Spacecraft Dynamics" ) , TARGET_STRING (
"fluxPressure" ) , 0 , 1 , 0 } , { 63 , TARGET_STRING (
"hohmannTransfer/Attitude controller/Outer loop controller/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 64 , TARGET_STRING (
"hohmannTransfer/Attitude controller/Outer loop controller/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 65 , TARGET_STRING (
"hohmannTransfer/Maneuver/Orbit circularization/Off time" ) , TARGET_STRING (
"Before" ) , 0 , 1 , 0 } , { 66 , TARGET_STRING (
"hohmannTransfer/Maneuver/Orbit circularization/Off time" ) , TARGET_STRING (
"After" ) , 0 , 1 , 0 } , { 67 , TARGET_STRING (
"hohmannTransfer/Maneuver/Orbit circularization/On time" ) , TARGET_STRING (
"Before" ) , 0 , 1 , 0 } , { 68 , TARGET_STRING (
"hohmannTransfer/Maneuver/Orbit circularization/On time" ) , TARGET_STRING (
"After" ) , 0 , 1 , 0 } , { 69 , TARGET_STRING (
"hohmannTransfer/Maneuver/Orbit circularization/Pointing command" ) ,
TARGET_STRING ( "Before" ) , 0 , 1 , 0 } , { 70 , TARGET_STRING (
"hohmannTransfer/Maneuver/Orbit circularization/Pointing command" ) ,
TARGET_STRING ( "After" ) , 0 , 1 , 0 } , { 71 , TARGET_STRING (
"hohmannTransfer/Maneuver/Transfer orbit injection/Off time" ) ,
TARGET_STRING ( "Before" ) , 0 , 1 , 0 } , { 72 , TARGET_STRING (
"hohmannTransfer/Maneuver/Transfer orbit injection/Off time" ) ,
TARGET_STRING ( "After" ) , 0 , 1 , 0 } , { 73 , TARGET_STRING (
"hohmannTransfer/Maneuver/Transfer orbit injection/On time" ) , TARGET_STRING
( "Before" ) , 0 , 1 , 0 } , { 74 , TARGET_STRING (
"hohmannTransfer/Maneuver/Transfer orbit injection/On time" ) , TARGET_STRING
( "After" ) , 0 , 1 , 0 } , { 75 , TARGET_STRING (
"hohmannTransfer/Maneuver/Transfer orbit injection/Pointing command" ) ,
TARGET_STRING ( "Before" ) , 0 , 1 , 0 } , { 76 , TARGET_STRING (
"hohmannTransfer/Maneuver/Transfer orbit injection/Pointing command" ) ,
TARGET_STRING ( "After" ) , 0 , 1 , 0 } , { 77 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel1/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 78 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel1/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 79 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel2/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 80 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel2/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 81 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 82 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 83 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 84 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 85 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 86 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 87 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 88 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 89 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 90 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 91 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 92 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 93 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 94 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 95 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 96 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 97 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 98 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 99 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 100 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 101 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 102 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 103 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 104 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 105 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 106 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 107 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 108 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/CalcC1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 109 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 110 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 111 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 112 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 113 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 114 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 115 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 116 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 117 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 118 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 119 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 120 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 121 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 122 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 123 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 124 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 125 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 126 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 127 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 128 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 129 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 130 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 131 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 132 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 133 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 134 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 135 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 136 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 137 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 138 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 139 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 140 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 141 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 142 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 143 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 144 , TARGET_STRING (
 "hohmannTransfer/Attitude controller/Attitude Profile/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 145 , 0
, TARGET_STRING ( "hohmannTransfer/Position" ) , TARGET_STRING ( "" ) , 1 , 0
, 0 , 0 , 2 } , { 146 , 0 , TARGET_STRING ( "hohmannTransfer/Attitude" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 2 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 147 , TARGET_STRING ( "burnDuration1" ) , 0 , 1 ,
0 } , { 148 , TARGET_STRING ( "burnDuration2" ) , 0 , 1 , 0 } , { 149 ,
TARGET_STRING ( "deltav1Direction" ) , 0 , 0 , 0 } , { 150 , TARGET_STRING (
"deltav2Direction" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING ( "mDot" ) , 0 , 1
, 0 } , { 152 , TARGET_STRING ( "t1" ) , 0 , 1 , 0 } , { 153 , TARGET_STRING
( "t2" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . at5sbzwrhg [ 0 ] , & rtB .
at5sbzwrhg [ 0 ] , & rtB . dakutnsmfw [ 0 ] , & rtB . c1fk35dky4 , & rtB .
nzurnwciyf [ 0 ] , & rtB . p3vyjcdubp [ 0 ] , & rtB . m0ioxdh3or [ 0 ] , &
rtB . o3m5ydpoky , & rtB . edbbi1bfho , & rtB . fgdrtjrvrb , & rtB .
k2a22kk5dj , & rtB . b0dtdlqq2o , & rtB . hewskagvmt , & rtB . js4yiqrdiq [ 0
] , & rtB . m4a2cinl4g [ 0 ] , & rtB . b2vfeufs1i [ 0 ] , & rtP .
AttitudeProfile_primaryAlignment [ 0 ] , & rtP .
AttitudeProfile_secondaryAlignment [ 0 ] , & rtP .
AttitudeProfile_secondaryConstraint [ 0 ] , & rtP . Innerloopcontroller_Gain
, & rtP . Exhaustdirection_Value [ 0 ] , & rtP . SpacecraftDynamics_startDate
, & rtP . SpacecraftDynamics_mass , & rtP . SpacecraftDynamics_emptyMass , &
rtP . SpacecraftDynamics_fullMass , & rtP . SpacecraftDynamics_inertia [ 0 ]
, & rtP . SpacecraftDynamics_emptyInertia [ 0 ] , & rtP .
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
rtP . SpacecraftDynamics_fluxPressure , & rtP . Constant3_Value , & rtP .
Gain_Gain_aaczryqecx , & rtP . Offtime_Y0 , & rtP . Offtime_YFinal , & rtP .
Ontime_Y0 , & rtP . Ontime_YFinal , & rtP . Pointingcommand_Y0_lnsmjwn4r0 , &
rtP . Pointingcommand_YFinal_j0uizzisgh , & rtP . Offtime_Y0_a00myhhy4g , &
rtP . Offtime_YFinal_phvdvlycqf , & rtP . Ontime_Y0_of0gxorjhk , & rtP .
Ontime_YFinal_aqks3lcw4k , & rtP . Pointingcommand_Y0 , & rtP .
Pointingcommand_YFinal , & rtP . Bias_Bias_icxn3xlw3j , & rtP .
Bias1_Bias_l44fxvj4xh , & rtP . Bias_Bias_jsr34fusav , & rtP .
Bias1_Bias_lnezxfgswe , & rtP . Constant_Value_j41k2nqkzj , & rtP .
Constant_Value_kydselcoow , & rtP . CompareToConstant_const , & rtP .
CompareToConstant_const_jr0taz5ops , & rtP . Constant_Value_jbtr4ekwkp , &
rtP . Gain_Gain_lncck3b1ht , & rtP . Gain1_Gain_fnkgiav0mq , & rtP .
Gain2_Gain_ppedexqizl , & rtP . Constant_Value_npk3m1qn01 , & rtP .
Gain_Gain_o5kojjvc1w , & rtP . Gain1_Gain_mr00sswlmu , & rtP .
Gain2_Gain_n3y32qpatl , & rtP . Constant_Value_hqi1uun2ik , & rtP .
Gain_Gain_on1psqnxfu , & rtP . Gain1_Gain_lessdreht2 , & rtP .
Gain2_Gain_nwpd5c3tm4 , & rtP . Constant_Value , & rtP . Gain_Gain , & rtP .
Gain1_Gain , & rtP . Gain2_Gain , & rtP . Constant_Value_cjycj0fc0i , & rtP .
Gain_Gain_eejksydamw , & rtP . Gain1_Gain_cpmrppil5o , & rtP .
Gain2_Gain_adqwyb1fpl , & rtP . Constant_Value_librqjr13m , & rtP .
Gain_Gain_epxgvv3uaq , & rtP . Gain1_Gain_np3xblzbry , & rtP .
Gain2_Gain_aoe1z0xtjy , & rtP . g4qhfioifem . Constant_Value , & rtP .
dyyezhnzbv . Constant_Value , & rtP . dhhhtxmmu2 . Constant_Value , & rtP .
bz3ncnuprc . Constant_Value , & rtP . ahruhtq5f1 . Constant_Value , & rtP .
hwyzimvcur . Constant_Value , & rtP . Constant_Value_gu4cnegeyw , & rtP .
Gain_Gain_cxjdjqmywq , & rtP . Gain1_Gain_kgcnisrm24 , & rtP .
Gain2_Gain_iunbs3mto0 , & rtP . Constant_Value_bmyicrezz3 , & rtP .
Gain_Gain_hrj3uk023h , & rtP . Gain1_Gain_ne3jwokduq , & rtP .
Gain2_Gain_atw2ondk21 , & rtP . Constant_Value_blehlmxsbk , & rtP .
Gain_Gain_ja3rm2ptei , & rtP . Gain1_Gain_af1zmxkcba , & rtP .
Gain2_Gain_j3vsc1nqxy , & rtP . Bias_Bias , & rtP . Bias1_Bias , & rtP .
Constant_Value_ixf35js4xe , & rtP . Constant1_Value , & rtP .
Gain_Gain_kownsvaqu5 , & rtP . Gain2_Gain_ehq1npccz3 , & rtP .
Bias_Bias_hhpw4p034x , & rtP . Bias1_Bias_fa10flfbfk , & rtP .
Constant_Value_iujxws1jti , & rtP . Constant1_Value_j3skpjyilw , & rtP .
Gain_Gain_byt1irk5mi , & rtP . Gain2_Gain_oxh0cjyqdd , & rtP . ohrauwpzja .
Constant_Value , & rtP . lmmxizmujp . Constant_Value , & rtP . bsvvloijiw .
Constant_Value , & rtP . dgo50cfy4t . Constant_Value , & rtP . ahwcaguhri .
Constant_Value , & rtP . ffvtff1vg1 . Constant_Value , & rtY . hwdkmahxje [ 0
] , & rtY . ahjfqn40yh [ 0 ] , & rtP . burnDuration1 , & rtP . burnDuration2
, & rtP . deltav1Direction [ 0 ] , & rtP . deltav2Direction [ 0 ] , & rtP .
mDot , & rtP . t1 , & rtP . t2 , } ; static int32_T * rtVarDimsAddrMap [ ] =
{ ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
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
real_T rtcapiStoredFloats [ ] = { 0.1 , 0.0 , 1.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 2 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 2 ] , ( int8_T ) 1 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , 3 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 16 , rtRootInputs , 0 , rtRootOutputs , 2 } , {
rtBlockParameters , 129 , rtModelParameters , 7 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 1925305032U , 1243318243U , 4267994078U ,
515748055U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * hohmannTransfer_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void hohmannTransfer_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
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
void hohmannTransfer_host_InitializeDataMapInfo (
hohmannTransfer_host_DataMapInfo_T * dataMap , const char * path ) {
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
