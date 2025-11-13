// 函数: sub_142316340
// 地址: 0x142316340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18[0x4]
sub_140ade170(arg1 + 0x44, &var_18)
float zmm0[0x4] = var_18
float zmm3[0x4] = *(arg1 + 0x38)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0x3c), 0)
*arg2 = zmm0
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, (*(arg1 + 0x40))[0].q)
zmm0 = *(arg1 + 0x58)
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float zmm2[0x4] = *(arg1 + 0x54)
arg2[1] = temp0_2
arg2[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x50), zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
return arg2
