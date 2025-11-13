// 函数: sub_1405d2e70
// 地址: 0x1405d2e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (0f != *arg1 || 0f != arg1[1] || 0f != arg1[2] || 0f != arg1[3] || 0f != arg1[4] || 1f != arg1[5]
        || 1f != arg1[6] || 0.5f != arg1[7] || 0.5f != arg1[8])
    arg2.d = arg2.d f* 0.5f
    int64_t r8_1
    int128_t zmm0_1
    zmm0_1, r8_1 = tanf(arg2.d)
    int512_t zmm3
    zmm3.o = arg3
    float arg_8
    int512_t zmm2
    int512_t zmm3_1
    int128_t zmm6_1
    int64_t zmm7_1
    zmm2, zmm3_1, zmm6_1, zmm7_1 =
        sub_1405d3110(&arg_8, arg1, r8_1, zmm3, _mm_unpacklo_ps(zx.o(0), 0))
    zmm3_1.o = arg3
    zmm2.o = zmm6_1
    float var_70
    int512_t zmm2_1
    int512_t zmm3_2
    int128_t zmm6_2
    int64_t zmm7_2
    float zmm8_1[0x4]
    zmm2_1, zmm3_2, zmm6_2, zmm7_2, zmm8_1 =
        sub_1405d3110(&var_70, arg1, r8_1, zmm3_1, _mm_unpacklo_ps(0x3f000000, zmm7_1))
    zmm3_2.o = arg3
    zmm2_1.o = zmm6_2
    float var_88
    int512_t zmm2_2
    int512_t zmm3_3
    int128_t zmm6_3
    float zmm8_2[0x4]
    zmm2_2, zmm3_3, zmm6_3, zmm8_2 =
        sub_1405d3110(&var_88, arg1, r8_1, zmm3_2, (_mm_unpacklo_ps(zmm8_1, zmm7_2)).q)
    zmm3_3.o = arg3
    zmm2_2.o = zmm6_3
    float var_60
    int512_t zmm2_3
    int512_t zmm3_4
    int128_t zmm6_4
    float zmm8_3[0x4]
    zmm2_3, zmm3_4, zmm6_4, zmm8_3 =
        sub_1405d3110(&var_60, arg1, r8_1, zmm3_3, (_mm_unpacklo_ps(zmm8_2, 0x3f000000)).q)
    zmm3_4.o = arg3
    zmm2_3.o = zmm6_4
    float var_80
    int512_t zmm2_4
    int512_t zmm3_5
    int128_t zmm6_5
    int64_t zmm8_4
    zmm2_4, zmm3_5, zmm6_5, zmm8_4 =
        sub_1405d3110(&var_80, arg1, r8_1, zmm3_4, (_mm_unpacklo_ps(zmm8_3, zmm8_3[0].q)).q)
    zmm3_5.o = arg3
    zmm2_4.o = zmm6_5
    float var_78
    int512_t zmm2_5
    int512_t zmm3_6
    int128_t zmm6_6
    int64_t zmm8_5
    zmm2_5, zmm3_6, zmm6_6, zmm8_5 =
        sub_1405d3110(&var_78, arg1, r8_1, zmm3_5, _mm_unpacklo_ps(0x3f000000, zmm8_4))
    zmm3_6.o = arg3
    zmm2_5.o = zmm6_6
    float arg_20
    int512_t zmm2_6
    int512_t zmm3_7
    int128_t zmm6_7
    zmm2_6, zmm3_7, zmm6_7 =
        sub_1405d3110(&arg_20, arg1, r8_1, zmm3_6, _mm_unpacklo_ps(zx.o(0), zmm8_5))
    zmm3_7.o = arg3
    zmm2_6.o = zmm6_7
    float var_68
    float zmm6_8
    result, zmm6_8 =
        sub_1405d3110(&var_68, arg1, r8_1, zmm3_7, _mm_unpacklo_ps(zx.o(0), 0x3f000000))
    int32_t var_7c
    int32_t var_74
    float temp0_9[0x4] = __maxss_xmmss_memss(var_7c[0], var_74)
    int32_t var_6c
    float temp0_10 = __minss_xmmss_memss(arg4, var_6c)
    float temp0_11[0x4] = __maxss_xmmss_memss(arg_8[0], arg_20)
    float zmm1[0x4] = __maxss_xmmss_memss(temp0_9[0], arg5) ^ data_142d3f780
    int32_t var_84
    float temp0_13 = __minss_xmmss_memss(temp0_10, var_84)
    float temp0_14[0x4] = __maxss_xmmss_memss(temp0_11[0], var_68)
    float temp0_15[0x4] = _mm_max_ss(zmm1[0], temp0_13)
    float zmm2_7[0x4] = temp0_14 ^ data_142d3f780
    float zmm4_1 = zmm6_8 f/ arg3.d / temp0_15[0]
    float temp0_17[0x4] = __minss_xmmss_memss(__minss_xmmss_memss(var_88[0], var_60)[0], var_80)
    _mm_max_ss(zmm4_1 * 0.5f, zmm6_8 / _mm_max_ss(zmm2_7[0], temp0_17[0])[0] * 0.5f)

return result
