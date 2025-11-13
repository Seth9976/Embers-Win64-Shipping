// 函数: sub_141defcb0
// 地址: 0x141defcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141de9410(&data_143f392e4, arg1, arg2)
*result = *arg3
*(result + 0x10) = arg3[1]
*(result + 0x20) = arg3[2]

if (arg4 != 0)
    float zmm2_1[0x4] = arg3[2]
    float zmm3[0x4] = data_143f39080
    uint32_t zmm7[0x4] = data_143f39090
    float zmm8[0x4]
    float zmm9[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(zmm2_1, zmm7), 1)) == 0)
        zmm8 = data_143dbb0c0
        zmm9 = data_143dbb0d0
        zmm7 = data_143dbb0e0
    else
        float zmm0[0x4] = data_143f39070
        zmm8 = __mulps_xmmps_memps(*arg3, data_143f39060)
        float zmm5_1[0x4] = arg3[1]
        zmm0[0].q = zmm2_1 u>> 0x40
        float temp0_5[0x4] = _mm_shuffle_ps(zmm2_1, zmm0, 0xc4)
        uint32_t zmm1[0x4] = _mm_rcp_ps(temp0_5)
        uint32_t temp0_7[0x4] = _mm_and_ps(zmm7, temp0_5)
        float temp0_8[0x4] = _mm_mul_ps(zmm1, zmm1)
        zmm1 = _mm_add_ps(zmm1, zmm1)
        zmm7 = _mm_cmpeq_ps(temp0_7, zmm3, 2)
        float temp0_11[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
        zmm1 = _mm_sub_ps(zmm1, _mm_mul_ps(temp0_8, temp0_5))
        float temp0_14[0x4] = _mm_mul_ps(zmm1, zmm1)
        zmm1 = _mm_sub_ps(_mm_add_ps(zmm1, zmm1), _mm_mul_ps(temp0_14, temp0_5))
        zmm7 = __andps_xmmxud_memxud(_mm_and_ps(zmm7, zx.o(0) ^ zmm1) ^ zmm1, data_143f39050)
        zmm1 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        float temp0_21[0x4] = _mm_mul_ps(zmm5_1, zmm7)
        float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_11)
        float temp0_26[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xd2), zmm1), temp0_23)
        float temp0_27[0x4] = _mm_add_ps(temp0_26, temp0_26)
        float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), zmm1)
        zmm1 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
        float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc9)
        zmm1 = _mm_mul_ps(zmm1, temp0_27)
        float temp0_33[0x4] = _mm_mul_ps(temp0_31, temp0_11)
        zmm1 = _mm_add_ps(zmm1, temp0_21)
        zmm9 = __andps_xmmxud_memxud(
            _mm_sub_ps(zx.o(0), _mm_add_ps(_mm_sub_ps(temp0_29, temp0_33), zmm1)), data_143f39050)
    
    result = sub_141de9410(&data_143f392e4, arg2, arg1)
    *result = zmm8
    *(result + 0x10) = zmm9
    *(result + 0x20) = zmm7

return result
