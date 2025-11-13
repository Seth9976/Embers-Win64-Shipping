// 函数: sub_14173abc0
// 地址: 0x14173abc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, (*(arg3 + 8))[0].q), 
    _mm_unpacklo_ps(*(arg3 + 4), 0)[0].q)
float temp0_3[0x4] = __mulps_xmmps_memps(*(arg1 + 0x20), data_143ef7590)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, temp0_6)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
float temp0_9[0x4] = _mm_mul_ps(temp0_4, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
float temp0_11[0x4] = _mm_sub_ps(temp0_7, temp0_9)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_8)
float temp0_20[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_14, temp0_6), temp0_15), 
    _mm_add_ps(_mm_mul_ps(temp0_10, temp0_12), temp0_2))
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
float var_30 = temp0_21[0]
int64_t var_28 = (_mm_unpacklo_ps(temp0_20, temp0_22[0].q)).q
float var_20 = var_30
float zmm0[0x4] = (*arg4)[2]
float zmm3[0x4] = *arg4
float temp0_24[0x4] = _mm_unpacklo_ps((*arg4)[1], 0)
float temp0_26[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_24[0].q)
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xc9), temp0_8)
float temp0_31[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xd2), temp0_6), temp0_28)
float temp0_32[0x4] = _mm_add_ps(temp0_31, temp0_31)
float temp0_33[0x4] = _mm_mul_ps(temp0_10, temp0_32)
float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xd2)
float temp0_36[0x4] = _mm_mul_ps(temp0_34, temp0_8)
float temp0_37[0x4] = _mm_mul_ps(temp0_35, temp0_6)
float temp0_38[0x4] = _mm_add_ps(temp0_33, temp0_26)
float temp0_40[0x4] = _mm_add_ps(_mm_sub_ps(temp0_37, temp0_36), temp0_38)
float var_40 = _mm_shuffle_ps(temp0_40, temp0_40, 0xaa)[0]
int64_t var_38 = (_mm_unpacklo_ps(temp0_40, _mm_shuffle_ps(temp0_40, temp0_40, 0x55)[0].q)).q
int64_t* rcx = *(arg1 + 0x10)
float var_30_1 = var_40
int64_t* var_58 = &var_38
int32_t var_48
(*(*rcx + 0x58))(rcx, &var_48, &var_28)
float zmm5_1[0x4] = *(arg1 + 0x20)
int32_t var_44
float temp0_46[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(var_48, var_40[0].q), _mm_unpacklo_ps(var_44, 0)[0].q)
float temp0_47[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
float temp0_48[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0xc9), temp0_47)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0xd2), temp0_48)
float temp0_53[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
float temp0_54[0x4] = _mm_sub_ps(temp0_52, temp0_50)
float temp0_55[0x4] = _mm_add_ps(temp0_54, temp0_54)
float temp0_56[0x4] = _mm_mul_ps(temp0_53, temp0_55)
float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xc9), temp0_47)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xd2)
float temp0_60[0x4] = _mm_add_ps(temp0_56, temp0_46)
float temp0_63[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_59, temp0_48), temp0_58), temp0_60)
float var_20_1 = _mm_shuffle_ps(temp0_63, temp0_63, 0xaa)[0]
*arg2 = (_mm_unpacklo_ps(temp0_63, _mm_shuffle_ps(temp0_63, temp0_63, 0x55)[0].q)).q
arg2[1].d = var_20_1
return arg2
