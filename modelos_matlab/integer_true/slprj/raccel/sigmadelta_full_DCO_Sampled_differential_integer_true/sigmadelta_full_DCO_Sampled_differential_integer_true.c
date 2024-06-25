#include "sigmadelta_full_DCO_Sampled_differential_integer_true.h"
#include "rtwtypes.h"
#include "sigmadelta_full_DCO_Sampled_differential_integer_true_private.h"
#include "mwmathutil.h"
#include "rt_logging_mmi.h"
#include "sigmadelta_full_DCO_Sampled_differential_integer_true_capi.h"
#include "zero_crossing_types.h"
#include "sigmadelta_full_DCO_Sampled_differential_integer_true_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , &
stopRequested ) ; } rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 , 1 }
; const char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const
char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; void l2m5jmzysm ( gfv13enjot * localB ,
by3yi2igvz * localP ) { localB -> bhcircixxg = localP -> _Y0 ; } void
kidn0dkyh4 ( SimStruct * rtS_e , boolean_T hv2mv3yjly , real_T lc42t0dyem ,
gfv13enjot * localB , a5jozx5y5x * localDW , ba5sevgwxg * localZCE ) { if (
ssIsModeUpdateTimeStep ( rtS_e ) ) { if ( hv2mv3yjly && ( localZCE ->
mkgoidkhc0 != POS_ZCSIG ) ) { localB -> bhcircixxg = lc42t0dyem ; localDW ->
n2c5rrqay1 = 4 ; } localZCE -> mkgoidkhc0 = hv2mv3yjly ; } } void
MdlInitialize ( void ) { rtDW . orglme5at4 = rtP .
TmpLatchAtSampleandHoldInport1_InitialCondition ; rtX . ocl0bnlv5i = rtP .
Integrator_IC ; rtDW . orglme5at4a = rtP .
TmpLatchAtSampleandHoldInport1_InitialCondition_jxkxj0lwzg ; rtX . cyenolwp1t
= rtP . Integrator_IC_lr20tuv0eg ; rtDW . davvnzy1kr = rtP .
Delay2_InitialCondition ; rtDW . kdkihaa34w = rtP . Delay4_InitialCondition ;
rtDW . orglme5at4a5 = rtP .
TmpLatchAtSampleandHoldInport1_InitialCondition_jxkxj0lwzg4 ; rtX .
ivov12hdqr = rtP . Integrator_IC_nen4ukhzeh ; rtDW . orglme5at4a50 = rtP .
TmpLatchAtSampleandHoldInport1_InitialCondition_jxkxj0lwzg4l ; rtX .
duwt3olrcl = rtP . Integrator_IC_eniw2bszpi ; rtDW . fh20zoj1sh = rtP .
Delay2_InitialCondition_ohl1x2au03 ; rtDW . g4cefol0br = rtP .
Delay1_InitialCondition ; rtDW . beitdmk3fp = rtP .
Delay2_InitialCondition_mopckj2nxe ; rtDW . mmsvkaoufm = rtP .
Delay7_InitialCondition ; rtX . hgnelaemj3 = rtP . Integrator_IC_bspyxfravm ;
rtX . jvqvth1xfn = rtP . Integrator_IC_hsjhrinlvg ; rtX . m3pfzoipqp = rtP .
Integrator_IC_pda235dj3o ; rtX . ohyadbptl4 = rtP . Integrator_IC_gc1nxps5tg
; rtX . ff0aprbz4e = rtP . Integrator_IC_nnkei5byn3 ; rtX . jbez0f4u2q = rtP
. Integrator_IC_i2uai10hwr ; rtX . bccqwl4dld = rtP .
Integrator_IC_hz0cltzclb ; rtX . dyo3j1ie0t = rtP . Integrator_IC_g2lwwx2esc
; rtDW . lin3vz4uln = rtP . Memory_InitialCondition ; rtDW . eey4qgobmt = rtP
. Memory_InitialCondition_avz31d4xse ; rtDW . f1bjvxwccz = rtP .
Memory_InitialCondition_lisisb1puv ; rtDW . kq2ezp4qmo = rtP .
Memory_InitialCondition_eopbug5u3g ; l2m5jmzysm ( & rtB . kbpnhsyifh , & rtP
. kbpnhsyifh ) ; l2m5jmzysm ( & rtB . i0ed20d54s , & rtP . i0ed20d54s ) ;
l2m5jmzysm ( & rtB . golzcmoqxl , & rtP . golzcmoqxl ) ; l2m5jmzysm ( & rtB .
kidn0dkyh4l , & rtP . kidn0dkyh4l ) ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "Gain" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Gain" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "sigmadelta_full_DCO_Sampled_differential_integer_true/To Workspace1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Gain" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. fycjnke3eg . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"8e0c4e69-fac1-446a-b4af-965ce0f026e6" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . fycjnke3eg . AQHandles , hDT , & srcInfo ) ; if ( rtDW . fycjnke3eg .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . fycjnke3eg . AQHandles ,
"3.25521e-07" , 3.2552083333333332E-7 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . fycjnke3eg . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( rtDW . fycjnke3eg . AQHandles , ssGetTaskTime ( rtS , 3
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . fycjnke3eg . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . fycjnke3eg . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain ( rtDW
. fycjnke3eg . AQHandles ) ; } sdiFreeLabel ( sigName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ;
sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ; sdiFreeLabel (
subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { { sdiLabelU varName =
sdiGetLabelFromChars ( "u1" ) ; sdiRegisterWksVariable ( rtDW . fycjnke3eg .
AQHandles , varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { {
bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Sum5" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Sum5" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "sigmadelta_full_DCO_Sampled_differential_integer_true/To Workspace2" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Sum5" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoCreateFixedPointDataType_BinaryPointScaling ( 0 , 1 , 9 , 0 ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. cpflfsupmr . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"6700f9b7-324b-4b44-81ed-452572aa4ac2" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiConfigureAsyncioQueueToLogFixPtAsDouble ( rtDW . cpflfsupmr . AQHandles )
; hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . cpflfsupmr . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . cpflfsupmr . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . cpflfsupmr . AQHandles , "3.25521e-07"
, 3.2552083333333332E-7 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW
. cpflfsupmr . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . cpflfsupmr .
AQHandles , ssGetTaskTime ( rtS , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . cpflfsupmr . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . cpflfsupmr . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . cpflfsupmr . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"u9" ) ; sdiRegisterWksVariable ( rtDW . cpflfsupmr . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Sum22" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Sum22" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "sigmadelta_full_DCO_Sampled_differential_integer_true/To Workspace3" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Sum22" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoCreateFixedPointDataType_BinaryPointScaling ( 0 , 1 , 9 , 0 ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. j1xg5jnqc1 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"200b144b-3f00-4520-a54a-6a656c32e39e" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiConfigureAsyncioQueueToLogFixPtAsDouble ( rtDW . j1xg5jnqc1 . AQHandles )
; hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . j1xg5jnqc1 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . j1xg5jnqc1 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . j1xg5jnqc1 . AQHandles , "3.25521e-07"
, 3.2552083333333332E-7 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW
. j1xg5jnqc1 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . j1xg5jnqc1 .
AQHandles , ssGetTaskTime ( rtS , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . j1xg5jnqc1 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . j1xg5jnqc1 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . j1xg5jnqc1 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"u0" ) ; sdiRegisterWksVariable ( rtDW . j1xg5jnqc1 . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Sum21" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Sum21" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "sigmadelta_full_DCO_Sampled_differential_integer_true/To Workspace4" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Sum21" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoCreateFixedPointDataType_BinaryPointScaling ( 0 , 1 , 9 , 0 ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. j4sex4zqd0 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"2586dfa9-0837-4253-9deb-7771394765dc" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiConfigureAsyncioQueueToLogFixPtAsDouble ( rtDW . j4sex4zqd0 . AQHandles )
; hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . j4sex4zqd0 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . j4sex4zqd0 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . j4sex4zqd0 . AQHandles , "3.25521e-07"
, 3.2552083333333332E-7 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW
. j4sex4zqd0 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . j4sex4zqd0 .
AQHandles , ssGetTaskTime ( rtS , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . j4sex4zqd0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . j4sex4zqd0 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . j4sex4zqd0 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"u8" ) ; sdiRegisterWksVariable ( rtDW . j4sex4zqd0 . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T dnyczqzidb ; real_T dnyczqzidbn ; real_T
dnyczqzidbnp ; real_T dnyczqzidbnpc ; boolean_T b0maqh1tex ; boolean_T
gm1gqz431p ; real_T c5y45la3az ; real_T tmp_p ; int32_T tmp_e ; int16_T tmp ;
srClearBC ( rtDW . kidn0dkyh4l . n2c5rrqay1 ) ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { dnyczqzidb = rtDW . orglme5at4 ; } if ( ssIsModeUpdateTimeStep (
rtS ) ) { if ( rtX . ocl0bnlv5i >= rtP . Integrator_UpperSat ) { if ( rtX .
ocl0bnlv5i != rtP . Integrator_UpperSat ) { rtX . ocl0bnlv5i = rtP .
Integrator_UpperSat ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtDW . lmslnypsi2 = 3 ; } else if ( rtX . ocl0bnlv5i <= rtP .
Integrator_LowerSat ) { if ( rtX . ocl0bnlv5i != rtP . Integrator_LowerSat )
{ rtX . ocl0bnlv5i = rtP . Integrator_LowerSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . lmslnypsi2 = 4
; } else { if ( rtDW . lmslnypsi2 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . lmslnypsi2 = 0
; } rtB . kgie0svi5e = rtX . ocl0bnlv5i ; rtDW . bfawx2cz2m = ( ( rtB .
kgie0svi5e >= rtP . Relay_OnVal ) || ( ( ! ( rtB . kgie0svi5e <= rtP .
Relay_OffVal ) ) && rtDW . bfawx2cz2m ) ) ; } else { rtB . kgie0svi5e = rtX .
ocl0bnlv5i ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtDW . bfawx2cz2m
) { tmp_p = rtP . Relay_YOn ; } else { tmp_p = rtP . Relay_YOff ; } rtB .
l5d5sv15ob = rtP . Gain2_Gain * tmp_p ; rtDW . cfuzk4cfkk = ( ( rtB .
l5d5sv15ob >= rtP . Relay_OnVal_mmmoteegjq ) || ( ( ! ( rtB . l5d5sv15ob <=
rtP . Relay_OffVal_af0ailhjv4 ) ) && rtDW . cfuzk4cfkk ) ) ; if ( rtDW .
cfuzk4cfkk ) { tmp_p = rtP . Relay_YOn_dx350cfzhz ; } else { tmp_p = rtP .
Relay_YOff_klaoj23stk ; } rtB . gxiqhdac4z = ( tmp_p != 0.0 ) ; kidn0dkyh4 (
rtS , rtB . gxiqhdac4z , dnyczqzidb , & rtB . kbpnhsyifh , & rtDW .
kbpnhsyifh , & rtPrevZCX . kbpnhsyifh ) ; rtB . ezrijysvzd =
muDoubleScalarRem ( rtB . kbpnhsyifh . bhcircixxg , rtP .
Constant1_Value_kim44fji3q ) ; dnyczqzidbn = rtDW . orglme5at4a ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { tmp_p = muDoubleScalarFloor ( rtP .
Constant13_Value + rtB . ezrijysvzd ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 512.0 ) ; } if ( ( ( uint32_T ) ( int16_T ) tmp_p
& 256U ) != 0U ) { rtB . jfyxg2pora = ( int16_T ) ( ( int16_T ) tmp_p | - 256
) ; } else { rtB . jfyxg2pora = ( int16_T ) ( ( int16_T ) tmp_p & 255 ) ; } }
if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtX . cyenolwp1t >= rtP .
Integrator_UpperSat_fqtyz21jgz ) { if ( rtX . cyenolwp1t != rtP .
Integrator_UpperSat_fqtyz21jgz ) { rtX . cyenolwp1t = rtP .
Integrator_UpperSat_fqtyz21jgz ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . j4r1opdjxl = 3 ; } else if ( rtX . cyenolwp1t <= rtP .
Integrator_LowerSat_jssfn1hxzj ) { if ( rtX . cyenolwp1t != rtP .
Integrator_LowerSat_jssfn1hxzj ) { rtX . cyenolwp1t = rtP .
Integrator_LowerSat_jssfn1hxzj ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . j4r1opdjxl = 4 ; } else { if ( rtDW . j4r1opdjxl != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . j4r1opdjxl = 0
; } rtB . edbyb0d21l = rtX . cyenolwp1t ; rtDW . oodfsknmtu = ( ( rtB .
edbyb0d21l >= rtP . Relay_OnVal_cbjqjxb4tm ) || ( ( ! ( rtB . edbyb0d21l <=
rtP . Relay_OffVal_am0oqh4ks4 ) ) && rtDW . oodfsknmtu ) ) ; } else { rtB .
edbyb0d21l = rtX . cyenolwp1t ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . oodfsknmtu ) { tmp_p = rtP . Relay_YOn_bc42rfdajg ; } else { tmp_p =
rtP . Relay_YOff_kj0k21tk4c ; } rtB . i5qnwd1xft = rtP .
Gain2_Gain_mxhrsicqv0 * tmp_p ; rtDW . erhbudu55l = ( ( rtB . i5qnwd1xft >=
rtP . Relay_OnVal_azgq1fxwjz ) || ( ( ! ( rtB . i5qnwd1xft <= rtP .
Relay_OffVal_m3wov13fvy ) ) && rtDW . erhbudu55l ) ) ; if ( rtDW . erhbudu55l
) { tmp_p = rtP . Relay_YOn_myrz2fo54j ; } else { tmp_p = rtP .
Relay_YOff_m2vdsz2cep ; } rtB . l0hrwifmyk = ( tmp_p != 0.0 ) ; kidn0dkyh4 (
rtS , rtB . l0hrwifmyk , dnyczqzidbn , & rtB . i0ed20d54s , & rtDW .
i0ed20d54s , & rtPrevZCX . i0ed20d54s ) ; rtB . b30hfpmu5e =
muDoubleScalarRem ( rtB . i0ed20d54s . bhcircixxg , rtP .
Constant1_Value_p4onze5frx ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { tmp_p
= muDoubleScalarFloor ( rtP . Constant14_Value + rtB . b30hfpmu5e ) ; if (
muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p =
0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p , 512.0 ) ; } if ( ( (
uint32_T ) ( int16_T ) tmp_p & 256U ) != 0U ) { rtB . mtymqxdskr = ( int16_T
) ( ( int16_T ) tmp_p | - 256 ) ; } else { rtB . mtymqxdskr = ( int16_T ) ( (
int16_T ) tmp_p & 255 ) ; } tmp = ( int16_T ) ( rtB . jfyxg2pora - rtB .
mtymqxdskr ) ; if ( ( ( uint32_T ) tmp & 256U ) != 0U ) { rtB . jaww0rmrgo =
( int16_T ) ( tmp | - 256 ) ; } else { rtB . jaww0rmrgo = ( int16_T ) ( tmp &
255 ) ; } } c5y45la3az = muDoubleScalarSin ( 6.2831853071795862 * rtP . ft *
ssGetTaskTime ( rtS , 0 ) + rtP . u_Phase ) * ( rtP . Input_signal / 2.0 ) +
rtP . u_Bias ; rtB . kgrmgzgmqx = 4.0 * rtP . Kvco * c5y45la3az ; rtB .
oomwbzmknh = rtB . kgrmgzgmqx + rtP . f0 ; if ( ssIsModeUpdateTimeStep ( rtS
) ) { if ( rtB . oomwbzmknh >= 2.0 * rtP . f0 ) { rtDW . bby3eiosum = 1 ; }
else if ( rtB . oomwbzmknh > rtP . Saturation_LowerSat ) { rtDW . bby3eiosum
= 0 ; } else { rtDW . bby3eiosum = - 1 ; } } if ( rtDW . bby3eiosum == 1 ) {
rtB . fiq2ipptdn = 2.0 * rtP . f0 ; } else if ( rtDW . bby3eiosum == - 1 ) {
rtB . fiq2ipptdn = rtP . Saturation_LowerSat ; } else { rtB . fiq2ipptdn =
rtB . oomwbzmknh ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . blyxrzh5wh
= rtDW . davvnzy1kr ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB .
ndpim4uvxw = rtB . blyxrzh5wh ; tmp = ( int16_T ) ( ( rtP . Gain9_Gain * rtB
. ndpim4uvxw ) >> 13 ) ; if ( ( ( uint32_T ) tmp & 256U ) != 0U ) { rtB .
a20x4aezvv = ( int16_T ) ( tmp | - 256 ) ; } else { rtB . a20x4aezvv = (
int16_T ) ( tmp & 255 ) ; } tmp = ( int16_T ) ( rtB . a20x4aezvv - rtDW .
kdkihaa34w ) ; if ( ( ( uint32_T ) tmp & 256U ) != 0U ) { rtB . jalqvrah1a =
( int16_T ) ( tmp | - 256 ) ; } else { rtB . jalqvrah1a = ( int16_T ) ( tmp &
255 ) ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { tmp = ( int16_T ) ( rtB .
jaww0rmrgo - rtB . a20x4aezvv ) ; if ( ( ( uint32_T ) tmp & 256U ) != 0U ) {
rtB . dnrmm412kx = ( int16_T ) ( tmp | - 256 ) ; } else { rtB . dnrmm412kx =
( int16_T ) ( tmp & 255 ) ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
dnyczqzidbnp = rtDW . orglme5at4a5 ; } if ( ssIsModeUpdateTimeStep ( rtS ) )
{ if ( rtX . ivov12hdqr >= rtP . Integrator_UpperSat_gcii2rzagn ) { if ( rtX
. ivov12hdqr != rtP . Integrator_UpperSat_gcii2rzagn ) { rtX . ivov12hdqr =
rtP . Integrator_UpperSat_gcii2rzagn ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . b1gi51bpxi = 3
; } else if ( rtX . ivov12hdqr <= rtP . Integrator_LowerSat_avy3r3vlzn ) { if
( rtX . ivov12hdqr != rtP . Integrator_LowerSat_avy3r3vlzn ) { rtX .
ivov12hdqr = rtP . Integrator_LowerSat_avy3r3vlzn ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . b1gi51bpxi = 4
; } else { if ( rtDW . b1gi51bpxi != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . b1gi51bpxi = 0
; } rtB . pkmkh1hvh4 = rtX . ivov12hdqr ; rtDW . ao3iawiulm = ( ( rtB .
pkmkh1hvh4 >= rtP . Relay_OnVal_f0yihkjgvs ) || ( ( ! ( rtB . pkmkh1hvh4 <=
rtP . Relay_OffVal_k30yarpddi ) ) && rtDW . ao3iawiulm ) ) ; } else { rtB .
pkmkh1hvh4 = rtX . ivov12hdqr ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . ao3iawiulm ) { tmp_p = rtP . Relay_YOn_fp2zssybkj ; } else { tmp_p =
rtP . Relay_YOff_jbcg4gr0li ; } rtB . jqsqycuvjp = rtP .
Gain2_Gain_pibcjqgl5q * tmp_p ; rtDW . cu3anggihn = ( ( rtB . jqsqycuvjp >=
rtP . Relay_OnVal_ol55c5brbv ) || ( ( ! ( rtB . jqsqycuvjp <= rtP .
Relay_OffVal_ftfm5ezvr4 ) ) && rtDW . cu3anggihn ) ) ; if ( rtDW . cu3anggihn
) { tmp_p = rtP . Relay_YOn_pnewmcn0hv ; } else { tmp_p = rtP .
Relay_YOff_g0zkkowcb2 ; } b0maqh1tex = ( tmp_p != 0.0 ) ; kidn0dkyh4 ( rtS ,
b0maqh1tex , dnyczqzidbnp , & rtB . golzcmoqxl , & rtDW . golzcmoqxl , &
rtPrevZCX . golzcmoqxl ) ; rtB . pgju2goynn = muDoubleScalarRem ( rtB .
golzcmoqxl . bhcircixxg , rtP . Constant1_Value_ccfqh3zjfw ) ; dnyczqzidbnpc
= rtDW . orglme5at4a50 ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { tmp_p =
muDoubleScalarFloor ( rtP . Constant1_Value + rtB . pgju2goynn ) ; if (
muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p =
0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p , 512.0 ) ; } if ( ( (
uint32_T ) ( int16_T ) tmp_p & 256U ) != 0U ) { rtB . cr5ifxx30x = ( int16_T
) ( ( int16_T ) tmp_p | - 256 ) ; } else { rtB . cr5ifxx30x = ( int16_T ) ( (
int16_T ) tmp_p & 255 ) ; } } if ( ssIsModeUpdateTimeStep ( rtS ) ) { if (
rtX . duwt3olrcl >= rtP . Integrator_UpperSat_lncwbrrk4q ) { if ( rtX .
duwt3olrcl != rtP . Integrator_UpperSat_lncwbrrk4q ) { rtX . duwt3olrcl = rtP
. Integrator_UpperSat_lncwbrrk4q ; ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; } rtDW . lr0q20caf3 = 3 ; } else if ( rtX . duwt3olrcl <= rtP .
Integrator_LowerSat_pniuvpe0xc ) { if ( rtX . duwt3olrcl != rtP .
Integrator_LowerSat_pniuvpe0xc ) { rtX . duwt3olrcl = rtP .
Integrator_LowerSat_pniuvpe0xc ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . lr0q20caf3 = 4 ; } else { if ( rtDW . lr0q20caf3 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . lr0q20caf3 = 0
; } rtB . exjizz2jo2 = rtX . duwt3olrcl ; rtDW . n5hvozry30 = ( ( rtB .
exjizz2jo2 >= rtP . Relay_OnVal_nte1ombnoa ) || ( ( ! ( rtB . exjizz2jo2 <=
rtP . Relay_OffVal_bxv3ndvn3n ) ) && rtDW . n5hvozry30 ) ) ; } else { rtB .
exjizz2jo2 = rtX . duwt3olrcl ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . n5hvozry30 ) { tmp_p = rtP . Relay_YOn_aydwhahfkz ; } else { tmp_p =
rtP . Relay_YOff_opbykzzggq ; } rtB . eozfah35pa = rtP .
Gain2_Gain_nzobe5hggj * tmp_p ; rtDW . f2nlzigvwd = ( ( rtB . eozfah35pa >=
rtP . Relay_OnVal_lcdbtjujpq ) || ( ( ! ( rtB . eozfah35pa <= rtP .
Relay_OffVal_iuo5h2oaoh ) ) && rtDW . f2nlzigvwd ) ) ; if ( rtDW . f2nlzigvwd
) { tmp_p = rtP . Relay_YOn_jauj4ocrsp ; } else { tmp_p = rtP .
Relay_YOff_ddodkq4t55 ; } gm1gqz431p = ( tmp_p != 0.0 ) ; kidn0dkyh4 ( rtS ,
gm1gqz431p , dnyczqzidbnpc , & rtB . kidn0dkyh4l , & rtDW . kidn0dkyh4l , &
rtPrevZCX . kidn0dkyh4l ) ; rtB . kb0z4ghrx3 = muDoubleScalarRem ( rtB .
kidn0dkyh4l . bhcircixxg , rtP . Constant1_Value_k4ze1eyqfh ) ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { tmp_p = muDoubleScalarFloor ( rtP .
Constant2_Value + rtB . kb0z4ghrx3 ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 512.0 ) ; } if ( ( ( uint32_T ) ( int16_T ) tmp_p
& 256U ) != 0U ) { rtB . dsapdbxvv5 = ( int16_T ) ( ( int16_T ) tmp_p | - 256
) ; } else { rtB . dsapdbxvv5 = ( int16_T ) ( ( int16_T ) tmp_p & 255 ) ; }
tmp = ( int16_T ) ( rtB . cr5ifxx30x - rtB . dsapdbxvv5 ) ; if ( ( ( uint32_T
) tmp & 256U ) != 0U ) { rtB . byz4wcpb1i = ( int16_T ) ( tmp | - 256 ) ; }
else { rtB . byz4wcpb1i = ( int16_T ) ( tmp & 255 ) ; } } rtB . mhhu2tnpxn =
muDoubleScalarSin ( 6.2831853071795862 * rtP . ft * ssGetTaskTime ( rtS , 0 )
+ rtP . u_Phase_lgrdgjvqpc ) * ( rtP . Input_signal / 2.0 ) + rtP .
u_Bias_cxn2cbupoj ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . ik5lz4vfeb =
rtDW . fh20zoj1sh ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB . agg0qa1equ =
rtB . ik5lz4vfeb ; } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { tmp = ( int16_T
) ( ( rtP . Gain3_Gain_hzvizfc2ch * rtB . agg0qa1equ ) >> 13 ) ; if ( ( (
uint32_T ) tmp & 256U ) != 0U ) { rtB . bpvvilv5x0 = ( int16_T ) ( tmp | -
256 ) ; } else { rtB . bpvvilv5x0 = ( int16_T ) ( tmp & 255 ) ; } tmp = (
int16_T ) ( rtB . bpvvilv5x0 - rtDW . g4cefol0br ) ; if ( ( ( uint32_T ) tmp
& 256U ) != 0U ) { tmp_e = tmp | - 256 ; } else { tmp_e = tmp & 255 ; } rtB .
nfp4y3c4oe = ( real_T ) rtP . Gain_Gain * 0.03125 * ( real_T ) tmp_e ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { tmp = ( int16_T ) ( rtB . byz4wcpb1i - rtB
. bpvvilv5x0 ) ; if ( ( ( uint32_T ) tmp & 256U ) != 0U ) { rtB . ixxqou0jmh
= ( int16_T ) ( tmp | - 256 ) ; } else { rtB . ixxqou0jmh = ( int16_T ) ( tmp
& 255 ) ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { { if ( rtDW . fycjnke3eg . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( rtDW . fycjnke3eg . AQHandles , ssGetTaskTime (
rtS , 3 ) , ( char * ) & rtB . nfp4y3c4oe + 0 ) ; } } } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { tmp = ( int16_T ) ( rtB . byz4wcpb1i - rtDW . beitdmk3fp )
; if ( ( ( uint32_T ) tmp & 256U ) != 0U ) { rtB . prhktwurxy = ( int16_T ) (
tmp | - 256 ) ; } else { rtB . prhktwurxy = ( int16_T ) ( tmp & 255 ) ; } }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { { if ( rtDW . cpflfsupmr . AQHandles
&& ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . cpflfsupmr . AQHandles
, ssGetTaskTime ( rtS , 3 ) , ( char * ) & rtB . prhktwurxy + 0 ) ; } } { if
( rtDW . j1xg5jnqc1 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal
( rtDW . j1xg5jnqc1 . AQHandles , ssGetTaskTime ( rtS , 3 ) , ( char * ) &
rtB . jalqvrah1a + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { tmp = (
int16_T ) ( rtB . jaww0rmrgo - rtDW . mmsvkaoufm ) ; if ( ( ( uint32_T ) tmp
& 256U ) != 0U ) { rtB . bq3qtxogui = ( int16_T ) ( tmp | - 256 ) ; } else {
rtB . bq3qtxogui = ( int16_T ) ( tmp & 255 ) ; } } if ( ssIsSampleHit ( rtS ,
3 , 0 ) ) { { if ( rtDW . j4sex4zqd0 . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . j4sex4zqd0 . AQHandles , ssGetTaskTime ( rtS , 3 )
, ( char * ) & rtB . bq3qtxogui + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 2 ,
0 ) ) { tmp = ( int16_T ) ( rtB . ixxqou0jmh + rtB . ik5lz4vfeb ) ; if ( ( (
uint32_T ) tmp & 2048U ) != 0U ) { rtB . frq15es1fg = ( int16_T ) ( tmp | -
2048 ) ; } else { rtB . frq15es1fg = ( int16_T ) ( tmp & 2047 ) ; } tmp = (
int16_T ) ( rtB . dnrmm412kx + rtB . blyxrzh5wh ) ; if ( ( ( uint32_T ) tmp &
2048U ) != 0U ) { rtB . j3tzm341lz = ( int16_T ) ( tmp | - 2048 ) ; } else {
rtB . j3tzm341lz = ( int16_T ) ( tmp & 2047 ) ; } } rtB . ngnestrbjy = rtP .
Kvco * rtB . mhhu2tnpxn ; rtB . iet33u53t4 = - rtP . Kvco * rtB . mhhu2tnpxn
; rtB . n4mnwvotbr = - 4.0 * rtP . Kvco * c5y45la3az ; rtB . a5n5apq2jk = rtB
. iet33u53t4 + rtP . f02 ; rtB . bqejnevaiw = rtP . Gain1_Gain * rtB .
a5n5apq2jk ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtX . hgnelaemj3 >=
rtP . Integrator_UpperSat_obehvxea0x ) { if ( rtX . hgnelaemj3 != rtP .
Integrator_UpperSat_obehvxea0x ) { rtX . hgnelaemj3 = rtP .
Integrator_UpperSat_obehvxea0x ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . ek4idbgwye = 3 ; } else if ( rtX . hgnelaemj3 <= rtP .
Integrator_LowerSat_hrrlfsxyh1 ) { if ( rtX . hgnelaemj3 != rtP .
Integrator_LowerSat_hrrlfsxyh1 ) { rtX . hgnelaemj3 = rtP .
Integrator_LowerSat_hrrlfsxyh1 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . ek4idbgwye = 4 ; } else { if ( rtDW . ek4idbgwye != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . ek4idbgwye = 0
; } rtB . ovqw01sam1 = rtX . hgnelaemj3 ; rtDW . ivngkrqgqj = ( ( rtB .
ovqw01sam1 >= rtP . Relay_OnVal_echuyyywen ) || ( ( ! ( rtB . ovqw01sam1 <=
rtP . Relay_OffVal_gfiee0muju ) ) && rtDW . ivngkrqgqj ) ) ; } else { rtB .
ovqw01sam1 = rtX . hgnelaemj3 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . ivngkrqgqj ) { tmp_p = rtP . Relay_YOn_nfg3bxhtxu ; } else { tmp_p =
rtP . Relay_YOff_av4xtkhozb ; } rtB . h5zx0u2j5z = rtP . Gain3_Gain * tmp_p ;
} if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtX . jvqvth1xfn >= rtP .
Integrator_UpperSat_hnpjk31aqn ) { if ( rtX . jvqvth1xfn != rtP .
Integrator_UpperSat_hnpjk31aqn ) { rtX . jvqvth1xfn = rtP .
Integrator_UpperSat_hnpjk31aqn ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . izbyxg2fjr = 3 ; } else if ( rtX . jvqvth1xfn <= rtP .
Integrator_LowerSat_p5sqmpsfkb ) { if ( rtX . jvqvth1xfn != rtP .
Integrator_LowerSat_p5sqmpsfkb ) { rtX . jvqvth1xfn = rtP .
Integrator_LowerSat_p5sqmpsfkb ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . izbyxg2fjr = 4 ; } else { if ( rtDW . izbyxg2fjr != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . izbyxg2fjr = 0
; } rtB . dkzpuru5r2 = rtX . jvqvth1xfn ; rtDW . l54o4kd4xu = ( ( rtB .
dkzpuru5r2 >= rtP . Relay_OnVal_brwixqgp2p ) || ( ( ! ( rtB . dkzpuru5r2 <=
rtP . Relay_OffVal_lzmtedixmm ) ) && rtDW . l54o4kd4xu ) ) ; } else { rtB .
dkzpuru5r2 = rtX . jvqvth1xfn ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . l54o4kd4xu ) { tmp_p = rtP . Relay_YOn_lsb53mcfzj ; } else { tmp_p =
rtP . Relay_YOff_jrvptib512 ; } rtB . nrcbeojypl = rtP . Gain4_Gain * tmp_p ;
} rtB . hqjmlihzlz = rtB . bqejnevaiw * rtB . eozfah35pa ; rtB . a5cffbgb5o =
rtB . bqejnevaiw * rtB . nrcbeojypl ; rtB . gjvk1j10xe = rtB . bqejnevaiw *
rtB . h5zx0u2j5z ; rtB . i4on5qbs3p = rtB . ngnestrbjy + rtP . f02 ; rtB .
lt1weizey2 = rtP . Gain1_Gain_pfmsb2tnwt * rtB . i4on5qbs3p ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtX . m3pfzoipqp >= rtP .
Integrator_UpperSat_onycsesq00 ) { if ( rtX . m3pfzoipqp != rtP .
Integrator_UpperSat_onycsesq00 ) { rtX . m3pfzoipqp = rtP .
Integrator_UpperSat_onycsesq00 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . jkev2514j4 = 3 ; } else if ( rtX . m3pfzoipqp <= rtP .
Integrator_LowerSat_lt0o50nwow ) { if ( rtX . m3pfzoipqp != rtP .
Integrator_LowerSat_lt0o50nwow ) { rtX . m3pfzoipqp = rtP .
Integrator_LowerSat_lt0o50nwow ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . jkev2514j4 = 4 ; } else { if ( rtDW . jkev2514j4 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . jkev2514j4 = 0
; } rtB . ptpa5d2e1n = rtX . m3pfzoipqp ; rtDW . dninqzohu0 = ( ( rtB .
ptpa5d2e1n >= rtP . Relay_OnVal_grhow3snpm ) || ( ( ! ( rtB . ptpa5d2e1n <=
rtP . Relay_OffVal_in3mllvr4x ) ) && rtDW . dninqzohu0 ) ) ; } else { rtB .
ptpa5d2e1n = rtX . m3pfzoipqp ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . dninqzohu0 ) { tmp_p = rtP . Relay_YOn_g5oxmo5vtx ; } else { tmp_p =
rtP . Relay_YOff_n2ya32gh1l ; } rtB . g3gmay1qvg = rtP .
Gain3_Gain_orrkrx44hb * tmp_p ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) { if
( rtX . ohyadbptl4 >= rtP . Integrator_UpperSat_jxdbo0dk32 ) { if ( rtX .
ohyadbptl4 != rtP . Integrator_UpperSat_jxdbo0dk32 ) { rtX . ohyadbptl4 = rtP
. Integrator_UpperSat_jxdbo0dk32 ; ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; } rtDW . hoalihqmja = 3 ; } else if ( rtX . ohyadbptl4 <= rtP .
Integrator_LowerSat_bx3cuhup2x ) { if ( rtX . ohyadbptl4 != rtP .
Integrator_LowerSat_bx3cuhup2x ) { rtX . ohyadbptl4 = rtP .
Integrator_LowerSat_bx3cuhup2x ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . hoalihqmja = 4 ; } else { if ( rtDW . hoalihqmja != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . hoalihqmja = 0
; } rtB . c5mwrco5fr = rtX . ohyadbptl4 ; rtDW . dz2cewt0jx = ( ( rtB .
c5mwrco5fr >= rtP . Relay_OnVal_lb5krscakn ) || ( ( ! ( rtB . c5mwrco5fr <=
rtP . Relay_OffVal_gk3kuiyqyk ) ) && rtDW . dz2cewt0jx ) ) ; } else { rtB .
c5mwrco5fr = rtX . ohyadbptl4 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . dz2cewt0jx ) { tmp_p = rtP . Relay_YOn_bhfsrh1cck ; } else { tmp_p =
rtP . Relay_YOff_apk0hrwvzz ; } rtB . kaat2vxihs = rtP .
Gain4_Gain_f5rnnj140f * tmp_p ; } rtB . am0zkkx2be = rtB . lt1weizey2 * rtB .
jqsqycuvjp ; rtB . edubwe2l1d = rtB . lt1weizey2 * rtB . kaat2vxihs ; rtB .
gjlh0fklml = rtB . lt1weizey2 * rtB . g3gmay1qvg ; rtB . b52ifyiclb = rtB .
n4mnwvotbr + rtP . f0 ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtB .
b52ifyiclb >= 2.0 * rtP . f0 ) { rtDW . lt0fuutcxz = 1 ; } else if ( rtB .
b52ifyiclb > rtP . Saturation1_LowerSat ) { rtDW . lt0fuutcxz = 0 ; } else {
rtDW . lt0fuutcxz = - 1 ; } } if ( rtDW . lt0fuutcxz == 1 ) { rtB .
j2nbmk1xp1 = 2.0 * rtP . f0 ; } else if ( rtDW . lt0fuutcxz == - 1 ) { rtB .
j2nbmk1xp1 = rtP . Saturation1_LowerSat ; } else { rtB . j2nbmk1xp1 = rtB .
b52ifyiclb ; } rtB . my1dkjenar = rtP . Gain1_Gain_ei4ctr1ce4 * rtB .
j2nbmk1xp1 ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtX . ff0aprbz4e >=
rtP . Integrator_UpperSat_nikd5nq4qi ) { if ( rtX . ff0aprbz4e != rtP .
Integrator_UpperSat_nikd5nq4qi ) { rtX . ff0aprbz4e = rtP .
Integrator_UpperSat_nikd5nq4qi ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . lwk2b2noep = 3 ; } else if ( rtX . ff0aprbz4e <= rtP .
Integrator_LowerSat_ml0gsyvrs4 ) { if ( rtX . ff0aprbz4e != rtP .
Integrator_LowerSat_ml0gsyvrs4 ) { rtX . ff0aprbz4e = rtP .
Integrator_LowerSat_ml0gsyvrs4 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . lwk2b2noep = 4 ; } else { if ( rtDW . lwk2b2noep != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . lwk2b2noep = 0
; } rtB . htd4lm0qfa = rtX . ff0aprbz4e ; rtDW . po5qjpsnms = ( ( rtB .
htd4lm0qfa >= rtP . Relay_OnVal_npnpiqpph3 ) || ( ( ! ( rtB . htd4lm0qfa <=
rtP . Relay_OffVal_esykk2txpm ) ) && rtDW . po5qjpsnms ) ) ; } else { rtB .
htd4lm0qfa = rtX . ff0aprbz4e ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . po5qjpsnms ) { tmp_p = rtP . Relay_YOn_ifa2pl2lcg ; } else { tmp_p =
rtP . Relay_YOff_fpmi0fcndp ; } rtB . g2w43x1rgu = rtP .
Gain3_Gain_erykj2ffdi * tmp_p ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) { if
( rtX . jbez0f4u2q >= rtP . Integrator_UpperSat_dh0t25pzh2 ) { if ( rtX .
jbez0f4u2q != rtP . Integrator_UpperSat_dh0t25pzh2 ) { rtX . jbez0f4u2q = rtP
. Integrator_UpperSat_dh0t25pzh2 ; ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; } rtDW . jbfslnilmq = 3 ; } else if ( rtX . jbez0f4u2q <= rtP .
Integrator_LowerSat_neq0i10rth ) { if ( rtX . jbez0f4u2q != rtP .
Integrator_LowerSat_neq0i10rth ) { rtX . jbez0f4u2q = rtP .
Integrator_LowerSat_neq0i10rth ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . jbfslnilmq = 4 ; } else { if ( rtDW . jbfslnilmq != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . jbfslnilmq = 0
; } rtB . ajmmmek3y4 = rtX . jbez0f4u2q ; rtDW . pdpodlo3p2 = ( ( rtB .
ajmmmek3y4 >= rtP . Relay_OnVal_h1i2o5kwfg ) || ( ( ! ( rtB . ajmmmek3y4 <=
rtP . Relay_OffVal_ps0rhgpgvd ) ) && rtDW . pdpodlo3p2 ) ) ; } else { rtB .
ajmmmek3y4 = rtX . jbez0f4u2q ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . pdpodlo3p2 ) { tmp_p = rtP . Relay_YOn_kfriyo5rl4 ; } else { tmp_p =
rtP . Relay_YOff_f2g3xhsgrz ; } rtB . eojdcf25ok = rtP .
Gain4_Gain_m5dpyjac2r * tmp_p ; } rtB . dthtcjo5c4 = rtB . my1dkjenar * rtB .
i5qnwd1xft ; rtB . jqyfeja5w1 = rtB . my1dkjenar * rtB . eojdcf25ok ; rtB .
dvfodclg5x = rtB . my1dkjenar * rtB . g2w43x1rgu ; rtB . c4u12eyofp = rtP .
Gain1_Gain_jbm5vg2jfe * rtB . fiq2ipptdn ; if ( ssIsModeUpdateTimeStep ( rtS
) ) { if ( rtX . bccqwl4dld >= rtP . Integrator_UpperSat_gcvzmvowsi ) { if (
rtX . bccqwl4dld != rtP . Integrator_UpperSat_gcvzmvowsi ) { rtX . bccqwl4dld
= rtP . Integrator_UpperSat_gcvzmvowsi ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . ncgd1bpb1a = 3
; } else if ( rtX . bccqwl4dld <= rtP . Integrator_LowerSat_o2mm033ot2 ) { if
( rtX . bccqwl4dld != rtP . Integrator_LowerSat_o2mm033ot2 ) { rtX .
bccqwl4dld = rtP . Integrator_LowerSat_o2mm033ot2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . ncgd1bpb1a = 4
; } else { if ( rtDW . ncgd1bpb1a != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . ncgd1bpb1a = 0
; } rtB . ndvzivqyue = rtX . bccqwl4dld ; rtDW . pqnt2h0ig5 = ( ( rtB .
ndvzivqyue >= rtP . Relay_OnVal_pqgvke2nha ) || ( ( ! ( rtB . ndvzivqyue <=
rtP . Relay_OffVal_k1c5j1def3 ) ) && rtDW . pqnt2h0ig5 ) ) ; } else { rtB .
ndvzivqyue = rtX . bccqwl4dld ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . pqnt2h0ig5 ) { tmp_p = rtP . Relay_YOn_psdpbhlnbk ; } else { tmp_p =
rtP . Relay_YOff_j3yuyzhlz1 ; } rtB . lipuj3gabm = rtP .
Gain3_Gain_c2aoyjuxem * tmp_p ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) { if
( rtX . dyo3j1ie0t >= rtP . Integrator_UpperSat_ipwxjx3zwz ) { if ( rtX .
dyo3j1ie0t != rtP . Integrator_UpperSat_ipwxjx3zwz ) { rtX . dyo3j1ie0t = rtP
. Integrator_UpperSat_ipwxjx3zwz ; ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; } rtDW . pojepyzp5u = 3 ; } else if ( rtX . dyo3j1ie0t <= rtP .
Integrator_LowerSat_isd3y4kico ) { if ( rtX . dyo3j1ie0t != rtP .
Integrator_LowerSat_isd3y4kico ) { rtX . dyo3j1ie0t = rtP .
Integrator_LowerSat_isd3y4kico ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . pojepyzp5u = 4 ; } else { if ( rtDW . pojepyzp5u != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . pojepyzp5u = 0
; } rtB . oiqotbk4tx = rtX . dyo3j1ie0t ; rtDW . oh1w0ntj3m = ( ( rtB .
oiqotbk4tx >= rtP . Relay_OnVal_fb2ckrosa1 ) || ( ( ! ( rtB . oiqotbk4tx <=
rtP . Relay_OffVal_mdcttm5av2 ) ) && rtDW . oh1w0ntj3m ) ) ; } else { rtB .
oiqotbk4tx = rtX . dyo3j1ie0t ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . oh1w0ntj3m ) { tmp_p = rtP . Relay_YOn_pqm5zswnez ; } else { tmp_p =
rtP . Relay_YOff_gmithmyikx ; } rtB . gsehs3hnnb = rtP .
Gain4_Gain_fte5si5w01 * tmp_p ; rtB . of53ol5y2e = rtP . Constant3_Value +
rtDW . lin3vz4uln ; rtB . ncwojfl1ho = rtP . Constant3_Value_kteichhl4y +
rtDW . eey4qgobmt ; rtB . gup24my2t1 = rtP . Constant3_Value_cc01naktl1 +
rtDW . f1bjvxwccz ; rtB . c3khxutonh = rtP . Constant3_Value_fkqot0dgjq +
rtDW . kq2ezp4qmo ; } rtB . ktbanqbefe = rtB . c4u12eyofp * rtB . l5d5sv15ob
; rtB . ciqxajlela = rtB . c4u12eyofp * rtB . gsehs3hnnb ; rtB . pktrsmb4dq =
rtB . c4u12eyofp * rtB . lipuj3gabm ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID4 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { XDis * _rtXdis ; _rtXdis = ( ( XDis * ) ssGetContStateDisabled
( rtS ) ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . orglme5at4 = rtB .
c3khxutonh ; } switch ( rtDW . lmslnypsi2 ) { case 3 : if ( rtB . ciqxajlela
< 0.0 ) { rtDW . lmslnypsi2 = 1 ; ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; } break ; case 4 : if ( rtB . ciqxajlela > 0.0 ) { rtDW .
lmslnypsi2 = 2 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break
; } _rtXdis -> ocl0bnlv5i = ( ( rtDW . lmslnypsi2 == 3 ) || ( rtDW .
lmslnypsi2 == 4 ) ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW .
orglme5at4a = rtB . gup24my2t1 ; } switch ( rtDW . j4r1opdjxl ) { case 3 : if
( rtB . jqyfeja5w1 < 0.0 ) { rtDW . j4r1opdjxl = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . jqyfeja5w1 > 0.0 ) { rtDW . j4r1opdjxl = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
cyenolwp1t = ( ( rtDW . j4r1opdjxl == 3 ) || ( rtDW . j4r1opdjxl == 4 ) ) ;
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . davvnzy1kr = rtB . j3tzm341lz ;
} if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtDW . kdkihaa34w = rtB . a20x4aezvv
; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . orglme5at4a5 = rtB .
ncwojfl1ho ; } switch ( rtDW . b1gi51bpxi ) { case 3 : if ( rtB . edubwe2l1d
< 0.0 ) { rtDW . b1gi51bpxi = 1 ; ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; } break ; case 4 : if ( rtB . edubwe2l1d > 0.0 ) { rtDW .
b1gi51bpxi = 2 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break
; } _rtXdis -> ivov12hdqr = ( ( rtDW . b1gi51bpxi == 3 ) || ( rtDW .
b1gi51bpxi == 4 ) ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW .
orglme5at4a50 = rtB . of53ol5y2e ; } switch ( rtDW . lr0q20caf3 ) { case 3 :
if ( rtB . a5cffbgb5o < 0.0 ) { rtDW . lr0q20caf3 = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . a5cffbgb5o > 0.0 ) { rtDW . lr0q20caf3 = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
duwt3olrcl = ( ( rtDW . lr0q20caf3 == 3 ) || ( rtDW . lr0q20caf3 == 4 ) ) ;
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . fh20zoj1sh = rtB . frq15es1fg ;
rtDW . beitdmk3fp = rtB . byz4wcpb1i ; rtDW . mmsvkaoufm = rtB . jaww0rmrgo ;
} if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtDW . g4cefol0br = rtB . bpvvilv5x0
; } switch ( rtDW . ek4idbgwye ) { case 3 : if ( rtB . hqjmlihzlz < 0.0 ) {
rtDW . ek4idbgwye = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} break ; case 4 : if ( rtB . hqjmlihzlz > 0.0 ) { rtDW . ek4idbgwye = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
hgnelaemj3 = ( ( rtDW . ek4idbgwye == 3 ) || ( rtDW . ek4idbgwye == 4 ) ) ;
switch ( rtDW . izbyxg2fjr ) { case 3 : if ( rtB . gjvk1j10xe < 0.0 ) { rtDW
. izbyxg2fjr = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; case 4 : if ( rtB . gjvk1j10xe > 0.0 ) { rtDW . izbyxg2fjr = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
jvqvth1xfn = ( ( rtDW . izbyxg2fjr == 3 ) || ( rtDW . izbyxg2fjr == 4 ) ) ;
switch ( rtDW . jkev2514j4 ) { case 3 : if ( rtB . am0zkkx2be < 0.0 ) { rtDW
. jkev2514j4 = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; case 4 : if ( rtB . am0zkkx2be > 0.0 ) { rtDW . jkev2514j4 = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
m3pfzoipqp = ( ( rtDW . jkev2514j4 == 3 ) || ( rtDW . jkev2514j4 == 4 ) ) ;
switch ( rtDW . hoalihqmja ) { case 3 : if ( rtB . gjlh0fklml < 0.0 ) { rtDW
. hoalihqmja = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; case 4 : if ( rtB . gjlh0fklml > 0.0 ) { rtDW . hoalihqmja = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
ohyadbptl4 = ( ( rtDW . hoalihqmja == 3 ) || ( rtDW . hoalihqmja == 4 ) ) ;
switch ( rtDW . lwk2b2noep ) { case 3 : if ( rtB . dthtcjo5c4 < 0.0 ) { rtDW
. lwk2b2noep = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; case 4 : if ( rtB . dthtcjo5c4 > 0.0 ) { rtDW . lwk2b2noep = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
ff0aprbz4e = ( ( rtDW . lwk2b2noep == 3 ) || ( rtDW . lwk2b2noep == 4 ) ) ;
switch ( rtDW . jbfslnilmq ) { case 3 : if ( rtB . dvfodclg5x < 0.0 ) { rtDW
. jbfslnilmq = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; case 4 : if ( rtB . dvfodclg5x > 0.0 ) { rtDW . jbfslnilmq = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
jbez0f4u2q = ( ( rtDW . jbfslnilmq == 3 ) || ( rtDW . jbfslnilmq == 4 ) ) ;
switch ( rtDW . ncgd1bpb1a ) { case 3 : if ( rtB . ktbanqbefe < 0.0 ) { rtDW
. ncgd1bpb1a = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; case 4 : if ( rtB . ktbanqbefe > 0.0 ) { rtDW . ncgd1bpb1a = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
bccqwl4dld = ( ( rtDW . ncgd1bpb1a == 3 ) || ( rtDW . ncgd1bpb1a == 4 ) ) ;
switch ( rtDW . pojepyzp5u ) { case 3 : if ( rtB . pktrsmb4dq < 0.0 ) { rtDW
. pojepyzp5u = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; case 4 : if ( rtB . pktrsmb4dq > 0.0 ) { rtDW . pojepyzp5u = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
dyo3j1ie0t = ( ( rtDW . pojepyzp5u == 3 ) || ( rtDW . pojepyzp5u == 4 ) ) ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . lin3vz4uln = rtB . kb0z4ghrx3 ;
rtDW . eey4qgobmt = rtB . pgju2goynn ; rtDW . f1bjvxwccz = rtB . b30hfpmu5e ;
rtDW . kq2ezp4qmo = rtB . ezrijysvzd ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID4 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDis * _rtXdis ; XDot * _rtXdot ; _rtXdis = ( (
XDis * ) ssGetContStateDisabled ( rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; if ( _rtXdis -> ocl0bnlv5i ) { _rtXdot -> ocl0bnlv5i = 0.0 ; } else
{ _rtXdot -> ocl0bnlv5i = rtB . ciqxajlela ; } if ( _rtXdis -> cyenolwp1t ) {
_rtXdot -> cyenolwp1t = 0.0 ; } else { _rtXdot -> cyenolwp1t = rtB .
jqyfeja5w1 ; } if ( _rtXdis -> ivov12hdqr ) { _rtXdot -> ivov12hdqr = 0.0 ; }
else { _rtXdot -> ivov12hdqr = rtB . edubwe2l1d ; } if ( _rtXdis ->
duwt3olrcl ) { _rtXdot -> duwt3olrcl = 0.0 ; } else { _rtXdot -> duwt3olrcl =
rtB . a5cffbgb5o ; } if ( _rtXdis -> hgnelaemj3 ) { _rtXdot -> hgnelaemj3 =
0.0 ; } else { _rtXdot -> hgnelaemj3 = rtB . hqjmlihzlz ; } if ( _rtXdis ->
jvqvth1xfn ) { _rtXdot -> jvqvth1xfn = 0.0 ; } else { _rtXdot -> jvqvth1xfn =
rtB . gjvk1j10xe ; } if ( _rtXdis -> m3pfzoipqp ) { _rtXdot -> m3pfzoipqp =
0.0 ; } else { _rtXdot -> m3pfzoipqp = rtB . am0zkkx2be ; } if ( _rtXdis ->
ohyadbptl4 ) { _rtXdot -> ohyadbptl4 = 0.0 ; } else { _rtXdot -> ohyadbptl4 =
rtB . gjlh0fklml ; } if ( _rtXdis -> ff0aprbz4e ) { _rtXdot -> ff0aprbz4e =
0.0 ; } else { _rtXdot -> ff0aprbz4e = rtB . dthtcjo5c4 ; } if ( _rtXdis ->
jbez0f4u2q ) { _rtXdot -> jbez0f4u2q = 0.0 ; } else { _rtXdot -> jbez0f4u2q =
rtB . dvfodclg5x ; } if ( _rtXdis -> bccqwl4dld ) { _rtXdot -> bccqwl4dld =
0.0 ; } else { _rtXdot -> bccqwl4dld = rtB . ktbanqbefe ; } if ( _rtXdis ->
dyo3j1ie0t ) { _rtXdot -> dyo3j1ie0t = 0.0 ; } else { _rtXdot -> dyo3j1ie0t =
rtB . pktrsmb4dq ; } } void MdlProjection ( void ) { } void MdlZeroCrossings
( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector (
rtS ) ) ; switch ( rtDW . lmslnypsi2 ) { case 1 : _rtZCSV -> of5t4qqiib = 0.0
; _rtZCSV -> e310l5o1yu = rtP . Integrator_UpperSat - rtP .
Integrator_LowerSat ; break ; case 2 : _rtZCSV -> of5t4qqiib = rtP .
Integrator_LowerSat - rtP . Integrator_UpperSat ; _rtZCSV -> e310l5o1yu = 0.0
; break ; default : _rtZCSV -> of5t4qqiib = rtX . ocl0bnlv5i - rtP .
Integrator_UpperSat ; _rtZCSV -> e310l5o1yu = rtX . ocl0bnlv5i - rtP .
Integrator_LowerSat ; break ; } if ( ( rtDW . lmslnypsi2 == 3 ) || ( rtDW .
lmslnypsi2 == 4 ) ) { _rtZCSV -> eagwepmjzf = rtB . ciqxajlela ; } else {
_rtZCSV -> eagwepmjzf = 0.0 ; } if ( rtDW . bfawx2cz2m ) { _rtZCSV ->
eg3p5v25ve = rtB . kgie0svi5e - rtP . Relay_OffVal ; } else { _rtZCSV ->
eg3p5v25ve = rtB . kgie0svi5e - rtP . Relay_OnVal ; } switch ( rtDW .
j4r1opdjxl ) { case 1 : _rtZCSV -> jcsxd0ocqn = 0.0 ; _rtZCSV -> cbqu3ycv5i =
rtP . Integrator_UpperSat_fqtyz21jgz - rtP . Integrator_LowerSat_jssfn1hxzj ;
break ; case 2 : _rtZCSV -> jcsxd0ocqn = rtP . Integrator_LowerSat_jssfn1hxzj
- rtP . Integrator_UpperSat_fqtyz21jgz ; _rtZCSV -> cbqu3ycv5i = 0.0 ; break
; default : _rtZCSV -> jcsxd0ocqn = rtX . cyenolwp1t - rtP .
Integrator_UpperSat_fqtyz21jgz ; _rtZCSV -> cbqu3ycv5i = rtX . cyenolwp1t -
rtP . Integrator_LowerSat_jssfn1hxzj ; break ; } if ( ( rtDW . j4r1opdjxl ==
3 ) || ( rtDW . j4r1opdjxl == 4 ) ) { _rtZCSV -> al2qzvb1xu = rtB .
jqyfeja5w1 ; } else { _rtZCSV -> al2qzvb1xu = 0.0 ; } if ( rtDW . oodfsknmtu
) { _rtZCSV -> mbxku4ajxw = rtB . edbyb0d21l - rtP . Relay_OffVal_am0oqh4ks4
; } else { _rtZCSV -> mbxku4ajxw = rtB . edbyb0d21l - rtP .
Relay_OnVal_cbjqjxb4tm ; } _rtZCSV -> kbjoajtbce = rtB . oomwbzmknh - 2.0 *
rtP . f0 ; _rtZCSV -> m4ldnpigqi = rtB . oomwbzmknh - rtP .
Saturation_LowerSat ; switch ( rtDW . b1gi51bpxi ) { case 1 : _rtZCSV ->
blvkvya5tr = 0.0 ; _rtZCSV -> kozzenl33w = rtP .
Integrator_UpperSat_gcii2rzagn - rtP . Integrator_LowerSat_avy3r3vlzn ; break
; case 2 : _rtZCSV -> blvkvya5tr = rtP . Integrator_LowerSat_avy3r3vlzn - rtP
. Integrator_UpperSat_gcii2rzagn ; _rtZCSV -> kozzenl33w = 0.0 ; break ;
default : _rtZCSV -> blvkvya5tr = rtX . ivov12hdqr - rtP .
Integrator_UpperSat_gcii2rzagn ; _rtZCSV -> kozzenl33w = rtX . ivov12hdqr -
rtP . Integrator_LowerSat_avy3r3vlzn ; break ; } if ( ( rtDW . b1gi51bpxi ==
3 ) || ( rtDW . b1gi51bpxi == 4 ) ) { _rtZCSV -> fslehqneah = rtB .
edubwe2l1d ; } else { _rtZCSV -> fslehqneah = 0.0 ; } if ( rtDW . ao3iawiulm
) { _rtZCSV -> ijnhmud52l = rtB . pkmkh1hvh4 - rtP . Relay_OffVal_k30yarpddi
; } else { _rtZCSV -> ijnhmud52l = rtB . pkmkh1hvh4 - rtP .
Relay_OnVal_f0yihkjgvs ; } switch ( rtDW . lr0q20caf3 ) { case 1 : _rtZCSV ->
habmiz0b13 = 0.0 ; _rtZCSV -> gm2xfyuztm = rtP .
Integrator_UpperSat_lncwbrrk4q - rtP . Integrator_LowerSat_pniuvpe0xc ; break
; case 2 : _rtZCSV -> habmiz0b13 = rtP . Integrator_LowerSat_pniuvpe0xc - rtP
. Integrator_UpperSat_lncwbrrk4q ; _rtZCSV -> gm2xfyuztm = 0.0 ; break ;
default : _rtZCSV -> habmiz0b13 = rtX . duwt3olrcl - rtP .
Integrator_UpperSat_lncwbrrk4q ; _rtZCSV -> gm2xfyuztm = rtX . duwt3olrcl -
rtP . Integrator_LowerSat_pniuvpe0xc ; break ; } if ( ( rtDW . lr0q20caf3 ==
3 ) || ( rtDW . lr0q20caf3 == 4 ) ) { _rtZCSV -> kkvccdnmjn = rtB .
a5cffbgb5o ; } else { _rtZCSV -> kkvccdnmjn = 0.0 ; } if ( rtDW . n5hvozry30
) { _rtZCSV -> eya34krnhk = rtB . exjizz2jo2 - rtP . Relay_OffVal_bxv3ndvn3n
; } else { _rtZCSV -> eya34krnhk = rtB . exjizz2jo2 - rtP .
Relay_OnVal_nte1ombnoa ; } switch ( rtDW . ek4idbgwye ) { case 1 : _rtZCSV ->
c0z55y1psl = 0.0 ; _rtZCSV -> p02bplx421 = rtP .
Integrator_UpperSat_obehvxea0x - rtP . Integrator_LowerSat_hrrlfsxyh1 ; break
; case 2 : _rtZCSV -> c0z55y1psl = rtP . Integrator_LowerSat_hrrlfsxyh1 - rtP
. Integrator_UpperSat_obehvxea0x ; _rtZCSV -> p02bplx421 = 0.0 ; break ;
default : _rtZCSV -> c0z55y1psl = rtX . hgnelaemj3 - rtP .
Integrator_UpperSat_obehvxea0x ; _rtZCSV -> p02bplx421 = rtX . hgnelaemj3 -
rtP . Integrator_LowerSat_hrrlfsxyh1 ; break ; } if ( ( rtDW . ek4idbgwye ==
3 ) || ( rtDW . ek4idbgwye == 4 ) ) { _rtZCSV -> p0qlvyfnqu = rtB .
hqjmlihzlz ; } else { _rtZCSV -> p0qlvyfnqu = 0.0 ; } if ( rtDW . ivngkrqgqj
) { _rtZCSV -> i5ci5gng34 = rtB . ovqw01sam1 - rtP . Relay_OffVal_gfiee0muju
; } else { _rtZCSV -> i5ci5gng34 = rtB . ovqw01sam1 - rtP .
Relay_OnVal_echuyyywen ; } switch ( rtDW . izbyxg2fjr ) { case 1 : _rtZCSV ->
pyfofxiew2 = 0.0 ; _rtZCSV -> ixd3c0cpks = rtP .
Integrator_UpperSat_hnpjk31aqn - rtP . Integrator_LowerSat_p5sqmpsfkb ; break
; case 2 : _rtZCSV -> pyfofxiew2 = rtP . Integrator_LowerSat_p5sqmpsfkb - rtP
. Integrator_UpperSat_hnpjk31aqn ; _rtZCSV -> ixd3c0cpks = 0.0 ; break ;
default : _rtZCSV -> pyfofxiew2 = rtX . jvqvth1xfn - rtP .
Integrator_UpperSat_hnpjk31aqn ; _rtZCSV -> ixd3c0cpks = rtX . jvqvth1xfn -
rtP . Integrator_LowerSat_p5sqmpsfkb ; break ; } if ( ( rtDW . izbyxg2fjr ==
3 ) || ( rtDW . izbyxg2fjr == 4 ) ) { _rtZCSV -> adwb4kg2wa = rtB .
gjvk1j10xe ; } else { _rtZCSV -> adwb4kg2wa = 0.0 ; } if ( rtDW . l54o4kd4xu
) { _rtZCSV -> n1qgxgoraf = rtB . dkzpuru5r2 - rtP . Relay_OffVal_lzmtedixmm
; } else { _rtZCSV -> n1qgxgoraf = rtB . dkzpuru5r2 - rtP .
Relay_OnVal_brwixqgp2p ; } switch ( rtDW . jkev2514j4 ) { case 1 : _rtZCSV ->
auruzwwi2j = 0.0 ; _rtZCSV -> otvhindur0 = rtP .
Integrator_UpperSat_onycsesq00 - rtP . Integrator_LowerSat_lt0o50nwow ; break
; case 2 : _rtZCSV -> auruzwwi2j = rtP . Integrator_LowerSat_lt0o50nwow - rtP
. Integrator_UpperSat_onycsesq00 ; _rtZCSV -> otvhindur0 = 0.0 ; break ;
default : _rtZCSV -> auruzwwi2j = rtX . m3pfzoipqp - rtP .
Integrator_UpperSat_onycsesq00 ; _rtZCSV -> otvhindur0 = rtX . m3pfzoipqp -
rtP . Integrator_LowerSat_lt0o50nwow ; break ; } if ( ( rtDW . jkev2514j4 ==
3 ) || ( rtDW . jkev2514j4 == 4 ) ) { _rtZCSV -> ekqy1pkeph = rtB .
am0zkkx2be ; } else { _rtZCSV -> ekqy1pkeph = 0.0 ; } if ( rtDW . dninqzohu0
) { _rtZCSV -> gyr2y4sksl = rtB . ptpa5d2e1n - rtP . Relay_OffVal_in3mllvr4x
; } else { _rtZCSV -> gyr2y4sksl = rtB . ptpa5d2e1n - rtP .
Relay_OnVal_grhow3snpm ; } switch ( rtDW . hoalihqmja ) { case 1 : _rtZCSV ->
n05mmzewlt = 0.0 ; _rtZCSV -> dxvfhqkmwu = rtP .
Integrator_UpperSat_jxdbo0dk32 - rtP . Integrator_LowerSat_bx3cuhup2x ; break
; case 2 : _rtZCSV -> n05mmzewlt = rtP . Integrator_LowerSat_bx3cuhup2x - rtP
. Integrator_UpperSat_jxdbo0dk32 ; _rtZCSV -> dxvfhqkmwu = 0.0 ; break ;
default : _rtZCSV -> n05mmzewlt = rtX . ohyadbptl4 - rtP .
Integrator_UpperSat_jxdbo0dk32 ; _rtZCSV -> dxvfhqkmwu = rtX . ohyadbptl4 -
rtP . Integrator_LowerSat_bx3cuhup2x ; break ; } if ( ( rtDW . hoalihqmja ==
3 ) || ( rtDW . hoalihqmja == 4 ) ) { _rtZCSV -> dpk3i4d5nc = rtB .
gjlh0fklml ; } else { _rtZCSV -> dpk3i4d5nc = 0.0 ; } if ( rtDW . dz2cewt0jx
) { _rtZCSV -> oemuw0q4mk = rtB . c5mwrco5fr - rtP . Relay_OffVal_gk3kuiyqyk
; } else { _rtZCSV -> oemuw0q4mk = rtB . c5mwrco5fr - rtP .
Relay_OnVal_lb5krscakn ; } _rtZCSV -> ni241ntzxe = rtB . b52ifyiclb - 2.0 *
rtP . f0 ; _rtZCSV -> cl1eyz5pk1 = rtB . b52ifyiclb - rtP .
Saturation1_LowerSat ; switch ( rtDW . lwk2b2noep ) { case 1 : _rtZCSV ->
c0ctydatls = 0.0 ; _rtZCSV -> cjqdi5hosq = rtP .
Integrator_UpperSat_nikd5nq4qi - rtP . Integrator_LowerSat_ml0gsyvrs4 ; break
; case 2 : _rtZCSV -> c0ctydatls = rtP . Integrator_LowerSat_ml0gsyvrs4 - rtP
. Integrator_UpperSat_nikd5nq4qi ; _rtZCSV -> cjqdi5hosq = 0.0 ; break ;
default : _rtZCSV -> c0ctydatls = rtX . ff0aprbz4e - rtP .
Integrator_UpperSat_nikd5nq4qi ; _rtZCSV -> cjqdi5hosq = rtX . ff0aprbz4e -
rtP . Integrator_LowerSat_ml0gsyvrs4 ; break ; } if ( ( rtDW . lwk2b2noep ==
3 ) || ( rtDW . lwk2b2noep == 4 ) ) { _rtZCSV -> k5kjke1j1n = rtB .
dthtcjo5c4 ; } else { _rtZCSV -> k5kjke1j1n = 0.0 ; } if ( rtDW . po5qjpsnms
) { _rtZCSV -> nwyrvc50wr = rtB . htd4lm0qfa - rtP . Relay_OffVal_esykk2txpm
; } else { _rtZCSV -> nwyrvc50wr = rtB . htd4lm0qfa - rtP .
Relay_OnVal_npnpiqpph3 ; } switch ( rtDW . jbfslnilmq ) { case 1 : _rtZCSV ->
oidowxjd54 = 0.0 ; _rtZCSV -> dci4nfanqv = rtP .
Integrator_UpperSat_dh0t25pzh2 - rtP . Integrator_LowerSat_neq0i10rth ; break
; case 2 : _rtZCSV -> oidowxjd54 = rtP . Integrator_LowerSat_neq0i10rth - rtP
. Integrator_UpperSat_dh0t25pzh2 ; _rtZCSV -> dci4nfanqv = 0.0 ; break ;
default : _rtZCSV -> oidowxjd54 = rtX . jbez0f4u2q - rtP .
Integrator_UpperSat_dh0t25pzh2 ; _rtZCSV -> dci4nfanqv = rtX . jbez0f4u2q -
rtP . Integrator_LowerSat_neq0i10rth ; break ; } if ( ( rtDW . jbfslnilmq ==
3 ) || ( rtDW . jbfslnilmq == 4 ) ) { _rtZCSV -> kkb5qpemsp = rtB .
dvfodclg5x ; } else { _rtZCSV -> kkb5qpemsp = 0.0 ; } if ( rtDW . pdpodlo3p2
) { _rtZCSV -> nbf5da2kmw = rtB . ajmmmek3y4 - rtP . Relay_OffVal_ps0rhgpgvd
; } else { _rtZCSV -> nbf5da2kmw = rtB . ajmmmek3y4 - rtP .
Relay_OnVal_h1i2o5kwfg ; } switch ( rtDW . ncgd1bpb1a ) { case 1 : _rtZCSV ->
p3kamgjhov = 0.0 ; _rtZCSV -> moxgeechci = rtP .
Integrator_UpperSat_gcvzmvowsi - rtP . Integrator_LowerSat_o2mm033ot2 ; break
; case 2 : _rtZCSV -> p3kamgjhov = rtP . Integrator_LowerSat_o2mm033ot2 - rtP
. Integrator_UpperSat_gcvzmvowsi ; _rtZCSV -> moxgeechci = 0.0 ; break ;
default : _rtZCSV -> p3kamgjhov = rtX . bccqwl4dld - rtP .
Integrator_UpperSat_gcvzmvowsi ; _rtZCSV -> moxgeechci = rtX . bccqwl4dld -
rtP . Integrator_LowerSat_o2mm033ot2 ; break ; } if ( ( rtDW . ncgd1bpb1a ==
3 ) || ( rtDW . ncgd1bpb1a == 4 ) ) { _rtZCSV -> g2mblra45p = rtB .
ktbanqbefe ; } else { _rtZCSV -> g2mblra45p = 0.0 ; } if ( rtDW . pqnt2h0ig5
) { _rtZCSV -> ppdfghbsws = rtB . ndvzivqyue - rtP . Relay_OffVal_k1c5j1def3
; } else { _rtZCSV -> ppdfghbsws = rtB . ndvzivqyue - rtP .
Relay_OnVal_pqgvke2nha ; } switch ( rtDW . pojepyzp5u ) { case 1 : _rtZCSV ->
npt55mhobh = 0.0 ; _rtZCSV -> oeohtbc4xf = rtP .
Integrator_UpperSat_ipwxjx3zwz - rtP . Integrator_LowerSat_isd3y4kico ; break
; case 2 : _rtZCSV -> npt55mhobh = rtP . Integrator_LowerSat_isd3y4kico - rtP
. Integrator_UpperSat_ipwxjx3zwz ; _rtZCSV -> oeohtbc4xf = 0.0 ; break ;
default : _rtZCSV -> npt55mhobh = rtX . dyo3j1ie0t - rtP .
Integrator_UpperSat_ipwxjx3zwz ; _rtZCSV -> oeohtbc4xf = rtX . dyo3j1ie0t -
rtP . Integrator_LowerSat_isd3y4kico ; break ; } if ( ( rtDW . pojepyzp5u ==
3 ) || ( rtDW . pojepyzp5u == 4 ) ) { _rtZCSV -> am3ysudklj = rtB .
pktrsmb4dq ; } else { _rtZCSV -> am3ysudklj = 0.0 ; } if ( rtDW . oh1w0ntj3m
) { _rtZCSV -> j1wropdozx = rtB . oiqotbk4tx - rtP . Relay_OffVal_mdcttm5av2
; } else { _rtZCSV -> j1wropdozx = rtB . oiqotbk4tx - rtP .
Relay_OnVal_fb2ckrosa1 ; } } void MdlTerminate ( void ) { { if ( rtDW .
fycjnke3eg . AQHandles ) { sdiTerminateStreaming ( & rtDW . fycjnke3eg .
AQHandles ) ; } } { if ( rtDW . cpflfsupmr . AQHandles ) {
sdiTerminateStreaming ( & rtDW . cpflfsupmr . AQHandles ) ; } } { if ( rtDW .
j1xg5jnqc1 . AQHandles ) { sdiTerminateStreaming ( & rtDW . j1xg5jnqc1 .
AQHandles ) ; } } { if ( rtDW . j4sex4zqd0 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . j4sex4zqd0 . AQHandles ) ; } } } static void
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1
, numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData (
newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber (
destArray , i , j , newArray ) ; } static void
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData
( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheBitFieldToMxArray
( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheBitFieldToMxArray
( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) {
mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T )
bitVal ) ) ; } static uint_T
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_extractBitFieldFromMxArray
( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_extractBitFieldFromMxArray
( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataToMxArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) ; static void
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataToMxArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) ; static void
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) ; static void
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray *
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "rtPrevZCX" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
ssDW , 0 , 0 , ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const
char_T * rtdwDataFieldNames [ 48 ] = { "rtDW.orglme5at4" , "rtDW.orglme5at4a"
, "rtDW.orglme5at4a5" , "rtDW.orglme5at4a50" , "rtDW.lin3vz4uln" ,
"rtDW.eey4qgobmt" , "rtDW.f1bjvxwccz" , "rtDW.kq2ezp4qmo" , "rtDW.lmslnypsi2"
, "rtDW.j4r1opdjxl" , "rtDW.bby3eiosum" , "rtDW.b1gi51bpxi" ,
"rtDW.lr0q20caf3" , "rtDW.ek4idbgwye" , "rtDW.izbyxg2fjr" , "rtDW.jkev2514j4"
, "rtDW.hoalihqmja" , "rtDW.lt0fuutcxz" , "rtDW.lwk2b2noep" ,
"rtDW.jbfslnilmq" , "rtDW.ncgd1bpb1a" , "rtDW.pojepyzp5u" , "rtDW.davvnzy1kr"
, "rtDW.fh20zoj1sh" , "rtDW.kdkihaa34w" , "rtDW.g4cefol0br" ,
"rtDW.beitdmk3fp" , "rtDW.mmsvkaoufm" , "rtDW.bfawx2cz2m" , "rtDW.cfuzk4cfkk"
, "rtDW.oodfsknmtu" , "rtDW.erhbudu55l" , "rtDW.ao3iawiulm" ,
"rtDW.cu3anggihn" , "rtDW.n5hvozry30" , "rtDW.f2nlzigvwd" , "rtDW.ivngkrqgqj"
, "rtDW.l54o4kd4xu" , "rtDW.dninqzohu0" , "rtDW.dz2cewt0jx" ,
"rtDW.po5qjpsnms" , "rtDW.pdpodlo3p2" , "rtDW.pqnt2h0ig5" , "rtDW.oh1w0ntj3m"
, "rtDW.kbpnhsyifh.n2c5rrqay1" , "rtDW.i0ed20d54s.n2c5rrqay1" ,
"rtDW.golzcmoqxl.n2c5rrqay1" , "rtDW.kidn0dkyh4l.n2c5rrqay1" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 48 , rtdwDataFieldNames ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( rtDW . orglme5at4 ) , sizeof ( rtDW .
orglme5at4 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( rtDW . orglme5at4a ) , sizeof ( rtDW
. orglme5at4a ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 2 , ( const void * ) & ( rtDW . orglme5at4a5 ) , sizeof ( rtDW
. orglme5at4a5 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 3 , ( const void * ) & ( rtDW . orglme5at4a50 ) , sizeof (
rtDW . orglme5at4a50 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( rtDW . lin3vz4uln ) , sizeof ( rtDW .
lin3vz4uln ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( rtDW . eey4qgobmt ) , sizeof ( rtDW .
eey4qgobmt ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 6 , ( const void * ) & ( rtDW . f1bjvxwccz ) , sizeof ( rtDW .
f1bjvxwccz ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( rtDW . kq2ezp4qmo ) , sizeof ( rtDW .
kq2ezp4qmo ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 8 , ( const void * ) & ( rtDW . lmslnypsi2 ) , sizeof ( rtDW .
lmslnypsi2 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 9 , ( const void * ) & ( rtDW . j4r1opdjxl ) , sizeof ( rtDW .
j4r1opdjxl ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( rtDW . bby3eiosum ) , sizeof ( rtDW
. bby3eiosum ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 11 , ( const void * ) & ( rtDW . b1gi51bpxi ) , sizeof ( rtDW
. b1gi51bpxi ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 12 , ( const void * ) & ( rtDW . lr0q20caf3 ) , sizeof ( rtDW
. lr0q20caf3 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 13 , ( const void * ) & ( rtDW . ek4idbgwye ) , sizeof ( rtDW
. ek4idbgwye ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 14 , ( const void * ) & ( rtDW . izbyxg2fjr ) , sizeof ( rtDW
. izbyxg2fjr ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 15 , ( const void * ) & ( rtDW . jkev2514j4 ) , sizeof ( rtDW
. jkev2514j4 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 16 , ( const void * ) & ( rtDW . hoalihqmja ) , sizeof ( rtDW
. hoalihqmja ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 17 , ( const void * ) & ( rtDW . lt0fuutcxz ) , sizeof ( rtDW
. lt0fuutcxz ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 18 , ( const void * ) & ( rtDW . lwk2b2noep ) , sizeof ( rtDW
. lwk2b2noep ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 19 , ( const void * ) & ( rtDW . jbfslnilmq ) , sizeof ( rtDW
. jbfslnilmq ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 20 , ( const void * ) & ( rtDW . ncgd1bpb1a ) , sizeof ( rtDW
. ncgd1bpb1a ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 21 , ( const void * ) & ( rtDW . pojepyzp5u ) , sizeof ( rtDW
. pojepyzp5u ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 22 , ( const void * ) & ( rtDW . davvnzy1kr ) , sizeof ( rtDW
. davvnzy1kr ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 23 , ( const void * ) & ( rtDW . fh20zoj1sh ) , sizeof ( rtDW
. fh20zoj1sh ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 24 , ( const void * ) & ( rtDW . kdkihaa34w ) , sizeof ( rtDW
. kdkihaa34w ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( rtDW . g4cefol0br ) , sizeof ( rtDW
. g4cefol0br ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 26 , ( const void * ) & ( rtDW . beitdmk3fp ) , sizeof ( rtDW
. beitdmk3fp ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 27 , ( const void * ) & ( rtDW . mmsvkaoufm ) , sizeof ( rtDW
. mmsvkaoufm ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 28 , ( const void * ) & ( rtDW . bfawx2cz2m ) , sizeof ( rtDW
. bfawx2cz2m ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 29 , ( const void * ) & ( rtDW . cfuzk4cfkk ) , sizeof ( rtDW
. cfuzk4cfkk ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 30 , ( const void * ) & ( rtDW . oodfsknmtu ) , sizeof ( rtDW
. oodfsknmtu ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 31 , ( const void * ) & ( rtDW . erhbudu55l ) , sizeof ( rtDW
. erhbudu55l ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 32 , ( const void * ) & ( rtDW . ao3iawiulm ) , sizeof ( rtDW
. ao3iawiulm ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 33 , ( const void * ) & ( rtDW . cu3anggihn ) , sizeof ( rtDW
. cu3anggihn ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 34 , ( const void * ) & ( rtDW . n5hvozry30 ) , sizeof ( rtDW
. n5hvozry30 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 35 , ( const void * ) & ( rtDW . f2nlzigvwd ) , sizeof ( rtDW
. f2nlzigvwd ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 36 , ( const void * ) & ( rtDW . ivngkrqgqj ) , sizeof ( rtDW
. ivngkrqgqj ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 37 , ( const void * ) & ( rtDW . l54o4kd4xu ) , sizeof ( rtDW
. l54o4kd4xu ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 38 , ( const void * ) & ( rtDW . dninqzohu0 ) , sizeof ( rtDW
. dninqzohu0 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 39 , ( const void * ) & ( rtDW . dz2cewt0jx ) , sizeof ( rtDW
. dz2cewt0jx ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 40 , ( const void * ) & ( rtDW . po5qjpsnms ) , sizeof ( rtDW
. po5qjpsnms ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 41 , ( const void * ) & ( rtDW . pdpodlo3p2 ) , sizeof ( rtDW
. pdpodlo3p2 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 42 , ( const void * ) & ( rtDW . pqnt2h0ig5 ) , sizeof ( rtDW
. pqnt2h0ig5 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 43 , ( const void * ) & ( rtDW . oh1w0ntj3m ) , sizeof ( rtDW
. oh1w0ntj3m ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 44 , ( const void * ) & ( rtDW . kbpnhsyifh . n2c5rrqay1 ) ,
sizeof ( rtDW . kbpnhsyifh . n2c5rrqay1 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 45 , ( const void * ) & ( rtDW . i0ed20d54s . n2c5rrqay1 ) ,
sizeof ( rtDW . i0ed20d54s . n2c5rrqay1 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 46 , ( const void * ) & ( rtDW . golzcmoqxl . n2c5rrqay1 ) ,
sizeof ( rtDW . golzcmoqxl . n2c5rrqay1 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
rtdwData , 0 , 47 , ( const void * ) & ( rtDW . kidn0dkyh4l . n2c5rrqay1 ) ,
sizeof ( rtDW . kidn0dkyh4l . n2c5rrqay1 ) ) ; mxSetFieldByNumber ( ssDW , 0
, 1 , rtdwData ) ; }
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_cacheDataAsMxArray (
ssDW , 0 , 2 , ( const void * ) & ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ;
return ssDW ; } void
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_SetDWork ( const
mxArray * ssDW ) { ( void ) ssDW ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . orglme5at4 ) , rtdwData , 0 , 0 , sizeof ( rtDW .
orglme5at4 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . orglme5at4a ) , rtdwData , 0 , 1 , sizeof ( rtDW .
orglme5at4a ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . orglme5at4a5 ) , rtdwData , 0 , 2 , sizeof ( rtDW .
orglme5at4a5 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . orglme5at4a50 ) , rtdwData , 0 , 3 , sizeof ( rtDW .
orglme5at4a50 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . lin3vz4uln ) , rtdwData , 0 , 4 , sizeof ( rtDW .
lin3vz4uln ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . eey4qgobmt ) , rtdwData , 0 , 5 , sizeof ( rtDW .
eey4qgobmt ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . f1bjvxwccz ) , rtdwData , 0 , 6 , sizeof ( rtDW .
f1bjvxwccz ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . kq2ezp4qmo ) , rtdwData , 0 , 7 , sizeof ( rtDW .
kq2ezp4qmo ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . lmslnypsi2 ) , rtdwData , 0 , 8 , sizeof ( rtDW .
lmslnypsi2 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . j4r1opdjxl ) , rtdwData , 0 , 9 , sizeof ( rtDW .
j4r1opdjxl ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . bby3eiosum ) , rtdwData , 0 , 10 , sizeof ( rtDW .
bby3eiosum ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . b1gi51bpxi ) , rtdwData , 0 , 11 , sizeof ( rtDW .
b1gi51bpxi ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . lr0q20caf3 ) , rtdwData , 0 , 12 , sizeof ( rtDW .
lr0q20caf3 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . ek4idbgwye ) , rtdwData , 0 , 13 , sizeof ( rtDW .
ek4idbgwye ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . izbyxg2fjr ) , rtdwData , 0 , 14 , sizeof ( rtDW .
izbyxg2fjr ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . jkev2514j4 ) , rtdwData , 0 , 15 , sizeof ( rtDW .
jkev2514j4 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . hoalihqmja ) , rtdwData , 0 , 16 , sizeof ( rtDW .
hoalihqmja ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . lt0fuutcxz ) , rtdwData , 0 , 17 , sizeof ( rtDW .
lt0fuutcxz ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . lwk2b2noep ) , rtdwData , 0 , 18 , sizeof ( rtDW .
lwk2b2noep ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . jbfslnilmq ) , rtdwData , 0 , 19 , sizeof ( rtDW .
jbfslnilmq ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . ncgd1bpb1a ) , rtdwData , 0 , 20 , sizeof ( rtDW .
ncgd1bpb1a ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . pojepyzp5u ) , rtdwData , 0 , 21 , sizeof ( rtDW .
pojepyzp5u ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . davvnzy1kr ) , rtdwData , 0 , 22 , sizeof ( rtDW .
davvnzy1kr ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . fh20zoj1sh ) , rtdwData , 0 , 23 , sizeof ( rtDW .
fh20zoj1sh ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . kdkihaa34w ) , rtdwData , 0 , 24 , sizeof ( rtDW .
kdkihaa34w ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . g4cefol0br ) , rtdwData , 0 , 25 , sizeof ( rtDW .
g4cefol0br ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . beitdmk3fp ) , rtdwData , 0 , 26 , sizeof ( rtDW .
beitdmk3fp ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . mmsvkaoufm ) , rtdwData , 0 , 27 , sizeof ( rtDW .
mmsvkaoufm ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . bfawx2cz2m ) , rtdwData , 0 , 28 , sizeof ( rtDW .
bfawx2cz2m ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . cfuzk4cfkk ) , rtdwData , 0 , 29 , sizeof ( rtDW .
cfuzk4cfkk ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . oodfsknmtu ) , rtdwData , 0 , 30 , sizeof ( rtDW .
oodfsknmtu ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . erhbudu55l ) , rtdwData , 0 , 31 , sizeof ( rtDW .
erhbudu55l ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . ao3iawiulm ) , rtdwData , 0 , 32 , sizeof ( rtDW .
ao3iawiulm ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . cu3anggihn ) , rtdwData , 0 , 33 , sizeof ( rtDW .
cu3anggihn ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . n5hvozry30 ) , rtdwData , 0 , 34 , sizeof ( rtDW .
n5hvozry30 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . f2nlzigvwd ) , rtdwData , 0 , 35 , sizeof ( rtDW .
f2nlzigvwd ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . ivngkrqgqj ) , rtdwData , 0 , 36 , sizeof ( rtDW .
ivngkrqgqj ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . l54o4kd4xu ) , rtdwData , 0 , 37 , sizeof ( rtDW .
l54o4kd4xu ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . dninqzohu0 ) , rtdwData , 0 , 38 , sizeof ( rtDW .
dninqzohu0 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . dz2cewt0jx ) , rtdwData , 0 , 39 , sizeof ( rtDW .
dz2cewt0jx ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . po5qjpsnms ) , rtdwData , 0 , 40 , sizeof ( rtDW .
po5qjpsnms ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . pdpodlo3p2 ) , rtdwData , 0 , 41 , sizeof ( rtDW .
pdpodlo3p2 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . pqnt2h0ig5 ) , rtdwData , 0 , 42 , sizeof ( rtDW .
pqnt2h0ig5 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . oh1w0ntj3m ) , rtdwData , 0 , 43 , sizeof ( rtDW .
oh1w0ntj3m ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . kbpnhsyifh . n2c5rrqay1 ) , rtdwData , 0 , 44 ,
sizeof ( rtDW . kbpnhsyifh . n2c5rrqay1 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . i0ed20d54s . n2c5rrqay1 ) , rtdwData , 0 , 45 ,
sizeof ( rtDW . i0ed20d54s . n2c5rrqay1 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . golzcmoqxl . n2c5rrqay1 ) , rtdwData , 0 , 46 ,
sizeof ( rtDW . golzcmoqxl . n2c5rrqay1 ) ) ;
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtDW . kidn0dkyh4l . n2c5rrqay1 ) , rtdwData , 0 , 47 ,
sizeof ( rtDW . kidn0dkyh4l . n2c5rrqay1 ) ) ; }
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_restoreDataFromMxArray
( ( void * ) & ( rtPrevZCX ) , ssDW , 0 , 2 , sizeof ( rtPrevZCX ) ) ; }
mxArray *
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_GetSimStateDisallowedBlocks
( ) { mxArray * data = mxCreateCellMatrix ( 9 , 3 ) ; mwIndex subs [ 2 ] ,
offset ; { static const char_T * blockType [ 9 ] = { "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ;
static const char_T * blockPath [ 9 ] = {
"sigmadelta_full_DCO_Sampled_differential_integer_true/Scope" ,
"sigmadelta_full_DCO_Sampled_differential_integer_true/Scope1" ,
"sigmadelta_full_DCO_Sampled_differential_integer_true/Scope2" ,
"sigmadelta_full_DCO_Sampled_differential_integer_true/Scope3" ,
"sigmadelta_full_DCO_Sampled_differential_integer_true/Scope4" ,
"sigmadelta_full_DCO_Sampled_differential_integer_true/Scope5" ,
"sigmadelta_full_DCO_Sampled_differential_integer_true/Scope6" ,
"sigmadelta_full_DCO_Sampled_differential_integer_true/Scope7" ,
"sigmadelta_full_DCO_Sampled_differential_integer_true/Scope8" , } ; static
const int reason [ 9 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs
[ 0 ] = 0 ; subs [ 0 ] < 9 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 12 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
4 ) ; ssSetNumBlocks ( rtS , 158 ) ; ssSetNumBlockIO ( rtS , 85 ) ;
ssSetNumBlockParams ( rtS , 160 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 4.0690104166666665E-8 ) ; ssSetSampleTime ( rtS ,
3 , 3.2552083333333332E-7 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ;
ssSetOffsetTime ( rtS , 3 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 181193560U ) ; ssSetChecksumVal ( rtS , 1 ,
1803357530U ) ; ssSetChecksumVal ( rtS , 2 , 2593763468U ) ; ssSetChecksumVal
( rtS , 3 , 1752874840U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 27 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
sigmadelta_full_DCO_Sampled_differential_integer_true_InitializeDataMapInfo (
) ; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS )
; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"sigmadelta_full_DCO_Sampled_differential_integer_true" ) ; ssSetPath ( rtS ,
"sigmadelta_full_DCO_Sampled_differential_integer_true" ) ; ssSetTStart ( rtS
, 0.0 ) ; ssSetTFinal ( rtS , 0.002669921875 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 }
; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
} ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 } ; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [
] = { ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] =
{
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n4/vdly4/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n3/vdly4/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n2/vdly4/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n1/vdly4/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n1/vdly1/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n1/vdly5/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n2/vdly1/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n2/vdly5/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n3/vdly1/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n3/vdly5/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n4/vdly1/Integrator"
,
 "sigmadelta_full_DCO_Sampled_differential_integer_true/Ring Oscillator P\n4/vdly5/Integrator"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
} ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 12 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 12 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . ocl0bnlv5i ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . cyenolwp1t ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . ivov12hdqr ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . duwt3olrcl ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . hgnelaemj3 ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . jvqvth1xfn ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . m3pfzoipqp ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . ohyadbptl4 ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . ff0aprbz4e ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . jbez0f4u2q ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . bccqwl4dld ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . dyo3j1ie0t ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 0 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 12 ] ;
static real_T absTol [ 12 ] = { 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 } ; static uint8_T
absTolControl [ 12 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U } ; static real_T contStateJacPerturbBoundMinVec [ 12 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 12 ] ; static uint8_T zcAttributes [ 56 ] =
{ ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP
) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL
) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( 0xc0 | ZC_EVENT_ALL_UP ) , ( 0xc0 |
ZC_EVENT_ALL_UP ) , ( 0xc0 | ZC_EVENT_ALL_UP ) , ( 0xc0 | ZC_EVENT_ALL_UP ) }
; static ssNonContDerivSigInfo nonContDerivSigInfo [ 12 ] = { { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . gsehs3hnnb ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . lipuj3gabm ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . eojdcf25ok ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . g2w43x1rgu ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . kaat2vxihs ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . g3gmay1qvg ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . nrcbeojypl ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . h5zx0u2j5z ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . eozfah35pa ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . jqsqycuvjp ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . i5qnwd1xft ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . l5d5sv15ob ) , ( NULL ) } } ; { int i ; for (
i = 0 ; i < 12 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 1.0E-9 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 4.0690104166666665E-8 ) ; ssSetSolverMaxOrder ( rtS
, - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , (
NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 )
; ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
12 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 56 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 52 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; } {
ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ; ssSetPrevZCSigState ( rtS ,
zc ) ; } { rtPrevZCX . kbpnhsyifh . mkgoidkhc0 = POS_ZCSIG ; rtPrevZCX .
i0ed20d54s . mkgoidkhc0 = POS_ZCSIG ; rtPrevZCX . golzcmoqxl . mkgoidkhc0 =
POS_ZCSIG ; rtPrevZCX . kidn0dkyh4l . mkgoidkhc0 = POS_ZCSIG ; }
ssSetChecksumVal ( rtS , 0 , 181193560U ) ; ssSetChecksumVal ( rtS , 1 ,
1803357530U ) ; ssSetChecksumVal ( rtS , 2 , 2593763468U ) ; ssSetChecksumVal
( rtS , 3 , 1752874840U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 5 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = ( sysRanDType * ) &
rtDW . kidn0dkyh4l . n2c5rrqay1 ; systemRan [ 2 ] = ( sysRanDType * ) & rtDW
. golzcmoqxl . n2c5rrqay1 ; systemRan [ 3 ] = ( sysRanDType * ) & rtDW .
i0ed20d54s . n2c5rrqay1 ; systemRan [ 4 ] = ( sysRanDType * ) & rtDW .
kbpnhsyifh . n2c5rrqay1 ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo (
rtS ) , & ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_GetSimStateDisallowedBlocks
) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID4 ( tid ) ; }
