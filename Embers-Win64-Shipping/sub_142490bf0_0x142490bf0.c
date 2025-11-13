// 函数: sub_142490bf0
// 地址: 0x142490bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 &= 0xfffffff8
*(arg2 + 4) = 0
arg2[0x1b] = 0xffffffff
arg2[0x1c] = 0
arg2[0x1d] = 0xffffffff
arg2[0x1e] = 0
arg2[0x1f] = 0xffffffff
__builtin_memset(&arg2[0x20], 0, 0x14)
int64_t result = memset(&arg2[3], 0, 0x88)
arg2[5] = 0x3f800000
return result
