// 函数: sub_141a7f930
// 地址: 0x141a7f930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
float zmm5[0x4] = *arg1
float zmm0[0x4] = *(arg1 + 4)
float zmm1[0x4] = *(arg1 + 8)
int32_t zmm2 = *(arg1 + 0xc)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
zmm5 ^= 0x80000000
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
temp0_1[0] = (zmm0 ^ 0x80000000)[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = (zmm1 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_4[0] = zmm2
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
float var_68[0x4] = temp0_5
float temp0_7[0x4] = _mm_mul_ps(temp0, _mm_shuffle_ps(temp0_5, temp0_5, 0x1b))
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_5)
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_7, data_143f2b4e0)
float temp0_11[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(temp0_5, temp0_5, 0x4e))
float temp0_16[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_5, temp0_5, 0xb1))
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143f2b4d0)
float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, data_143f2b4c0)
float var_58[0x4] = _mm_add_ps(_mm_add_ps(temp0_12, temp0_17), temp0_18)
sub_140adf5d0(&var_58, &var_68)
int32_t zmm0_1 = arg3[1]
float zmm1_1 = var_68[0]

if (not(zmm1_1 f< zmm0_1))
    zmm0_1 = _mm_min_ss(arg4[1], zmm1_1)

zmm1_1 = var_68[1]
int32_t var_78 = zmm0_1
zmm0_1 = *arg3

if (not(zmm1_1 f< zmm0_1))
    zmm0_1 = _mm_min_ss(*arg4, zmm1_1)

zmm1_1 = var_68[2]
int32_t var_74 = zmm0_1
zmm0_1 = arg3[2]

if (not(zmm1_1 f< zmm0_1))
    zmm0_1 = _mm_min_ss(arg4[2], zmm1_1)

float var_48[0x4]
float (* rax)[0x4]
float zmm6[0x4]
rax, zmm6 = sub_140ade170(&var_78, &var_48)
float zmm3_1[0x4] = *arg2
float zmm7[0x4] = var_78
float temp0_24[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
float zmm2_1[0x4] = *rax
float zmm5_1[0x4] = zmm2_1 ^ zmm6
float zmm0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55) ^ zmm6
float temp0_26[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
temp0_26[0] = zmm0_2[0]
float zmm1_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa) ^ zmm6
float temp0_28[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc6)
temp0_29[0] = zmm1_2[0]
float temp0_30[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x27)
temp0_31[0] = temp0_28[0]
float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x39)
float temp0_34[0x4] = _mm_mul_ps(temp0_24, _mm_shuffle_ps(temp0_32, temp0_32, 0))
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xff), zmm3_1)
float temp0_37[0x4] = __mulps_xmmps_memps(temp0_34, data_143f2b4e0)
float temp0_38[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
float temp0_39[0x4] = _mm_add_ps(temp0_37, temp0_36)
float temp0_42[0x4] = __mulps_xmmps_memps(
    _mm_mul_ps(temp0_30, _mm_shuffle_ps(temp0_32, temp0_32, 0x55)), data_143f2b4d0)
float temp0_43[0x4] = _mm_unpacklo_ps(zmm7, zmm0_1[0].q)
zmm0_2 = var_68[2]
float temp0_45[0x4] = _mm_mul_ps(temp0_38, _mm_shuffle_ps(temp0_32, temp0_32, 0xaa))
float temp0_46[0x4] = _mm_add_ps(temp0_39, temp0_42)
float temp0_48[0x4] = _mm_unpacklo_ps(temp0_43, _mm_unpacklo_ps(var_74, 0)[0].q)
float temp0_49[0x4] = __mulps_xmmps_memps(temp0_45, data_143f2b4c0)
float temp0_50[0x4] = _mm_unpacklo_ps(var_68[1], 0)
float temp0_51[0x4] = _mm_add_ps(temp0_46, temp0_49)
float temp0_53[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_68[0], zmm0_2[0].q), temp0_50[0].q)
zmm2_1 = data_143f2b520
float temp0_54[0x4] = _mm_sub_ps(temp0_48, temp0_53)
*arg1 = temp0_51
float zmm8[0x4] = data_143f2b510
zmm5_1 = __andps_xmmxud_memxud(zmm8, data_143f2b4f0)
float temp0_56[0x4] = _mm_div_ps(temp0_54, zmm8)
float temp0_58[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_56))
float temp0_64[0x4] = _mm_min_ps(
    _mm_sub_ps(temp0_54, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2_1, __andps_xmmxud_memxud(temp0_56, data_143f2b4f0), 2), 
                temp0_58 ^ temp0_56) ^ temp0_58, 
            zmm8)), 
    zmm5_1)
float temp0_66[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), temp0_64)
float temp0_67[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_66, 2)
float temp0_68[0x4] = _mm_add_ps(temp0_66, zmm8)
zmm2_1 = _mm_and_ps(temp0_68 ^ temp0_66, temp0_67) ^ temp0_68
float temp0_70[0x4] = _mm_cmpeq_ps(data_143f2b500, zmm2_1, 1)
zmm1_2 = _mm_and_ps(_mm_sub_ps(zmm2_1, zmm8) ^ zmm2_1, temp0_70) ^ zmm2_1
uint32_t result
result.b = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0), 
    __andps_xmmxud_memxud(zmm1_2, data_143f2b4f0), 1)) != 0
return result
