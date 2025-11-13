// 函数: sub_14087e650
// 地址: 0x14087e650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0x78)
*(arg2 + 0x18) = 0xffffffff
*(arg2 + 0x24) = 0
*(arg2 + 0x2c) = 0
*(arg2 + 0x30) = 0
*(arg2 + 0x34) = 0
*(arg2 + 0x3c) = 0
int32_t result = (*(arg2 + 0x44) & 0xfffffff9) | 1
*(arg2 + 0x44) = result
__builtin_memset(arg2 + 0x48, 0, 0x30)
return result
