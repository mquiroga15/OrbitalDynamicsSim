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
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . nzurnwciyf [ 0 ] ) , 0 , 0 ,
32 } , { ( char_T * ) ( & rtDW . hd4234m0gw [ 0 ] ) , 0 , 0 , 6 } , { (
char_T * ) ( & rtDW . jsu32xmjyl . AQHandles ) , 11 , 0 , 3 } , { ( char_T *
) ( & rtDW . kcjmwir3mt ) , 10 , 0 , 6 } , { ( char_T * ) ( & rtDW .
ld3yg5jcxp ) , 2 , 0 , 16 } , { ( char_T * ) ( & rtDW . jm1ravnfof ) , 8 , 0
, 1 } , { ( char_T * ) ( & rtDW . ffvtff1vg1 . oyspsrk4g1 ) , 2 , 0 , 1 } , {
( char_T * ) ( & rtDW . ahwcaguhri . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T
* ) ( & rtDW . dgo50cfy4t . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . bsvvloijiw . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
lmmxizmujp . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ohrauwpzja . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
hwyzimvcur . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ahruhtq5f1 . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
bz3ncnuprc . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dhhhtxmmu2 . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dyyezhnzbv . oyspsrk4g1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
g4qhfioifem . oyspsrk4g1 ) , 2 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 18U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . burnDuration1 ) , 0 , 0 , 195
} , { ( char_T * ) ( & rtP . ffvtff1vg1 . Constant_Value ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP . ahwcaguhri . Constant_Value ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP . dgo50cfy4t . Constant_Value ) , 0 , 0 , 1 } , { ( char_T
* ) ( & rtP . bsvvloijiw . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP . lmmxizmujp . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP
. ohrauwpzja . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
hwyzimvcur . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
ahruhtq5f1 . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
bz3ncnuprc . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
dhhhtxmmu2 . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
dyyezhnzbv . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
g4qhfioifem . Constant_Value ) , 0 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 13U , rtPTransitions } ;
