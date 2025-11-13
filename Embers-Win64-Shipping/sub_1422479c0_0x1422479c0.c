// 函数: sub_1422479c0
// 地址: 0x1422479c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = arg3[2]
float zmm8[0x4] = *arg3
float temp0[0x4] = _mm_mul_ps(data_142d4cc00, zmm5)
float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xd2)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0, temp0, 0xc9), temp0_1)
float zmm11[0x4] = arg3[1]
float temp0_8[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_4, temp0_2), temp0_6)
float temp0_9[0x4] = _mm_add_ps(temp0_8, temp0_8)
float temp0_10[0x4] = _mm_mul_ps(temp0_3, temp0_9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd2)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
float zmm3[0x4] = data_142d4cc20
float temp0_13[0x4] = _mm_mul_ps(temp0_12, temp0_1)
float temp0_14[0x4] = _mm_add_ps(temp0_10, temp0)
float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0_2)
float temp0_16[0x4] = _mm_mul_ps(zmm3, zmm5)
float temp0_18[0x4] = _mm_add_ps(_mm_sub_ps(temp0_15, temp0_13), temp0_14)
float var_c8 = temp0_18[0]
float var_c4 = _mm_shuffle_ps(temp0_18, temp0_18, 0x55)[0]
float var_c0 = _mm_shuffle_ps(temp0_18, temp0_18, 0xaa)[0]
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_1)
float temp0_25[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xd2), temp0_2), temp0_22)
float temp0_26[0x4] = _mm_add_ps(temp0_25, temp0_25)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xd2)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
float temp0_29[0x4] = _mm_mul_ps(temp0_27, temp0_2)
float temp0_30[0x4] = _mm_mul_ps(temp0_28, temp0_1)
float temp0_31[0x4] = _mm_mul_ps(temp0_26, temp0_3)
float temp0_34[0x4] = _mm_add_ps(_mm_sub_ps(temp0_29, temp0_30), _mm_add_ps(temp0_31, temp0_16))
float temp0_35[0x4] = _mm_mul_ps(data_142d4cc30, zmm5)
float var_b8 = temp0_34[0]
float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
float var_b0 = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)[0]
float var_b4 = temp0_36[0]
float temp0_42[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xd2), temp0_2), 
    _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xc9), temp0_1))
float temp0_43[0x4] = _mm_add_ps(temp0_42, temp0_42)
float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xd2)
float temp0_45[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xc9)
float temp0_46[0x4] = _mm_mul_ps(temp0_43, temp0_3)
float temp0_47[0x4] = _mm_mul_ps(temp0_44, temp0_2)
float temp0_48[0x4] = _mm_mul_ps(temp0_45, temp0_1)
float temp0_49[0x4] = _mm_add_ps(temp0_46, temp0_35)
float temp0_51[0x4] = _mm_add_ps(_mm_sub_ps(temp0_47, temp0_48), temp0_49)
float var_a8 = temp0_51[0]
float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x55)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xaa)
float var_a4 = temp0_52[0]
float var_a0 = temp0_53[0]
float zmm0_1[0x4] = sub_142231d30(arg1, arg4)
zmm0_1[0] = zmm0_1[0] * 0.5f
float zmm0_2[0x4] = sub_142231f00(arg1, arg4)
float zmm4_1 = temp0_53[0]
temp0_52[0] = temp0_52[0] * zmm0_1[0]
zmm4_1 = zmm4_1 * zmm0_1[0]
float temp0_54[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
float temp0_55[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
temp0_52[0] = temp0_52[0] + temp0_54[0]
temp0_51[0] = temp0_51[0] * zmm0_1[0]
temp0_54[0] = temp0_54[0] - temp0_52[0]
float zmm1_1 = temp0_51[0] + zmm11[0]
float var_d4 = temp0_52[0]
zmm11[0] = zmm11[0] - temp0_51[0]
float var_e4 = temp0_54[0]
float var_d8 = zmm1_1
zmm1_1 = zmm4_1 + temp0_55[0]
float var_e8 = zmm11[0]
temp0_55[0] = temp0_55[0] - zmm4_1
float var_e0 = temp0_55[0]
float var_98
int32_t arg_28
sub_140acc920(&var_98, &arg_28)
int32_t zmm6_1
int32_t zmm12_1
zmm6_1, zmm12_1 =
    sub_142298930(arg2, &var_d8, &var_c8, &var_b8, &var_98, zmm0_2[0], 0x10, 0, 0, 0, 0)
sub_140acc920(&var_98, &arg_28)
int32_t var_120_2 =
    sub_142298930(arg2, &var_e8, &var_c8, &var_b8, &var_98, zmm12_1, 0x10, 0, zmm6_1, zmm6_1, 0)
int32_t* var_128_1
var_128_1.d = arg_28
int32_t var_120_3 = sub_142248830(arg2, &var_d8, &var_b8, &var_a8, var_128_1.d)
var_128_1.d = arg_28
int128_t zmm8_1
int128_t zmm9_1
int128_t zmm10_1
int32_t zmm12_4
zmm8_1, zmm9_1, zmm10_1, zmm12_4 = sub_142248830(arg2, &var_d8, &var_c8, &var_a8, var_128_1.d)
int32_t rax_2 = arg_28
int32_t var_120_4 = zmm12_4
var_a8 = (zmm10_1 ^ 0x80000000).d
int32_t var_a4_1 = (zmm9_1 ^ 0x80000000).d
int32_t var_a0_1 = (zmm8_1 ^ 0x80000000).d
var_128_1.d = rax_2
int32_t var_120_5 = sub_142248830(arg2, &var_e8, &var_b8, &var_a8, var_128_1.d)
var_128_1.d = arg_28
int32_t zmm6_2
float zmm12_6
zmm6_2, zmm12_6 = sub_142248830(arg2, &var_e8, &var_c8, &var_a8, var_128_1.d)
void var_88
sub_140acc920(&var_88, &arg_28)
int64_t rax_4 = *arg2
float zmm4_2 = var_c8 * zmm12_6
float zmm3_2 = var_c4 * zmm12_6
float zmm2_2 = var_c0 * zmm12_6
float zmm0_3 = zmm4_2 + var_e8
zmm4_2 = zmm4_2 + var_d8
var_a8 = zmm0_3
float var_a4_2 = zmm3_2 + var_e4
var_98 = zmm4_2
float var_a0_2 = zmm2_2 + var_e0
float var_94 = zmm3_2 + var_d4
float var_90 = zmm2_2 + zmm1_1
(*(rax_4 + 0x30))(arg2, &var_98, &var_a8, &var_88, 0, zmm6_2, zmm6_2, 0)
sub_140acc920(&var_88, &arg_28)
float zmm4_3 = var_c8 * zmm12_6
int64_t rax_5 = *arg2
zmm2_2 = var_c0 * zmm12_6
var_98 = var_e8 - zmm4_3
zmm3_2 = var_c4 * zmm12_6
float var_90_1 = var_e0 - zmm2_2
float var_94_1 = var_e4 - zmm3_2
var_a8 = var_d8 - zmm4_3
float var_a4_3 = var_d4 - zmm3_2
float var_a0_3 = zmm1_1 - zmm2_2
(*(rax_5 + 0x30))(arg2, &var_a8, &var_98, &var_88, 0, zmm6_2, zmm6_2, 0)
sub_140acc920(&var_88, &arg_28)
int64_t rax_6 = *arg2
float zmm4_4 = var_b8 * zmm12_6
zmm3_2 = var_b4 * zmm12_6
zmm2_2 = var_b0 * zmm12_6
float zmm0_5 = zmm4_4 + var_e8
zmm4_4 = zmm4_4 + var_d8
var_98 = zmm0_5
float var_94_2 = zmm3_2 + var_e4
var_a8 = zmm4_4
float var_90_2 = zmm2_2 + var_e0
float var_a4_4 = zmm3_2 + var_d4
float var_a0_4 = zmm2_2 + zmm1_1
(*(rax_6 + 0x30))(arg2, &var_a8, &var_98, &var_88, 0, zmm6_2, zmm6_2, 0)
sub_140acc920(&var_88, &arg_28)
float zmm4_5 = var_b8 * zmm12_6
zmm3_2 = var_b4 * zmm12_6
zmm2_2 = var_b0 * zmm12_6
var_98 = var_e8 - zmm4_5
float var_94_3 = var_e4 - zmm3_2
int64_t rax_7 = *arg2
float var_90_3 = var_e0 - zmm2_2
float var_a4_5 = var_d4 - zmm3_2
var_a8 = var_d8 - zmm4_5
float var_a0_5 = zmm1_1 - zmm2_2
return (*(rax_7 + 0x30))(arg2, &var_a8, &var_98, &var_88, 0, zmm6_2, zmm6_2, 0)
