// 函数: sub_141f619a0
// 地址: 0x141f619a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t* rax = sub_141a1da60(arg1 + 0x408, &var_48, arg3, &data_143dbb1f8)
uint128_t zmm7 = *(rax + 4)
float zmm6[0x4] = *rax
float zmm8[0x4] = rax[1].d
zmm6[0] = zmm6[0] * zmm6[0]
uint128_t zmm0
zmm0.d = zmm7.d f* zmm7.d
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] f+ zmm0.d
zmm6[0] = zmm6[0] + zmm8[0]
float zmm2[0x4]
float zmm3_1[0x4]
float zmm4_1[0x4]

if (not(zmm6[0] != 1f))
    int32_t rax_1 = rax[1].d
    *arg2 = *rax
    arg2[2] = rax_1
else if (zmm6[0] >= 9.99999994e-09f)
    zmm4_1 = 0x3f000000
    zmm0 = zmm6
    zmm3_1 = zmm0
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm0[0], zmm3_1[0])
    zmm2 = 0x3f000000
    zmm3_1[0] = zmm3_1[0] * 0.5f
    zmm0.d = temp0_1.d f* temp0_1[0]
    zmm3_1[0] = zmm3_1[0] f* zmm0.d
    zmm2[0] = 0.5f - zmm3_1[0]
    zmm0.d = temp0_1.d f* zmm2[0]
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm3_1[0] = zmm3_1[0] * temp0_1[0]
    zmm4_1[0] = 0.5f - zmm3_1[0]
    zmm0.d = temp0_1.d f* zmm4_1[0]
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7.d = zmm7.d f* temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
    *arg2 = zmm6[0]
    arg2[1] = zmm7.d
    arg2[2] = zmm8[0]
else
    int32_t rax_2 = data_143dbb200
    *arg2 = data_143dbb1f8.q
    arg2[2] = rax_2

if (arg4 != 1)
    return arg2

float zmm5_1[0x4] = *(arg1 + 0x1c0)
zmm0 = arg2[2]
zmm6 = *arg2
float temp0_2[0x4] = _mm_unpacklo_ps(arg2[1], 0)
float temp0_5[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0.q), temp0_2[0].q), *(arg1 + 0x1e0))
float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
float temp0_13[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_7), zmm0)
float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_13)
float temp0_15[0x4] = _mm_mul_ps(temp0_8, temp0_14)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), temp0_6)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xd2)
float temp0_19[0x4] = _mm_add_ps(temp0_15, temp0_5)
float temp0_22[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_18, temp0_7), zmm0), temp0_19)
int32_t var_40_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa).d
*arg2 = (_mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)).q
arg2[2] = var_40_1
zmm7 = arg2[1]
zmm6 = *arg2
zmm8 = arg2[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm0.d = zmm7.d f* zmm7.d
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] f+ zmm0.d
zmm6[0] = zmm6[0] + zmm8[0]

if (not(zmm6[0] <= 9.99999994e-09f))
    zmm4_1 = 0x3f000000
    zmm0 = zmm6
    zmm3_1 = zmm0
    float temp0_26[0x4] = _mm_rsqrt_ss(zmm0[0], zmm3_1[0])
    zmm2 = 0x3f000000
    zmm3_1[0] = zmm3_1[0] * 0.5f
    zmm0.d = temp0_26.d f* temp0_26[0]
    zmm3_1[0] = zmm3_1[0] f* zmm0.d
    zmm2[0] = 0.5f - zmm3_1[0]
    zmm0.d = temp0_26.d f* zmm2[0]
    temp0_26[0] = temp0_26[0] f+ zmm0.d
    temp0_26[0] = temp0_26[0] * temp0_26[0]
    zmm3_1[0] = zmm3_1[0] * temp0_26[0]
    zmm4_1[0] = 0.5f - zmm3_1[0]
    zmm0.d = temp0_26.d f* zmm4_1[0]
    temp0_26[0] = temp0_26[0] f+ zmm0.d
    zmm6[0] = zmm6[0] * temp0_26[0]
    zmm7.d = zmm7.d f* temp0_26[0]
    zmm8[0] = zmm8[0] * temp0_26[0]
    *arg2 = zmm6[0]
    arg2[1] = zmm7.d
    arg2[2] = zmm8[0]

return arg2
