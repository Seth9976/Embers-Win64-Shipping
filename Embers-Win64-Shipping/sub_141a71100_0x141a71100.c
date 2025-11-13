// 函数: sub_141a71100
// 地址: 0x141a71100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg2 + 0x20
*(arg2 + 0x30) = 0
*(arg2 + 0x38) = 0
__builtin_memset(arg2 + 0x40, 0, 0x20)
__builtin_memset(arg2, 0, 0x3c)
*(result_1 + 0x1c) = 0x80
int64_t* result = result_1[2]

if (result != 0)
    result_1 = result

*result_1 = 0
result_1[1] = 0
*(arg2 + 0x40) = 0xffffffff
*(arg2 + 0x44) = 0
*(arg2 + 0x50) = 0
*(arg2 + 0x58) = 0
return result
