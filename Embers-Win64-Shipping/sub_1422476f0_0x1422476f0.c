// 函数: sub_1422476f0
// 地址: 0x1422476f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg3[1]
float zmm4[0x4] = arg3[2]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float zmm3[0x4] = data_142d4cc00
float var_74 = temp0[0]
float var_78 = zmm1[0]
float var_70 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float temp0_2[0x4] = _mm_mul_ps(zmm3, zmm4)
float zmm7[0x4] = *arg3
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
float temp0_6[0x4] = _mm_mul_ps(temp0_4, temp0_5)
float temp0_7[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
float temp0_8[0x4] = _mm_mul_ps(temp0_3, temp0_7)
float temp0_9[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
float temp0_10[0x4] = _mm_sub_ps(temp0_6, temp0_8)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_7)
float temp0_16[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_5), temp0_13)
float temp0_18[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_11), temp0_2)
float temp0_19[0x4] = _mm_mul_ps(data_142d4cc20, zmm4)
float temp0_20[0x4] = _mm_add_ps(temp0_16, temp0_18)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd2), temp0_5)
float var_68 = temp0_20[0]
float var_64 = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)[0]
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_7)
float var_60 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
float temp0_27[0x4] = _mm_sub_ps(temp0_22, temp0_25)
float temp0_28[0x4] = _mm_add_ps(temp0_27, temp0_27)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_7)
float temp0_33[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_5), temp0_30)
float temp0_35[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_28), temp0_19)
float temp0_36[0x4] = _mm_mul_ps(data_142d4cc30, zmm4)
float temp0_37[0x4] = _mm_add_ps(temp0_33, temp0_35)
float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0xd2), temp0_5)
float var_48 = temp0_37[0]
float var_44 = _mm_shuffle_ps(temp0_37, temp0_37, 0x55)[0]
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0xc9), temp0_7)
float var_40 = _mm_shuffle_ps(temp0_37, temp0_37, 0xaa)[0]
float temp0_44[0x4] = _mm_sub_ps(temp0_39, temp0_42)
float temp0_45[0x4] = _mm_add_ps(temp0_44, temp0_44)
float temp0_46[0x4] = _mm_mul_ps(temp0_9, temp0_45)
float temp0_47[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc9)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xd2)
float temp0_49[0x4] = _mm_mul_ps(temp0_47, temp0_7)
float temp0_50[0x4] = _mm_add_ps(temp0_46, temp0_36)
float temp0_53[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_48, temp0_5), temp0_49), temp0_50)
zmm7 = _mm_and_ps((*arg4)[1], 0x7fffffff)
float var_58 = temp0_53[0]
float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
float var_54 = temp0_55[0]
float var_50 = temp0_56[0]
float zmm0[0x4] = _mm_and_ps(*arg4, 0x7fffffff)
zmm1 = (*arg4)[2]
float temp0_58[0x4] = _mm_min_ss(zmm7[0], zmm0[0])
zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
float temp0_60[0x4] = _mm_min_ss(temp0_58[0], zmm1[0])
void var_38
void arg_28
sub_140acc920(&var_38, &arg_28)
int32_t zmm6_1
float zmm7_1
zmm6_1, zmm7_1 = sub_142298930(arg2, &var_78, &var_68, &var_48, &var_38, 
    temp0_60[0] f* *(arg1 + 0x3c), 0x10, 0, 0, 0, 0)
sub_140acc920(&var_38, &arg_28)
int32_t zmm6_2
float zmm7_2
zmm6_2, zmm7_2 = sub_142298930(arg2, &var_78, &var_68, &var_58, &var_38, zmm7_1 f* *(arg1 + 0x3c), 
    0x10, 0, zmm6_1, zmm6_1, 0)
sub_140acc920(&var_38, &arg_28)
return sub_142298930(arg2, &var_78, &var_48, &var_58, &var_38, zmm7_2 f* *(arg1 + 0x3c), 0x10, 0, 
    zmm6_2, zmm6_2, 0)
