// 函数: sub_1427ac320
// 地址: 0x1427ac320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *(arg1 + 0xa0)
float zmm3[0x4] = *(arg2 + 4)
float temp0[0x4] = _mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, 0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float zmm7[0x4] = *(arg1 + 0x50)
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0, temp0_1[0].q), *(arg1 + 0xc0))
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float zmm9[0x4] = *(arg1 + 0x58)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_2)
float zmm12[0x4] = arg3
float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_11[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_5), temp0_7)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_8, temp0_12)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_2)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_4)
float zmm6[0x4] = *(arg1 + 0x54)
float temp0_21[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_16, temp0_5), temp0_15), temp0_17), *(arg1 + 0xb0))
zmm7[0] = zmm7[0] - temp0_21[0]
float var_98 = temp0_21[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
zmm6[0] = zmm6[0] - temp0_22[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
float var_94 = temp0_22[0]
zmm9[0] = zmm9[0] - temp0_23[0]
float var_90 = temp0_23[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm9[0]
float zmm4[0x4]

if (not(zmm6[0] <= 9.99999994e-09f))
    zmm4 = 0x3f000000
    float temp0_24[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
    arg3 = 0x3f000000
    zmm6[0] = zmm6[0] * 0.5f
    temp0_24[0] = temp0_24[0] * temp0_24[0]
    zmm6[0] = zmm6[0] * temp0_24[0]
    arg3[0] = 0.5f - zmm6[0]
    temp0_24[0] = temp0_24[0] * arg3[0]
    temp0_24[0] = temp0_24[0] + temp0_24[0]
    temp0_24[0] = temp0_24[0] * temp0_24[0]
    zmm6[0] = zmm6[0] * temp0_24[0]
    zmm4[0] = 0.5f - zmm6[0]
    temp0_24[0] = temp0_24[0] * zmm4[0]
    temp0_24[0] = temp0_24[0] + temp0_24[0]
    zmm7[0] = zmm7[0] * temp0_24[0]
    zmm6[0] = zmm6[0] * temp0_24[0]
    zmm9[0] = zmm9[0] * temp0_24[0]

bool cond:0 = zmm9[0] >= 0f
zmm4 = zmm7
zmm6[0] = zmm6[0] * zmm6[0]
zmm4[0] = zmm4[0] * zmm6[0]
float zmm8[0x4] = zmm7
zmm8[0] = zmm8[0] * zmm7[0]
float var_b0 = (zmm6 ^ 0x80000000)[0]
float zmm0[0x4]

if (cond:0)
    arg3 = 0x3f800000
    zmm7 ^= 0x80000000
    zmm9[0] = zmm9[0] + 1f
    float zmm1[0x4] = 0x3f800000
    zmm0 = 0x3f800000
    zmm1[0] = 1f / zmm9[0]
    zmm6[0] = zmm6[0] * zmm1[0]
    zmm4[0] = zmm4[0] * zmm1[0]
    arg3[0] = 1f - zmm6[0]
    zmm8[0] = zmm8[0] * zmm1[0]
    zmm4 ^= 0x80000000
    float var_a4_1 = zmm4[0]
    float var_b4_1 = arg3[0]
else
    zmm0 = 0x3f800000
    arg3 = 0x3f800000
    zmm0[0] = 1f - zmm9[0]
    arg3[0] = 1f / zmm0[0]
    zmm0 = 0x3f800000
    zmm6[0] = zmm6[0] * arg3[0]
    zmm4[0] = zmm4[0] * arg3[0]
    zmm6[0] = zmm6[0] - 1f
    zmm8[0] = zmm8[0] * arg3[0]
    float var_a4 = (zmm4 ^ 0x80000000)[0]
    float var_b4 = zmm6[0]

zmm0[0] = zmm0[0] - zmm8[0]
float var_80 = var_b0
float var_b8 = zmm4[0]
float var_a8 = zmm0[0]
int64_t var_88 = var_b8.q
var_b8.q = var_a8.q
float var_b0_1 = zmm7[0]
return sub_142298930(*(arg1 + 0x40), &var_98, &var_b8, &var_88, arg5, zmm12[0], arg4, arg7 ^ 1, 
    arg6[0], (*(arg1 + 0x38))[0], 1)
