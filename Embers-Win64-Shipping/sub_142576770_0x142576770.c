// 函数: sub_142576770
// 地址: 0x142576770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2 + 0x18, 0, 0x58)
int64_t* result_1 = arg2 + 0x20
__builtin_memset(arg2, 0, 0x20)
result_1[2] = 0
result_1[3].d = 0
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
*(arg2 + 0x60) = 0
*(arg2 + 0x68) = 0
return result
