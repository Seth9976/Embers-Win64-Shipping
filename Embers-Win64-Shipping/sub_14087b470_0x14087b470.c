// 函数: sub_14087b470
// 地址: 0x14087b470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x11)
*(arg2 + 0x14) = 0
*(arg2 + 0x1c) = 0
int32_t result = (*(arg2 + 0x24) & 0xfffffff9) | 1
*(arg2 + 0x24) = result
__builtin_memset(arg2 + 0x28, 0, 0x20)
return result
