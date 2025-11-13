// 函数: sub_1427abf60
// 地址: 0x1427abf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *(arg1 + 0xc0)
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q), 
    _mm_unpacklo_ps(*(arg2 + 4), 0)[0].q)
float zmm2[0x4] = (*arg3)[1]
float temp0_3[0x4] = _mm_mul_ps(temp0_2, zmm4)
float __saved_zmm6[0x4] = arg5
float __saved_zmm7[0x4] = arg6
arg6 = *(arg1 + 0xa0)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(arg6, arg6, 0xc9)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, temp0_6)
float temp0_8[0x4] = _mm_shuffle_ps(arg6, arg6, 0xd2)
float temp0_9[0x4] = _mm_mul_ps(temp0_4, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(arg6, arg6, 0xff)
float temp0_11[0x4] = _mm_sub_ps(temp0_7, temp0_9)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_8)
float temp0_17[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_6), temp0_14)
float temp0_18[0x4] = _mm_mul_ps(temp0_10, temp0_12)
float temp0_19[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_20[0x4] = _mm_add_ps(temp0_18, temp0_3)
float zmm3[0x4] = *arg3
float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_20)
float temp0_23[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*arg3)[2][0].q), temp0_19[0].q)
zmm2 = (*arg4)[1]
float temp0_24[0x4] = _mm_mul_ps(temp0_23, zmm4)
float temp0_25[0x4] = __addps_xmmps_memps(temp0_21, *(arg1 + 0xb0))
float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xc9), temp0_8)
float temp0_30[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xd2), temp0_6), temp0_27)
float temp0_31[0x4] = _mm_add_ps(temp0_30, temp0_30)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xc9), temp0_8)
float temp0_36[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xd2), temp0_6), temp0_33)
float temp0_37[0x4] = _mm_mul_ps(temp0_10, temp0_31)
float temp0_38[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_39[0x4] = _mm_add_ps(temp0_37, temp0_24)
zmm3 = *arg4
float temp0_40[0x4] = _mm_add_ps(temp0_36, temp0_39)
float temp0_43[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*arg4)[2][0].q), temp0_38[0].q), zmm4)
int64_t rax = *arg1
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xc9), temp0_8)
float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xd2), temp0_6)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x55)
float temp0_49[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xaa)
float temp0_50[0x4] = _mm_sub_ps(temp0_47, temp0_45)
float temp0_51[0x4] = _mm_add_ps(temp0_50, temp0_50)
float temp0_52[0x4] = _mm_mul_ps(temp0_10, temp0_51)
float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xc9), temp0_8)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xd2)
float temp0_56[0x4] = _mm_add_ps(temp0_52, temp0_43)
float temp0_57[0x4] = _mm_mul_ps(temp0_55, temp0_6)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
float temp0_60[0x4] = _mm_add_ps(_mm_sub_ps(temp0_57, temp0_54), temp0_56)
float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
float temp0_62[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)
temp0_60[0] = temp0_60[0] + temp0_40[0]
temp0_61[0] = temp0_61[0] + temp0_48[0]
temp0_62[0] = temp0_62[0] + temp0_49[0]
temp0_60[0] = temp0_60[0] * 0.5f
temp0_61[0] = temp0_61[0] * 0.5f
temp0_62[0] = temp0_62[0] * 0.5f
temp0_25[0] = temp0_25[0] - temp0_60[0]
temp0_58[0] = temp0_58[0] - temp0_61[0]
float temp0_63[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
temp0_58[0] = temp0_58[0] + temp0_61[0]
arg5 = arg15
temp0_25[0] = temp0_25[0] + temp0_60[0]
float var_a8 = temp0_25[0]
temp0_63[0] = temp0_63[0] - temp0_62[0]
float var_e8 = arg5[0]
temp0_63[0] = temp0_63[0] + temp0_62[0]
float var_a4 = temp0_58[0]
temp0_60[0] = temp0_60[0] + temp0_25[0]
float var_c4 = temp0_58[0]
temp0_61[0] = temp0_61[0] + temp0_58[0]
float var_c8 = temp0_25[0]
temp0_40[0] = temp0_40[0] + temp0_25[0]
temp0_62[0] = temp0_62[0] + temp0_63[0]
float var_a0 = temp0_63[0]
temp0_49[0] = temp0_49[0] + temp0_63[0]
float var_c0 = temp0_63[0]
temp0_48[0] = temp0_48[0] + temp0_58[0]
float var_d8 = temp0_60[0]
float var_d4 = temp0_61[0]
float var_b8 = temp0_40[0]
float var_b4 = temp0_48[0]
(*(rax + 8))(arg1, &var_a8, &var_d8, arg14, var_e8, arg16, var_d8, temp0_62[0], var_c8, var_c0, 
    var_b8, temp0_49[0], var_a8, var_a0, arg13, arg12, arg11, arg10, arg9, arg8, arg7, 
    __saved_zmm7, __saved_zmm6)
(*(*arg1 + 8))(arg1, &var_d8, &var_c8, arg14, arg5[0], arg16)
(*(*arg1 + 8))(arg1, &var_b8, &var_c8, arg14, arg5[0], arg16)
return (*(*arg1 + 8))(arg1, &var_a8, &var_b8, arg14, arg5[0], arg16)
