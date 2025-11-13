// 函数: sub_1416f6af0
// 地址: 0x1416f6af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
float zmm3[0x4] = *(arg2 + 0x18)
float zmm1[0x4] = arg3[1]
float zmm8[0x4] = *(arg2 + 0x10)
float zmm9[0x4] = *(arg2 + 0x14)
int128_t zmm7 = arg10
int32_t var_e8 = 0x7f7fffff
float var_b8[0x4] = *arg3
float var_98[0x4] = arg3[2]
float var_a8[0x4] = zmm1
zmm1 = *(arg2 + 0x1c)
zmm3[0] = zmm3[0] + zmm1[0]
void* var_c8 = arg1 + 0x10
zmm9[0] = zmm9[0] - zmm1[0]
zmm3[0] = zmm3[0] - zmm1[0]
int32_t var_78 = zmm7.d
zmm8[0] = zmm8[0] - zmm1[0]
int32_t var_cc = 0xffffffff
zmm8[0] = zmm8[0] + zmm1[0]
void* var_88 = arg2
zmm9[0] = zmm9[0] + zmm1[0]
float* var_80 = arg4
char var_74 = arg11
zmm3[0] = zmm3[0] - zmm3[0]
zmm8[0] = zmm8[0] - zmm8[0]
zmm9[0] = zmm9[0] - zmm9[0]
zmm3[0] = zmm3[0] * 0.5f
zmm8[0] = zmm8[0] * 0.5f
zmm9[0] = zmm9[0] * 0.5f
zmm3[0] = zmm3[0] + zmm3[0]
zmm8[0] = zmm8[0] + zmm8[0]
zmm9[0] = zmm9[0] + zmm9[0]
float temp0[0x4] = _mm_unpacklo_ps(zmm8, zmm3[0].q)
float zmm5[0x4] = *arg3
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm9, 0)[0].q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xc9), temp0_3)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xd2), temp0_6)
float temp0_9[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_5)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_3)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_2)
float temp0_20[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_6), temp0_14), temp0_16), arg3[1])
float var_f0 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
float temp0_23[0x4] = _mm_unpacklo_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x55)[0].q)
zmm8[0] = zmm8[0] f+ zmm7.d
zmm9[0] = zmm9[0] f+ zmm7.d
int32_t* var_108 = temp0_23.q
float var_100 = var_f0
float var_110 = &var_e8
int32_t var_118 = (_mm_unpacklo_ps(zmm8, zmm9[0].q)).d
int32_t result
int32_t zmm6_1
result, zmm6_1 = sub_1416883c0(arg1, &var_108, arg4, arg5[0], var_118, var_110, var_108)
int64_t zmm0_1 = var_e8

if (zmm0_1.d f> zmm6_1)
    result.b = 0
else
    *arg6 = zmm0_1.d
    int64_t var_e4
    *arg7 = var_e4
    int32_t var_dc
    arg7[1].d = var_dc
    int64_t var_d8
    *arg8 = var_d8
    int32_t var_d0
    arg8[1].d = var_d0
    *arg9 = var_cc
    result.b = 1

__security_check_cookie(rax_1 ^ &var_138)
return result
