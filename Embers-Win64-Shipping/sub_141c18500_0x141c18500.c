// 函数: sub_141c18500
// 地址: 0x141c18500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0x80)
int64_t* result_1 = arg2 + 0x40
*(arg2 + 0x18) = 0
*(arg2 + 0x20) = 0xffffffff
*(arg2 + 0x24) = 0
*(arg2 + 0x28) = 0xffffffff
__builtin_memset(arg2 + 0x2c, 0, 0x14)
result_1[2] = 0
result_1[3].d = 0
*(result_1 + 0x1c) = 0x80
int64_t* result = result_1[2]

if (result != 0)
    result_1 = result

*result_1 = 0
result_1[1] = 0
*(arg2 + 0x60) = 0xffffffff
*(arg2 + 0x64) = 0
*(arg2 + 0x70) = 0
*(arg2 + 0x78) = 0
return result
