#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "uint64_T" , 17 , 8 } , {
"int64_T" , 18 , 8 } , { "uint_T" , 19 , 32 } , { "char_T" , 20 , 8 } , {
"uchar_T" , 21 , 8 } , { "time_T" , 22 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) ,
sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" , "uint64_T" , "int64_T" ,
"uint_T" , "char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . i1gdupwxmv [ 0 ] ) , 0 , 0 ,
358 } , { ( char_T * ) ( & rtB . ohiivs4pv5 ) , 8 , 0 , 4 } , { ( char_T * )
( & rtDW . mz3ujdnhdi [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * ) ( & rtDW .
ptfgkkfyx2 . AQHandles ) , 11 , 0 , 3 } , { ( char_T * ) ( & rtDW .
aiet4ledb1 ) , 10 , 0 , 1 } , { ( char_T * ) ( & rtDW . iiz2sepanf ) , 2 , 0
, 22 } , { ( char_T * ) ( & rtDW . hfidg3r4zu ) , 8 , 0 , 7 } , { ( char_T *
) ( & rtDW . jq4zzibyuf . n2hrtd2tpt ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . iim0uzjq2f . n2hrtd2tpt ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
azhxucr5v2 . n2hrtd2tpt ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
lhwjkdp01r . n2hrtd2tpt ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
p2jn3lrd2r . n2hrtd2tpt ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
khi00wnpar . n2hrtd2tpt ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
pazq3m0j3m . n2hrtd2tpt ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
k4vsitdlsd . n2hrtd2tpt ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
l3x3mdhan1r . n2hrtd2tpt ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
bngxmawtie . feqk14z4ht ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
bgq2api2xe . feqk14z4ht ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
lfxaatuckyk . feqk14z4ht ) , 2 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 19U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . area ) , 0 , 0 , 181 } , { (
char_T * ) ( & rtP . jq4zzibyuf . Constant_Value ) , 0 , 0 , 1 } , { ( char_T
* ) ( & rtP . iim0uzjq2f . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP . azhxucr5v2 . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP
. lhwjkdp01r . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
p2jn3lrd2r . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
khi00wnpar . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
pazq3m0j3m . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
k4vsitdlsd . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
l3x3mdhan1r . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
bngxmawtie . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
bgq2api2xe . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
lfxaatuckyk . Constant_Value ) , 0 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 13U , rtPTransitions } ;
