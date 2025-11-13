// 函数: sub_142363310
// 地址: 0x142363310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg1 + 0xf8)
int32_t zmm1 = *(arg1 + 0x104)
int32_t zmm4 = *(arg1 + 0xfc)
zmm2[0] = zmm2[0] f+ zmm1
int128_t zmm5 = *(arg1 + 0xf4)
zmm2[0] = zmm2[0] f- zmm1
int32_t zmm3 = *(arg1 + 0x100)
float zmm6[0x4] = *(arg1 + 0xf0)
int128_t zmm7
zmm7.d = zmm5.d f+ zmm3
float var_44 = zmm2[0]
zmm6[0] = zmm6[0] f- zmm4
float var_50 = zmm2[0]
zmm6[0] = zmm6[0] f+ zmm4
zmm5.d = zmm5.d f- zmm3
arg2[3].b = 1
*arg2 = (_mm_unpacklo_ps(zmm6, zmm5.q)).q
float temp0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm7.q)
arg2[1].d = var_50
*(arg2 + 0xc) = temp0_1.q
*(arg2 + 0x14) = var_44
return arg2
