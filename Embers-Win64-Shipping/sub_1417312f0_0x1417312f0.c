// 函数: sub_1417312f0
// 地址: 0x1417312f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm3 = *(arg1 + 0x1c)
float zmm4[0x4] = *(arg1 + 0x10)
float zmm1[0x4] = *(arg1 + 0x18)
int64_t zmm2 = *(arg1 + 0x14)
zmm1[0] = zmm1[0] f+ zmm3
zmm1[0] = zmm1[0] f- zmm3
int64_t zmm5 = zmm2
zmm4[0] = zmm4[0] f+ zmm3
zmm4[0] = zmm4[0] f- zmm3
zmm2.d = zmm2.d f- zmm3
float var_24 = zmm1[0]
zmm5.d = zmm5.d f+ zmm3
float var_30 = zmm1[0]
*arg2 = (_mm_unpacklo_ps(zmm4, zmm2)).q
arg2[1].d = var_30
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm4, zmm5)).q
*(arg2 + 0x14) = var_24
return arg2
