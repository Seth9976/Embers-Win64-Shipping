// 函数: sub_1416f1c80
// 地址: 0x1416f1c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg3
float zmm0[0x4] = *(arg4 + 8)
int64_t rax = *arg1
float temp0[0x4] = _mm_unpacklo_ps(*(arg4 + 4), 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg4, zmm0[0].q), temp0[0].q)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_2)
float temp0_10[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_6, temp0_1), temp0_8)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_5, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_1)
float temp0_16[0x4] = _mm_mul_ps(temp0_13, temp0_2)
float temp0_17[0x4] = _mm_add_ps(temp0_12, temp0_4)
float temp0_20[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_15, temp0_16), temp0_17), arg3[1])
float var_38 = temp0_20[0]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
float var_30 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
float var_34 = temp0_21[0]
void var_28
(*(rax + 0x20))(temp0_21, &var_38, &var_28)
temp0_21[0] = temp0_21[0] f- arg5

if (temp0_21[0] >= -9.99999975e-05f)
    int64_t rax_1
    rax_1.b = 0
    return rax_1

float zmm1[0x4] = var_38
float zmm2[0x4] = var_34
zmm0 = var_30
zmm1[0] = zmm1[0] * temp0_21[0]
zmm2[0] = zmm2[0] * temp0_21[0]
zmm1[0] = zmm1[0] f+ *(arg7 + 0x90)
zmm0[0] = zmm0[0] * temp0_21[0]
zmm2[0] = zmm2[0] f+ *(arg7 + 0x94)
zmm0[0] = zmm0[0] f+ *(arg7 + 0x98)
*(arg7 + 0x90) = zmm1[0]
*(arg7 + 0x94) = zmm2[0]
*(arg7 + 0x98) = zmm0[0]
temp0_21[0] = temp0_21[0] f+ *arg6
*arg6 = temp0_21[0]
int32_t* rax_3
rax_3.b = 1
return rax_3
