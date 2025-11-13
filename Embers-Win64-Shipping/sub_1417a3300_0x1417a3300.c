// 函数: sub_1417a3300
// 地址: 0x1417a3300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg3
float temp0[0x4] = _mm_add_ps(zmm2, zmm2)
float zmm8[0x4] = arg3[1]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 4)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_3[0x4] = _mm_mul_ps(zmm2, temp0)
float temp0_5[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
float temp0_7[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0, temp0, 0x12))
float temp0_10[0x4] =
    _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x1a), _mm_shuffle_ps(temp0_3, temp0_3, 1))
float temp0_11[0x4] = _mm_add_ps(temp0_7, temp0_5)
float temp0_12[0x4] = _mm_sub_ps(temp0_5, temp0_7)
zmm2 = data_143ef7f20
float zmm1[0x4] = zmm2
zmm2[0].q = zmm8 u>> 0x40
float temp0_13[0x4] = _mm_shuffle_ps(zmm8, zmm2, 0xc4)
zmm2 = *arg2
float temp0_14[0x4] = _mm_sub_ps(zmm1, temp0_10)
float temp0_15[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm1 = __andps_xmmxud_memxud(temp0_14, data_143ef7f30)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_12, zmm1, 0x32)
float temp0_19[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_11, zmm1, 0), temp0_17, 0x82)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_11, zmm1, 0x31)
float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_12, zmm1, 0x10), temp0_20, 0x88)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_19)
float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_11, temp0_12, 0x12), zmm1, 0xe8)
float temp0_27[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_13)
float temp0_30[0x4] = _mm_mul_ps(temp0_27, temp0_26)
float temp0_34[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_15, temp0_22), temp0_24), temp0_30), temp0_29)
zmm2 = arg2[1]
float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_19)
float temp0_38[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_39[0x4] = _mm_mul_ps(temp0_35, temp0_22)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_13)
float temp0_45[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_39, temp0_37), _mm_mul_ps(temp0_38, temp0_26)), temp0_41)
zmm2 = arg2[2]
float temp0_46[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_47[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_50[0x4] = _mm_add_ps(_mm_mul_ps(temp0_46, temp0_22), _mm_mul_ps(temp0_47, temp0_19))
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), temp0_26)
float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_13)
float temp0_55[0x4] = _mm_add_ps(temp0_50, temp0_52)
*arg1 = temp0_34
arg1[1] = temp0_45
float temp0_56[0x4] = _mm_add_ps(temp0_55, temp0_54)
zmm2 = arg2[3]
float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_19)
float temp0_59[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_60[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_22)
float temp0_62[0x4] = _mm_mul_ps(temp0_60, temp0_26)
float temp0_63[0x4] = _mm_add_ps(temp0_58, temp0_61)
float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_13)
float temp0_66[0x4] = _mm_add_ps(temp0_63, temp0_62)
arg1[2] = temp0_56
arg1[3] = _mm_add_ps(temp0_66, temp0_65)
return arg1
