// 函数: sub_141f312d0
// 地址: 0x141f312d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1c0)
void var_28
float (* rax_1)[0x4]
float zmm6_1[0x4]
rax_1, zmm6_1 = sub_140ade170(arg2, &var_28)
float temp0[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x1b)
float zmm2[0x4] = *rax_1
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_5[0x4] = _mm_mul_ps(temp0_3, zmm6_1)
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_2, data_143f3b3b0)
float temp0_7[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_8[0x4] = _mm_add_ps(temp0_6, temp0_5)
float temp0_10[0x4] = _mm_mul_ps(temp0_4, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x4e))
float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xb1))
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_10, data_143f3b3a0)
float temp0_14[0x4] = __mulps_xmmps_memps(temp0_12, data_143f3b390)
float var_38[0x4] = _mm_add_ps(_mm_add_ps(temp0_8, temp0_13), temp0_14)
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
zmm7, zmm8, zmm9, zmm10 = sub_141f3cd60(arg1, &var_28, &var_38)
int64_t zmm0_1 = *(arg1 + 0x11c)
var_38[2] = *(arg1 + 0x124)
var_38[0].q = zmm0_1
return sub_141f48240(arg1, &var_38, &var_28, arg3, zmm7, zmm8, zmm9, zmm10, arg4, arg5)
