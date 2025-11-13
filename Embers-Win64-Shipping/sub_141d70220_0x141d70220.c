// 函数: sub_141d70220
// 地址: 0x141d70220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg2 + 0x10
*(arg2 + 0x20) = 0
*(arg2 + 0x28) = 0
__builtin_memset(arg2 + 0x30, 0, 0x20)
__builtin_memset(arg2, 0, 0x2c)
*(result_1 + 0x1c) = 0x80
int64_t* result = result_1[2]

if (result != 0)
    result_1 = result

*result_1 = 0
result_1[1] = 0
*(arg2 + 0x30) = 0xffffffff
*(arg2 + 0x34) = 0
*(arg2 + 0x40) = 0
*(arg2 + 0x48) = 0
return result
