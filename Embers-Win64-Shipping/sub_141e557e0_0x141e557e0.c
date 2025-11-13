// 函数: sub_141e557e0
// 地址: 0x141e557e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = data_142d4cc00
float zmm6[0x4] = *arg2
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_3[0x4] = _mm_mul_ps(temp0, temp0_2)
float zmm7[0x4] = arg4
arg4 = arg2[1]
float zmm9[0x4] = *(arg3 + 4)
uint128_t zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_1), temp0_3)
float zmm11[0x4] = *arg3
float zmm10[0x4] = *(arg3 + 8)
float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
zmm2 = _mm_add_ps(zmm2, zmm2)
float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm2)
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), temp0_2)
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
float temp0_13[0x4] = _mm_add_ps(temp0_9, zmm5)
float temp0_15[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_12, temp0_1), temp0_11)
float zmm0[0x4] = *(arg1 + 0x20)
float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_13)
temp0_16[0] = temp0_16[0] * zmm0[0]
uint128_t zmm8 = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)
zmm2.d = zmm8.d f* zmm0[0]
temp0_18[0] = temp0_18[0] * zmm0[0]
arg4[0] = arg4[0] - temp0_16[0]
zmm11[0] = zmm11[0] - arg4[0]
float temp0_19[0x4] = _mm_shuffle_ps(arg4, arg4, 0x55)
temp0_19[0] = temp0_19[0] f- zmm2.d
float temp0_20[0x4] = _mm_shuffle_ps(arg4, arg4, 0xaa)
zmm2 = *(arg1 + 0x24)
temp0_20[0] = temp0_20[0] - temp0_18[0]
zmm9[0] = zmm9[0] - temp0_19[0]
zmm10[0] = zmm10[0] - temp0_20[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm9[0] = zmm9[0] + zmm11[0]
zmm9[0] = zmm9[0] + zmm10[0]
float temp0_21[0x4] = _mm_sqrt_ss(0, zmm9[0])
temp0_21[0] = temp0_21[0] f- *(arg1 + 0x14)
int64_t result
float zmm0_1[0x4]
int32_t zmm6_1
float zmm8_1[0x4]
float zmm9_1
zmm0_1, result, zmm6_1, zmm8_1, zmm9_1 =
    sub_141e55300(arg1, _mm_max_ss(temp0_21[0], 0), zmm2, zmm7[0])

if (not(zmm0_1[0] f<= zmm6_1))
    uint128_t zmm2_1
    
    if (not(zmm9[0] == 1f))
        if (zmm9[0] >= 9.99999994e-09f)
            uint32_t zmm3[0x4] = zmm9
            float temp0_23[0x4] = _mm_rsqrt_ss(zmm9[0], zmm3[0])
            zmm3[0] = zmm3[0] f* 0.5f
            temp0_23[0] = temp0_23[0] * temp0_23[0]
            zmm3[0] = zmm3[0] f* temp0_23[0]
            zmm2_1.d = 0.5f f- zmm3[0]
            temp0_23[0] = temp0_23[0] f* zmm2_1.d
            temp0_23[0] = temp0_23[0] + temp0_23[0]
            uint32_t zmm1_1[0x4] = temp0_23
            zmm1_1[0] = zmm1_1[0] f* temp0_23[0]
            zmm3[0] = zmm3[0] f* zmm1_1[0]
            temp0_23[0] = temp0_23[0] * (0.5f f- zmm3[0])
            temp0_23[0] = temp0_23[0] + temp0_23[0]
            zmm9_1 = zmm9_1 * temp0_23[0]
            temp0_23[0] = temp0_23[0] * zmm11[0]
            zmm10[0] = zmm10[0] * temp0_23[0]
            zmm11 = temp0_23
        else
            zmm11 = data_143dbb1f8
            zmm9_1 = data_143dbb1fc
            zmm10 = data_143dbb200
    
    zmm0_1 = 0xbf800000
    zmm8_1[0] = zmm8_1[0] * zmm9_1
    temp0_16[0] = temp0_16[0] * zmm11[0]
    temp0_18[0] = temp0_18[0] * zmm10[0]
    zmm8_1[0] = zmm8_1[0] + temp0_16[0]
    zmm8_1[0] = zmm8_1[0] + temp0_18[0]
    
    if (not(zmm8_1[0] < -1f))
        zmm0_1 = _mm_min_ss(zmm8_1[0], 0x3f800000)
    
    uint32_t temp0_25[0x4] = __andps_xmmxud_memxud(acosf(zmm0_1[0]), data_142d3f770)
    temp0_25[0] = temp0_25[0] f* 57.2957764f
    zmm2_1 = *(arg1 + 0x1c)
    temp0_25[0] = temp0_25[0] f- *(arg1 + 0x18)
    int32_t zmm0_3
    float zmm7_2
    zmm0_3, result, zmm7_2 = sub_141e55300(arg1, temp0_25, zmm2_1, 0x3f800000[0])

return result
