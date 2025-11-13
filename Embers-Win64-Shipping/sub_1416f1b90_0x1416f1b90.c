// 函数: sub_1416f1b90
// 地址: 0x1416f1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg3
float zmm0[0x4] = *(arg4 + 8)
float temp0[0x4] = _mm_unpacklo_ps(*(arg4 + 4), 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg4, zmm0[0].q), temp0[0].q)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_1)
float temp0_10[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_6, temp0_2), temp0_8)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_5, temp0_11)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_1)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_4)
float temp0_20[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_2), temp0_14), temp0_16), arg3[1])
float var_30 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
int64_t rax_1 = *arg1
float temp0_23[0x4] = _mm_unpacklo_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x55)[0].q)
int64_t var_38 = temp0_23.q
void var_28
(*(rax_1 + 0x20))(temp0_23, &var_38, &var_28)
void* result

if (temp0_23[0] f>= *(arg5 + 0x9c))
    result.b = 0
    return result

*(arg5 + 0x9c) = temp0_23[0]
result.b = 1
return result
