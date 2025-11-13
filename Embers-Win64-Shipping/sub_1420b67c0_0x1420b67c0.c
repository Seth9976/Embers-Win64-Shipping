// 函数: sub_1420b67c0
// 地址: 0x1420b67c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_28[0x4]
float (* rax_1)[0x4]
int512_t zmm6
rax_1, zmm6 = sub_140ade170(arg2, &var_28)
zmm6.o = *rax_1
float (* rax_2)[0x4]
float zmm6_1[0x4]
rax_2, zmm6_1 = sub_140ade170(arg3, &var_28)
float temp0[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x1b)
float temp0_1[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x4e)
float zmm2[0x4] = *rax_2
float temp0_3[0x4] = _mm_mul_ps(temp0, _mm_shuffle_ps(zmm2, zmm2, 0))
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6_1)
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_3, data_143f47ea0)
float temp0_7[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xb1)
float temp0_8[0x4] = _mm_add_ps(temp0_6, temp0_5)
float temp0_10[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(zmm2, zmm2, 0x55))
float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_10, data_143f47e90)
float temp0_14[0x4] = __mulps_xmmps_memps(temp0_12, data_143f47e80)
var_28 = _mm_add_ps(_mm_add_ps(temp0_8, temp0_13), temp0_14)
sub_140acd070(arg1, &var_28)
return arg1
