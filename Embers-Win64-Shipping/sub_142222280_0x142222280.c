// 函数: sub_142222280
// 地址: 0x142222280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xe) &= 0x7f
*(arg1 + 0xe) |= arg3 << 7
int128_t result = *arg2
*(arg1 + 0xa8) = result
return result
