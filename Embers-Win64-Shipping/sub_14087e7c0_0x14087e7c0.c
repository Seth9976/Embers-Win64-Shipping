// 函数: sub_14087e7c0
// 地址: 0x14087e7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg2 + 0x38
__builtin_memset(arg2 + 8, 0, 0x30)
result_1[2] = 0
result_1[3].d = 0
*(result_1 + 0x1c) = 0x80
int64_t* result = result_1[2]

if (result != 0)
    result_1 = result

*result_1 = 0
result_1[1] = 0
*(arg2 + 0x58) = 0xffffffff
*(arg2 + 0x5c) = 0
*(arg2 + 0x68) = 0
*(arg2 + 0x70) = 0
*(arg2 + 0x78) = 1
return result
