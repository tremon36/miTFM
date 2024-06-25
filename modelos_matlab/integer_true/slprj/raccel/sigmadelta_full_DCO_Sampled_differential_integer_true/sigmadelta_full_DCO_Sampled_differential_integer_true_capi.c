#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "sigmadelta_full_DCO_Sampled_differential_integer_true_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 21
#endif
#ifndef SS_INT64
#define SS_INT64 22
#endif
#else
#include "builtin_typeid_types.h"
#include "sigmadelta_full_DCO_Sampled_differential_integer_true.h"
#include "sigmadelta_full_DCO_Sampled_differential_integer_true_capi.h"
#include "sigmadelta_full_DCO_Sampled_differential_integer_true_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 1 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Data Type Conversion2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 2 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Data Type Conversion3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 3 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Data Type Conversion5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 4 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 1 } , { 8 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain7" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 9 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain8" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 10 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain9" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 1 } , { 11 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Saturation" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Saturation1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/ 1" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 15 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum17" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 16 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum18" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 17 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum19" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 18 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 19 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum20" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 20 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum21" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 21 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum22" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 1 } , { 22 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 23 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 24 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Sum5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 25 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Zero-Order Hold3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 2 , 1 } , { 26 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Zero-Order Hold8" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 2 , 1 } , { 27 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/DCO1/Zero-Order Hold1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 2 , 0 } , { 28 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/DCO1/Delay2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 2 , 0 } , { 29 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/DCO2/Sum2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 2 , 0 } , { 30 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/DCO2/Delay2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 2 , 0 } , { 31 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 32 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 33 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Gain3"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 34 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Gain4"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 35 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 37 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Gain3"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 38 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Gain4"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 39 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 3 } , { 40 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 41 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 42 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Gain3"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 43 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Gain4"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 44 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 3 } , { 45 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Gain1"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 46 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Gain2"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 47 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Gain3"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 48 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Gain4"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 49 , 1 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter1/Sample and Hold"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 50 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter1/Mod1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 51 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter1/Sum6" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 52 , 2 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter2/Sample and Hold"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 53 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter2/Mod1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 54 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter2/Sum6" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 55 , 3 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter3/Sample and Hold"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 56 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter3/Mod1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 57 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter3/Sum6" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 58 , 4 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter4/Sample and Hold"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 59 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter4/Mod1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 60 , 0 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter4/Sum6" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 61 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly1/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 62 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly1/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 63 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly4/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 64 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly4/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 65 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly5/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 66 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly5/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 67 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly1/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 68 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly1/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 69 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly4/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 70 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly4/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 71 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly5/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 72 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly5/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 73 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly1/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 74 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly1/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 75 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly4/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 76 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly4/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 77 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly5/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 78 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly5/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 79 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly1/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 80 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly1/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 81 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly4/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 82 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly4/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 83 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly5/Integrator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 84 , 0 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly5/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 85 , 1 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/counter1/Sample and Hold/In"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 86 , 2 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/counter2/Sample and Hold/In"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 87 , 3 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/counter3/Sample and Hold/In"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 88 , 4 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/counter4/Sample and Hold/In"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 89 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 90 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Constant13" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 91 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Constant14" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 92 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Constant2" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 93 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 3 } , { 94 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 4 } , { 95 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Gain9" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 4 } , { 96 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 97 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Saturation1" ) ,
TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 98 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/ 1" ) , TARGET_STRING
( "Bias" ) , 1 , 0 , 0 } , { 99 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/ 1" ) , TARGET_STRING
( "Phase" ) , 1 , 0 , 0 } , { 100 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/ 2" ) , TARGET_STRING
( "Bias" ) , 1 , 0 , 0 } , { 101 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/ 2" ) , TARGET_STRING
( "Phase" ) , 1 , 0 , 0 } , { 102 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Delay1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 103 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Delay2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 104 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Delay4" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 105 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/Delay7" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 106 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/DCO1/Delay2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 2 } , { 107 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/DCO2/Delay2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 2 } , { 108 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Gain1"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 109 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Gain2"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 110 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Gain3"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 111 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Gain4"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 112 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 113 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 114 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 115 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 116 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Gain1"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 117 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Gain2"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 118 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Gain3"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 119 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Gain4"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 120 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 121 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 122 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 123 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 124 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Gain1"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 125 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Gain2"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 126 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Gain3"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 127 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Gain4"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 128 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 129 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 130 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 131 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 132 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Gain1"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 133 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Gain2"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 134 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Gain3"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 135 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Gain4"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 136 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 137 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 138 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 139 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 140 , TARGET_STRING
( "sigmadelta_full_DCO_Sampled_differential_integer_true/counter1/Constant1"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 141 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter1/Constant3" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 142 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter1/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 143 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter2/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 144 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter2/Constant3" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 145 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter2/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 146 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter3/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 147 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter3/Constant3" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 148 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter3/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 149 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter4/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 150 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter4/Constant3" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 151 , TARGET_STRING (
"sigmadelta_full_DCO_Sampled_differential_integer_true/counter4/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 152 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 153 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly1/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 154 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly1/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 155 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly1/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 156 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly1/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 157 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly1/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 158 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly1/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 159 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly4/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 160 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly4/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 161 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly4/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 162 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly4/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 163 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly4/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 164 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly4/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 165 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly4/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 166 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly5/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 167 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly5/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 168 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly5/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 169 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly5/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 170 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly5/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 171 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly5/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 172 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 1/vdly5/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 173 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 174 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly1/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 175 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly1/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 176 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly1/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 177 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly1/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 178 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly1/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 179 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly1/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 180 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly4/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 181 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly4/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 182 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly4/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 183 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly4/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 184 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly4/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 185 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly4/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 186 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly4/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 187 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly5/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 188 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly5/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 189 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly5/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 190 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly5/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 191 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly5/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 192 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly5/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 193 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 2/vdly5/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 194 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 195 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly1/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 196 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly1/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 197 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly1/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 198 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly1/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 199 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly1/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 200 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly1/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 201 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly4/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 202 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly4/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 203 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly4/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 204 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly4/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 205 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly4/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 206 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly4/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 207 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly4/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 208 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly5/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 209 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly5/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 210 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly5/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 211 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly5/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 212 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly5/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 213 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly5/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 214 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 3/vdly5/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 215 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 216 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly1/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 217 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly1/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 218 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly1/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 219 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly1/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 220 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly1/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 221 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly1/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 222 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly4/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 223 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly4/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 224 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly4/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 225 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly4/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 226 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly4/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 227 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly4/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 228 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly4/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 229 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly5/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 230 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly5/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 1 , 0 , 0 } , { 231 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly5/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 1 , 0 , 0 } , { 232 ,
TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly5/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 1 , 0 , 0 } , { 233 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly5/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 1 , 0 , 0 } , { 234 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly5/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 1 , 0 , 0 } , { 235 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P 4/vdly5/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 1 , 0 , 0 } , { 236 , TARGET_STRING
(
 "sigmadelta_full_DCO_Sampled_differential_integer_true/counter1/Sample and Hold/ "
) , TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 237 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/counter2/Sample and Hold/ "
) , TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 238 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/counter3/Sample and Hold/ "
) , TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 239 , TARGET_STRING (
 "sigmadelta_full_DCO_Sampled_differential_integer_true/counter4/Sample and Hold/ "
) , TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static
const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0
, 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0
, 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 240 , TARGET_STRING (
"Input_signal" ) , 1 , 0 , 0 } , { 241 , TARGET_STRING ( "Kvco" ) , 1 , 0 , 0
} , { 242 , TARGET_STRING ( "f0" ) , 1 , 0 , 0 } , { 243 , TARGET_STRING (
"f02" ) , 1 , 0 , 0 } , { 244 , TARGET_STRING ( "ft" ) , 1 , 0 , 0 } , { 0 ,
( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . jfyxg2pora , & rtB . mtymqxdskr ,
& rtB . cr5ifxx30x , & rtB . dsapdbxvv5 , & rtB . nfp4y3c4oe , & rtB .
ngnestrbjy , & rtB . iet33u53t4 , & rtB . bpvvilv5x0 , & rtB . kgrmgzgmqx , &
rtB . n4mnwvotbr , & rtB . a20x4aezvv , & rtB . fiq2ipptdn , & rtB .
j2nbmk1xp1 , & rtB . mhhu2tnpxn , & rtB . a5n5apq2jk , & rtB . b52ifyiclb , &
rtB . oomwbzmknh , & rtB . jaww0rmrgo , & rtB . i4on5qbs3p , & rtB .
dnrmm412kx , & rtB . bq3qtxogui , & rtB . jalqvrah1a , & rtB . byz4wcpb1i , &
rtB . ixxqou0jmh , & rtB . prhktwurxy , & rtB . agg0qa1equ , & rtB .
ndpim4uvxw , & rtB . frq15es1fg , & rtB . ik5lz4vfeb , & rtB . j3tzm341lz , &
rtB . blyxrzh5wh , & rtB . bqejnevaiw , & rtB . eozfah35pa , & rtB .
h5zx0u2j5z , & rtB . nrcbeojypl , & rtB . lt1weizey2 , & rtB . jqsqycuvjp , &
rtB . g3gmay1qvg , & rtB . kaat2vxihs , & rtB . l0hrwifmyk , & rtB .
my1dkjenar , & rtB . i5qnwd1xft , & rtB . g2w43x1rgu , & rtB . eojdcf25ok , &
rtB . gxiqhdac4z , & rtB . c4u12eyofp , & rtB . l5d5sv15ob , & rtB .
lipuj3gabm , & rtB . gsehs3hnnb , & rtB . kidn0dkyh4l . bhcircixxg , & rtB .
kb0z4ghrx3 , & rtB . of53ol5y2e , & rtB . golzcmoqxl . bhcircixxg , & rtB .
pgju2goynn , & rtB . ncwojfl1ho , & rtB . i0ed20d54s . bhcircixxg , & rtB .
b30hfpmu5e , & rtB . gup24my2t1 , & rtB . kbpnhsyifh . bhcircixxg , & rtB .
ezrijysvzd , & rtB . c3khxutonh , & rtB . ovqw01sam1 , & rtB . hqjmlihzlz , &
rtB . exjizz2jo2 , & rtB . a5cffbgb5o , & rtB . dkzpuru5r2 , & rtB .
gjvk1j10xe , & rtB . ptpa5d2e1n , & rtB . am0zkkx2be , & rtB . pkmkh1hvh4 , &
rtB . edubwe2l1d , & rtB . c5mwrco5fr , & rtB . gjlh0fklml , & rtB .
htd4lm0qfa , & rtB . dthtcjo5c4 , & rtB . edbyb0d21l , & rtB . jqyfeja5w1 , &
rtB . ajmmmek3y4 , & rtB . dvfodclg5x , & rtB . ndvzivqyue , & rtB .
ktbanqbefe , & rtB . kgie0svi5e , & rtB . ciqxajlela , & rtB . oiqotbk4tx , &
rtB . pktrsmb4dq , & rtB . kidn0dkyh4l . bhcircixxg , & rtB . golzcmoqxl .
bhcircixxg , & rtB . i0ed20d54s . bhcircixxg , & rtB . kbpnhsyifh .
bhcircixxg , & rtP . Constant1_Value , & rtP . Constant13_Value , & rtP .
Constant14_Value , & rtP . Constant2_Value , & rtP . Gain_Gain , & rtP .
Gain3_Gain_hzvizfc2ch , & rtP . Gain9_Gain , & rtP . Saturation_LowerSat , &
rtP . Saturation1_LowerSat , & rtP . u_Bias_cxn2cbupoj , & rtP .
u_Phase_lgrdgjvqpc , & rtP . u_Bias , & rtP . u_Phase , & rtP .
Delay1_InitialCondition , & rtP . Delay2_InitialCondition_mopckj2nxe , & rtP
. Delay4_InitialCondition , & rtP . Delay7_InitialCondition , & rtP .
Delay2_InitialCondition_ohl1x2au03 , & rtP . Delay2_InitialCondition , & rtP
. Gain1_Gain , & rtP . Gain2_Gain_nzobe5hggj , & rtP . Gain3_Gain , & rtP .
Gain4_Gain , & rtP . Relay_OnVal_lcdbtjujpq , & rtP . Relay_OffVal_iuo5h2oaoh
, & rtP . Relay_YOn_jauj4ocrsp , & rtP . Relay_YOff_ddodkq4t55 , & rtP .
Gain1_Gain_pfmsb2tnwt , & rtP . Gain2_Gain_pibcjqgl5q , & rtP .
Gain3_Gain_orrkrx44hb , & rtP . Gain4_Gain_f5rnnj140f , & rtP .
Relay_OnVal_ol55c5brbv , & rtP . Relay_OffVal_ftfm5ezvr4 , & rtP .
Relay_YOn_pnewmcn0hv , & rtP . Relay_YOff_g0zkkowcb2 , & rtP .
Gain1_Gain_ei4ctr1ce4 , & rtP . Gain2_Gain_mxhrsicqv0 , & rtP .
Gain3_Gain_erykj2ffdi , & rtP . Gain4_Gain_m5dpyjac2r , & rtP .
Relay_OnVal_azgq1fxwjz , & rtP . Relay_OffVal_m3wov13fvy , & rtP .
Relay_YOn_myrz2fo54j , & rtP . Relay_YOff_m2vdsz2cep , & rtP .
Gain1_Gain_jbm5vg2jfe , & rtP . Gain2_Gain , & rtP . Gain3_Gain_c2aoyjuxem ,
& rtP . Gain4_Gain_fte5si5w01 , & rtP . Relay_OnVal_mmmoteegjq , & rtP .
Relay_OffVal_af0ailhjv4 , & rtP . Relay_YOn_dx350cfzhz , & rtP .
Relay_YOff_klaoj23stk , & rtP . Constant1_Value_k4ze1eyqfh , & rtP .
Constant3_Value , & rtP . Memory_InitialCondition , & rtP .
Constant1_Value_ccfqh3zjfw , & rtP . Constant3_Value_kteichhl4y , & rtP .
Memory_InitialCondition_avz31d4xse , & rtP . Constant1_Value_p4onze5frx , &
rtP . Constant3_Value_cc01naktl1 , & rtP . Memory_InitialCondition_lisisb1puv
, & rtP . Constant1_Value_kim44fji3q , & rtP . Constant3_Value_fkqot0dgjq , &
rtP . Memory_InitialCondition_eopbug5u3g , & rtP . Integrator_IC_bspyxfravm ,
& rtP . Integrator_UpperSat_obehvxea0x , & rtP .
Integrator_LowerSat_hrrlfsxyh1 , & rtP . Relay_OnVal_echuyyywen , & rtP .
Relay_OffVal_gfiee0muju , & rtP . Relay_YOn_nfg3bxhtxu , & rtP .
Relay_YOff_av4xtkhozb , & rtP . Integrator_IC_eniw2bszpi , & rtP .
Integrator_UpperSat_lncwbrrk4q , & rtP . Integrator_LowerSat_pniuvpe0xc , &
rtP . Relay_OnVal_nte1ombnoa , & rtP . Relay_OffVal_bxv3ndvn3n , & rtP .
Relay_YOn_aydwhahfkz , & rtP . Relay_YOff_opbykzzggq , & rtP .
Integrator_IC_hsjhrinlvg , & rtP . Integrator_UpperSat_hnpjk31aqn , & rtP .
Integrator_LowerSat_p5sqmpsfkb , & rtP . Relay_OnVal_brwixqgp2p , & rtP .
Relay_OffVal_lzmtedixmm , & rtP . Relay_YOn_lsb53mcfzj , & rtP .
Relay_YOff_jrvptib512 , & rtP . Integrator_IC_pda235dj3o , & rtP .
Integrator_UpperSat_onycsesq00 , & rtP . Integrator_LowerSat_lt0o50nwow , &
rtP . Relay_OnVal_grhow3snpm , & rtP . Relay_OffVal_in3mllvr4x , & rtP .
Relay_YOn_g5oxmo5vtx , & rtP . Relay_YOff_n2ya32gh1l , & rtP .
Integrator_IC_nen4ukhzeh , & rtP . Integrator_UpperSat_gcii2rzagn , & rtP .
Integrator_LowerSat_avy3r3vlzn , & rtP . Relay_OnVal_f0yihkjgvs , & rtP .
Relay_OffVal_k30yarpddi , & rtP . Relay_YOn_fp2zssybkj , & rtP .
Relay_YOff_jbcg4gr0li , & rtP . Integrator_IC_gc1nxps5tg , & rtP .
Integrator_UpperSat_jxdbo0dk32 , & rtP . Integrator_LowerSat_bx3cuhup2x , &
rtP . Relay_OnVal_lb5krscakn , & rtP . Relay_OffVal_gk3kuiyqyk , & rtP .
Relay_YOn_bhfsrh1cck , & rtP . Relay_YOff_apk0hrwvzz , & rtP .
Integrator_IC_nnkei5byn3 , & rtP . Integrator_UpperSat_nikd5nq4qi , & rtP .
Integrator_LowerSat_ml0gsyvrs4 , & rtP . Relay_OnVal_npnpiqpph3 , & rtP .
Relay_OffVal_esykk2txpm , & rtP . Relay_YOn_ifa2pl2lcg , & rtP .
Relay_YOff_fpmi0fcndp , & rtP . Integrator_IC_lr20tuv0eg , & rtP .
Integrator_UpperSat_fqtyz21jgz , & rtP . Integrator_LowerSat_jssfn1hxzj , &
rtP . Relay_OnVal_cbjqjxb4tm , & rtP . Relay_OffVal_am0oqh4ks4 , & rtP .
Relay_YOn_bc42rfdajg , & rtP . Relay_YOff_kj0k21tk4c , & rtP .
Integrator_IC_i2uai10hwr , & rtP . Integrator_UpperSat_dh0t25pzh2 , & rtP .
Integrator_LowerSat_neq0i10rth , & rtP . Relay_OnVal_h1i2o5kwfg , & rtP .
Relay_OffVal_ps0rhgpgvd , & rtP . Relay_YOn_kfriyo5rl4 , & rtP .
Relay_YOff_f2g3xhsgrz , & rtP . Integrator_IC_hz0cltzclb , & rtP .
Integrator_UpperSat_gcvzmvowsi , & rtP . Integrator_LowerSat_o2mm033ot2 , &
rtP . Relay_OnVal_pqgvke2nha , & rtP . Relay_OffVal_k1c5j1def3 , & rtP .
Relay_YOn_psdpbhlnbk , & rtP . Relay_YOff_j3yuyzhlz1 , & rtP . Integrator_IC
, & rtP . Integrator_UpperSat , & rtP . Integrator_LowerSat , & rtP .
Relay_OnVal , & rtP . Relay_OffVal , & rtP . Relay_YOn , & rtP . Relay_YOff ,
& rtP . Integrator_IC_g2lwwx2esc , & rtP . Integrator_UpperSat_ipwxjx3zwz , &
rtP . Integrator_LowerSat_isd3y4kico , & rtP . Relay_OnVal_fb2ckrosa1 , & rtP
. Relay_OffVal_mdcttm5av2 , & rtP . Relay_YOn_pqm5zswnez , & rtP .
Relay_YOff_gmithmyikx , & rtP . kidn0dkyh4l . _Y0 , & rtP . golzcmoqxl . _Y0
, & rtP . i0ed20d54s . _Y0 , & rtP . kbpnhsyifh . _Y0 , & rtP . Input_signal
, & rtP . Kvco , & rtP . f0 , & rtP . f02 , & rtP . ft , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "short" ,
"int16_T" , 0 , 0 , sizeof ( int16_T ) , ( uint8_T ) SS_INT16 , 0 , 0 , 0 } ,
{ "double" , "real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0
, 0 , 0 } , { "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) ,
( uint8_T ) SS_BOOLEAN , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 ,
4.0690104166666665E-8 , 3.2552083333333332E-7 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 9 , 0 , ( boolean_T ) 1 } , { ( const void * )
& rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 12 , 0 , ( boolean_T ) 1 } , { ( const void * )
& rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 9 , - 5 , ( boolean_T ) 1 } , { ( const void *
) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 12 , - 13 , ( boolean_T ) 1 } } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 2 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 3 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 3 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , - 1 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 89 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 151 ,
rtModelParameters , 5 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 181193560U , 1803357530U , 2593763468U , 1752874840U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo *
sigmadelta_full_DCO_Sampled_differential_integer_true_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void
sigmadelta_full_DCO_Sampled_differential_integer_true_InitializeDataMapInfo (
void ) { rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void
sigmadelta_full_DCO_Sampled_differential_integer_true_host_InitializeDataMapInfo
( sigmadelta_full_DCO_Sampled_differential_integer_true_host_DataMapInfo_T *
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
