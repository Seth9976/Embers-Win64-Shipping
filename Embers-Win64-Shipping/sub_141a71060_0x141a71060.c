// 函数: sub_141a71060
// 地址: 0x141a71060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0x70)
int64_t* result_1 = arg2 + 0x30
__builtin_memset(arg2 + 0x18, 0, 0x18)
result_1[2] = 0
result_1[3].d = 0
*(result_1 + 0x1c) = 0x80
int64_t* result = result_1[2]

if (result != 0)
    result_1 = result

*result_1 = 0
result_1[1] = 0
*(arg2 + 0x50) = 0xffffffff
*(arg2 + 0x54) = 0
*(arg2 + 0x60) = 0
*(arg2 + 0x68) = 0
return result
