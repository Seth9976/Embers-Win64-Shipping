// 函数: sub_14249c770
// 地址: 0x14249c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0xb0)
int64_t* result_1 = arg2 + 0x60
__builtin_memset(arg2 + 0x48, 0, 0x18)
result_1[2] = 0
result_1[3].d = 0
*(result_1 + 0x1c) = 0x80
int64_t* result = result_1[2]

if (result != 0)
    result_1 = result

*result_1 = 0
result_1[1] = 0
*(arg2 + 0x80) = 0xffffffff
*(arg2 + 0x84) = 0
*(arg2 + 0x90) = 0
*(arg2 + 0x98) = 0
*(arg2 + 0xa0) = 0
*(arg2 + 0xa8) = 0
return result
