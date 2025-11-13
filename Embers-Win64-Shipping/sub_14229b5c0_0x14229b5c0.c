// 函数: sub_14229b5c0
// 地址: 0x14229b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = 0x322bcc77
uint128_t zmm3 = 0x3f000000
uint128_t zmm6 = *(arg3 + 4)
uint128_t zmm9 = *arg3
uint128_t zmm10 = data_143dbb200
uint64_t var_f0 = *arg2
float zmm14[0x4] = data_143dbb1fc
uint128_t zmm8
zmm8.d = zmm9.d f* zmm9.d
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
uint128_t zmm15 = arg3[1].d
int32_t rax = arg2[1].d
zmm8.d = zmm8.d f+ zmm0.d
zmm0 = data_143dbb1f8
int32_t arg_10 = zmm0.d
zmm8.d = zmm8.d f+ zmm15.d f* zmm15.d
uint32_t var_138
uint64_t var_120
int32_t arg_18
uint128_t zmm4
uint128_t zmm5

if (not(zmm8.d f!= 1f))
    zmm0 = zx.o(*arg3)
    int32_t rax_1 = arg3[1].d
    uint128_t zmm13 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    int32_t var_118 = rax_1
    var_120 = zmm0.q
    var_138 = zmm13.d
    arg_18 = var_120.d.d
else if (zmm8.d f>= 9.99999994e-09f)
    zmm5 = _mm_rsqrt_ss(zmm8.d, zmm8.d)
    zmm3.d = zmm8.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    zmm2.d = 0.5f - zmm3.d f* zmm0.d
    zmm0.d = zmm5.d f* zmm2.d
    zmm2 = 0x322bcc77
    zmm5.d = zmm5.d f+ zmm0.d
    zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
    zmm4.d = 0.5f f- zmm3.d
    zmm3 = 0x3f000000
    zmm0.d = zmm5.d f* zmm4.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm9.d = zmm9.d f* zmm5.d
    zmm15.d = zmm15.d f* zmm5.d
    var_120.d = zmm9.d
    var_120:4.d = zmm6.d
    int32_t var_118_2 = zmm15.d
    var_138 = zmm6.d
    arg_18 = zmm5.d
    arg_18 = zmm9.d
else
    arg_18 = zmm0.d
    var_120.d = zmm0.d
    var_120:4.d = zmm14[0]
    int32_t var_118_1 = zmm10.d
    var_138 = zmm14.d

uint128_t zmm7 = *(arg4 + 4)
uint128_t zmm12 = *arg4
uint128_t zmm11 = *(arg4 + 8)
zmm6.d = zmm12.d f* zmm12.d
zmm0.d = zmm7.d f* zmm7.d
zmm6.d = zmm6.d f+ zmm0.d
zmm6.d = zmm6.d f+ zmm11.d f* zmm11.d
float var_148
uint64_t var_130
int32_t arg_20
uint32_t var_140

if (not(zmm6.d f!= 1f))
    zmm0 = zx.o(*arg4)
    float rax_2 = *(arg4 + 8)
    zmm3 = zmm0
    var_130 = zmm0.q
    zmm0 = var_130.d
    var_140 = (_mm_shuffle_ps(zmm3, zmm3, 0x55)).d
    var_148 = rax_2
    arg_20 = zmm0.d
    zmm12 = arg_10
else if (zmm6.d f>= zmm2.d)
    zmm4 = zmm3
    zmm5 = _mm_rsqrt_ss(zmm6.d, zmm6.d)
    zmm3.d = zmm6.d f* zmm4.d
    zmm0.d = zmm5.d f* zmm5.d
    zmm2.d = zmm4.d f- zmm3.d f* zmm0.d
    zmm0.d = zmm5.d f* zmm2.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
    zmm4.d = zmm4.d f- zmm3.d
    zmm0.d = zmm5.d f* zmm4.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm12.d = zmm12.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm5.d
    zmm11.d = zmm11.d f* zmm5.d
    arg_20 = zmm5.d
    arg_20 = zmm12.d
    var_130.d = zmm12.d
    var_130:4.d = zmm7.d
    var_148 = zmm11.d
    int32_t var_128_2 = zmm11.d
    var_140 = zmm7.d
    zmm12 = arg_10
else
    zmm12 = arg_10
    var_148 = zmm10.d
    arg_20 = zmm12.d
    var_130.d = zmm12.d
    zmm3 = zmm14
    var_130:4.d = zmm3.d
    var_140 = zmm3.d
    int32_t var_128_1 = zmm10.d
uint128_t* rax_3 = arg5
zmm0 = *rax_3
zmm11 = *(rax_3 + 4)
zmm2 = *(rax_3 + 8)
zmm7.d = zmm0.d f* zmm0.d
zmm0.d = zmm11.d f* zmm11.d
zmm7.d = zmm7.d f+ zmm0.d
zmm7.d = zmm7.d f+ zmm2.d f* zmm2.d
uint64_t var_110

if (zmm7.d f!= 1f)
    if (zmm7.d f>= 9.99999994e-09f)
        zmm4 = _mm_rsqrt_ss(zmm7.d, zmm7.d)
        zmm3.d = zmm7.d f* 0.5f
        zmm0.d = zmm4.d f* zmm4.d
        zmm2.d = 0.5f - zmm3.d f* zmm0.d
        zmm0.d = zmm4.d f* zmm2.d
        zmm4.d = zmm4.d f+ zmm0.d
        zmm3.d = zmm3.d f* zmm4.d f* zmm4.d
        zmm5.d = 0.5f f- zmm3.d
        zmm0.d = zmm4.d f* zmm5.d
        zmm4.d = zmm4.d f+ zmm0.d
        arg5.d = zmm4.d
        zmm12.d = zmm4.d f* *rax_3
        zmm10.d = zmm4.d f* *(rax_3 + 8)
        zmm0.d = zmm4.d f* zmm11.d
        var_110:4.d = zmm0.d
        zmm11 = zmm0
    else
        var_110:4.d = zmm14[0]
        zmm11 = zmm14
    
    int32_t var_108_1 = zmm10.d
    var_110.d = zmm12.d
else
    zmm0 = zx.o(*rax_3)
    zmm10 = *(rax_3 + 8)
    var_110 = zmm0.q
    zmm12 = var_110.d
    zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

float temp0_7[0x4] = _mm_sqrt_ss(0, zmm6.d)
zmm0 = _mm_sqrt_ss(0, zmm8.d)
float temp0_9[0x4] = _mm_max_ss(temp0_7[0], zmm0.d)
zmm0 = _mm_sqrt_ss(0, zmm7.d)
temp0_9[0] = temp0_9[0] f* arg7
float zmm1 = arg8 f* zmm0.d

if (temp0_9[0] >= 0f)
    zmm14 = _mm_min_ss(temp0_9[0], zmm1)
else
    zmm14 = zx.o(0)

zmm4 = var_f0.d
zmm3 = var_f0:4.d
float temp0_12 = _mm_max_ss(zmm1 - zmm14[0], 0)
zmm2 = rax
zmm7.d = zmm10.d f* temp0_12
zmm5.d = zmm12.d f* temp0_12
zmm6.d = zmm11.d f* temp0_12
zmm0.d = zmm4.d f+ zmm5.d
arg5.d = zmm7.d
zmm4.d = zmm4.d f- zmm5.d
arg7 = zmm5.d
zmm1 = zmm3.d f+ zmm6.d
arg8 = zmm6.d
zmm3.d = zmm3.d f- zmm6.d
float var_100 = zmm0.d
zmm0.d = zmm2.d f+ zmm7.d
var_f0.d = zmm4.d
zmm2.d = zmm2.d f- zmm7.d
float var_fc = zmm1
int32_t var_f8 = zmm0.d
var_f0:4.d = zmm3.d
int32_t var_e8_1 = zmm2.d
int32_t zmm6_1
int32_t zmm7_1
int32_t zmm14_1
zmm6_1, zmm7_1, zmm14_1 = sub_142298930(arg1, &var_100, &var_120, &var_130, arg6, zmm14[0], arg9, 
    arg10, arg11.d, arg12.d, arg13)
int32_t zmm6_2
int32_t zmm7_2
int32_t zmm14_2
zmm6_2, zmm7_2, zmm14_2 = sub_142298930(arg1, &var_f0, &var_120, &var_130, arg6, zmm14_1, arg9, 
    arg10, zmm7_1, zmm6_1, arg13)
int32_t var_160_1
var_160_1.b = arg13
char var_170_1
var_170_1.d = zmm7_2
int32_t temp0_13
int32_t temp1
temp0_13:temp1 = sx.q(arg9)
int32_t rax_8 = (temp1 - temp0_13) s>> 1
int32_t zmm6_3
int32_t zmm7_3
int32_t zmm14_3
zmm6_3, zmm7_3, zmm14_3 = sub_1422995f0(arg1, &var_100, &var_130, &var_110, arg6, zmm14_2, rax_8, 
    var_170_1, zmm6_2, var_160_1.b)
var_160_1.b = arg13
var_170_1.d = zmm7_3
int32_t zmm6_4
int32_t zmm7_4
int128_t zmm10_1
int128_t zmm11_1
int128_t zmm12_1
int32_t zmm14_4
zmm6_4, zmm7_4, zmm10_1, zmm11_1, zmm12_1, zmm14_4 = sub_1422995f0(arg1, &var_100, &var_120, 
    &var_110, arg6, zmm14_3, rax_8, var_170_1, zmm6_3, var_160_1.b)
var_160_1.b = arg13
var_170_1.d = zmm7_4
var_100 = (zmm12_1 ^ 0x80000000).d
int32_t var_fc_1 = (zmm11_1 ^ 0x80000000).d
int32_t var_f8_1 = (zmm10_1 ^ 0x80000000).d
int32_t zmm6_5
int32_t zmm7_5
int32_t zmm14_5
zmm6_5, zmm7_5, zmm14_5 = sub_1422995f0(arg1, &var_f0, &var_130, &var_100, arg6, zmm14_4, rax_8, 
    var_170_1, zmm6_4, var_160_1.b)
var_160_1.b = arg13
var_170_1.d = zmm7_5
float zmm9_1
float zmm13_1
float zmm14_6
float zmm15_1
zmm9_1, zmm13_1, zmm14_6, zmm15_1 = sub_1422995f0(arg1, &var_f0, &var_120, &var_100, arg6, zmm14_5, 
    rax_8, var_170_1, zmm6_5, var_160_1.b)
int32_t i = 0
*arg2
arg2[1].d
*(arg2 + 4)
int64_t result

do
    i += 1
    uint128_t zmm1_1
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(i)).d f* 1.57079637f
    float zmm0_1[0x4]
    uint128_t zmm11_3
    float zmm12_3
    float zmm13_2[0x4]
    float zmm14_7
    int32_t zmm15_2
    zmm0_1, zmm11_3, zmm12_3, zmm13_2, zmm14_7, zmm15_2 = __libm_sse2_sincosf_(zmm1_1)
    int64_t rax_9 = *arg1
    int32_t zmm6_6 = *arg2
    *(arg2 + 4)
    int32_t zmm9_2 = arg2[1].d
    float temp0_15[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
    zmm1_1.d = zmm11_3.d f+ arg7
    zmm11_3.d = zmm11_3.d f- arg7
    zmm13_2[0] = zmm13_2[0] f+ arg5.d
    zmm13_2[0] = zmm13_2[0] f- arg5.d
    var_f0.d = zmm1_1.d
    float var_e8_2 = zmm13_2[0]
    float var_178_6 = arg12[0]
    float var_180_6 = arg11[0]
    int64_t var_188_5
    var_188_5.b = arg10
    var_f0:4.d = zmm12_3 + arg8
    var_100 = zmm11_3.d
    float var_fc_2 = zmm12_3 - arg8
    float var_f8_2 = zmm13_2[0]
    result =
        (*(rax_9 + 0x30))(arg1, &var_100, &var_f0, arg6, var_188_5, var_180_6, var_178_6, arg13)
    zmm0_1[0]
    zmm0_1[0] = zmm0_1[0] f* arg_20
    zmm11_3.d = temp0_15.d f* arg_18
    zmm0_1[0] = zmm0_1[0] * var_148
    zmm11_3.d = zmm11_3.d f+ zmm0_1[0]
    temp0_15[0] = temp0_15[0] f* zmm15_2
    temp0_15[0] = temp0_15[0] f* var_138
    zmm11_3.d = zmm11_3.d f* zmm14_7
    temp0_15[0] = temp0_15[0] + zmm0_1[0]
    temp0_15[0]
    zmm11_3.d = zmm11_3.d f+ zmm6_6
    temp0_15[0] = temp0_15[0] * zmm14_7
    temp0_15[0] = temp0_15[0] f+ zmm9_2
while (i s< 4)

return result
