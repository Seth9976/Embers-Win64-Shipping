// 函数: sub_141a70f20
// 地址: 0x141a70f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = &data_143032190
__builtin_memset(&arg2[1], 0, 0x12)
__builtin_memset(&arg2[4], 0, 0x18)
memset(&arg2[8], 0, 0x58)
__builtin_memset(&arg2[7], 0, 0x20)
void* result_1 = &arg2[0xb]
*(result_1 + 0x10) = 0
*(result_1 + 0x18) = 0
*(result_1 + 0x1c) = 0x80
void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*result_1 = 0
*(result_1 + 8) = 0
arg2[0xf].d = 0xffffffff
*(arg2 + 0x7c) = 0
arg2[0x11] = 0
arg2[0x12].d = 0
return result
