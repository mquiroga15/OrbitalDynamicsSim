#ifndef RTW_HEADER_propagator_mess_h_
#define RTW_HEADER_propagator_mess_h_
#ifndef propagator_mess_COMMON_INCLUDES_
#define propagator_mess_COMMON_INCLUDES_
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
#include "propagator_mess_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME propagator_mess
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (10)     
#define NBLOCKIO (301) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (13)   
#elif NCSTATES != 13
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
typedef struct { int8_T mcrdgxbsci ; } l1z5o3di35 ; typedef struct { int8_T
ga1nldhiel ; } k0fn4ezgxn ; typedef struct { real_T arwfsx1c32 [ 3 ] ; real_T
hlmjufbfzm [ 3 ] ; real_T nt5sg2upub [ 4 ] ; real_T kzhucwwulf [ 3 ] ; real_T
k2zs0lhjgw ; real_T bx3cvl5uiz [ 3 ] ; real_T bgbtt23c0k [ 3 ] ; real_T
izx5zcfvng ; real_T ddfwx2qqfx ; real_T k2avwoc5wb ; real_T k5tn3yiqj3 ;
real_T ofpmzqumwk [ 4 ] ; real_T d0ib2dx4fe [ 3 ] ; real_T ae3swytvn2 ;
real_T audwxioxgw [ 3 ] ; real_T h3lvgmqzml ; real_T hmb3awxckt ; real_T
jdqzqfspf2 ; real_T ngn3moazdi ; real_T jvuc0le4q3 ; real_T doai2pg1cl ;
real_T ltf3fgreck ; real_T erva203ps4 ; real_T fpbnczepo1 ; real_T k3s03wnqyx
; real_T ok3kiaidlm ; real_T h4mfwwgnvq ; real_T bdqojbbgd5 ; real_T
anwtn11pnf ; real_T i4u5fx5szz ; real_T eb2e1mdic4 ; real_T k1bjosm2vf ;
real_T euwo1qdqmo ; real_T dcaagf4d5p ; real_T j4awxs2u4k ; real_T e2gtkbsz4u
; real_T ag2kakw2ry ; real_T eoa0k1dz04 ; real_T bu03rsjny0 ; real_T
j51hkj22hh ; real_T lzvpeuheiw ; real_T fnchlgrhy1 ; real_T hqx3a1htma ;
real_T ffgcxxhqpv ; real_T iv1zebcrw0 ; real_T bvdtunmm2l ; real_T p1b4ouryys
; real_T kys5r5rnhm ; real_T hijd3slb5g ; real_T izutnvqezp ; real_T
nrgobxxknb ; real_T ffany32ds0 ; real_T cpugdcfsva ; real_T ibzftcigfp ;
real_T lmhsnxyy4q ; real_T nsbbt0ui4m ; real_T nvfug0zbsd ; real_T bbmvbfy3xw
; real_T blbi1d4frb ; real_T hxgi0xdlub ; real_T kag1u0rpls ; real_T
bub3yuwkxt ; real_T p2yp23ndmz ; real_T b5a1ov1jzy ; real_T ovvxwk1jiq ;
real_T g0rq0ffe0b ; real_T p5l2rwol21 ; real_T h4rmfdgf0s ; real_T bhbqr2nhuh
; real_T hjrd3gzp4f ; real_T h41evd2kyt ; real_T f3mrc3vc3b ; real_T
gp240aqkxe ; real_T bro0vmqilm ; real_T b2hp5ba3p2 ; real_T bfwlh2c3lp ;
real_T mnsykknszb ; real_T fxaaaizfeq ; real_T j54fki4555 ; real_T ibk1aebidb
; real_T e5yqtsqdlf ; real_T omx2xnlsa1 ; real_T i3eaqfvfes ; real_T
izcjgemuly ; real_T cong315ffk ; real_T ltxwu1wbdg ; real_T agup1a4qnr ;
real_T duapfbhlag ; real_T i1dhvddm4u ; real_T ise3xsizba ; real_T e3lbf34l1y
[ 3 ] ; real_T prp1ucytv2 ; real_T c1zrhc0om4 ; real_T mdyfrrogj0 ; real_T
gq4fcmaya1 [ 3 ] ; real_T mjaw2a3ohe ; real_T lik24trukk ; real_T ifebfwzvxn
; real_T g2k5b3dnmw ; real_T abxvqxzhfn ; real_T ddfgltz1rj ; real_T
ksubd4yx0s ; real_T i0zpzjz1tn ; real_T pvqqvby1ba ; real_T dszvcwvdxm ;
real_T piejtcrnzv ; real_T oijvyuq1by ; real_T bf1yimqzt3 ; real_T mrh3hgkyix
; real_T ogn4x3aekj ; real_T mmtnicim0g ; real_T lvr0odfzan ; real_T
gzomq0mpad ; real_T lzf3tsjegz ; real_T cld1gnmiha ; real_T gf14qi0ft4 ;
real_T lmaab1wk0y ; real_T e2hmr0pg2j ; real_T ndq1n2kfaz ; real_T dyopyqfiiz
; real_T ewjyyaemel ; real_T b3w4mxih4m ; real_T pguabx1cto ; real_T
fnirgo0g2g ; real_T fwc4xsxw0y ; real_T fnotdny0aw ; real_T mdq0frigxm ;
real_T nerb5vqqa1 ; real_T htnnm4f3rh ; real_T fvq5v0wagk ; real_T c2ijsxda10
; real_T krro3sx5eh ; real_T auarppakcs ; real_T pxykpx3utl ; real_T
eovkmmninw ; real_T evytg2f1rb ; real_T lxx4v22huu ; real_T e11xhbvgcn ;
real_T k4awz1ldew ; real_T cjld52211r ; real_T mwj3z5max0 ; real_T j4ac0y4t4l
; real_T glrz0fqwdf ; real_T a1s4at4lm4 ; real_T pexcqd2hxn ; real_T
lrvcier1zo ; real_T ljzogtduwf ; real_T agqcqrtnf5 ; real_T nwlgc3xdop ;
real_T nbjuy34gmx ; real_T n3u455z5vd ; real_T b4estcjfih ; real_T cuuj3fvjnn
; real_T hrb3hht5h5 ; real_T f45rm2aeyq ; real_T ihjztibink ; real_T
kgd04xzdcr ; real_T eh0zzd3ivm ; real_T cpwidezqla ; real_T mc4f0d3lut ;
real_T edjdhkdp1x ; real_T iakvbkhnvj ; real_T ntssr1yofu ; real_T l4o1umfkt1
; real_T bmlivgiev2 ; real_T dqpet4lo3w ; real_T mrqou5vw32 [ 3 ] ; real_T
cbocl1hpbq ; real_T olf5prulwz ; real_T hr4m43b2n4 ; real_T mpoydqprac ;
real_T oxzxh3v5fy ; real_T e4g1z1dwbh ; real_T dlsbihrftu [ 3 ] ; real_T
de0udbsnbd ; real_T ifdfwkuzvv ; real_T hzt4twlnb2 ; real_T i4xi3ehe1s ;
real_T ndv5zqmwap ; real_T lvxpzjcgrg ; real_T n5clxvomtk ; real_T esuxzqzc3e
; real_T cmh3zwuall ; real_T lbpc2rtdzm ; real_T odsldvzxxp ; real_T
lhz1tawstz ; real_T i1s3nz0b2c ; real_T lcxoofz3se ; real_T b4ce03c3q3 ;
real_T ifprj4pxcq ; real_T cllshkgqxc ; real_T potvsxkx01 ; real_T bvo45ceokr
; real_T ovz0nwm1on ; real_T eytlynbjva ; real_T bgxtukegxj ; real_T
gf3ts2bej4 ; real_T pb1v3invgy ; real_T jchb5pmsuf ; real_T omgykybnkk ;
real_T fmiaebyuq2 ; real_T ayuxs0ixd0 ; real_T ewy3jij3q3 ; real_T pfsgvsrsph
; real_T cdaty0q5m2 ; real_T njld3k1qrm ; real_T ik4sy1j3h3 ; real_T
crqbet2uyu ; real_T fsshl4j1bv ; real_T cpzrof34di ; real_T khmphxxnqx ;
real_T bxpyh5b5sb ; real_T p1b1vua5ww ; real_T jlfd2y5x1w ; real_T ds4c2tg21v
; real_T dmb351qbiu ; real_T kik3dr2bde ; real_T fav00lw5cz ; real_T
gr3vzqq0k2 ; real_T odfficsjsx ; real_T jsjiibmmb5 ; real_T fgb5bbkkin ;
real_T bkduzupwea ; real_T csam3nbmnv ; real_T g0w3taummx ; real_T iwq3si5wmy
; real_T iynuazrp2u ; real_T l45mf0o4u2 ; real_T ha34k0ralw ; real_T
dcb0udynvi ; real_T n4mym2lzqe ; real_T b1mbqfjcgx [ 3 ] ; real_T gfcwzsw34m
[ 4 ] ; real_T laac5xjlbm ; real_T hy4u1hiacf ; real_T fqqpqgtlkx ; real_T
dauygg5stf [ 3 ] ; real_T ieom4l2aca [ 3 ] ; real_T a4tcgdymxo [ 3 ] ; real_T
k355e5zk3q [ 3 ] ; real_T cqbxpcl0oz ; real_T gdhbqmyg0b ; real_T ozxav1l23g
; real_T ca23knnadp ; real_T jzn0z4pyml [ 3 ] ; real_T n11ptzoliw [ 3 ] ;
real_T ikhr2twr1o ; real_T jfqgnnmqi2 ; real_T hcdyqjud1p [ 3 ] ; real_T
hmzl0kxb5i [ 3 ] ; real_T kz1x3kfm3o ; real_T dkmxufila5 ; real_T bg5rx3ttpk
; real_T h3gkldsu5p ; real_T oiqlexlgvc ; real_T cctvh4lyu1 ; real_T
eayvbdphup ; real_T hrqm2zvjsf ; real_T jpvkqtqg1d ; real_T jpo5sph0q1 ;
real_T putja2b5qr ; real_T aovhnrymq5 ; real_T hm01nu4z13 ; real_T dfam4nj1zr
; real_T cd1tlnr0ka ; real_T onpisizxqk ; real_T ez3px2f12w ; real_T
axy1wb5dew ; real_T jmje0s3ed4 ; real_T o0tpy5m2a3 ; real_T huigacutkc ;
real_T jp1zla2mmw ; real_T fbh3yondzh ; real_T nshogscuz4 ; real_T irrpou22a5
; real_T ayzdydcyuo ; real_T nn3dmihxcr ; real_T ib1lbtcpxj ; real_T
kbgh1p1ypy ; real_T dq0jdlm22o ; real_T e5dii5jmkf ; real_T iw4qe0xhxt ;
real_T ie0zpjfucm ; real_T doyhm1jj3o ; real_T evw1t5tqi5 ; real_T g04kcj5oqt
; real_T ojqiuyxzjb ; real_T ksgblwhab0 [ 3 ] ; real_T hxr4w1btbv ; real_T
dbypezaw4s ; real_T mm21k3kcs1 ; real_T bglurjstz2 ; real_T adxtwyvkd4 ;
real_T hhlzwpbyhq ; real_T anlmlhp1oi [ 3 ] ; real_T nhrxnqfbca [ 3 ] ;
real_T p1raas45by [ 3 ] ; real_T afjrrpylsm [ 3 ] ; boolean_T mw05jharoi ;
boolean_T otkalc5z2p ; boolean_T k2kdormzza ; } B ; typedef struct { real_T
nfz0kwiflf [ 3 ] ; real_T eszuv5iy0f [ 3 ] ; struct { void * AQHandles ; }
djzpq524lt ; struct { void * AQHandles ; } kirvxvy4xf ; struct { void *
AQHandles ; } hhy2tk0i3m ; struct { void * AQHandles ; } jlnqrp0yvl ; struct
{ void * AQHandles ; } hdk00n5n11 ; struct { void * AQHandles ; } ahjz0uplov
; int_T cvh0sgytki ; int8_T akcpruesae ; int8_T kuolg0hn2t ; int8_T
pe2hrrp0ih ; int8_T f5giqq1c3y ; int8_T flzilct0fk ; int8_T ggok2cmx54 ;
int8_T itrg025sja ; int8_T h1wveotks2 ; int8_T dmzweexgpn ; int8_T nr3va1ukar
; int8_T dzfiqmdr2q ; int8_T hlym3zi5ic ; int8_T kyztxzj3e4 ; int8_T
hzb22tg3eg ; int8_T bqzq022trb ; int8_T ouzoemkqym ; int8_T kgaocerixc ;
int8_T h5z1xlbccs ; int8_T foetxjdycj ; int8_T mcpnpjmt5i ; boolean_T
brz0l2zu41 ; boolean_T d0b3sedt1h ; boolean_T ke1ctdguiy ; boolean_T
nlnr1wiohw ; boolean_T pc4zeehxvy ; k0fn4ezgxn lf2tg5j2nw ; k0fn4ezgxn
gnme1gu3zy ; k0fn4ezgxn kpu1x5dwrk ; k0fn4ezgxn jxiate0wnc ; k0fn4ezgxn
lramtmlkmq ; k0fn4ezgxn pofcv4yf1q ; k0fn4ezgxn mjycmbyayp ; k0fn4ezgxn
hjybai3dqf ; k0fn4ezgxn flcsttob5qv ; l1z5o3di35 ikzxkzczgl ; l1z5o3di35
ki5dfllwmd ; l1z5o3di35 kn1zy4gjusi ; } DW ; typedef struct { real_T
bukfqt2tl4 [ 13 ] ; } X ; typedef struct { real_T bukfqt2tl4 [ 13 ] ; } XDot
; typedef struct { boolean_T bukfqt2tl4 [ 13 ] ; } XDis ; typedef struct {
real_T bukfqt2tl4 [ 13 ] ; } CStateAbsTol ; typedef struct { real_T
bukfqt2tl4 [ 13 ] ; } CXPtMin ; typedef struct { real_T bukfqt2tl4 [ 13 ] ; }
CXPtMax ; typedef struct { real_T ccs50ys4tc ; real_T kmop2xfqw3 ; real_T
ewkfyffddn ; real_T f5vxsm52uh ; real_T ffrp3bljny ; } ZCV ; typedef struct {
real_T oa14kct43f [ 3 ] ; real_T ls24iwwnva [ 4 ] ; real_T grvimhmmhj [ 3 ] ;
} ExtY ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct gs2ijlv4j1_ { real_T Constant_Value ; } ; struct lrmiux2z5f_ { real_T
Constant_Value ; } ; struct P_ { real_T thrust ; real_T thrustingThreshold ;
real_T CompareToConstant_const ; real_T CompareToConstant_const_ofxbpdrlsc ;
real_T NormalizeVector_maxzero ; real_T NormalizeVector_maxzero_gwprhsa2wo ;
real_T NormalizeVector_maxzero_cctrbp3zbr ; real_T
AttitudeProfileCustomTracking_primaryAlignment [ 3 ] ; real_T
AttitudeProfileCustomTracking_secondaryAlignment [ 3 ] ; real_T
AttitudeProfileCustomTracking_secondaryConstraint [ 3 ] ; real_T
Constant_Value ; real_T Constant_Value_b03wzngqsc ; real_T
SpacecraftDynamics_startDate ; real_T SpacecraftDynamics_mass ; real_T
SpacecraftDynamics_emptyMass ; real_T SpacecraftDynamics_fullMass ; real_T
SpacecraftDynamics_inertia [ 9 ] ; real_T SpacecraftDynamics_emptyInertia [ 9
] ; real_T SpacecraftDynamics_fullInertia [ 9 ] ; real_T
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
SpacecraftDynamics_customThirdBodyMu ; real_T
SpacecraftDynamics_reflectivityCoeff ; real_T SpacecraftDynamics_srpArea ;
real_T SpacecraftDynamics_fluxPressure ; real_T Gain2_Gain ; real_T Gain_Gain
; real_T Gain1_Gain ; real_T Gain_Gain_kk5emnlceo ; real_T
Gain2_Gain_k5gz3unjku ; real_T Gain1_Gain_n2k12gydmq ; real_T
Gain_Gain_lbxzbv5il0 ; real_T Gain1_Gain_cee4wpktnf ; real_T
Gain2_Gain_gjtdi0t0m2 ; real_T Bias_Bias ; real_T Bias1_Bias ; real_T
Gain2_Gain_km53dmybtt ; real_T Gain_Gain_a1vp4nbb4i ; real_T
Gain1_Gain_b2rn0jf110 ; real_T Gain_Gain_l0ltiwj3qi ; real_T
Gain2_Gain_azh5n0op2m ; real_T Gain1_Gain_kdcd1diblx ; real_T
Gain_Gain_hpwfinpjfy ; real_T Gain1_Gain_jwifomnqko ; real_T
Gain2_Gain_o2zg3ufaqd ; real_T Bias_Bias_cgigyouppa ; real_T
Bias1_Bias_fv1d5l524l ; real_T Gain2_Gain_jn5n2dhxal ; real_T
Gain_Gain_p1bkb0yypm ; real_T Gain1_Gain_mb5fijwxns ; real_T
Gain_Gain_nu2zko0vyc ; real_T Gain2_Gain_knjw2krbz3 ; real_T
Gain1_Gain_crilbizplu ; real_T Gain_Gain_pbatg3voqv ; real_T
Gain1_Gain_hc32uvnbm3 ; real_T Gain2_Gain_of5bdnev5d ; real_T
Bias_Bias_krj4bpg32q ; real_T Bias1_Bias_cjetlm1a0j ; real_T
Gain_Gain_a1wggbqhys ; real_T intertia_Gain ; real_T
Constant_Value_ald5ltqbaj ; real_T Constant_Value_lnhw1m3oj3 ; real_T
Constant_Value_jnwortb2ne ; real_T burndirectionb_Value [ 3 ] ; real_T
Constant_Value_kredm1stre ; real_T Constant_Value_ot3w3tohe1 ; real_T
Constant_Value_gxjiuddkly ; real_T Bias_Bias_jyt0xfb15f ; real_T
Bias1_Bias_gwta2lnnkg ; real_T Constant_Value_chw2nw4nzm ; real_T
Constant_Value_agzbluonup ; real_T Constant_Value_grzuu3xaow ; real_T
Gain_Gain_jlqyqg5r1f ; real_T Constant_Value_hbwgtqn4rs ; real_T
Constant1_Value ; real_T Gain2_Gain_i3obaqt5n2 ; real_T Gain_Gain_ngjiudsjxj
; real_T Constant_Value_ci2gownbf5 ; real_T Constant1_Value_nyng0gouim ;
real_T Gain2_Gain_ivtf4mjc5h ; real_T Constant_Value_kmsn52x30e ; real_T
Constant_Value_kr3d0vrbhe ; real_T Constant_Value_dtzh1c5sju ; real_T
Constant3_Value ; lrmiux2z5f lf2tg5j2nw ; lrmiux2z5f gnme1gu3zy ; lrmiux2z5f
kpu1x5dwrk ; lrmiux2z5f jxiate0wnc ; lrmiux2z5f lramtmlkmq ; lrmiux2z5f
pofcv4yf1q ; lrmiux2z5f mjycmbyayp ; lrmiux2z5f hjybai3dqf ; lrmiux2z5f
flcsttob5qv ; gs2ijlv4j1 ikzxkzczgl ; gs2ijlv4j1 ki5dfllwmd ; gs2ijlv4j1
kn1zy4gjusi ; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B
rtB ; extern X rtX ; extern DW rtDW ; extern ExtY rtY ; extern P rtP ; extern
mxArray * mr_propagator_mess_GetDWork ( ) ; extern void
mr_propagator_mess_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_propagator_mess_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * propagator_mess_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
