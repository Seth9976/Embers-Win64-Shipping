// 函数: sub_14230b060
// 地址: 0x14230b060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_c8[0x4]
float (* result)[0x4]
float zmm8[0x4]
result, zmm8 = sub_141f5e2b0(arg1, &var_c8, 0)
float var_98[0x4]

if (not(0f f>= *(arg1 + 0x858)) && *(arg1 + 0x716) == 0)
    float zmm2_1 = var_98[1] f- *(arg1 + 0x8a4)
    float zmm1_1 = var_98[0] f- *(arg1 + 0x8a0)
    float zmm0_1[0x4] = var_98[2]
    zmm0_1[0] = zmm0_1[0] f- *(arg1 + 0x8a8)
    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
    
    if (not(zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1[0] f<= *(arg1 + 0x864)))
        result.b = (*(arg1 + 0x71b) & 8) != 0
        result.b += 1
        *(arg1 + 0x716) = result.b

float var_a8[0x4]
float zmm9[0x4] = var_a8
float var_b8[0x4]
float zmm10[0x4] = var_b8
float zmm11[0x4] = var_c8

if (not(0f f>= *(arg1 + 0x85c)) && *(arg1 + 0x716) == 0)
    float var_18_1[0x4] = zmm8
    float var_88[0x4][0x4]
    result, zmm9, zmm10, zmm11 = sub_1408041d0(arg1 + 0x870, &var_88)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
    float temp0_3[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), result[2])
    float zmm4_1[0x4] = result[1]
    float zmm3_1[0x4] = *result
    float temp0_4[0x4] = _mm_mul_ps(temp0_1, zmm4_1)
    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm3_1)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm3_1)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), zmm3_1)
    float temp0_11[0x4] = _mm_add_ps(temp0_8, temp0_4)
    float temp0_13[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm11, zmm11, 0xff), result[3])
    float temp0_14[0x4] = _mm_add_ps(temp0_11, temp0_3)
    float temp0_16[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm10, zmm10, 0xaa), result[2])
    float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_13)
    float temp0_20[0x4] =
        _mm_add_ps(temp0_6, _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0x55), zmm4_1))
    float temp0_22[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm10, zmm10, 0xff), result[3])
    float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_16)
    float temp0_25[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm9, zmm9, 0xaa), result[2])
    float temp0_26[0x4] = _mm_add_ps(temp0_23, temp0_22)
    float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x55), zmm4_1)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
    temp0_29[0] = temp0_29[0] + temp0_17[0]
    float temp0_30[0x4] = _mm_add_ps(temp0_10, temp0_28)
    float temp0_32[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm9, zmm9, 0xff), result[3])
    float temp0_34[0x4] = _mm_add_ps(_mm_add_ps(temp0_30, temp0_25), temp0_32)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)
    temp0_29[0] = temp0_29[0] + temp0_35[0]
    temp0_29[0] = temp0_29[0] - 1f
    temp0_29[0] = temp0_29[0] * 0.5f
    
    if (not(temp0_29[0] f>= *(arg1 + 0x860)))
        result.b = (*(arg1 + 0x71b) & 8) != 0
        result.b += 1
        *(arg1 + 0x716) = result.b

*(arg1 + 0x870) = zmm11
*(arg1 + 0x880) = zmm10
*(arg1 + 0x890) = zmm9
*(arg1 + 0x8a0) = var_98
return result
