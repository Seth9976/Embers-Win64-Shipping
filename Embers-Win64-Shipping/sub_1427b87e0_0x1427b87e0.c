// 函数: sub_1427b87e0
// 地址: 0x1427b87e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
*(arg1 + 0x38) = arg2.d
*(arg1 + 0x40) = *arg3
*(arg1 + 0x48) = arg3[1].d
*(arg1 + 0x4c) = *arg4
*(arg1 + 0x54) = arg4[1].d
void* result = *(arg1 + 0x90)
*(arg1 + 0x3c) = arg5.d

if (result != 0)
    float zmm7[0x4] = *(result + 0x1c0)
    float var_78[0x4] = zmm7
    uint128_t var_68_1 = *(result + 0x1d0)
    uint128_t zmm2 = *(result + 0x1e0)
    uint128_t var_58_1 = zmm2
    uint128_t zmm0
    
    if (*(arg1 + 0x98) != result)
        int32_t var_90_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        *(arg1 + 0xa0) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
        *(arg1 + 0xa8) = var_90_1
        zmm2.d = 1f f/ *(arg1 + 0xa8)
        zmm0.d = zmm2.d f* *(arg1 + 0xa0)
        arg2.d = zmm2.d f* *(arg1 + 0xa4)
        zmm2.d = zmm2.d f* *(arg1 + 0xa8)
        *(arg1 + 0xa0) = zmm0.d
        *(arg1 + 0xa4) = arg2.d
        *(arg1 + 0xa8) = zmm2.d
        *(arg1 + 0x98) = *(arg1 + 0x90)
    
    zmm0 = *(arg1 + 0x48)
    float zmm3[0x4] = *(arg1 + 0x40)
    uint128_t zmm6 = zmm7 ^ data_142d3f780
    zmm2 = _mm_unpacklo_ps(*(arg1 + 0x44), 0)
    zmm6.d = zmm6.d f+ zmm6.d
    float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), zmm2.q)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    float var_68_2[0x4] = temp0_6
    zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    temp0_7[0] = temp0_7[0] + temp0_7[0]
    zmm0.d = zmm6.d f* zmm2.d
    float temp0_9[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
    arg2.d = temp0_7.d f* temp0_9[0]
    arg2.d = arg2.d f- zmm0.d
    temp0_7[0] = temp0_7[0] * temp0_7[0]
    zmm0.d = temp0_7.d f* zmm2.d
    int32_t var_98 = arg2.d
    arg2 = zmm6
    zmm6.d = zmm6.d f* zmm7[0]
    arg2.d = arg2.d f* temp0_9[0]
    zmm6.d = zmm6.d f- temp0_7[0]
    arg2.d = arg2.d f+ zmm0.d
    zmm6.d = zmm6.d f+ 1f
    int32_t var_94_1 = arg2.d
    int32_t var_90_2 = zmm6.d
    float var_88[0x4]
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    zmm7_1, zmm8_1 = sub_140ad6800(&var_88, &var_98, arg1 + 0x4c)
    float zmm2_1[0x4] = var_88
    int64_t* rcx_1 = *(arg1 + 0x90)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0x1b), temp0_10)
    char var_a8_1 = 0
    float temp0_13[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x4e)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm7_1)
    float temp0_16[0x4] = __mulps_xmmps_memps(temp0_12, data_143f889e0)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xb1)
    float temp0_18[0x4] = _mm_add_ps(temp0_16, temp0_15)
    float temp0_19[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_21[0x4] = _mm_mul_ps(temp0_17, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
    zmm8_1[0] = zmm8_1[0] f* *(arg1 + 0xa4)
    float temp0_22[0x4] = _mm_mul_ps(temp0_13, temp0_19)
    float temp0_23[0x4] = __mulps_xmmps_memps(temp0_21, data_143f889c0)
    float temp0_25[0x4] = _mm_add_ps(temp0_18, __mulps_xmmps_memps(temp0_22, data_143f889d0))
    float temp0_26[0x4] = _mm_unpacklo_ps(zmm8_1, 0)
    var_78 = _mm_add_ps(temp0_25, temp0_23)
    zmm8_1[0] = zmm8_1[0] f* *(arg1 + 0xa0)
    zmm8_1[0] = zmm8_1[0] f* *(arg1 + 0xa8)
    float var_58_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_1, zmm8_1[0].q), temp0_26[0].q)
    result = sub_141f4a580(rcx_1, &var_78, 0, 0, var_a8_1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
