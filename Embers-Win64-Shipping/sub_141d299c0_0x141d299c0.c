// 函数: sub_141d299c0
// 地址: 0x141d299c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0xb8)
int64_t* result_1 = arg2 + 0x70
__builtin_memset(arg2 + 0x18, 0, 0x58)
result_1[2] = 0
result_1[3].d = 0
*(result_1 + 0x1c) = 0x80
int64_t* result = result_1[2]

if (result != 0)
    result_1 = result

*result_1 = 0
result_1[1] = 0
*(arg2 + 0x90) = 0xffffffff
*(arg2 + 0x94) = 0
*(arg2 + 0xa0) = 0
*(arg2 + 0xa8) = 0
return result
