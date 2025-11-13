// 函数: sub_14173b550
// 地址: 0x14173b550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float temp0_3[0x4] = __subps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q), 
        _mm_unpacklo_ps(*(arg2 + 4), 0)[0].q), 
    *(arg1 + 0x30))
float temp0_4[0x4] = __mulps_xmmps_memps(*(arg1 + 0x20), data_143ef7590)
float zmm3[0x4] = __andps_xmmxud_memxud(temp0_3, data_143ef7300)
float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float temp0_9[0x4] = _mm_mul_ps(temp0_7, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
float temp0_11[0x4] = _mm_mul_ps(temp0_6, temp0_10)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
float temp0_13[0x4] = _mm_sub_ps(temp0_9, temp0_11)
float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_13)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc9)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xd2)
float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_10)
float temp0_19[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_16, temp0_8), temp0_17)
float temp0_21[0x4] = _mm_add_ps(_mm_mul_ps(temp0_12, temp0_14), zmm3)
zmm3 = *arg3
float temp0_22[0x4] = _mm_add_ps(temp0_19, temp0_21)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
float var_40 = temp0_23[0]
float zmm2[0x4] = (*arg3)[1]
float temp0_25[0x4] = _mm_unpacklo_ps(temp0_22, temp0_24[0].q)
float temp0_26[0x4] = _mm_unpacklo_ps(zmm2, 0)
int64_t var_38 = temp0_25.q
float temp0_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*arg3)[2][0].q), temp0_26[0].q)
float var_30 = var_40
float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xd2)
float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_10)
float temp0_33[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_29, temp0_8), temp0_31)
float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
float temp0_35[0x4] = _mm_mul_ps(temp0_12, temp0_34)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xd2)
float temp0_38[0x4] = _mm_mul_ps(temp0_36, temp0_10)
float temp0_39[0x4] = _mm_mul_ps(temp0_37, temp0_8)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_28)
float temp0_42[0x4] = _mm_add_ps(_mm_sub_ps(temp0_39, temp0_38), temp0_40)
float var_20 = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)[0]
int64_t var_48 = (_mm_unpacklo_ps(temp0_42, _mm_shuffle_ps(temp0_42, temp0_42, 0x55)[0].q)).q
float var_40_1 = var_20
int64_t* rcx = *(arg1 + 0x10)
float var_58 = arg4[0]
return (*(*rcx + 0x48))(rcx, &var_38, &var_48)
