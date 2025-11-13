// 函数: sub_14077e760
// 地址: 0x14077e760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg2 + 4)
float zmm4[0x4] = data_143ce03a0
float temp0[0x4] = _mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q)
float zmm0[0x4] = data_143ce03f0
float temp0_3[0x4] =
    __mulps_xmmps_memps(_mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q), data_143ce0400)
zmm2 = data_143ce03d0
float temp0_6[0x4] = _mm_cvtepi32_ps(_mm_cvtps_epi32(_mm_mul_ps(zmm0, temp0_3)))
zmm0 = data_143ce03b0
float temp0_8[0x4] = _mm_sub_ps(temp0_3, __mulps_xmmps_memps(temp0_6, data_143ce03e0))
float zmm1[0x4] = data_142dc1870
zmm0 = _mm_and_ps(zmm0, temp0_8)
zmm2 = __orps_xmmxud_memxud(_mm_and_ps(zmm2, temp0_8), data_143ce03c0)
float temp0_12[0x4] = _mm_cmpeq_ps(zmm4, zmm0, 1)
zmm0 = data_142dc1850
float temp0_13[0x4] = _mm_sub_ps(zmm2, temp0_8)
float temp0_14[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float temp0_15[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm2 = _mm_and_ps(temp0_13 ^ temp0_8, temp0_12) ^ temp0_8
float temp0_17[0x4] = _mm_mul_ps(zmm2, zmm2)
float temp0_19[0x4] = _mm_add_ps(_mm_mul_ps(temp0_14, temp0_17), temp0_15)
float temp0_20[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_22[0x4] = _mm_add_ps(_mm_mul_ps(temp0_19, temp0_17), temp0_20)
float temp0_23[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float temp0_25[0x4] = _mm_add_ps(_mm_mul_ps(temp0_22, temp0_17), temp0_23)
float temp0_26[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_27[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_29[0x4] = _mm_add_ps(_mm_mul_ps(temp0_25, temp0_17), temp0_26)
zmm0 = data_142dc1860
float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x55), temp0_17)
float temp0_32[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_33[0x4] = _mm_mul_ps(temp0_29, temp0_17)
float temp0_34[0x4] = _mm_add_ps(temp0_31, temp0_32)
float temp0_35[0x4] = _mm_add_ps(temp0_33, temp0_27)
zmm1 = data_142dc1880
float temp0_36[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_37[0x4] = _mm_mul_ps(temp0_34, temp0_17)
float temp0_38[0x4] = _mm_mul_ps(temp0_35, zmm2)
float temp0_39[0x4] = _mm_add_ps(temp0_37, temp0_36)
float temp0_40[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float temp0_42[0x4] = _mm_add_ps(_mm_mul_ps(temp0_39, temp0_17), temp0_40)
float temp0_43[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_44[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_50[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_42, temp0_17), temp0_43), temp0_17), 
        temp0_44), 
    _mm_and_ps(data_143ce0390 ^ data_143ce0340, temp0_12) ^ data_143ce0340)
arg1[2] = temp0_38[0]
float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0x55)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xaa)
temp0_51[0] = temp0_51[0] * temp0_50[0]
arg1[3] = 0
float temp0_53[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x55)
temp0_50[0] = temp0_50[0] * temp0_53[0]
arg1[7] = 0
*arg1 = temp0_51[0]
float temp0_54[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xaa)
arg1[1] = temp0_50[0]
temp0_54[0] = temp0_54[0] * temp0_53[0]
arg1[0xb] = 0
temp0_52[0] = temp0_52[0] * temp0_38[0]
temp0_54[0] = temp0_54[0] * temp0_38[0]
temp0_52[0] = temp0_52[0] * temp0_51[0]
temp0_52[0] = temp0_52[0] * temp0_53[0]
temp0_52[0] = temp0_52[0] - temp0_54[0]
temp0_50[0] = temp0_50[0] * temp0_52[0]
zmm0 = temp0_50 ^ data_142d3f780
arg1[4] = temp0_52[0]
temp0_54[0] = temp0_54[0] * temp0_51[0]
arg1[6] = zmm0[0]
temp0_52[0] = temp0_52[0] * temp0_53[0]
temp0_54[0] = temp0_54[0] + temp0_52[0]
temp0_54[0] = temp0_54[0] * temp0_50[0]
arg1[0xa] = temp0_54[0]
arg1[5] = temp0_54[0]
temp0_54[0] = temp0_54[0] * temp0_51[0]
temp0_51[0] = temp0_51[0] * temp0_52[0]
temp0_54[0] = temp0_54[0] + temp0_52[0]
temp0_54[0] = temp0_54[0] * temp0_53[0]
temp0_51[0] = temp0_51[0] - temp0_54[0]
arg1[8] = (temp0_54 ^ data_142d3f780)[0]
arg1[9] = temp0_51[0]
arg1[0xc] = data_143dbb1f8[0]
arg1[0xd] = data_143dbb1fc[0]
arg1[0xe] = data_143dbb200[0]
arg1[0xf] = 0x3f800000
return arg1
