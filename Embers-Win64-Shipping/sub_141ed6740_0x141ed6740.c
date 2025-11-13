// 函数: sub_141ed6740
// 地址: 0x141ed6740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x1f2) & 0x10) == 0 || (*arg2 & 1) == 0)
    return 

int64_t* rax
int64_t r8
rax, r8 = sub_140d3c6e0(&arg2[0x70])
int64_t* rsi_1 = rax

if (rax == 0)
    return 

int64_t r9 = *rax
r8.b = 1
rax = (*(r9 + 0x6a8))(rax, *(arg2 + 0x78), r8, r9)

if (rax == 0 || sub_142222800(rax, arg5).b == 0 || sub_14221b2f0(rax).b == 0)
    return 

int32_t r12_1 = *(arg2 + 0x24)
int64_t var_118 = *(arg2 + 0x1c)
uint32_t zmm0_2[0x4] = sub_142216b90(rax)
bool cond:1_1 = *(arg1 + 0x1f2) s>= 0
uint32_t zmm8[0x4] = 0x3f800000
float zmm11[0x4] = _mm_max_ss(zmm0_2[0], 0x3f800000)
float arg_8 = zmm11[0]
uint32_t zmm2[0x4]

if (not(cond:1_1))
    int32_t var_e8
    sub_142216aa0(rax, &var_e8)
    int32_t var_e0
    arg6 = var_e0
    int32_t var_dc
    zmm0_2 = var_dc
    zmm0_2[0] = zmm0_2[0] f- var_e8
    int32_t var_d4
    arg5.o = var_d4
    int32_t var_d8
    zmm2 = var_d8
    arg5.d = arg5.d f- arg6[0]
    int32_t var_e4
    zmm2[0] = zmm2[0] f- var_e4
    zmm0_2[0] = zmm0_2[0] f* 0.5f
    arg5.d = arg5.d f* 0.5f
    bool cond:2_1 = _mm_and_ps(zmm0_2, 0x7fffffff)[0] f> 9.99999975e-05f
    arg6[0] = arg6[0] f+ arg5.d
    
    if (cond:2_1)
    label_141ed68ef:
        arg5.d = arg5.d f* arg1[0x43].d
        arg5.d = arg5.d f+ arg6[0]
        r12_1 = arg5.d
    else
        zmm2[0] = zmm2[0] f* 0.5f
        
        if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141ed68ef
        
        if (not(_mm_and_ps(arg5.o, 0x7fffffff)[0] f<= 9.99999975e-05f))
            goto label_141ed68ef

int128_t zmm13 = *(arg2 + 0x38)
int128_t zmm14 = *(arg2 + 0x3c)
int128_t zmm12 = *(arg2 + 0x34) ^ 0x80000000
int64_t var_128 = 0
int32_t var_f8
sub_1422a1200(rsi_1, &var_f8, 0)
uint32_t zmm9[0x4] = *arg3
uint32_t var_108
float var_100_2
uint32_t zmm0_3[0x4]
uint32_t zmm4_1[0x4]
uint32_t zmm5_1[0x4]

if (zmm9[0] f!= 0f || 0f f!= *(arg3 + 4) || 0f f!= *(arg3 + 8))
    zmm0_3 = *(arg3 + 4)
    zmm11 = *(arg3 + 8)
    zmm2 = zmm0_3
    zmm2[0] = zmm2[0] f* zmm0_3[0]
    arg5.o = zmm11
    zmm0_3 = zmm9
    arg5.d = arg5.d f* zmm11[0]
    zmm0_3[0] = zmm0_3[0] f* zmm9[0]
    zmm2[0] = zmm2[0] f+ zmm0_3[0]
    zmm2[0] = zmm2[0] f+ arg5.d
    uint32_t zmm10[0x4]
    
    if (not(zmm2[0] f!= 1f))
        zmm0_3 = zx.o(*arg3)
        zmm11 = *(arg3 + 8)
        var_128 = zmm0_3.q
        zmm9 = var_128.d
        zmm10 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x55)
    else if (zmm2[0] f>= 9.99999994e-09f)
        zmm4_1 = 0x3f000000
        arg6 = zmm2
        zmm5_1 = _mm_rsqrt_ss(zmm2[0], arg6[0])
        zmm2 = 0x3f000000
        arg6[0] = arg6[0] f* 0.5f
        zmm5_1[0] = zmm5_1[0] f* zmm5_1[0]
        arg5.o = arg6
        arg5.d = arg5.d f* zmm5_1[0]
        zmm2[0] = 0.5f f- arg5.d
        zmm5_1[0] = zmm5_1[0] f* zmm2[0]
        zmm5_1[0] = zmm5_1[0] f+ zmm5_1[0]
        arg5.o = zmm5_1
        arg5.d = arg5.d f* zmm5_1[0]
        arg6[0] = arg6[0] f* arg5.d
        zmm4_1[0] = 0.5f f- arg6[0]
        zmm5_1[0] = zmm5_1[0] f* zmm4_1[0]
        zmm5_1[0] = zmm5_1[0] f+ zmm5_1[0]
        zmm0_3 = *(arg3 + 4)
        zmm0_3[0] = zmm0_3[0] f* zmm5_1[0]
        var_128.d = zmm5_1[0]
        zmm9[0] = zmm9[0] f* zmm5_1[0]
        zmm10 = zmm0_3
        zmm11[0] = zmm11[0] f* zmm5_1[0]
    else
        zmm9 = data_143dbb1f8
        zmm10 = data_143dbb1fc
        zmm11 = data_143dbb200
    
    (*(*arg1 + 0x3f0))(arg1, arg5, zmm2, arg6)
    zmm11[0] = zmm11[0] f* zmm0_3[0]
    zmm9[0] = zmm9[0] f* zmm0_3[0]
    zmm10[0] = zmm10[0] f* zmm0_3[0]
    var_100_2 = zmm11[0]
    zmm11 = arg_8
    var_108 = zmm9[0]
    uint32_t var_104_1 = zmm10[0]
else
    var_108.q = *arg4
    var_100_2 = arg4[1].d

bool cond:4_1 = (*(arg1 + 0x1f3) & 1) == 0
int32_t var_f0
arg6 = var_f0
int32_t var_f4
zmm4_1 = var_f4
zmm5_1 = var_f8
var_128 = var_108.q

if (not(cond:4_1))
    if (_mm_and_ps(zmm5_1, 0x7fffffff)[0] f> 9.99999975e-05f)
    label_141ed6b0b:
        zmm2 = var_128:4.d
        zmm0_3 = var_128.d
        arg5.o = var_100_2
        zmm2[0] = zmm2[0] f* zmm4_1[0]
        zmm0_3[0] = zmm0_3[0] f* zmm5_1[0]
        arg5.d = arg5.d f* arg6[0]
        zmm2[0] = zmm2[0] f+ zmm0_3[0]
        zmm2[0] = zmm2[0] f+ arg5.d
        
        if (not(zmm2[0] f<= 0f) && not(zmm2[0] f>= 1f))
            zmm8 = zmm2
    else
        if (_mm_and_ps(zmm4_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141ed6b0b
        
        if (not(_mm_and_ps(arg6, 0x7fffffff)[0] f<= 9.99999975e-05f))
            goto label_141ed6b0b

if ((*(arg1 + 0x1f2) & 0x40) != 0)
    zmm8[0] = zmm8[0] f* zmm11[0]

bool cond:5_1 = _mm_and_ps(zmm5_1, 0x7fffffff)[0] f> 9.99999975e-05f
zmm12.d = zmm12.d f* zmm8[0]
zmm13.d = (zmm13 ^ 0x80000000).d f* zmm8[0]
zmm14.d = (zmm14 ^ 0x80000000).d f* zmm8[0]

if (cond:5_1)
label_141ed6bf5:
    zmm0_3 = *(arg1 + 0x214)
    arg6 = zx.o(var_118)
    int64_t r9_2 = *(arg2 + 0x78)
    arg5.o = zmm0_3
    zmm0_3[0] = zmm0_3[0] f* zmm12.d
    zmm0_3[0] = zmm0_3[0] f* zmm14.d
    arg5.d = arg5.d f* zmm13.d
    uint32_t var_100_4 = zmm0_3[0]
    int64_t rax_8 = *rsi_1
    zmm0_3 = _mm_unpacklo_ps(zmm0_3, arg5.q)
    var_118 = arg6.q
    var_128 = zmm0_3.q
    (*(rax_8 + 0x5d0))(rsi_1, &var_128, &var_118, r9_2, var_128, var_100_4, var_118, r12_1, 
        var_108, var_100_4)
else
    if (_mm_and_ps(zmm4_1, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141ed6bf5
    
    if (_mm_and_ps(arg6, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141ed6bf5
    
    zmm0_3 = arg1[0x42].d
    arg6 = zx.o(var_118)
    int64_t r9_1 = *(arg2 + 0x78)
    arg5.o = zmm0_3
    zmm0_3[0] = zmm0_3[0] f* zmm12.d
    zmm0_3[0] = zmm0_3[0] f* zmm14.d
    arg5.d = arg5.d f* zmm13.d
    uint32_t var_100_3 = zmm0_3[0]
    int64_t rax_6 = *rsi_1
    zmm0_3 = _mm_unpacklo_ps(zmm0_3, arg5.q)
    var_118 = arg6.q
    var_128 = zmm0_3.q
    (*(rax_6 + 0x5b8))(rsi_1, &var_128, &var_118, r9_1, var_128, var_100_3, var_118, r12_1, 
        var_108, var_100_3)
