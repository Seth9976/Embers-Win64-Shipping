// 函数: sub_1420c7df0
// 地址: 0x1420c7df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_28[0x4]
float (* rax)[0x4] = sub_140ade170(arg3, &var_28)
float zmm3[0x4] = *arg2
float zmm6[0x4] = zmm3 ^ 0x80000000
float zmm4[0x4] = *rax
float zmm1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55) ^ 0x80000000
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_2[0] = zmm1[0]
float zmm2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa) ^ 0x80000000
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_4[0] = zmm2[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x4e)
temp0_6[0] = temp0_5[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
float var_38[0x4] = temp0_8
float temp0_10[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0_8, temp0_8, 0))
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xff), zmm4)
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_10, data_143f47ea0)
float temp0_14[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xb1)
float temp0_15[0x4] = _mm_add_ps(temp0_13, temp0_12)
float temp0_17[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_8, temp0_8, 0x55))
float temp0_19[0x4] = _mm_mul_ps(temp0_14, _mm_shuffle_ps(temp0_8, temp0_8, 0xaa))
float temp0_20[0x4] = __mulps_xmmps_memps(temp0_17, data_143f47e90)
float temp0_21[0x4] = __mulps_xmmps_memps(temp0_19, data_143f47e80)
var_38 = _mm_add_ps(_mm_add_ps(temp0_15, temp0_20), temp0_21)
sub_140adf5d0(&var_38, arg1)
return arg1
