// 函数: sub_141e55620
// 地址: 0x141e55620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *(arg1 + 0x18)
int128_t zmm8 = *(arg1 + 0x14)
float zmm9[0x4] = arg4
uint128_t zmm1
uint128_t zmm0
uint128_t zmm2
float zmm4[0x4]

if (zmm8.d f> zmm7.d)
    zmm4 = data_142d4cc30
    zmm8.d = zmm8.d f- zmm7.d
    float zmm5[0x4] = *arg2
    float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm1)
    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_4)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    zmm2 = _mm_sub_ps(zmm2, zmm0)
    zmm2 = _mm_add_ps(zmm2, zmm2)
    float temp0_13[0x4] = _mm_mul_ps(temp0_10, zmm2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
    float temp0_17[0x4] = _mm_add_ps(temp0_13, zmm4)
    zmm2 = arg2[1]
    float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_4)
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_21[0x4] = _mm_add_ps(_mm_sub_ps(temp0_18, zmm0), temp0_17)
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
    temp0_21[0] = temp0_21[0] f* zmm8.d
    temp0_22[0] = temp0_22[0] f* zmm8.d
    zmm0.d = zmm2.d f+ temp0_21[0]
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
    temp0_23[0] = temp0_23[0] f* zmm8.d
    zmm1.d = zmm1.d f+ temp0_22[0]
    int32_t var_58 = zmm0.d
    zmm0.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f+ temp0_23[0]
    int32_t var_54_1 = zmm1.d
    zmm1.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f- temp0_22[0]
    int32_t var_50_1 = zmm0.d
    zmm0 = zmm2
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    zmm0.d = zmm0.d f- temp0_21[0]
    zmm2.d = zmm2.d f- temp0_23[0]
    int32_t var_64_1 = zmm1.d
    int32_t var_68 = zmm0.d
    int32_t var_60_1 = zmm2.d
    zmm1.d = sub_140addbc0(arg3, &var_58, &var_68).d f- zmm7.d
else
    zmm2 = arg2[1]
    zmm1 = *(arg3 + 8)
    zmm4 = *arg3
    arg4 = *(arg3 + 4)
    zmm4[0] = zmm4[0] f- zmm2.d
    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    arg4[0] = arg4[0] f- zmm0.d
    zmm1.d = zmm1.d f- _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    zmm4[0] = zmm4[0] * zmm4[0]
    arg4[0] = arg4[0] * arg4[0]
    zmm1.d = zmm1.d f* zmm1.d
    arg4[0] = arg4[0] + zmm4[0]
    arg4[0] = arg4[0] f+ zmm1.d
    zmm1.d = _mm_sqrt_ss(0, arg4[0]).d f- zmm7.d
    zmm1 = _mm_max_ss(zmm1.d, 0)
return sub_141e55300(arg1, zmm1, *(arg1 + 0x24), zmm9[0])
