#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "int16_T" , 17 , 2 } , {
"int16_T" , 18 , 2 } , { "int16_T" , 19 , 2 } , { "int16_T" , 20 , 2 } , {
"uint64_T" , 21 , 8 } , { "int64_T" , 22 , 8 } , { "uint_T" , 23 , 32 } , {
"char_T" , 24 , 8 } , { "uchar_T" , 25 , 8 } , { "time_T" , 26 , 8 } } ;
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T
) , sizeof ( uint64_T ) , sizeof ( int16_T ) , sizeof ( int16_T ) , sizeof (
int16_T ) , sizeof ( int16_T ) , sizeof ( uint64_T ) , sizeof ( int64_T ) ,
sizeof ( uint_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T
) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" , "physical_connection" , "int64_T" , "uint64_T" ,
"int16_T" , "int16_T" , "int16_T" , "int16_T" , "uint64_T" , "int64_T" ,
"uint_T" , "char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . kgie0svi5e ) , 0 , 0 , 60 } ,
{ ( char_T * ) ( & rtB . jfyxg2pora ) , 18 , 0 , 19 } , { ( char_T * ) ( &
rtB . gxiqhdac4z ) , 8 , 0 , 2 } , { ( char_T * ) ( & rtB . kbpnhsyifh .
bhcircixxg ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtB . i0ed20d54s . bhcircixxg
) , 0 , 0 , 1 } , { ( char_T * ) ( & rtB . golzcmoqxl . bhcircixxg ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtB . kidn0dkyh4l . bhcircixxg ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtDW . orglme5at4 ) , 0 , 0 , 8 } , { ( char_T * ) ( & rtDW
. phdb1i05o2 . LoggedData [ 0 ] ) , 11 , 0 , 24 } , { ( char_T * ) ( & rtDW .
lmslnypsi2 ) , 10 , 0 , 14 } , { ( char_T * ) ( & rtDW . davvnzy1kr ) , 17 ,
0 , 6 } , { ( char_T * ) ( & rtDW . bfawx2cz2m ) , 8 , 0 , 16 } , { ( char_T
* ) ( & rtDW . kbpnhsyifh . n2c5rrqay1 ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . i0ed20d54s . n2c5rrqay1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
golzcmoqxl . n2c5rrqay1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
kidn0dkyh4l . n2c5rrqay1 ) , 2 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 16U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . Input_signal ) , 0 , 0 , 147
} , { ( char_T * ) ( & rtP . Delay2_InitialCondition ) , 17 , 0 , 9 } , { (
char_T * ) ( & rtP . kbpnhsyifh . _Y0 ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP . i0ed20d54s . _Y0 ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . golzcmoqxl
. _Y0 ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . kidn0dkyh4l . _Y0 ) , 0 , 0
, 1 } } ; static DataTypeTransitionTable rtPTransTable = { 6U ,
rtPTransitions } ;
