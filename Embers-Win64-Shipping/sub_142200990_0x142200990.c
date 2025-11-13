// 函数: sub_142200990
// 地址: 0x142200990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_d0 = arg4
int32_t var_b8
sub_141fe56b0(&arg1[0xd], &var_b8, *(arg2 + 0x12c), arg3, (*(arg2 + 0x18)).d, nullptr)
float var_c8
(*(*arg1 + 0x348))(arg1, arg2, &var_c8, arg4)
float zmm6[0x4] = var_c8
float var_c4
float zmm8[0x4] = var_c4
float zmm10 = zmm6[0]
int32_t var_c0
int128_t zmm7 = var_c0
float zmm11[0x4] = zmm8
float zmm9[0x4] = zmm8
zmm9[0] = zmm9[0] * zmm11[0]
int128_t zmm12 = zmm7
zmm6[0] = zmm6[0] * zmm10
zmm9[0] = zmm9[0] + zmm6[0]
zmm9[0] = zmm9[0] + zmm7.d f* zmm12.d
float zmm3_1

if (not(zmm9[0] <= 9.99999994e-09f))
    zmm3_1 = zmm9[0]
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm9[0], zmm3_1)
    zmm3_1 = zmm3_1 * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm3_1 * temp0_1[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm3_1 * temp0_1[0] * temp0_1[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm8 = temp0_1
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * zmm11[0]
    zmm7.d = zmm7.d f* temp0_1[0]

if ((arg1[6].b & 0x40) != 0 && not(zmm9[0] <= 9.99999994e-09f))
    zmm3_1 = zmm9[0]
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm9[0], zmm3_1)
    zmm3_1 = zmm3_1 * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    temp0_2[0] = temp0_2[0] * (0.5f - zmm3_1 * temp0_2[0])
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * (0.5f - zmm3_1 * temp0_2[0] * temp0_2[0])
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm10 = zmm10 * temp0_2[0]
    zmm11[0] = zmm11[0] * temp0_2[0]
    zmm12.d = zmm12.d f* temp0_2[0]
    var_c8 = zmm10
    var_c4 = zmm11[0]
    var_c0 = zmm12.d

float zmm0_1[0x4]
uint32_t zmm6_1[0x4]
uint32_t zmm7_1[0x4]
zmm0_1, zmm6_1, zmm7_1 = sub_141fe5610(&arg1[0x16], *(arg2 + 0x12c), *(arg2 + 0x18), arg4)
uint32_t zmm4_2[0x4] = var_c8
uint32_t temp0_3[0x4] = _mm_and_ps(zmm6_1, 0x7fffffff)
float zmm3_2[0x4] = var_c4
zmm8 = _mm_and_ps(zmm8, 0x7fffffff)
float zmm2_2[0x4] = var_c0
uint32_t temp0_5[0x4] = _mm_and_ps(zmm7_1, 0x7fffffff)
char rax_1 = (arg1[6].d).b
temp0_3[0] = temp0_3[0] f* zmm0_1[0]
zmm8[0] = zmm8[0] * zmm0_1[0]
temp0_5[0] = temp0_5[0] f* zmm0_1[0]
zmm4_2[0] = zmm4_2[0] f* zmm0_1[0]
zmm3_2[0] = zmm3_2[0] * zmm0_1[0]
zmm2_2[0] = zmm2_2[0] * zmm0_1[0]

if ((rax_1 & 9) != 0)
    zmm0_1 = temp0_3 ^ 0x80000000
    
    if (not(zmm4_2[0] f< zmm0_1[0]))
        zmm0_1 = zmm4_2
        
        if (not(zmm4_2[0] f< temp0_3[0]))
            zmm0_1 = temp0_3
else
    zmm0_1 = zx.o(0)

float zmm1_1[0x4]

if ((rax_1 & 0x12) != 0)
    zmm1_1 = zmm8 ^ 0x80000000
    
    if (not(zmm3_2[0] >= zmm1_1[0]))
        zmm3_2 = zmm1_1
    else if (not(zmm3_2[0] < zmm8[0]))
        zmm3_2 = zmm8
else
    zmm3_2 = zx.o(0)

if ((rax_1 & 0x24) != 0)
    zmm1_1 = temp0_5 ^ 0x80000000
    
    if (not(zmm2_2[0] >= zmm1_1[0]))
        zmm2_2 = zmm1_1
    else if (not(zmm2_2[0] f< temp0_5[0]))
        zmm2_2 = temp0_5
else
    zmm2_2 = zx.o(0)

zmm4_2 = var_b8
int32_t var_b0
zmm9 = var_b0
int32_t var_b4
uint32_t zmm5_2[0x4] = var_b4
zmm4_2[0] = zmm4_2[0] f+ zmm0_1[0]
int32_t var_9c = 0
zmm9[0] = zmm9[0] + zmm2_2[0]
int64_t var_98 = 0
zmm5_2[0] = zmm5_2[0] f+ zmm3_2[0]
int32_t var_90 = 0
float var_a8[0x4]
var_a8[0] = zmm4_2[0]
float temp0_6[0x4] = _mm_shuffle_ps(var_a8, var_a8, 0xe1)
temp0_6[0] = zmm5_2[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
temp0_7[0] = zmm9[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_8, temp0_8, 0xff), *(arg2 + 0x90))
float temp0_12[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_8, temp0_8, 0x55), *(arg2 + 0x70))
float temp0_14[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_8, temp0_8, 0xaa), *(arg2 + 0x80))
float temp0_16[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_8, temp0_8, 0), *(arg2 + 0x60))
float temp0_19[0x4] = _mm_add_ps(_mm_add_ps(temp0_10, temp0_14), _mm_add_ps(temp0_12, temp0_16))
temp0_19[0] = temp0_19[0] f+ *(arg5 + 0x10)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
temp0_20[0] = temp0_20[0] f+ *(arg5 + 0x14)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)
temp0_21[0] = temp0_21[0] f+ *(arg5 + 0x18)
*(arg5 + 0x10) = temp0_19[0]
*(arg5 + 0x14) = temp0_20[0]
*(arg5 + 0x18) = temp0_21[0]

if ((arg1[6].b & 0x80) != 0)
    int64_t r8_2 = *(arg2 + 0x18)
    zmm1_1 = *(arg2 + 0x12c)
    zmm4_2[0] = zmm4_2[0] f- zmm4_2[0]
    zmm5_2[0] = zmm5_2[0] f- zmm5_2[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    int32_t zmm6_2
    int32_t zmm7_2
    zmm0_1, zmm6_2, zmm7_2 = sub_141fe5610(&arg1[7], zmm1_1, r8_2, arg4)
    int32_t var_9c_1 = 0
    zmm0_1[0] = zmm0_1[0] * zmm9[0]
    int64_t var_98_1 = 0
    zmm0_1[0] = zmm0_1[0] f* zmm6_2
    int32_t var_90_1 = 0
    zmm0_1[0] = zmm0_1[0] f* zmm7_2
    temp0_8[0] = zmm0_1[0]
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
    temp0_22[0] = zmm0_1[0]
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc6)
    temp0_23[0] = zmm0_1[0]
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc9)
    float temp0_26[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_24, temp0_24, 0xaa), *(arg2 + 0x80))
    float temp0_28[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_24, temp0_24, 0x55), *(arg2 + 0x70))
    float temp0_30[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_24, temp0_24, 0xff), *(arg2 + 0x90))
    float temp0_32[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_24, temp0_24, 0), *(arg2 + 0x60))
    float temp0_35[0x4] = _mm_add_ps(_mm_add_ps(temp0_30, temp0_26), _mm_add_ps(temp0_28, temp0_32))
    temp0_35[0] = temp0_35[0] f+ *(arg5 + 0x30)
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
    *(arg5 + 0x30) = temp0_35[0]
    temp0_36[0] = temp0_36[0] f+ *(arg5 + 0x34)
    *(arg5 + 0x34) = temp0_36[0]
    temp0_37[0] = temp0_37[0] f+ *(arg5 + 0x38)
    *(arg5 + 0x38) = temp0_37[0]
    temp0_35[0] = temp0_35[0] f+ *(arg5 + 0x20)
    temp0_36[0] = temp0_36[0] f+ *(arg5 + 0x24)
    temp0_37[0] = temp0_37[0] f+ *(arg5 + 0x28)
    *(arg5 + 0x20) = temp0_35[0]
    *(arg5 + 0x24) = temp0_36[0]
    *(arg5 + 0x28) = temp0_37[0]

if (_finite(_mm_cvtps_pd((*(arg5 + 0x10))[0].q)[0].q) != 0
        && _finite(_mm_cvtps_pd((*(arg5 + 0x14))[0].q)[0].q) != 0)
    _finite(_mm_cvtps_pd((*(arg5 + 0x18))[0].q)[0].q)

int32_t result = _finite(_mm_cvtps_pd((*(arg5 + 0x30))[0].q)[0].q)

if (result != 0)
    result = _finite(_mm_cvtps_pd((*(arg5 + 0x34))[0].q)[0].q)
    
    if (result != 0)
        return _finite(_mm_cvtps_pd((*(arg5 + 0x38))[0].q)[0].q)

return result
