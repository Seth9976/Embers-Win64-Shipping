// 函数: sub_1416f5f00
// 地址: 0x1416f5f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int128_t zmm1 = arg3[1]
int128_t zmm9 = arg10
int32_t var_108 = 0x7f7fffff
int128_t var_d8 = *arg3
void* var_e8 = arg1 + 0x10
void* var_a8 = arg2
int128_t var_b8 = arg3[2]
int32_t var_98 = zmm9.d
int32_t var_ec = 0xffffffff
int128_t var_c8 = zmm1
float* var_a0 = arg4
char var_94 = arg11
int32_t var_138
sub_141731000(arg2, &var_138)
float zmm5[0x4] = *arg3
int32_t var_124
float zmm2[0x4] = var_124
int32_t var_130
zmm2[0] = zmm2[0] f- var_130
int32_t var_12c
float zmm8[0x4] = var_12c
int32_t var_128
float zmm7[0x4] = var_128
zmm8[0] = zmm8[0] f- var_138
int32_t var_134
zmm7[0] = zmm7[0] f- var_134
zmm2[0] = zmm2[0] * 0.5f
zmm8[0] = zmm8[0] * 0.5f
zmm2[0] = zmm2[0] f+ var_130
zmm7[0] = zmm7[0] * 0.5f
zmm8[0] = zmm8[0] f+ var_138
zmm7[0] = zmm7[0] f+ var_134
float temp0[0x4] = _mm_unpacklo_ps(zmm8, zmm2[0].q)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_3[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm7, 0)[0].q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_4)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_1)
float temp0_9[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_6)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_4)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_3)
float temp0_20[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_1), temp0_14), temp0_16), arg3[1])
float var_130_1 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
zmm8[0] = zmm8[0] f+ zmm9.d
zmm7[0] = zmm7[0] f+ zmm9.d
int64_t var_120 = (_mm_unpacklo_ps(temp0_20, temp0_22[0].q)).q
float var_118 = var_130_1
float var_140 = &var_108
float var_148 = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).d
int32_t result
int32_t zmm6_1
result, zmm6_1 = sub_141684040(arg1, &var_120, arg4, arg5[0], var_148, var_140, var_138)
int64_t zmm0_2 = var_108

if (zmm0_2.d f> zmm6_1)
    result.b = 0
else
    *arg6 = zmm0_2.d
    int64_t var_104
    *arg7 = var_104
    int32_t var_fc
    arg7[1].d = var_fc
    int64_t var_f8
    *arg8 = var_f8
    int32_t var_f0
    arg8[1].d = var_f0
    *arg9 = var_ec
    result.b = 1

__security_check_cookie(rax_1 ^ &var_168)
return result
