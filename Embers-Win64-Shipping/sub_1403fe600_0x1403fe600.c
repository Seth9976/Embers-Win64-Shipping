// 函数: sub_1403fe600
// 地址: 0x1403fe600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*(arg1 + 0xc))
int64_t result = memmove(zx.q(arg2) - r8 + *arg1, zx.q(*(arg1 + 8)) - r8 + *arg1, r8.d)
*(arg1 + 8) = arg2
return result
