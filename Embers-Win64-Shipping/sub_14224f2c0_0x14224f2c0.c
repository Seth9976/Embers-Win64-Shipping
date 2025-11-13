// 函数: sub_14224f2c0
// 地址: 0x14224f2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
sub_14223a0f0(&var_98, arg1, arg3, arg6[0x1d].d)
float zmm1[0x4] = *arg2
float temp0[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_3[0x4] = _mm_mul_ps(zmm1, temp0)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0, temp0, 0x29), temp0_1)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0, temp0, 0x12), temp0_2)
zmm1 = arg2[2]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
float temp0_9[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_3, temp0_3, 1))
float zmm4[0x4] = data_143f515b0
float temp0_12[0x4] = _mm_add_ps(temp0_7, temp0_5)
float temp0_13[0x4] = _mm_sub_ps(temp0_5, temp0_7)
float temp0_14[0x4] = _mm_sub_ps(zmm4, temp0_11)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm1)
float temp0_16[0x4] = _mm_mul_ps(temp0_9, temp0_13)
float zmm3[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_14, zmm1), data_143f515c0)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x32)
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm3, 0), temp0_19, 0x82)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_15, zmm3, 0x31)
float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0x10), temp0_22, 0x88)
float zmm0[0x4] = arg2[1]
zmm4[0].q = zmm0 u>> 0x40
float temp0_25[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
float temp0_26[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, zmm3, 0xe8)
float var_28[0x4] = temp0_26
float var_58[0x4] = temp0_21
float var_48[0x4] = temp0_24
float var_38[0x4] = temp0_27
sub_141fe3230(&var_98, &var_58, arg4, 0, 0, 0, arg5, arg6)
int64_t var_70
sub_140a74f90(var_70)
int64_t var_68
sub_140a74f90(var_68)
return sub_141fd8140(&var_98)
