// 函数: sub_140ad6660
// 地址: 0x140ad6660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *(arg2 + 4)
float zmm4[0x4] = *arg2
float zmm0[0x4] = *(arg3 + 4)
float zmm3[0x4] = *(arg2 + 8)
float zmm6[0x4] = *(arg3 + 8)
float zmm7[0x4] = *arg3
zmm0[0] = zmm0[0] * zmm5[0]
zmm7[0] = zmm7[0] * zmm4[0]
zmm6[0] = zmm6[0] * zmm3[0]
zmm7[0] = zmm7[0] + zmm0[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] + 1f

if (zmm7[0] < 9.99999997e-07f)
    zmm3 ^= data_142d3f780
    int32_t var_2c_1 = 0
    float zmm2[0x4] = __andps_xmmxud_memxud(zmm4, data_142d3f770)
    zmm0 = __andps_xmmxud_memxud(zmm5, data_142d3f770)
    float var_38_1
    
    if (zmm2[0] <= zmm0[0])
        float var_34_2 = zmm3[0]
        float var_30_2 = zmm5[0]
        var_38_1 = 0f
    else
        var_38_1 = zmm3[0]
        float var_30_1 = zmm4[0]
        int32_t var_34_1 = 0
    
    *arg1 = var_38_1.o
else
    zmm3[0] = zmm3[0] f* *(arg3 + 4)
    zmm6[0] = zmm6[0] * zmm5[0]
    zmm6[0] = zmm6[0] * zmm4[0]
    zmm4[0] = zmm4[0] f* *(arg3 + 4)
    zmm6[0] = zmm6[0] - zmm3[0]
    zmm3[0] = zmm3[0] * zmm7[0]
    zmm7[0] = zmm7[0] * zmm5[0]
    float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    zmm3[0] = zmm3[0] - zmm6[0]
    zmm4[0] = zmm4[0] - zmm7[0]
    temp0[0] = zmm3[0]
    float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
    temp0_1[0] = zmm4[0]
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
    temp0_2[0] = zmm7[0]
    *arg1 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)

zmm6 = *arg1
zmm5 = data_143dbb130
float temp0_6[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_8[0x4] = _mm_add_ps(temp0_6, _mm_shuffle_ps(temp0_6, temp0_6, 0x4e))
float temp0_10[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x39), temp0_8)
float temp0_11[0x4] = _mm_rsqrt_ps(temp0_10)
float temp0_12[0x4] = _mm_mul_ps(zmm5, temp0_10)
float temp0_17[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_12)), temp0_11), 
    temp0_11)
float temp0_20[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_17, temp0_17), temp0_12))
float temp0_22[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_10, 2)
*arg1 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_20, temp0_17), temp0_17), zmm6) ^ data_143dbb120, 
    temp0_22) ^ data_143dbb120
return arg1
