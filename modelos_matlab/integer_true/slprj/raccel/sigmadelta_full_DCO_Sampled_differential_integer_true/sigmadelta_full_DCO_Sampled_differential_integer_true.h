#ifndef RTW_HEADER_sigmadelta_full_DCO_Sampled_differential_integer_true_h_
#define RTW_HEADER_sigmadelta_full_DCO_Sampled_differential_integer_true_h_
#ifndef sigmadelta_full_DCO_Sampled_differential_integer_true_COMMON_INCLUDES_
#define sigmadelta_full_DCO_Sampled_differential_integer_true_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "sigmadelta_full_DCO_Sampled_differential_integer_true_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"
#define MODEL_NAME sigmadelta_full_DCO_Sampled_differential_integer_true
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (85) 
#define NUM_ZC_EVENTS (4) 
#ifndef NCSTATES
#define NCSTATES (12)   
#elif NCSTATES != 12
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T bhcircixxg ; } gfv13enjot ; typedef struct { int8_T
n2c5rrqay1 ; } a5jozx5y5x ; typedef struct { real_T ewk1v4tfk5 ; } c4lr3cg0do
; typedef struct { ZCSigState mkgoidkhc0 ; } ba5sevgwxg ; typedef struct {
real_T kgie0svi5e ; real_T l5d5sv15ob ; real_T ezrijysvzd ; real_T edbyb0d21l
; real_T i5qnwd1xft ; real_T b30hfpmu5e ; real_T kgrmgzgmqx ; real_T
oomwbzmknh ; real_T fiq2ipptdn ; real_T pkmkh1hvh4 ; real_T jqsqycuvjp ;
real_T pgju2goynn ; real_T exjizz2jo2 ; real_T eozfah35pa ; real_T kb0z4ghrx3
; real_T mhhu2tnpxn ; real_T nfp4y3c4oe ; real_T ngnestrbjy ; real_T
iet33u53t4 ; real_T n4mnwvotbr ; real_T a5n5apq2jk ; real_T bqejnevaiw ;
real_T ovqw01sam1 ; real_T h5zx0u2j5z ; real_T dkzpuru5r2 ; real_T nrcbeojypl
; real_T hqjmlihzlz ; real_T a5cffbgb5o ; real_T gjvk1j10xe ; real_T
i4on5qbs3p ; real_T lt1weizey2 ; real_T ptpa5d2e1n ; real_T g3gmay1qvg ;
real_T c5mwrco5fr ; real_T kaat2vxihs ; real_T am0zkkx2be ; real_T edubwe2l1d
; real_T gjlh0fklml ; real_T b52ifyiclb ; real_T j2nbmk1xp1 ; real_T
my1dkjenar ; real_T htd4lm0qfa ; real_T g2w43x1rgu ; real_T ajmmmek3y4 ;
real_T eojdcf25ok ; real_T dthtcjo5c4 ; real_T jqyfeja5w1 ; real_T dvfodclg5x
; real_T c4u12eyofp ; real_T ndvzivqyue ; real_T lipuj3gabm ; real_T
oiqotbk4tx ; real_T gsehs3hnnb ; real_T ktbanqbefe ; real_T ciqxajlela ;
real_T pktrsmb4dq ; real_T of53ol5y2e ; real_T ncwojfl1ho ; real_T gup24my2t1
; real_T c3khxutonh ; int16_T jfyxg2pora ; int16_T mtymqxdskr ; int16_T
jaww0rmrgo ; int16_T a20x4aezvv ; int16_T jalqvrah1a ; int16_T dnrmm412kx ;
int16_T cr5ifxx30x ; int16_T dsapdbxvv5 ; int16_T byz4wcpb1i ; int16_T
bpvvilv5x0 ; int16_T ixxqou0jmh ; int16_T prhktwurxy ; int16_T bq3qtxogui ;
int16_T blyxrzh5wh ; int16_T ndpim4uvxw ; int16_T ik5lz4vfeb ; int16_T
agg0qa1equ ; int16_T frq15es1fg ; int16_T j3tzm341lz ; boolean_T gxiqhdac4z ;
boolean_T l0hrwifmyk ; gfv13enjot kbpnhsyifh ; gfv13enjot i0ed20d54s ;
gfv13enjot golzcmoqxl ; gfv13enjot kidn0dkyh4l ; } B ; typedef struct {
real_T orglme5at4 ; real_T orglme5at4a ; real_T orglme5at4a5 ; real_T
orglme5at4a50 ; real_T lin3vz4uln ; real_T eey4qgobmt ; real_T f1bjvxwccz ;
real_T kq2ezp4qmo ; struct { void * LoggedData [ 2 ] ; } phdb1i05o2 ; struct
{ void * LoggedData [ 2 ] ; } at1ovhvgyg ; struct { void * LoggedData ; }
lyv2enlshq ; struct { void * LoggedData [ 4 ] ; } khbmu2dhvf ; struct { void
* LoggedData [ 2 ] ; } pnvalib2sw ; struct { void * LoggedData [ 2 ] ; }
kdozo3dhso ; struct { void * LoggedData [ 2 ] ; } norkashkku ; struct { void
* LoggedData [ 3 ] ; } lucirm1vvf ; struct { void * LoggedData [ 2 ] ; }
lk4frp5ghi ; struct { void * AQHandles ; } fycjnke3eg ; struct { void *
AQHandles ; } cpflfsupmr ; struct { void * AQHandles ; } j1xg5jnqc1 ; struct
{ void * AQHandles ; } j4sex4zqd0 ; int_T lmslnypsi2 ; int_T j4r1opdjxl ;
int_T bby3eiosum ; int_T b1gi51bpxi ; int_T lr0q20caf3 ; int_T ek4idbgwye ;
int_T izbyxg2fjr ; int_T jkev2514j4 ; int_T hoalihqmja ; int_T lt0fuutcxz ;
int_T lwk2b2noep ; int_T jbfslnilmq ; int_T ncgd1bpb1a ; int_T pojepyzp5u ;
int16_T davvnzy1kr ; int16_T fh20zoj1sh ; int16_T kdkihaa34w ; int16_T
g4cefol0br ; int16_T beitdmk3fp ; int16_T mmsvkaoufm ; boolean_T bfawx2cz2m ;
boolean_T cfuzk4cfkk ; boolean_T oodfsknmtu ; boolean_T erhbudu55l ;
boolean_T ao3iawiulm ; boolean_T cu3anggihn ; boolean_T n5hvozry30 ;
boolean_T f2nlzigvwd ; boolean_T ivngkrqgqj ; boolean_T l54o4kd4xu ;
boolean_T dninqzohu0 ; boolean_T dz2cewt0jx ; boolean_T po5qjpsnms ;
boolean_T pdpodlo3p2 ; boolean_T pqnt2h0ig5 ; boolean_T oh1w0ntj3m ;
a5jozx5y5x kbpnhsyifh ; a5jozx5y5x i0ed20d54s ; a5jozx5y5x golzcmoqxl ;
a5jozx5y5x kidn0dkyh4l ; } DW ; typedef struct { real_T ocl0bnlv5i ; real_T
cyenolwp1t ; real_T ivov12hdqr ; real_T duwt3olrcl ; real_T hgnelaemj3 ;
real_T jvqvth1xfn ; real_T m3pfzoipqp ; real_T ohyadbptl4 ; real_T ff0aprbz4e
; real_T jbez0f4u2q ; real_T bccqwl4dld ; real_T dyo3j1ie0t ; } X ; typedef
struct { real_T ocl0bnlv5i ; real_T cyenolwp1t ; real_T ivov12hdqr ; real_T
duwt3olrcl ; real_T hgnelaemj3 ; real_T jvqvth1xfn ; real_T m3pfzoipqp ;
real_T ohyadbptl4 ; real_T ff0aprbz4e ; real_T jbez0f4u2q ; real_T bccqwl4dld
; real_T dyo3j1ie0t ; } XDot ; typedef struct { boolean_T ocl0bnlv5i ;
boolean_T cyenolwp1t ; boolean_T ivov12hdqr ; boolean_T duwt3olrcl ;
boolean_T hgnelaemj3 ; boolean_T jvqvth1xfn ; boolean_T m3pfzoipqp ;
boolean_T ohyadbptl4 ; boolean_T ff0aprbz4e ; boolean_T jbez0f4u2q ;
boolean_T bccqwl4dld ; boolean_T dyo3j1ie0t ; } XDis ; typedef struct {
real_T ocl0bnlv5i ; real_T cyenolwp1t ; real_T ivov12hdqr ; real_T duwt3olrcl
; real_T hgnelaemj3 ; real_T jvqvth1xfn ; real_T m3pfzoipqp ; real_T
ohyadbptl4 ; real_T ff0aprbz4e ; real_T jbez0f4u2q ; real_T bccqwl4dld ;
real_T dyo3j1ie0t ; } CStateAbsTol ; typedef struct { real_T ocl0bnlv5i ;
real_T cyenolwp1t ; real_T ivov12hdqr ; real_T duwt3olrcl ; real_T hgnelaemj3
; real_T jvqvth1xfn ; real_T m3pfzoipqp ; real_T ohyadbptl4 ; real_T
ff0aprbz4e ; real_T jbez0f4u2q ; real_T bccqwl4dld ; real_T dyo3j1ie0t ; }
CXPtMin ; typedef struct { real_T ocl0bnlv5i ; real_T cyenolwp1t ; real_T
ivov12hdqr ; real_T duwt3olrcl ; real_T hgnelaemj3 ; real_T jvqvth1xfn ;
real_T m3pfzoipqp ; real_T ohyadbptl4 ; real_T ff0aprbz4e ; real_T jbez0f4u2q
; real_T bccqwl4dld ; real_T dyo3j1ie0t ; } CXPtMax ; typedef struct { real_T
of5t4qqiib ; real_T e310l5o1yu ; real_T eagwepmjzf ; real_T eg3p5v25ve ;
real_T jcsxd0ocqn ; real_T cbqu3ycv5i ; real_T al2qzvb1xu ; real_T mbxku4ajxw
; real_T kbjoajtbce ; real_T m4ldnpigqi ; real_T blvkvya5tr ; real_T
kozzenl33w ; real_T fslehqneah ; real_T ijnhmud52l ; real_T habmiz0b13 ;
real_T gm2xfyuztm ; real_T kkvccdnmjn ; real_T eya34krnhk ; real_T c0z55y1psl
; real_T p02bplx421 ; real_T p0qlvyfnqu ; real_T i5ci5gng34 ; real_T
pyfofxiew2 ; real_T ixd3c0cpks ; real_T adwb4kg2wa ; real_T n1qgxgoraf ;
real_T auruzwwi2j ; real_T otvhindur0 ; real_T ekqy1pkeph ; real_T gyr2y4sksl
; real_T n05mmzewlt ; real_T dxvfhqkmwu ; real_T dpk3i4d5nc ; real_T
oemuw0q4mk ; real_T ni241ntzxe ; real_T cl1eyz5pk1 ; real_T c0ctydatls ;
real_T cjqdi5hosq ; real_T k5kjke1j1n ; real_T nwyrvc50wr ; real_T oidowxjd54
; real_T dci4nfanqv ; real_T kkb5qpemsp ; real_T nbf5da2kmw ; real_T
p3kamgjhov ; real_T moxgeechci ; real_T g2mblra45p ; real_T ppdfghbsws ;
real_T npt55mhobh ; real_T oeohtbc4xf ; real_T am3ysudklj ; real_T j1wropdozx
; c4lr3cg0do kbpnhsyifh ; c4lr3cg0do i0ed20d54s ; c4lr3cg0do golzcmoqxl ;
c4lr3cg0do kidn0dkyh4l ; } ZCV ; typedef struct { ba5sevgwxg kbpnhsyifh ;
ba5sevgwxg i0ed20d54s ; ba5sevgwxg golzcmoqxl ; ba5sevgwxg kidn0dkyh4l ; }
PrevZCX ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct by3yi2igvz_ { real_T _Y0 ; } ; struct P_ { real_T Input_signal ;
real_T Kvco ; real_T f0 ; real_T f02 ; real_T ft ; real_T
TmpLatchAtSampleandHoldInport1_InitialCondition ; real_T Integrator_IC ;
real_T Integrator_UpperSat ; real_T Integrator_LowerSat ; real_T Relay_OnVal
; real_T Relay_OffVal ; real_T Relay_YOn ; real_T Relay_YOff ; real_T
Gain2_Gain ; real_T Relay_OnVal_mmmoteegjq ; real_T Relay_OffVal_af0ailhjv4 ;
real_T Relay_YOn_dx350cfzhz ; real_T Relay_YOff_klaoj23stk ; real_T
TmpLatchAtSampleandHoldInport1_InitialCondition_jxkxj0lwzg ; real_T
Integrator_IC_lr20tuv0eg ; real_T Integrator_UpperSat_fqtyz21jgz ; real_T
Integrator_LowerSat_jssfn1hxzj ; real_T Relay_OnVal_cbjqjxb4tm ; real_T
Relay_OffVal_am0oqh4ks4 ; real_T Relay_YOn_bc42rfdajg ; real_T
Relay_YOff_kj0k21tk4c ; real_T Gain2_Gain_mxhrsicqv0 ; real_T
Relay_OnVal_azgq1fxwjz ; real_T Relay_OffVal_m3wov13fvy ; real_T
Relay_YOn_myrz2fo54j ; real_T Relay_YOff_m2vdsz2cep ; real_T u_Bias ; real_T
u_Phase ; real_T Saturation_LowerSat ; real_T
TmpLatchAtSampleandHoldInport1_InitialCondition_jxkxj0lwzg4 ; real_T
Integrator_IC_nen4ukhzeh ; real_T Integrator_UpperSat_gcii2rzagn ; real_T
Integrator_LowerSat_avy3r3vlzn ; real_T Relay_OnVal_f0yihkjgvs ; real_T
Relay_OffVal_k30yarpddi ; real_T Relay_YOn_fp2zssybkj ; real_T
Relay_YOff_jbcg4gr0li ; real_T Gain2_Gain_pibcjqgl5q ; real_T
Relay_OnVal_ol55c5brbv ; real_T Relay_OffVal_ftfm5ezvr4 ; real_T
Relay_YOn_pnewmcn0hv ; real_T Relay_YOff_g0zkkowcb2 ; real_T
TmpLatchAtSampleandHoldInport1_InitialCondition_jxkxj0lwzg4l ; real_T
Integrator_IC_eniw2bszpi ; real_T Integrator_UpperSat_lncwbrrk4q ; real_T
Integrator_LowerSat_pniuvpe0xc ; real_T Relay_OnVal_nte1ombnoa ; real_T
Relay_OffVal_bxv3ndvn3n ; real_T Relay_YOn_aydwhahfkz ; real_T
Relay_YOff_opbykzzggq ; real_T Gain2_Gain_nzobe5hggj ; real_T
Relay_OnVal_lcdbtjujpq ; real_T Relay_OffVal_iuo5h2oaoh ; real_T
Relay_YOn_jauj4ocrsp ; real_T Relay_YOff_ddodkq4t55 ; real_T
u_Bias_cxn2cbupoj ; real_T u_Phase_lgrdgjvqpc ; real_T Gain1_Gain ; real_T
Integrator_IC_bspyxfravm ; real_T Integrator_UpperSat_obehvxea0x ; real_T
Integrator_LowerSat_hrrlfsxyh1 ; real_T Relay_OnVal_echuyyywen ; real_T
Relay_OffVal_gfiee0muju ; real_T Relay_YOn_nfg3bxhtxu ; real_T
Relay_YOff_av4xtkhozb ; real_T Gain3_Gain ; real_T Integrator_IC_hsjhrinlvg ;
real_T Integrator_UpperSat_hnpjk31aqn ; real_T Integrator_LowerSat_p5sqmpsfkb
; real_T Relay_OnVal_brwixqgp2p ; real_T Relay_OffVal_lzmtedixmm ; real_T
Relay_YOn_lsb53mcfzj ; real_T Relay_YOff_jrvptib512 ; real_T Gain4_Gain ;
real_T Gain1_Gain_pfmsb2tnwt ; real_T Integrator_IC_pda235dj3o ; real_T
Integrator_UpperSat_onycsesq00 ; real_T Integrator_LowerSat_lt0o50nwow ;
real_T Relay_OnVal_grhow3snpm ; real_T Relay_OffVal_in3mllvr4x ; real_T
Relay_YOn_g5oxmo5vtx ; real_T Relay_YOff_n2ya32gh1l ; real_T
Gain3_Gain_orrkrx44hb ; real_T Integrator_IC_gc1nxps5tg ; real_T
Integrator_UpperSat_jxdbo0dk32 ; real_T Integrator_LowerSat_bx3cuhup2x ;
real_T Relay_OnVal_lb5krscakn ; real_T Relay_OffVal_gk3kuiyqyk ; real_T
Relay_YOn_bhfsrh1cck ; real_T Relay_YOff_apk0hrwvzz ; real_T
Gain4_Gain_f5rnnj140f ; real_T Saturation1_LowerSat ; real_T
Gain1_Gain_ei4ctr1ce4 ; real_T Integrator_IC_nnkei5byn3 ; real_T
Integrator_UpperSat_nikd5nq4qi ; real_T Integrator_LowerSat_ml0gsyvrs4 ;
real_T Relay_OnVal_npnpiqpph3 ; real_T Relay_OffVal_esykk2txpm ; real_T
Relay_YOn_ifa2pl2lcg ; real_T Relay_YOff_fpmi0fcndp ; real_T
Gain3_Gain_erykj2ffdi ; real_T Integrator_IC_i2uai10hwr ; real_T
Integrator_UpperSat_dh0t25pzh2 ; real_T Integrator_LowerSat_neq0i10rth ;
real_T Relay_OnVal_h1i2o5kwfg ; real_T Relay_OffVal_ps0rhgpgvd ; real_T
Relay_YOn_kfriyo5rl4 ; real_T Relay_YOff_f2g3xhsgrz ; real_T
Gain4_Gain_m5dpyjac2r ; real_T Gain1_Gain_jbm5vg2jfe ; real_T
Integrator_IC_hz0cltzclb ; real_T Integrator_UpperSat_gcvzmvowsi ; real_T
Integrator_LowerSat_o2mm033ot2 ; real_T Relay_OnVal_pqgvke2nha ; real_T
Relay_OffVal_k1c5j1def3 ; real_T Relay_YOn_psdpbhlnbk ; real_T
Relay_YOff_j3yuyzhlz1 ; real_T Gain3_Gain_c2aoyjuxem ; real_T
Integrator_IC_g2lwwx2esc ; real_T Integrator_UpperSat_ipwxjx3zwz ; real_T
Integrator_LowerSat_isd3y4kico ; real_T Relay_OnVal_fb2ckrosa1 ; real_T
Relay_OffVal_mdcttm5av2 ; real_T Relay_YOn_pqm5zswnez ; real_T
Relay_YOff_gmithmyikx ; real_T Gain4_Gain_fte5si5w01 ; real_T
Memory_InitialCondition ; real_T Memory_InitialCondition_avz31d4xse ; real_T
Memory_InitialCondition_lisisb1puv ; real_T
Memory_InitialCondition_eopbug5u3g ; real_T Constant1_Value ; real_T
Constant13_Value ; real_T Constant14_Value ; real_T Constant2_Value ; real_T
Constant1_Value_k4ze1eyqfh ; real_T Constant3_Value ; real_T
Constant1_Value_ccfqh3zjfw ; real_T Constant3_Value_kteichhl4y ; real_T
Constant1_Value_p4onze5frx ; real_T Constant3_Value_cc01naktl1 ; real_T
Constant1_Value_kim44fji3q ; real_T Constant3_Value_fkqot0dgjq ; int16_T
Delay2_InitialCondition ; int16_T Delay2_InitialCondition_ohl1x2au03 ;
int16_T Gain9_Gain ; int16_T Gain3_Gain_hzvizfc2ch ; int16_T
Delay4_InitialCondition ; int16_T Delay1_InitialCondition ; int16_T
Delay2_InitialCondition_mopckj2nxe ; int16_T Delay7_InitialCondition ;
int16_T Gain_Gain ; by3yi2igvz kbpnhsyifh ; by3yi2igvz i0ed20d54s ;
by3yi2igvz golzcmoqxl ; by3yi2igvz kidn0dkyh4l ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern PrevZCX rtPrevZCX ; extern P rtP ; extern mxArray *
mr_sigmadelta_full_DCO_Sampled_differential_integer_true_GetDWork ( ) ;
extern void mr_sigmadelta_full_DCO_Sampled_differential_integer_true_SetDWork
( const mxArray * ssDW ) ; extern mxArray *
 mr_sigmadelta_full_DCO_Sampled_differential_integer_true_GetSimStateDisallowedBlocks
( ) ; extern const rtwCAPI_ModelMappingStaticInfo *
sigmadelta_full_DCO_Sampled_differential_integer_true_GetCAPIStaticMap ( void
) ; extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
