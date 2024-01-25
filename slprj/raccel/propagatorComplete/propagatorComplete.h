#ifndef RTW_HEADER_propagatorComplete_h_
#define RTW_HEADER_propagatorComplete_h_
#ifndef propagatorComplete_COMMON_INCLUDES_
#define propagatorComplete_COMMON_INCLUDES_
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
#include "propagatorComplete_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME propagatorComplete
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (10)     
#define NBLOCKIO (303) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (14)   
#elif NCSTATES != 14
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
typedef struct { int8_T feqk14z4ht ; } jvsztzhphf ; typedef struct { int8_T
n2hrtd2tpt ; } bguustwtdt ; typedef struct { real_T i1gdupwxmv [ 3 ] ; real_T
dga5uve4em [ 3 ] ; real_T oroad0ht0q [ 4 ] ; real_T hmmusp0g1o [ 3 ] ; real_T
h5ch5oexhd ; real_T dve3qulja2 [ 3 ] ; real_T fqb0csb24q [ 3 ] ; real_T
jvs22ygnlb ; real_T bf0fs5uttf ; real_T jp4wysmwga ; real_T p0dt0zhwqq ;
real_T bg4fufsmy1 [ 4 ] ; real_T ixoaxw0z3z [ 3 ] ; real_T fj3nbz2brp ;
real_T lf04lkbhu2 ; real_T acj4h4hesu ; real_T mvf1ryalzv ; real_T jis02iihtm
; real_T eezuitvkf2 ; real_T al1oahzn31 ; real_T laettbhgce ; real_T
dxg13zvbtq ; real_T gdquahf0f2 ; real_T brmutb1g1u ; real_T fymi0gmyip ;
real_T d5xucg4nfl ; real_T nieicv1rhk ; real_T fisaz5rh1d ; real_T cbatohx55z
; real_T igelp4q2vf ; real_T g2a20n1njt ; real_T fnimcmg5s3 ; real_T
j0rfilwsfi ; real_T gawqjwnyv5 ; real_T h2pfhvsedk ; real_T fu5mr4vpex ;
real_T lkjfpajzl3 ; real_T m5up2n1nbo ; real_T jmgq2pwzfq ; real_T g4niedc4jf
; real_T icur5un0um ; real_T pjczvjoh14 ; real_T fhdzfrquqm ; real_T
eft0lj40ww ; real_T a1k1ptiumf ; real_T meo1lsqulq ; real_T dzwjok5d2k ;
real_T lfzqhovs4q ; real_T byibualgjm ; real_T mesawx2zut ; real_T hjewv5w14n
; real_T pvaph1jxlp ; real_T nl1z4fd3ri ; real_T lasrw5ukka ; real_T
iip1hriuva ; real_T mpkbaajjfa ; real_T mgnz2gf0nd ; real_T chxdayrvyc ;
real_T j5rgjgk55e ; real_T j3m24zp1b2 ; real_T fotwyiilg0 ; real_T dgbrfjrsnf
; real_T ntuzztetrw ; real_T hxnnbjicyn ; real_T blzjelfrwf ; real_T
nhs31lz5yi ; real_T mlh0r04pcn ; real_T m0smnb2oey ; real_T dmaqam0v0h ;
real_T jopolvtd1q ; real_T mqkkf3g1ci ; real_T n2b3wgfs0b ; real_T dfev1qf3y5
; real_T l3kopglscf ; real_T bw4dogjhdp ; real_T bhi3oqiriq ; real_T
bmv5sjbgiy ; real_T pxr5jc1icn ; real_T pwxw3btyt3 ; real_T kwxnygmwo4 ;
real_T g5vqg0l4d3 ; real_T algyw44cxb ; real_T dw5fo1tslt ; real_T geezzyxovx
; real_T iavnjulq1p ; real_T g152ybx4et ; real_T m2biuhqq4b ; real_T
ecfsbxh50q ; real_T hw3bubstlq ; real_T aocyydnhyx ; real_T btadruhgyg ;
real_T oyrhhuf4qk [ 3 ] ; real_T gmkpt4ng2s ; real_T lguqhr3eed ; real_T
omhh14un54 ; real_T iw3dewpgzo ; real_T ctzop00roh ; real_T gbfdgx02zs ;
real_T paao34dbge ; real_T jaody4hpx1 ; real_T nbej345zml ; real_T nslfaccjkc
; real_T hlmoxwhlpo ; real_T jwb0ahpfau ; real_T kl1dujwoxs ; real_T
eakab5nckm ; real_T os1djyx3gq ; real_T dglowvh22n ; real_T jbnkmaznx1 ;
real_T ilwyp1idaz ; real_T fsobn51cwo ; real_T nmhsnnyyjb ; real_T lc0hygznhb
; real_T mwkyl1qnsr ; real_T egepo0qoxn ; real_T f2tagcydxx ; real_T
a4dmsmw4dd ; real_T mn52oa3uc3 ; real_T cgtdzhnvtm ; real_T piqzipmsmc ;
real_T kadajiqlk2 ; real_T gut2lsy3r3 ; real_T bowxeudhcu ; real_T nceipi1mwm
; real_T gruwqijb1i ; real_T lliptltvxv ; real_T lcks1hemgj ; real_T
lopw34lvpy ; real_T em1armpiip ; real_T htgin2wwsm ; real_T glweuu0jof ;
real_T ehfpacwyjv ; real_T ox0cvbvwwa ; real_T docpe423pw ; real_T cabu5lfoiu
; real_T a3mxf5yduh ; real_T hjsxgh2rxw ; real_T g20f0tyemp ; real_T
eyooagp31g ; real_T e40sm1esb2 ; real_T fbluqzqpjw ; real_T dw4tvopbpl ;
real_T crbkqa4zcg ; real_T bzdn302vol ; real_T gh5tcqmmg2 ; real_T huximy5ggo
; real_T j5yfzbfhkx ; real_T cfpt44ankl ; real_T ix4zrpudlv ; real_T
ljosvnlw4m ; real_T kbuzajo4k4 ; real_T ea3joyevwd ; real_T bhu2xuh1yz [ 3 ]
; real_T k4qexhdxn1 ; real_T gd4e0o2c2n ; real_T b0nxk2epl4 ; real_T
fyxniedijj ; real_T id1wdzpi4i ; real_T osslghchcb ; real_T d31av4qw31 ;
real_T hwj20d3bno ; real_T el0adgnog1 ; real_T hy5wnoloht ; real_T kfcou4bvza
; real_T dignlydsoz [ 3 ] ; real_T apg0lfybz1 ; real_T oeuiuc0rml ; real_T
gvuzrrlgxw ; real_T congrphuyl ; real_T pctmp0afbx ; real_T m4kkl4ufjq ;
real_T p1f1e3cdzh [ 3 ] ; real_T fkqjxvrclw ; real_T bw45iqqgvl ; real_T
fdiv1m4ppv ; real_T igvpzctkst ; real_T cm4esdumwi ; real_T g1rck4njgs ;
real_T a4vdkamzyo ; real_T iahogspbv0 ; real_T poi0qfbtfo ; real_T kcvwsci02p
; real_T ahqfyi5siw ; real_T nvrevwa3no ; real_T iz2unhnnvm ; real_T
bfoonghqhn ; real_T lznbj03k3c ; real_T khln1tu5lr ; real_T ehb0gpswkj ;
real_T izfh0vk2px ; real_T nd0dstt5ik ; real_T exthhhc1td ; real_T g3ilclrl2u
; real_T ae4zf0ag3n ; real_T gup3rd5lxw ; real_T m4je0ufogy ; real_T
o2x0gibmio ; real_T hfmydjiw53 ; real_T biiv5ksp0r ; real_T gxyluj3lik ;
real_T jmbstbx22u ; real_T g2dk3vwizf ; real_T pe4px3w4eb ; real_T p3mjwuaxhd
; real_T czkyqqofo0 ; real_T kbxzvlztyd ; real_T i2cow4avdn ; real_T
nek3egkkpc ; real_T krv2csy3hb ; real_T cxb5fcymvn ; real_T c1csrsuck1 ;
real_T o50igbierp ; real_T es1g3iquza ; real_T ghcfxitfo5 ; real_T ndll0vzw51
; real_T k00n2fvjcp ; real_T ayoaoq4qke ; real_T p1mt4d4lqw ; real_T
bq3ac2ejs1 ; real_T fzg5vrlob2 ; real_T ipamocjtp5 ; real_T p5qkzgyoui ;
real_T o14k0syu0t ; real_T c15nat5wlb ; real_T a2nehhwcyt ; real_T clluii5k4r
; real_T jtm20p3hzi ; real_T pk5w14pzrn ; real_T b03rarcdmq ; real_T
mjsbtbhsim ; real_T nsovsetmi4 ; real_T oma1tfw5tf ; real_T dikyeoa1sl [ 3 ]
; real_T cq5px5e2vv [ 4 ] ; real_T itjtebuhln ; real_T ov2djkilpt ; real_T
cmnnpvygtl ; real_T kudzc132rw [ 3 ] ; real_T gwno0h0ad0 [ 3 ] ; real_T
ccgjqwq00r [ 3 ] ; real_T mhwydlezwh [ 3 ] ; real_T mxgn531rcl ; real_T
pmv4ecy5zz ; real_T ljatzgyper ; real_T pigzm5qj1u ; real_T canhkothbr [ 3 ]
; real_T btbmowyvpj [ 3 ] ; real_T h1melgebni ; real_T lslovmufsj ; real_T
a3ighfvleh [ 3 ] ; real_T f4v0hwmwl1 [ 3 ] ; real_T eua3hgkuqw ; real_T
gbpehgsgh2 ; real_T fse0xextas ; real_T dbndv1qsaf ; real_T hkemz4k3jv ;
real_T mjy2c1ieko ; real_T ekgziriw0z ; real_T luhuz1y0pa ; real_T jwrsvb1440
; real_T c50wznxnuu ; real_T kiyhu3ma0g ; real_T bjydpcizvi ; real_T
l1ngpg1edp ; real_T enyjgablpy ; real_T i1atw1qe0l ; real_T k00ajdwzvi ;
real_T pwqzgmz2tj ; real_T c2npgjvga0 ; real_T kez0ugcrs0 ; real_T lskzsfnyns
; real_T fg3nxicf2i ; real_T ooh1cadzi5 ; real_T f44ipg1ur0 ; real_T
kkv2b3yior ; real_T bxqqxtzuxt ; real_T pbeueed2ng ; real_T kdx1qa01wj ;
real_T iht2w3ghnc ; real_T mpeaonrxvr ; real_T dmedi11jmf ; real_T fiboaixvje
; real_T mia3lzsnht ; real_T acueu1fhlu ; real_T lnqzfviuoy ; real_T
c0gwhqfxol ; real_T ikcevoxr4b ; real_T flrignulms ; real_T mml3u50iev [ 3 ]
; real_T gnoip5fbwb ; real_T nv0ask5hgo ; real_T lpoqde35x5 ; real_T
pqp513dsef ; real_T nx0f4e5b5g ; real_T jv1m44ghwg ; real_T pdtl1hmtz4 [ 3 ]
; real_T kodulhrduv [ 3 ] ; real_T a4nzpbifls [ 3 ] ; real_T nid0rlczhv [ 3 ]
; boolean_T ohiivs4pv5 ; boolean_T dzsozrxxtr ; boolean_T bmnjmdzbfg ;
boolean_T ii1deoyvuv ; } B ; typedef struct { real_T mz3ujdnhdi [ 3 ] ;
real_T brtwu1qgh5 [ 3 ] ; struct { void * AQHandles ; } ptfgkkfyx2 ; struct {
void * AQHandles ; } jcuxltf0li ; struct { void * AQHandles ; } kou2zo1etl ;
int_T aiet4ledb1 ; int8_T iiz2sepanf ; int8_T m1msoix5n5 ; int8_T g2lng1ny0m
; int8_T ftxygppz3q ; int8_T lugp1oo5al ; int8_T oywob1ksb4 ; int8_T
omqzxc4eeh ; int8_T hm23vis0tn ; int8_T cumdqvtfo3 ; int8_T owjad4jwxk ;
int8_T hfy1j41vzc ; int8_T ajuavqjsaw ; int8_T hscrj0jxia ; int8_T hoopfaisgo
; int8_T av02raukfc ; int8_T bbzbpxlysv ; int8_T hifcsg5mrr ; int8_T
aptstkvao3 ; int8_T mv2xcc3rk3 ; int8_T nobxmq1veb ; int8_T heyw0zfkr1 ;
int8_T oyajkldlnf ; boolean_T hfidg3r4zu ; boolean_T oimusvef0p ; boolean_T
l1cbemf4kw ; boolean_T gagixdjljm ; boolean_T oc1pyb3rxo ; boolean_T
kd3jx5f4sh ; boolean_T g4my2sec0s ; bguustwtdt jq4zzibyuf ; bguustwtdt
iim0uzjq2f ; bguustwtdt azhxucr5v2 ; bguustwtdt lhwjkdp01r ; bguustwtdt
p2jn3lrd2r ; bguustwtdt khi00wnpar ; bguustwtdt pazq3m0j3m ; bguustwtdt
k4vsitdlsd ; bguustwtdt l3x3mdhan1r ; jvsztzhphf bngxmawtie ; jvsztzhphf
bgq2api2xe ; jvsztzhphf lfxaatuckyk ; } DW ; typedef struct { real_T
jdxlhbtvil [ 14 ] ; } X ; typedef struct { real_T jdxlhbtvil [ 14 ] ; } XDot
; typedef struct { boolean_T jdxlhbtvil [ 14 ] ; } XDis ; typedef struct {
real_T jdxlhbtvil [ 14 ] ; } CStateAbsTol ; typedef struct { real_T
jdxlhbtvil [ 14 ] ; } CXPtMin ; typedef struct { real_T jdxlhbtvil [ 14 ] ; }
CXPtMax ; typedef struct { real_T gxsumyivnf ; real_T jex5fhkbzg ; real_T
acba335ss4 ; real_T n25gaquknn ; real_T mvrt1hd3dn ; real_T gjfpdtbcix ; }
ZCV ; typedef struct { real_T bruvjfgo5t [ 3 ] ; real_T kgnzuhgazc [ 4 ] ;
real_T jjprc2gsjk [ 3 ] ; } ExtY ; typedef struct { rtwCAPI_ModelMappingInfo
mmi ; } DataMapInfo ; struct gniy2mtxqh_ { real_T Constant_Value ; } ; struct
owihucf3di_ { real_T Constant_Value ; } ; struct P_ { real_T area ; real_T
mDot ; real_T ref ; real_T thrustingThreshold ; real_T
CompareToConstant_const ; real_T CompareToConstant_const_nyz535bbbu ; real_T
NormalizeVector_maxzero ; real_T NormalizeVector_maxzero_pntl1pmm30 ; real_T
NormalizeVector_maxzero_hb0qhx1yar ; real_T
AttitudeProfileCustomTracking_primaryAlignment [ 3 ] ; real_T
AttitudeProfileCustomTracking_secondaryAlignment [ 3 ] ; real_T
AttitudeProfileCustomTracking_secondaryConstraint [ 3 ] ; real_T M_bNm_Y0 ;
real_T Constant_Value ; real_T Constant_Value_pns05g3b55 ; real_T Gain_Gain ;
real_T Gain1_Gain ; real_T Gain2_Gain ; real_T Gain_Gain_fkrnrvat52 ; real_T
Gain1_Gain_nkhck1ygxr ; real_T Gain2_Gain_iquz4fnlzi ; real_T
Gain_Gain_mpa02bou1h ; real_T Gain1_Gain_oerlhbnxof ; real_T
Gain2_Gain_lhluacmlha ; real_T Gain2_Gain_int0dpavpw ; real_T
Gain_Gain_g15jpqvdyg ; real_T Gain1_Gain_faqugitdim ; real_T
Gain_Gain_kfeeor2lhw ; real_T Gain2_Gain_p3jp4v4bbc ; real_T
Gain1_Gain_gbvqsckych ; real_T Gain_Gain_aa0wcaoaaz ; real_T
Gain1_Gain_epvwxefqmi ; real_T Gain2_Gain_hhmnogiwlf ; real_T Bias_Bias ;
real_T Bias1_Bias ; real_T Bias_Bias_abfrdlc52d ; real_T
Bias1_Bias_hcyhgh541x ; real_T Gain2_Gain_fw4b3tt5vg ; real_T
Gain_Gain_gfy041jfbg ; real_T Gain1_Gain_d1qclj2egp ; real_T
Gain_Gain_ky20gmonrh ; real_T Gain2_Gain_khli3wzwff ; real_T
Gain1_Gain_k1fon0cayn ; real_T Gain_Gain_lsbmbjfguo ; real_T
Gain1_Gain_dc5430g0dt ; real_T Gain2_Gain_k1wqp4egyq ; real_T
Bias_Bias_djq3n4uzff ; real_T Bias1_Bias_dlcxjxahid ; real_T
Gain_Gain_kx3qnhmcxx ; real_T Gain_Gain_nm01mepo3f ; real_T
Constant_Value_c5ijra1dvs ; real_T Constant_Value_nknymy1wan ; real_T
Constant_Value_bh2wousvvw ; real_T Bias_Bias_g0qrwws1na ; real_T
Bias1_Bias_atthryq0zv ; real_T Constant_Value_hrp2o0rwmd ; real_T
Constant_Value_ibbq1bfjl1 ; real_T Constant_Value_ozvaaxtkzl ; real_T
Gain_Gain_bkh01xyo4j ; real_T Constant_Value_plvwaiy2qy ; real_T
Constant1_Value ; real_T Gain2_Gain_b0l1sq1lnj ; real_T Gain_Gain_dfsvhso0x2
; real_T Constant_Value_lh1chvuth3 ; real_T Constant1_Value_eyzq52s3pd ;
real_T Gain2_Gain_jkoscwfz0l ; real_T Constant_Value_c0wdwq4tzn ; real_T
Constant_Value_iapa0kts2j ; real_T Constant_Value_hsfi4e2uaa ; real_T
Constant3_Value ; real_T SpacecraftDynamics_startDate ; real_T
SpacecraftDynamics_mass ; real_T SpacecraftDynamics_emptyMass ; real_T
SpacecraftDynamics_fullMass ; real_T SpacecraftDynamics_inertia [ 9 ] ;
real_T SpacecraftDynamics_emptyInertia [ 9 ] ; real_T
SpacecraftDynamics_fullInertia [ 9 ] ; real_T
SpacecraftDynamics_semiMajorAxis ; real_T SpacecraftDynamics_eccentricity ;
real_T SpacecraftDynamics_inclination ; real_T SpacecraftDynamics_raan ;
real_T SpacecraftDynamics_argPeriapsis ; real_T
SpacecraftDynamics_trueAnomaly ; real_T SpacecraftDynamics_trueLon ; real_T
SpacecraftDynamics_argLat ; real_T SpacecraftDynamics_lonPeriapsis ; real_T
SpacecraftDynamics_inertialPosition [ 3 ] ; real_T
SpacecraftDynamics_inertialVelocity [ 3 ] ; real_T
SpacecraftDynamics_fixedPosition [ 3 ] ; real_T
SpacecraftDynamics_fixedVelocity [ 3 ] ; real_T SpacecraftDynamics_attitude [
4 ] ; real_T SpacecraftDynamics_attitudeRate [ 3 ] ; real_T
SpacecraftDynamics_customR ; real_T SpacecraftDynamics_customF ; real_T
SpacecraftDynamics_customMu ; real_T SpacecraftDynamics_customJ2 ; real_T
SpacecraftDynamics_customOmega ; real_T SpacecraftDynamics_cbRA ; real_T
SpacecraftDynamics_cbRARate ; real_T SpacecraftDynamics_cbDec ; real_T
SpacecraftDynamics_cbDecRate ; real_T SpacecraftDynamics_cbRotAngle ; real_T
SpacecraftDynamics_cbRotRate ; real_T SpacecraftDynamics_F107ExtrapValue ;
real_T SpacecraftDynamics_MagneticIndexExtrapValue ; real_T
SpacecraftDynamics_fluxFlags [ 23 ] ; real_T SpacecraftDynamics_dragCoeff ;
real_T SpacecraftDynamics_dragArea ; real_T
SpacecraftDynamics_customThirdBodyMu ; real_T SpacecraftDynamics_fluxPressure
; real_T Constant_Value_lw5gurrfpk ; real_T Constant_Value_ln0uq0icxn ;
real_T Constant_Value_l03ciegqnh ; real_T Constant_Value_mmyzvxcwyh [ 3 ] ;
owihucf3di jq4zzibyuf ; owihucf3di iim0uzjq2f ; owihucf3di azhxucr5v2 ;
owihucf3di lhwjkdp01r ; owihucf3di p2jn3lrd2r ; owihucf3di khi00wnpar ;
owihucf3di pazq3m0j3m ; owihucf3di k4vsitdlsd ; owihucf3di l3x3mdhan1r ;
gniy2mtxqh bngxmawtie ; gniy2mtxqh bgq2api2xe ; gniy2mtxqh lfxaatuckyk ; } ;
extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern ExtY rtY ; extern P rtP ; extern mxArray *
mr_propagatorComplete_GetDWork ( ) ; extern void
mr_propagatorComplete_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_propagatorComplete_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * propagatorComplete_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
