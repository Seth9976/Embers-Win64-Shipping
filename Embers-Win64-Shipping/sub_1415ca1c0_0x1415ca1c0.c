// 函数: sub_1415ca1c0
// 地址: 0x1415ca1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
*arg1 = 0x3f800000
arg1[1].d = 0
arg1[3].d = 0x7f7fffff
float var_88[0x3][0x4]
float (* rax_2)[0x4] = sub_140ad7d70(arg5, &var_88, arg3)
int32_t var_f8 = 0
float var_b8[0x4] = *rax_2
int128_t var_a8 = rax_2[1]
float var_98[0x4] = rax_2[2]
float var_f4
int32_t var_f0
int32_t var_e0
int64_t var_d0[0x3]
char rax_4
float zmm6[0x4]
rax_4, zmm6 =
    sub_1415fcee0(arg2, arg4, &var_b8, &var_f4, &var_f0, &var_d0, &var_e0, 0, arg6, 0, &var_f8)

if (rax_4 != 0)
    float zmm5_1[0x4] = *arg3
    int32_t var_ec
    float temp0_1[0x4] = _mm_unpacklo_ps(var_ec, 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float var_38_1[0x4] = zmm6
    int32_t var_e8
    float temp0_6[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_f0, var_e8[0].q), temp0_1[0].q), arg3[2])
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xc9), temp0_2)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xd2), temp0_3), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_2)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_6)
    zmm6 = var_e0
    float temp0_22[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_3), temp0_16), temp0_18), arg3[1])
    float var_e8_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    float temp0_25[0x4] = _mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)
    int32_t var_dc
    float temp0_26[0x4] = _mm_unpacklo_ps(var_dc, 0)
    *(arg1 + 0xc) = temp0_25.q
    int32_t var_d8
    float temp0_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, var_d8[0].q), temp0_26[0].q)
    *(arg1 + 0x14) = var_e8_1
    zmm5_1 = *arg3
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
    float temp0_30[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_31[0x4] = _mm_mul_ps(temp0_29, temp0_30)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_32)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_36[0x4] = _mm_sub_ps(temp0_34, temp0_31)
    float temp0_37[0x4] = _mm_add_ps(temp0_36, temp0_36)
    float temp0_38[0x4] = _mm_mul_ps(temp0_35, temp0_37)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0xc9), temp0_30)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xd2)
    float temp0_42[0x4] = _mm_add_ps(temp0_38, temp0_28)
    float temp0_45[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_41, temp0_32), temp0_40), temp0_42)
    *arg1 = (_mm_unpacklo_ps(temp0_45 ^ 0x80000000, 
        (_mm_shuffle_ps(temp0_45, temp0_45, 0x55) ^ 0x80000000)[0].q)).q
    float zmm0_1[0x4] = var_f4
    float zmm4_1[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xaa) ^ 0x80000000
    arg1[3].d = (zmm0_1 ^ 0x80000000)[0]
    arg1[1].d = zmm4_1[0]

__security_check_cookie(rax_1 ^ &var_158)
return arg1
