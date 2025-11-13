// 函数: sub_14224e380
// 地址: 0x14224e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg2
float zmm0[0x4] = *arg3
float zmm1[0x4] = *(arg3 + 8)
zmm0[0] = zmm0[0] * 0.5f
zmm1[0] = zmm1[0] * 0.5f
zmm0[0] = zmm0[0] f* *(arg1 + 0x48)
zmm1[0] = zmm1[0] f* *(arg1 + 0x50)
float var_78 = zmm0[0]
zmm0 = *(arg3 + 4)
zmm0[0] = zmm0[0] * 0.5f
float temp0[0x4] = _mm_add_ps(zmm4, zmm4)
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 4)
zmm0[0] = zmm0[0] f* *(arg1 + 0x4c)
float temp0_2[0x4] = _mm_mul_ps(zmm4, temp0)
float var_74 = zmm0[0]
float temp0_4[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
float var_70 = zmm1[0]
zmm1 = arg2[2]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x1a)
float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), temp0_6)
float temp0_11[0x4] = _mm_add_ps(temp0_5, _mm_shuffle_ps(temp0_2, temp0_2, 1))
float temp0_12[0x4] = _mm_add_ps(temp0_9, temp0_4)
float temp0_13[0x4] = _mm_sub_ps(temp0_4, temp0_9)
zmm4 = data_143f515b0
float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm1)
float temp0_15[0x4] = _mm_mul_ps(temp0_7, temp0_13)
float zmm3[0x4] =
    __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_11), zmm1), data_143f515c0)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, zmm3, 0x32)
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm3, 0), temp0_19, 0x82)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_14, zmm3, 0x31)
float var_68[0x4] = temp0_21
float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm3, 0x10), temp0_22, 0x88)
zmm0 = arg2[1]
float var_58[0x4] = temp0_24
zmm4[0].q = zmm0 u>> 0x40
float var_38[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
float var_48[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, temp0_15, 0x12), zmm3, 0xe8)
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
return sub_14229e880(&var_68, &var_78, arg4, 0, zmm10, zmm11, zmm12, arg5, arg6)
