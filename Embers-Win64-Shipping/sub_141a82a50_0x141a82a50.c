// 函数: sub_141a82a50
// 地址: 0x141a82a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = arg1[1]
float zmm11[0x4] = arg2[1]
int96_t var_e8 = (*(arg3 + 0x10)).12
float temp0[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
float var_128 = zmm10[0]
float var_124 = temp0_2[0]
float var_120 = temp0_3[0]
float var_118 = zmm11[0]
float var_114 = temp0[0]
float var_110 = temp0_1[0]
float var_c8 = temp0[0]
float var_b8[0x4] = temp0_1
int32_t var_108
int32_t var_f8
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm10_1[0x4]
float zmm11_1[0x4]
float zmm12_1[0x4]
int64_t zmm13_1
zmm7_1, zmm8_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 = sub_141a831f0(&var_128, &var_118, &var_f8, 
    arg4, arg5, &var_108, &var_f8, arg6, arg7.d, arg8, arg9.d, arg10)
int32_t zmm14 = data_143dbb200
zmm7_1[0] = zmm7_1[0] - zmm12_1[0]
int32_t zmm15 = data_143dbb1fc
zmm8_1[0] = zmm8_1[0] f- zmm13_1.d
float zmm4[0x4] = 0x3f000000
zmm11_1[0] = zmm11_1[0] - zmm10_1[0]
zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
float zmm1_1 = zmm8_1[0] * zmm8_1[0]
zmm11_1[0] = zmm11_1[0] * zmm11_1[0]
zmm7_1[0] = zmm7_1[0] + zmm11_1[0]
zmm7_1[0] = zmm7_1[0] + zmm1_1

if (zmm7_1[0] == 1f)
    goto label_141a82c7e

float zmm3_1[0x4]

if (zmm7_1[0] >= 9.99999994e-09f)
    zmm3_1 = zx.o(0)
    zmm4 = 0x3f000000
    zmm3_1[0] = zmm7_1[0]
    float zmm2[0x4] = 0x3f000000
    float temp0_4[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
    zmm3_1[0] = zmm3_1[0] * 0.5f
    temp0_4[0] = temp0_4[0] * temp0_4[0]
    zmm2[0] = 0.5f - zmm3_1[0] * temp0_4[0]
    temp0_4[0] = temp0_4[0] * zmm2[0]
    temp0_4[0] = temp0_4[0] + temp0_4[0]
    zmm3_1[0] = zmm3_1[0] * temp0_4[0] * temp0_4[0]
    zmm4[0] = 0.5f - zmm3_1[0]
    temp0_4[0] = temp0_4[0] * zmm4[0]
    zmm4 = 0x3f000000
    temp0_4[0] = temp0_4[0] + temp0_4[0]
    zmm11_1[0] = zmm11_1[0] * temp0_4[0]
    zmm7_1[0] = zmm7_1[0] * temp0_4[0]
    zmm8_1[0] = zmm8_1[0] * temp0_4[0]
label_141a82c7e:
    zmm3_1 = data_143dbb1f8
    float var_110_2 = zmm8_1[0]
    float var_114_2 = zmm7_1[0]
    var_118 = zmm11_1[0]
else
    zmm3_1 = data_143dbb1f8
    var_118 = zmm3_1[0]
    int32_t var_114_1 = zmm15
    int32_t var_110_1 = zmm14

float zmm6[0x4] = var_108
int32_t var_104
zmm7_1 = var_104
zmm6[0] = zmm6[0] - zmm10_1[0]
int32_t var_100
zmm8_1 = var_100
zmm7_1[0] = zmm7_1[0] - zmm12_1[0]
zmm8_1[0] = zmm8_1[0] f- zmm13_1.d
zmm6[0] = zmm6[0] * zmm6[0]
zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
zmm1_1 = zmm8_1[0] * zmm8_1[0]
zmm7_1[0] = zmm7_1[0] + zmm6[0]
zmm7_1[0] = zmm7_1[0] + zmm1_1

if (zmm7_1[0] == 1f)
    goto label_141a82d5a

if (zmm7_1[0] >= 9.99999994e-09f)
    float temp0_5[0x4] = _mm_rsqrt_ss(zmm7_1[0], zmm7_1[0])
    zmm7_1[0] = zmm7_1[0] * zmm4[0]
    temp0_5[0] = temp0_5[0] * temp0_5[0]
    zmm4[0] = zmm4[0] - zmm7_1[0] * temp0_5[0]
    temp0_5[0] = temp0_5[0] * zmm4[0]
    temp0_5[0] = temp0_5[0] + temp0_5[0]
    zmm7_1[0] = zmm7_1[0] * temp0_5[0] * temp0_5[0]
    zmm4[0] = zmm4[0] - zmm7_1[0]
    temp0_5[0] = temp0_5[0] * zmm4[0]
    temp0_5[0] = temp0_5[0] + temp0_5[0]
    zmm6[0] = zmm6[0] * temp0_5[0]
    zmm7_1[0] = zmm7_1[0] * temp0_5[0]
    zmm8_1[0] = zmm8_1[0] * temp0_5[0]
label_141a82d5a:
    float var_120_2 = zmm8_1[0]
    float var_124_2 = zmm7_1[0]
    var_128 = zmm6[0]
else
    var_128 = zmm3_1[0]
    int32_t var_124_1 = zmm15
    int32_t var_120_1 = zmm14

float var_d8[0x4]
sub_140ad6660(&var_d8, &var_118, &var_128)
float zmm3_2[0x4] = *arg1
float zmm2_1[0x4] = var_d8
float zmm6_1[0x4] = var_e8.d
float zmm7_2[0x4] = var_e8:4.d
zmm6_1[0] = zmm6_1[0] - zmm11_1[0]
zmm7_2[0] = zmm7_2[0] - var_c8
zmm8_1 = var_e8:8.d
zmm8_1[0] = zmm8_1[0] - var_b8[0]
float temp0_6[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0x1b), temp0_6)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm3_2)
float temp0_11[0x4] = __mulps_xmmps_memps(temp0_8, data_143f2b4e0)
float temp0_12[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x4e)
float temp0_13[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xb1)
float temp0_14[0x4] = _mm_add_ps(temp0_11, temp0_10)
float temp0_15[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_17[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
float temp0_18[0x4] = _mm_mul_ps(temp0_12, temp0_15)
zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
float temp0_19[0x4] = __mulps_xmmps_memps(temp0_17, data_143f2b4c0)
float temp0_21[0x4] = _mm_add_ps(temp0_14, __mulps_xmmps_memps(temp0_18, data_143f2b4d0))
float temp0_22[0x4] = _mm_unpacklo_ps(zmm12_1, 0)
zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
float temp0_23[0x4] = _mm_add_ps(temp0_21, temp0_19)
float temp0_25[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm10_1, zmm13_1), temp0_22[0].q)
zmm7_2[0] = zmm7_2[0] * zmm7_2[0]
*arg1 = temp0_23
arg1[1] = temp0_25
zmm14 = data_143dbb200
zmm7_2[0] = zmm7_2[0] + zmm6_1[0]
zmm15 = data_143dbb1fc
zmm7_2[0] = zmm7_2[0] + zmm8_1[0]

if (zmm7_2[0] == 1f)
    goto label_141a82ee2

float zmm4_1[0x4]

if (zmm7_2[0] >= 9.99999994e-09f)
    zmm4_1 = 0x3f000000
    float temp0_26[0x4] = _mm_rsqrt_ss(zmm7_2[0], zmm7_2[0])
    zmm2_1 = 0x3f000000
    zmm7_2[0] = zmm7_2[0] * 0.5f
    temp0_26[0] = temp0_26[0] * temp0_26[0]
    zmm7_2[0] = zmm7_2[0] * temp0_26[0]
    zmm2_1[0] = 0.5f - zmm7_2[0]
    temp0_26[0] = temp0_26[0] * zmm2_1[0]
    temp0_26[0] = temp0_26[0] + temp0_26[0]
    temp0_26[0] = temp0_26[0] * temp0_26[0]
    zmm7_2[0] = zmm7_2[0] * temp0_26[0]
    zmm4_1[0] = 0.5f - zmm7_2[0]
    temp0_26[0] = temp0_26[0] * zmm4_1[0]
    temp0_26[0] = temp0_26[0] + temp0_26[0]
    zmm6_1[0] = zmm6_1[0] * temp0_26[0]
    zmm7_2[0] = zmm7_2[0] * temp0_26[0]
    zmm8_1[0] = zmm8_1[0] * temp0_26[0]
label_141a82ee2:
    zmm3_2 = data_143dbb1f8
    float var_120_4 = zmm8_1[0]
    float var_124_4 = zmm7_2[0]
    var_128 = zmm6_1[0]
else
    zmm3_2 = data_143dbb1f8
    var_128 = zmm3_2[0]
    int32_t var_124_3 = zmm15
    int32_t var_120_3 = zmm14

zmm6_1 = var_f8
int32_t var_f4
zmm7_2 = var_f4
int32_t var_f0
zmm8_1 = var_f0
zmm11_1 = var_108
zmm12_1 = var_104
zmm6_1[0] = zmm6_1[0] - zmm11_1[0]
zmm13_1 = var_100
zmm7_2[0] = zmm7_2[0] - zmm12_1[0]
zmm8_1[0] = zmm8_1[0] f- zmm13_1.d
zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
zmm7_2[0] = zmm7_2[0] * zmm7_2[0]
zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
zmm7_2[0] = zmm7_2[0] + zmm6_1[0]
zmm7_2[0] = zmm7_2[0] + zmm8_1[0]

if (not(zmm7_2[0] != 1f))
    var_118 = zmm6_1[0]
    float var_114_3 = zmm7_2[0]
    float var_110_3 = zmm8_1[0]
else if (zmm7_2[0] >= 9.99999994e-09f)
    zmm4_1 = 0x3f000000
    float temp0_27[0x4] = _mm_rsqrt_ss(zmm7_2[0], zmm7_2[0])
    zmm2_1 = 0x3f000000
    zmm7_2[0] = zmm7_2[0] * 0.5f
    temp0_27[0] = temp0_27[0] * temp0_27[0]
    zmm7_2[0] = zmm7_2[0] * temp0_27[0]
    zmm2_1[0] = 0.5f - zmm7_2[0]
    temp0_27[0] = temp0_27[0] * zmm2_1[0]
    temp0_27[0] = temp0_27[0] + temp0_27[0]
    temp0_27[0] = temp0_27[0] * temp0_27[0]
    zmm7_2[0] = zmm7_2[0] * temp0_27[0]
    zmm4_1[0] = 0.5f - zmm7_2[0]
    temp0_27[0] = temp0_27[0] * zmm4_1[0]
    temp0_27[0] = temp0_27[0] + temp0_27[0]
    temp0_27[0] = temp0_27[0] * zmm6_1[0]
    temp0_27[0] = temp0_27[0] * zmm7_2[0]
    temp0_27[0] = temp0_27[0] * zmm8_1[0]
    var_118 = temp0_27[0]
    float var_114_5 = temp0_27[0]
    float var_110_5 = temp0_27[0]
else
    var_118 = zmm3_2[0]
    int32_t var_114_4 = zmm15
    int32_t var_110_4 = zmm14

float (* result)[0x4] = sub_140ad6660(&var_b8, &var_128, &var_118)
float zmm3_3[0x4] = *arg2
float zmm2_2[0x4] = var_b8
float temp0_28[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x1b)
float temp0_29[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
float temp0_30[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x4e)
float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_29)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm3_3)
float temp0_34[0x4] = __mulps_xmmps_memps(temp0_31, data_143f2b4e0)
float temp0_35[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xb1)
float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_33)
float temp0_37[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
float temp0_39[0x4] = _mm_mul_ps(temp0_35, _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa))
float temp0_40[0x4] = _mm_mul_ps(temp0_30, temp0_37)
float temp0_41[0x4] = __mulps_xmmps_memps(temp0_39, data_143f2b4c0)
float temp0_43[0x4] = _mm_add_ps(temp0_36, __mulps_xmmps_memps(temp0_40, data_143f2b4d0))
float temp0_44[0x4] = _mm_unpacklo_ps(zmm12_1, 0)
float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_41)
arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11_1, zmm13_1), temp0_44[0].q)
zmm3_3 = var_f8
*arg2 = temp0_45
*(arg3 + 0x10) =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_3, var_f0[0].q), _mm_unpacklo_ps(var_f4, 0)[0].q)
return result
