// 函数: sub_142439e40
// 地址: 0x142439e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
float zmm0[0x4] = arg3[1]
float zmm4[0x4] = data_142d4cc00
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
int32_t var_7c = 0x3f800000
float var_88[0x4]
var_88[0] = zmm0[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
float temp0_3[0x4] = _mm_shuffle_ps(var_88, var_88, 0xe1)
temp0_3[0] = temp0[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = temp0_1[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
*(arg1 + 0x60) = temp0_5
float zmm5[0x4] = *arg3
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_8[0x4] = _mm_mul_ps(temp0_2, temp0_7)
int32_t var_7c_1 = 0x3f800000
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_6)
float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_8)
float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_7)
float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_6)
float temp0_19[0x4] = _mm_add_ps(temp0_14, zmm4)
zmm4 = data_142d4cc20
float temp0_20[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_21[0x4] = _mm_sub_ps(temp0_18, temp0_17)
zmm0 = 0x3f800000
zmm0[0] = 1f / arg3[2][0]
float temp0_22[0x4] = _mm_add_ps(temp0_21, temp0_19)
temp0_22[0] = temp0_22[0] * zmm0[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
temp0_23[0] = temp0_23[0] * zmm0[0]
float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
temp0_24[0] = temp0_24[0] * zmm0[0]
temp0_5[0] = temp0_22[0]
float temp0_25[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
temp0_25[0] = temp0_23[0]
float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc6)
temp0_26[0] = temp0_24[0]
float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
*(arg1 + 0x70) = temp0_27
zmm5 = *arg3
float temp0_28[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_29[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_29)
float temp0_33[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_20, temp0_28), temp0_31)
float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xd2)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
float temp0_39[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_35, temp0_28), _mm_mul_ps(temp0_36, temp0_29))
float temp0_40[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
zmm0 = 0x3f800000
zmm0[0] = 1f / (*arg3)[9]
int32_t var_7c_2 = 0x3f800000
int64_t var_78 = 0
int16_t var_70 = 1
int64_t var_6c
__builtin_memset(&var_6c, 0, 0x14)
int32_t var_58 = 0x10001
int64_t var_54
__builtin_memset(&var_54, 0, 0x14)
float temp0_43[0x4] = _mm_add_ps(temp0_39, _mm_add_ps(_mm_mul_ps(temp0_40, temp0_34), zmm4))
temp0_43[0] = temp0_43[0] * zmm0[0]
float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x55)
temp0_44[0] = temp0_44[0] * zmm0[0]
float temp0_45[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)
temp0_45[0] = temp0_45[0] * zmm0[0]
temp0_27[0] = temp0_43[0]
float temp0_46[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xe1)
temp0_46[0] = temp0_44[0]
float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xc6)
temp0_47[0] = temp0_45[0]
float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xc9)
*(arg1 + 0x80) = temp0_48
float zmm2[0x4] = *(arg4 + 8)
float zmm1[0x4] = *(arg4 + 0x14)
zmm1[0] = zmm1[0] - zmm2[0]
temp0_48[2].q = 0
temp0_48[0] = __maxss_xmmss_memss(zmm1[0], 0x3f800000)[0]
float temp0_50[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xe1)
temp0_50[0] = zmm2[0]
*(arg1 + 0x90) = _mm_shuffle_ps(temp0_50, temp0_50, 0xe1)
sub_142437410(arg1, &var_78, arg3)
char var_98 = *(arg1 + 0x2d)
int64_t result = sub_142438620(*(arg1 + 0x58), &var_78, arg2, *(arg1 + 0x2c))
__security_check_cookie(rax_1 ^ &var_b8)
return result
