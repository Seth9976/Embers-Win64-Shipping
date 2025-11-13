// 函数: sub_141049de0
// 地址: 0x141049de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = data_142d3f800
int64_t i

for (i = 0; i s< 6; i += 2)
    *(arg1 + (i << 3) + 0x7e8) |= zmm2

*(arg1 + 0x2670) = -1
*(arg1 + 0x2678) = 0xffffffff
return i
