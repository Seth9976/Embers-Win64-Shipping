// 函数: sub_142699110
// 地址: 0x142699110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg3
float zmm1[0x4] = *(arg3 + 8)
int128_t zmm2 = *(arg3 + 4)
float zmm3 = *(arg2 + 8)
int64_t zmm5 = *(arg2 + 4)
zmm1[0] = zmm1[0] + zmm3
zmm3 = zmm3 - zmm1[0]
float zmm6[0x4] = *arg2
int128_t zmm7
zmm7.d = zmm2.d f+ zmm5.d
float var_44 = zmm1[0]
zmm5.d = zmm5.d f- zmm2.d
zmm4[0] = zmm4[0] + zmm6[0]
zmm6[0] = zmm6[0] - zmm4[0]
arg1[3].b = 1
*arg1 = (_mm_unpacklo_ps(zmm6, zmm5)).q
float temp0_1[0x4] = _mm_unpacklo_ps(zmm4, zmm7.q)
arg1[1].d = zmm3
*(arg1 + 0xc) = temp0_1.q
*(arg1 + 0x14) = var_44
return arg1
