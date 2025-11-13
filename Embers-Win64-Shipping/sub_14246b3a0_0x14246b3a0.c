// 函数: sub_14246b3a0
// 地址: 0x14246b3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0xffffffff
void* result_1 = &arg2[0xc]
*(arg2 + 4) = 0
__builtin_memset(&arg2[4], 0, 0x20)
*(result_1 + 0x10) = 0
*(result_1 + 0x18) = 0
*(result_1 + 0x1c) = 0x80
void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*result_1 = 0
*(result_1 + 8) = 0
arg2[0x14] = 0xffffffff
arg2[0x15] = 0
*(arg2 + 0x60) = 0
arg2[0x1a] = 0
arg2[1] = 0x5629063
arg2[2] = 0x5629063
return result
