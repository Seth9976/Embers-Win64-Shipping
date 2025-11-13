// 函数: sub_141c407e0
// 地址: 0x141c407e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = *(arg1 + 0x18)
int128_t result
result.d = zmm2.d f* *(arg1 + 0x10)
float zmm1 = *(arg1 + 0x14) f* *(arg1 + 0x1c)
result ^= data_142d3f780
*(arg1 + 0x1c) = zmm2.d
result.d = result.d f- zmm1
*(arg1 + 0x18) = result.d
result.d = result.d f* *(arg1 + 0x20)
result.d = result.d f+ *(arg1 + 0x24)
return result
