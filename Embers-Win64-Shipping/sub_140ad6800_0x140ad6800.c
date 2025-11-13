// 函数: sub_140ad6800
// 地址: 0x140ad6800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
float zmm4[0x4] = *(arg2 + 8)
zmm5[0] = zmm5[0] * zmm5[0]
zmm4[0] = zmm4[0] * zmm4[0]
float zmm6[0x4] = *(arg2 + 4)
float zmm7[0x4] = *(arg3 + 4)
zmm6[0] = zmm6[0] * zmm6[0]
float zmm8[0x4] = *arg3
zmm5[0] = zmm5[0] + zmm6[0]
float zmm9[0x4] = *(arg3 + 8)
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm5[0] = zmm5[0] + zmm4[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm8[0] = zmm8[0] + zmm7[0]
zmm6[0] = zmm6[0] * zmm7[0]
zmm8[0] = zmm8[0] + zmm9[0]
zmm4[0] = zmm4[0] * zmm9[0]
zmm5[0] = zmm5[0] * zmm8[0]
zmm5[0] = zmm5[0] * zmm8[0]
float temp0[0x4] = _mm_sqrt_ss(zmm5[0], zmm5[0])
zmm5[0] = zmm5[0] + zmm6[0]
zmm5[0] = zmm5[0] + zmm4[0]
zmm5[0] = zmm5[0] + temp0[0]
temp0[0] = temp0[0] * 9.99999997e-07f

if (zmm5[0] < temp0[0])
    zmm4 ^= data_142d3f780
    int32_t var_4c_1 = 0
    float zmm2[0x4] = __andps_xmmxud_memxud(zmm5, data_142d3f770)
    float zmm0[0x4] = __andps_xmmxud_memxud(zmm6, data_142d3f770)
    float var_58_1
    
    if (zmm2[0] <= zmm0[0])
        float var_54_2 = zmm4[0]
        float var_50_2 = zmm6[0]
        var_58_1 = 0f
    else
        var_58_1 = zmm4[0]
        float var_50_1 = zmm5[0]
        int32_t var_54_1 = 0
    
    *arg1 = var_58_1.o
else
    zmm6[0] = zmm6[0] * zmm9[0]
    zmm4[0] = zmm4[0] * zmm7[0]
    zmm4[0] = zmm4[0] * zmm8[0]
    zmm6[0] = zmm6[0] - zmm4[0]
    zmm6[0] = zmm6[0] * zmm8[0]
    zmm5[0] = zmm5[0] * zmm7[0]
    zmm5[0] = zmm5[0] * zmm9[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    zmm5[0] = zmm5[0] - zmm6[0]
    zmm4[0] = zmm4[0] - zmm5[0]
    temp0_1[0] = zmm4[0]
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm5[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = zmm5[0]
    *arg1 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)

zmm6 = *arg1
zmm5 = data_143dbb130
float temp0_7[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_9[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_7, temp0_7, 0x4e))
float temp0_11[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x39), temp0_9)
float temp0_12[0x4] = _mm_rsqrt_ps(temp0_11)
float temp0_13[0x4] = _mm_mul_ps(zmm5, temp0_11)
float temp0_18[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_12, temp0_12), temp0_13)), temp0_12), 
    temp0_12)
float temp0_21[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_18, temp0_18), temp0_13))
float temp0_23[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_11, 2)
*arg1 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_21, temp0_18), temp0_18), zmm6) ^ data_143dbb120, 
    temp0_23) ^ data_143dbb120
return arg1
