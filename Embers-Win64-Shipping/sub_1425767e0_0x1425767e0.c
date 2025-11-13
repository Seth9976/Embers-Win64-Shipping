// 函数: sub_1425767e0
// 地址: 0x1425767e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x18) = 0
memset(arg2 + 0x28, 0, 0x68)
void* result_1 = arg2 + 0x30
__builtin_memset(arg2, 0, 0x30)
*(result_1 + 0x10) = 0
*(result_1 + 0x18) = 0
*(result_1 + 0x1c) = 0x80
void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*result_1 = 0
*(result_1 + 8) = 0
*(arg2 + 0x50) = 0xffffffff
*(arg2 + 0x54) = 0
*(arg2 + 0x60) = 0
*(arg2 + 0x68) = 0
__builtin_memset(arg2 + 0x70, 0, 0x20)
return result
