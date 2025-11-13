// 函数: sub_141f12f10
// 地址: 0x141f12f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg1 + 0x1d0)
float var_10 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
*arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
arg2[1].d = var_10
*(arg2 + 0xc) = *(arg1 + 0x328)
return arg2
