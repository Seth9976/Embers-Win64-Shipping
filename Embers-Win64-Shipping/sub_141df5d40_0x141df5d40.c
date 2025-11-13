// 函数: sub_141df5d40
// 地址: 0x141df5d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
float zmm1[0x4] = arg3[0]
float zmm6[0x4] = *(arg1 + 0x10)
float zmm0[0x4] = *(arg1 + 0x20)
arg3 = data_143a2d2d4
float zmm3[0x4] = data_143a2d2d0
float zmm5[0x4] = data_143f39360
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_1[0x4] = _mm_mul_ps(zmm0, temp0)
float temp0_2[0x4] = _mm_mul_ps(zmm6, temp0)
float temp0_3[0x4] = _mm_unpacklo_ps(arg3, 0)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, data_143a2d2d8[0].q), temp0_3[0].q)
float temp0_6[0x4] = _mm_mul_ps(temp0_2, temp0_2)
float temp0_8[0x4] = _mm_add_ps(temp0_6, _mm_shuffle_ps(temp0_6, temp0_6, 0x4e))
float temp0_10[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x39), temp0_8)
float temp0_11[0x4] = _mm_rsqrt_ps(temp0_10)
float temp0_12[0x4] = _mm_mul_ps(zmm5, temp0_10)
float temp0_17[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_12)), temp0_11), 
    temp0_11)
float temp0_20[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_17, temp0_17), temp0_12))
float temp0_21[0x4] = _mm_cmpeq_ps(data_143f393a0, temp0_10, 2)
float var_88[0x4] = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_20, temp0_17), temp0_17), temp0_2) ^ data_143f39350, 
    temp0_21) ^ data_143f39350
float var_58[0x3][0x4]
float (* rax_2)[0x4] = sub_140ad7d70(arg1 + 0x10, &var_58, &var_88)
float zmm6_1[0x4] = *rax_2
*(arg1 + 0x10) = zmm6_1
*(arg1 + 0x20) = rax_2[1]
float zmm1_1[0x4] = rax_2[2]
float temp0_26[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
*(arg1 + 0x30) = zmm1_1
float zmm5_1[0x4] = data_143f39360
float temp0_28[0x4] = _mm_add_ps(temp0_26, _mm_shuffle_ps(temp0_26, temp0_26, 0x4e))
float temp0_30[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x39), temp0_28)
float temp0_31[0x4] = _mm_rsqrt_ps(temp0_30)
float temp0_32[0x4] = _mm_mul_ps(temp0_30, zmm5_1)
float temp0_37[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_31, temp0_31), temp0_32)), temp0_31), 
    temp0_31)
float temp0_40[0x4] = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_37, temp0_37), temp0_32))
uint32_t zmm0_1[0x4] = _mm_cmpeq_ps(data_143f393a0, temp0_30, 2)
zmm5_1 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_40, temp0_37), temp0_37), zmm6_1) ^ data_143f39350, 
    zmm0_1)
zmm0_1 = var_88
*(arg1 + 0x10) = zmm5_1 ^ data_143f39350
*arg2 = 0
*(arg2 + 4) = 0
*arg2 = 1
*(arg2 + 0x10) = zmm0_1
*(arg2 + 0x30) = temp0_5
*(arg2 + 0x20) = temp0_1
*(arg2 + 0x30) = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143a2d2d0, data_143a2d2d8[0].q), 
    _mm_unpacklo_ps(data_143a2d2d4, 0)[0].q)
*(arg2 + 4) = 0x3f800000
__security_check_cookie(rax_1 ^ &var_a8)
return arg2
