// 函数: sub_141f313d0
// 地址: 0x141f313d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
float zmm2[0x4] = *arg2
float zmm3[0x4] = *(arg1 + 0x1c0)
float temp0[0x4] = __addps_xmmps_memps(arg2[1], *(arg1 + 0x1d0))
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_1)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_3, data_143f3b3b0)
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
float temp0_9[0x4] = _mm_add_ps(temp0_6, temp0_5)
float temp0_11[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm2, zmm2, 0x55))
float temp0_13[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
float temp0_14[0x4] = __mulps_xmmps_memps(temp0_11, data_143f3b3a0)
float temp0_15[0x4] = _mm_shuffle_ps(temp0, temp0, 0xaa)
float temp0_16[0x4] = __mulps_xmmps_memps(temp0_13, data_143f3b390)
float temp0_17[0x4] = _mm_add_ps(temp0_9, temp0_14)
float temp0_18[0x4] = _mm_unpacklo_ps(temp0, temp0_15[0].q)
float temp0_19[0x4] = _mm_shuffle_ps(temp0, temp0, 0x55)
float temp0_20[0x4] = _mm_add_ps(temp0_17, temp0_16)
float var_38[0x4] = _mm_unpacklo_ps(temp0_18, _mm_unpacklo_ps(temp0_19, 0)[0].q)
float var_28[0x4] = data_142e6da00
float var_48[0x4] = temp0_20
int64_t result = sub_141f4a580(arg1, &var_48, arg3, arg4, arg5)
__security_check_cookie(rax_1 ^ &var_78)
return result
