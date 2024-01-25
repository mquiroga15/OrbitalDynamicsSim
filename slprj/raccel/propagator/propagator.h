#ifndef RTW_HEADER_propagator_h_
#define RTW_HEADER_propagator_h_
#ifndef propagator_COMMON_INCLUDES_
#define propagator_COMMON_INCLUDES_
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
#include "propagator_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME propagator
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
typedef struct { int8_T o524g4iyl1 ; } noba1wfpe5 ; typedef struct { int8_T
n5wfkrmirk ; } bjr1mguxsx ; typedef struct { real_T iwpc3uqyn0 [ 3 ] ; real_T
hjia2bsg3b [ 3 ] ; real_T epzak51t3d [ 4 ] ; real_T ao0v42ly1v [ 3 ] ; real_T
jwkakphqwb ; real_T o0gh2zo4kc [ 3 ] ; real_T peppqzqpkm [ 3 ] ; real_T
p5z3a5154s ; real_T g5tzrflnfu ; real_T ahuuqt1d0n ; real_T i11cgsq4w5 ;
real_T bfcmi54vw3 [ 4 ] ; real_T kggncznpui [ 3 ] ; real_T gqbm3rwegd ;
real_T lbab3av5zk [ 3 ] ; real_T o3o3rbkx4k ; real_T a5c1dovsit ; real_T
jo14mcnknu ; real_T kkytydcbz4 ; real_T jd3xtqhk4f ; real_T ccsetfod50 ;
real_T lgvhkx3bdw ; real_T okfwxewtb3 ; real_T nbkishyt4e ; real_T akbdqgu25i
; real_T cdhitfgsbj ; real_T prrlnytvmi ; real_T jyki240jyc ; real_T
beh1j2gh2f ; real_T i3c14fdrua ; real_T inaoc2xerg ; real_T jqfmjmc45t ;
real_T djdcpvtzao ; real_T n301ly5dwz ; real_T g0qpe5txf0 ; real_T kkz03dd1px
; real_T okocscvb4s ; real_T mcrjj25erm ; real_T ekf30mawji ; real_T
bsthbobl1j ; real_T bzaiz40jle ; real_T gjiznw31uq ; real_T lwf5ib5ucd ;
real_T ec51zeoq2r ; real_T e2p5tdbdvj ; real_T play0ik4za ; real_T cfqzfvlggq
; real_T el2salzuid ; real_T mqoflqyp2n ; real_T cdjafi5pxq ; real_T
e2vww44ess ; real_T duuv1hhabg ; real_T ibqgzv3vv1 ; real_T hm3n3iawtx ;
real_T b4kecemf31 ; real_T jbxny3loxr ; real_T dsbrz4jvtl ; real_T fwmywangrk
; real_T p0udbnohia ; real_T lxdmgzbfpw ; real_T bxzim2lzyq ; real_T
dlyiidahgc ; real_T hp4oakafc3 ; real_T dbgdgudkoq ; real_T pmuqrnz2xk ;
real_T orif3zdn3b ; real_T nf2iruncwf ; real_T brr0y4qzkl ; real_T jhlmt1tq4b
; real_T juk0crd5c3 ; real_T nictrou4qf ; real_T eztnlcuzax ; real_T
hftwdjn1g0 ; real_T jeaywfv1ac ; real_T dzxsurh3g1 ; real_T hau2fho0aa ;
real_T bxwkw4ky1z ; real_T fhqz1az5kr ; real_T lunan2p3nc ; real_T ogxdji4kue
; real_T fd2bqanlcc ; real_T hfrovp2ze5 ; real_T ldzvobrfmv ; real_T
b3fqguhuub ; real_T dkztucilt3 ; real_T etfxahe1zk ; real_T jpnfdsiamz ;
real_T g3jvhh4hav ; real_T ewrhh12ndt ; real_T i0vt325y4c ; real_T a1bumuod0o
[ 3 ] ; real_T iazanmkuzn ; real_T ctolcrefpd ; real_T lbzbc34ql3 ; real_T
cgo5cxdgn3 [ 3 ] ; real_T a0m12nsxvx ; real_T m2jg4t41fl ; real_T cq0rvjyxa1
; real_T ijibii3sox ; real_T nv52jhn4ce ; real_T aazirs2m22 ; real_T
ioajmttt5z ; real_T g1bth0twee ; real_T l4xxom2huh ; real_T pf1hq0hnah ;
real_T atctczg3nb ; real_T dnvcnxosu5 ; real_T cb05c13aht ; real_T g2o0vbut2d
; real_T am0geshi12 ; real_T oqqgq0slrk ; real_T dmzbje4rgv ; real_T
ajq0kdyy5x ; real_T i5qdsfyc5s ; real_T bbue1bng3x ; real_T j54mdey2bz ;
real_T bdrl4roerl ; real_T gr3quax1i2 ; real_T negg4jievw ; real_T apckcxm53o
; real_T gkee4xwotb ; real_T gnzedmhea4 ; real_T gzxg0prvcv ; real_T
jaipb35fas ; real_T fyvruv40ea ; real_T jng4y2afji ; real_T hnyv2qhx4k ;
real_T if1tzffzza ; real_T jdh1qq5h5b ; real_T jxxkpo4mbk ; real_T nmwgcd5mf3
; real_T arqkoves50 ; real_T gdehcgnctj ; real_T cmufj5dgtg ; real_T
nseodi0thm ; real_T jok2yvqmcl ; real_T mvhciow3a3 ; real_T nk2mrciwrl ;
real_T f1lalcv3v1 ; real_T mudm3d5kna ; real_T ipsiqdtx2y ; real_T gf5d0hy1rt
; real_T k5x4ozqjgd ; real_T aibmcxnmfz ; real_T jkkk4w1eup ; real_T
lt0cnafmeb ; real_T ayzaokp5gy ; real_T i0ogrorvul ; real_T g3dfxa20a5 ;
real_T lwbc41xvmv ; real_T dyjj5gzmrh ; real_T d0mrovptzx ; real_T pzla3hbosm
; real_T ouzipvhg02 ; real_T nu5egl3jpr ; real_T dibqv2ltpx ; real_T
j3fks20oqe ; real_T duc5lxno2z ; real_T ifbvopiko5 ; real_T dxn1c5f430 ;
real_T emshuqba4b ; real_T jla5taicox ; real_T eadkyzb5gk ; real_T emkig5izkj
; real_T iama2kmvpi ; real_T jkhakmgwkg ; real_T g2t1lpvxxu [ 3 ] ; real_T
in10r1k0id ; real_T ejahzmn3ac ; real_T kklagd15pq ; real_T jpaxve5vi5 ;
real_T m1hoiwiezv ; real_T gmlne4nmch ; real_T kedogj1ilh [ 3 ] ; real_T
lfbwrgjnsz ; real_T jjo5i5iadu ; real_T gh4qsvdi5t ; real_T gp4z5522c1 ;
real_T cn5tuvkjyi ; real_T gbdgmymvm3 ; real_T ghva0cs5pv ; real_T k122ls5ddc
; real_T cfrkayrgcb ; real_T neiibevgpq ; real_T li1xzbkq2o ; real_T
nfpa2stdtq ; real_T cp2lg0a2j0 ; real_T emzex420qv ; real_T nvkdbiidel ;
real_T jiqipy0art ; real_T mqj0qgcyek ; real_T ibm0ltg4u5 ; real_T hgbe0klwj5
; real_T md3bqyquec ; real_T pdy43kvudr ; real_T fpam5yitdk ; real_T
h31nqrlldb ; real_T i5c4uod1ru ; real_T pxkrit3cpe ; real_T bf5eeumnha ;
real_T nzfdxiefml ; real_T g0ss0qvqh4 ; real_T kqba3x01mi ; real_T papx1e0ibu
; real_T fjdjjqgoqm ; real_T g0sgz4y4n0 ; real_T mxj2tyfgtv ; real_T
pzwtmvcp4m ; real_T ehguvaafyf ; real_T bbmnhwq0rr ; real_T lx2krvsypk ;
real_T pi0zloz3av ; real_T mrvxhq5jel ; real_T b32ff13ato ; real_T lzyot4xhsg
; real_T fgfpsle4vd ; real_T f10xwh2dw1 ; real_T ks1zi3ssmr ; real_T
g44grslwz0 ; real_T hc0urkev2t ; real_T e0du5fe5ij ; real_T hofgma4ypd ;
real_T eru0kcrai5 ; real_T o1h5jbax0k ; real_T jmmhtinm1t ; real_T jcivfd5sc1
; real_T ak4ldfxg1f ; real_T axs2frbyrx ; real_T mmq4jif3xa ; real_T
d1uxjqm2m5 ; real_T ghgwxfzqrs ; real_T mqztit2ec1 [ 3 ] ; real_T m5p4cfawuz
[ 4 ] ; real_T f55lzt1pjb ; real_T d4gx0maojq ; real_T ek14j05v4w ; real_T
i3ooy2gh3c [ 3 ] ; real_T mmbhoqkjlg [ 3 ] ; real_T l3lwrt4nfh [ 3 ] ; real_T
kvyvqxju03 [ 3 ] ; real_T mvri3ojh13 ; real_T iobpi1ia3b ; real_T bawrujksd0
; real_T ayyiqsze1q ; real_T jmgm3qhu4c [ 3 ] ; real_T p3pj1jootc [ 3 ] ;
real_T ml3uqjcwxo ; real_T ififqtzmpg ; real_T gxudyvttp4 [ 3 ] ; real_T
o2so0mimz4 [ 3 ] ; real_T hsw2izzn2y ; real_T ovyo2ojdiq ; real_T lezubqe10f
; real_T pmyy215m2l ; real_T bko1nisczd ; real_T e1dhyxfarm ; real_T
psrsnnlnwz ; real_T ftdxqcyuhu ; real_T ksurxyu1ew ; real_T clei5lhcim ;
real_T n12qizw2pk ; real_T jla1lojsky ; real_T dyrgneij04 ; real_T earmzkxhyo
; real_T mrnktj4pzl ; real_T bxncybtpmq ; real_T lmgyw4yww0 ; real_T
ec0g313zxm ; real_T oetfuctzdx ; real_T ouiv3ojpif ; real_T ig2ui1j1d2 ;
real_T lwunfrcbtr ; real_T gcw1odthbz ; real_T mry2mf34rf ; real_T k4jmvnhocb
; real_T pxc34pzb0n ; real_T le4iejgi3f ; real_T n5xzeyokha ; real_T
iuqibmwza1 ; real_T izcekc2rmb ; real_T avh0p45csx ; real_T acapcxyypu ;
real_T d3kvy3fm2i ; real_T kgzkpxarae ; real_T gqodljqjue ; real_T lzaaahrvev
; real_T m4hsdttpfk ; real_T jascdf2bov [ 3 ] ; real_T pd5yjynpan ; real_T
e3qqi3mf1s ; real_T mlvev5zvuo ; real_T cmhorwyh4g ; real_T anabyo4mrf ;
real_T hnezzzmczj ; real_T b2znn3iy5f [ 3 ] ; real_T fzicnidzc0 [ 3 ] ;
real_T occpomfuif [ 3 ] ; real_T hdgnuross1 [ 3 ] ; boolean_T ibghka43t4 ;
boolean_T gufuqm2w4q ; boolean_T odiyexmy3u ; } B ; typedef struct { real_T
myihs1k5ak [ 3 ] ; real_T c0nha4iyqk [ 3 ] ; struct { void * AQHandles ; }
hglv0y3zar ; struct { void * AQHandles ; } jxf2kjh03q ; struct { void *
AQHandles ; } na5522svo2 ; struct { void * AQHandles ; } cpgeeauk1h ; struct
{ void * AQHandles ; } ev4kpp3iq0 ; struct { void * AQHandles ; } gugpqqxhvg
; int_T nvlm5fi02x ; int8_T ggwlmwhzn2 ; int8_T nzu1koxl4c ; int8_T
kqbnmg3me2 ; int8_T gtqimvyuw3 ; int8_T h1cy53fwgj ; int8_T fqf02tbomi ;
int8_T htfaejw1qt ; int8_T dxttgiuwsl ; int8_T o2lk1nx3bc ; int8_T bvrzes2rmf
; int8_T ddcho2k1ly ; int8_T ebyh4xzt5h ; int8_T asakcyvhdn ; int8_T
icql5zbuzt ; int8_T hs2ude1ege ; int8_T kfr1e2dcuk ; int8_T dq3mep3v0o ;
int8_T a40xwy5obk ; int8_T d51rvhcxpr ; int8_T ki5pr0cdgk ; boolean_T
omiseg2km5 ; boolean_T powahcykzj ; boolean_T n5pq1y5uvx ; boolean_T
kx2j2pdpyi ; boolean_T misjbbclml ; bjr1mguxsx n5noj4hp0p ; bjr1mguxsx
btrmn3zm0r ; bjr1mguxsx g35lilzjbm ; bjr1mguxsx g5ve1v23po ; bjr1mguxsx
gsv54faewy ; bjr1mguxsx avc3ckvlc2 ; bjr1mguxsx dufiuetx43 ; bjr1mguxsx
dxrmmapawx ; bjr1mguxsx ndeg5uxc4fv ; noba1wfpe5 oeqg1ih2ox ; noba1wfpe5
dm5sdsidlf ; noba1wfpe5 g1wscpgucy2 ; } DW ; typedef struct { real_T
m4xyhfyxfr [ 13 ] ; } X ; typedef struct { real_T m4xyhfyxfr [ 13 ] ; } XDot
; typedef struct { boolean_T m4xyhfyxfr [ 13 ] ; } XDis ; typedef struct {
real_T m4xyhfyxfr [ 13 ] ; } CStateAbsTol ; typedef struct { real_T
m4xyhfyxfr [ 13 ] ; } CXPtMin ; typedef struct { real_T m4xyhfyxfr [ 13 ] ; }
CXPtMax ; typedef struct { real_T ohn3ylbtkr ; real_T giv5hc2grc ; real_T
dvynuj5ka2 ; real_T gmvbqehnuo ; real_T mobyb1bzu0 ; } ZCV ; typedef struct {
real_T d15kddh0xt [ 3 ] ; real_T bkjkndr5fu [ 4 ] ; real_T kfqtwcmhfv [ 3 ] ;
} ExtY ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct ghkd4q2mtt_ { real_T Constant_Value ; } ; struct ki5czxt4jx_ { real_T
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
Constant3_Value ; ki5czxt4jx n5noj4hp0p ; ki5czxt4jx btrmn3zm0r ; ki5czxt4jx
g35lilzjbm ; ki5czxt4jx g5ve1v23po ; ki5czxt4jx gsv54faewy ; ki5czxt4jx
avc3ckvlc2 ; ki5czxt4jx dufiuetx43 ; ki5czxt4jx dxrmmapawx ; ki5czxt4jx
ndeg5uxc4fv ; ghkd4q2mtt oeqg1ih2ox ; ghkd4q2mtt dm5sdsidlf ; ghkd4q2mtt
g1wscpgucy2 ; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B
rtB ; extern X rtX ; extern DW rtDW ; extern ExtY rtY ; extern P rtP ; extern
mxArray * mr_propagator_GetDWork ( ) ; extern void mr_propagator_SetDWork (
const mxArray * ssDW ) ; extern mxArray *
mr_propagator_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * propagator_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
