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
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . iwpc3uqyn0 [ 0 ] ) , 0 , 0 ,
357 } , { ( char_T * ) ( & rtB . ibghka43t4 ) , 8 , 0 , 3 } , { ( char_T * )
( & rtDW . myihs1k5ak [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * ) ( & rtDW .
hglv0y3zar . AQHandles ) , 11 , 0 , 6 } , { ( char_T * ) ( & rtDW .
nvlm5fi02x ) , 10 , 0 , 1 } , { ( char_T * ) ( & rtDW . ggwlmwhzn2 ) , 2 , 0
, 20 } , { ( char_T * ) ( & rtDW . omiseg2km5 ) , 8 , 0 , 5 } , { ( char_T *
) ( & rtDW . n5noj4hp0p . n5wfkrmirk ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . btrmn3zm0r . n5wfkrmirk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
g35lilzjbm . n5wfkrmirk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
g5ve1v23po . n5wfkrmirk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
gsv54faewy . n5wfkrmirk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
avc3ckvlc2 . n5wfkrmirk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dufiuetx43 . n5wfkrmirk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dxrmmapawx . n5wfkrmirk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ndeg5uxc4fv . n5wfkrmirk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
oeqg1ih2ox . o524g4iyl1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dm5sdsidlf . o524g4iyl1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
g1wscpgucy2 . o524g4iyl1 ) , 2 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 19U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . thrust ) , 0 , 0 , 180 } , {
( char_T * ) ( & rtP . n5noj4hp0p . Constant_Value ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP . btrmn3zm0r . Constant_Value ) , 0 , 0 , 1 } , { ( char_T
* ) ( & rtP . g35lilzjbm . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP . g5ve1v23po . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP
. gsv54faewy . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
avc3ckvlc2 . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
dufiuetx43 . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
dxrmmapawx . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
ndeg5uxc4fv . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
oeqg1ih2ox . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
dm5sdsidlf . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
g1wscpgucy2 . Constant_Value ) , 0 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 13U , rtPTransitions } ;
