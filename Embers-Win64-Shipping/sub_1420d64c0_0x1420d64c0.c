// 函数: sub_1420d64c0
// 地址: 0x1420d64c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18[0x4]
float (* rax)[0x4] = sub_140ade170(arg3, &var_18)
float zmm2[0x4] = *arg2
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float zmm3[0x4] = *rax
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_2, data_143f47ea0)
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
float temp0_8[0x4] = _mm_add_ps(temp0_6, temp0_5)
float temp0_10[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(zmm2, zmm2, 0x55))
float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_10, data_143f47e90)
float temp0_14[0x4] = __mulps_xmmps_memps(temp0_12, data_143f47e80)
float var_28[0x4] = _mm_add_ps(_mm_add_ps(temp0_8, temp0_13), temp0_14)
sub_140adf5d0(&var_28, arg1)
return arg1
