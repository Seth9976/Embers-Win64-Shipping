// 函数: sub_142252fe0
// 地址: 0x142252fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18[0x4]
float (* result)[0x4] = sub_140ade170(arg3, &var_18)
float zmm3[0x4] = data_14399f668
int64_t zmm0 = *(arg2 + 8)
float zmm4[0x4] = *arg2
float zmm5[0x4] = var_18
float temp0[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm4, zmm0)
zmm0 = data_14399f670
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
*(arg1 + 0x100) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0), temp0_3[0].q)
*(arg1 + 0xe0) = zmm5
*(arg1 + 0xf0) = temp0_2
return result
