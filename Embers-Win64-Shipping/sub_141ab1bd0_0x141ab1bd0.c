// 函数: sub_141ab1bd0
// 地址: 0x141ab1bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* result)[0x4]
float zmm6[0x4]
result, zmm6 = sub_141e1c570(arg1 + 0x10, arg2, arg3)
uint32_t zmm3[0x4] = *(arg1 + 0x94)
uint32_t temp0[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
uint32_t temp0_1[0x4]

if (not(temp0[0] f> 9.99999975e-05f))
    temp0_1 = _mm_and_ps(*(arg1 + 0x98), 0x7fffffff)

if (temp0[0] f> 9.99999975e-05f || not(temp0_1[0] f<= 9.99999975e-05f))
    float var_18_1[0x4] = zmm6
    uint32_t var_54_1 = (*(arg1 + 0x98))[0]
    int32_t var_50_1 = 0
    uint32_t var_58 = zmm3[0]
    float var_48[0x4]
    float (* rax)[0x4]
    int512_t zmm6_1
    rax, zmm6_1 = sub_140ade170(&var_58, &var_48)
    zmm6_1.o = *rax
    float (* rax_1)[0x4]
    float zmm6_2[0x4]
    rax_1, zmm6_2 = sub_140ade170(arg1 + 0x88, &var_48)
    float zmm5_1[0x4] = data_143f2b830
    float temp0_2[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x1b)
    float zmm10[0x4] = *rax_1
    float (* rax_2)[0x4] = *(arg2 + 8)
    float zmm4_1[0x4] = zmm10 ^ 0x80000000
    float temp0_3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
    float zmm1[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55) ^ 0x80000000
    float temp0_5[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
    temp0_3[0] = zmm1[0]
    float temp0_6[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
    temp0_7[0] = (temp0_5 ^ 0x80000000)[0]
    float zmm2_1[0x4] = *rax_2
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
    temp0_8[0] = temp0_6[0]
    float temp0_9[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x4e)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
    float temp0_12[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_10, temp0_10, 0))
    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xff), zmm6_2)
    float temp0_15[0x4] = __mulps_xmmps_memps(temp0_12, data_143f2b850)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xb1)
    float temp0_17[0x4] = _mm_add_ps(temp0_15, temp0_14)
    float temp0_19[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(temp0_10, temp0_10, 0x55))
    float temp0_21[0x4] = _mm_mul_ps(temp0_16, _mm_shuffle_ps(temp0_10, temp0_10, 0xaa))
    float temp0_22[0x4] = __mulps_xmmps_memps(temp0_19, data_143f2b840)
    float temp0_23[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x1b)
    float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm5_1)
    float temp0_25[0x4] = _mm_add_ps(temp0_17, temp0_22)
    float temp0_26[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x4e)
    float temp0_27[0x4] = _mm_add_ps(temp0_25, temp0_24)
    float temp0_29[0x4] = _mm_mul_ps(temp0_23, _mm_shuffle_ps(temp0_27, temp0_27, 0))
    float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xff), zmm10)
    float temp0_32[0x4] = __mulps_xmmps_memps(temp0_29, data_143f2b850)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xb1)
    float temp0_34[0x4] = _mm_add_ps(temp0_32, temp0_31)
    float temp0_36[0x4] = _mm_mul_ps(temp0_26, _mm_shuffle_ps(temp0_27, temp0_27, 0x55))
    float temp0_38[0x4] = _mm_mul_ps(temp0_33, _mm_shuffle_ps(temp0_27, temp0_27, 0xaa))
    float temp0_39[0x4] = __mulps_xmmps_memps(temp0_36, data_143f2b840)
    float temp0_40[0x4] = _mm_mul_ps(temp0_38, zmm5_1)
    float temp0_42[0x4] = _mm_add_ps(_mm_add_ps(temp0_34, temp0_39), temp0_40)
    float temp0_45[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), _mm_shuffle_ps(temp0_42, temp0_42, 0x1b))
    float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), temp0_42)
    float temp0_48[0x4] = __mulps_xmmps_memps(temp0_45, data_143f2b850)
    float temp0_49[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_50[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_51[0x4] = _mm_add_ps(temp0_48, temp0_47)
    float temp0_53[0x4] = _mm_mul_ps(temp0_49, _mm_shuffle_ps(temp0_42, temp0_42, 0x4e))
    float temp0_55[0x4] = _mm_mul_ps(temp0_50, _mm_shuffle_ps(temp0_42, temp0_42, 0xb1))
    float temp0_56[0x4] = __mulps_xmmps_memps(temp0_53, data_143f2b840)
    float temp0_57[0x4] = _mm_mul_ps(temp0_55, zmm5_1)
    *rax_2 = _mm_add_ps(_mm_add_ps(temp0_51, temp0_56), temp0_57)
    result = *(arg2 + 8)
    zmm5_1 = data_143f2b8b0
    zmm6_2 = *result
    float temp0_60[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
    float temp0_62[0x4] = _mm_add_ps(temp0_60, _mm_shuffle_ps(temp0_60, temp0_60, 0x4e))
    float temp0_64[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x39), temp0_62)
    float temp0_65[0x4] = _mm_rsqrt_ps(temp0_64)
    float temp0_66[0x4] = _mm_mul_ps(temp0_64, zmm5_1)
    float temp0_71[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_65, temp0_65), temp0_66)), 
            temp0_65), 
        temp0_65)
    float temp0_74[0x4] = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_71, temp0_71), temp0_66))
    float temp0_75[0x4] = _mm_cmpeq_ps(data_143f2b8f0, temp0_64, 2)
    *result = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_74, temp0_71), temp0_71), zmm6_2) ^ data_143f2b8a0, 
        temp0_75) ^ data_143f2b8a0

return result
