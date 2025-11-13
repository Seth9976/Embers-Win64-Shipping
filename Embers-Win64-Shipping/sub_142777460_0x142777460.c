// 函数: sub_142777460
// 地址: 0x142777460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0x58)
int64_t* result_1 = arg2 + 0x18
*(arg2 + 0x10) = 0
result_1[2] = 0
result_1[3].d = 0
*(result_1 + 0x1c) = 0x80
int64_t* result = result_1[2]

if (result != 0)
    result_1 = result

*result_1 = 0
result_1[1] = 0
*(arg2 + 0x38) = 0xffffffff
*(arg2 + 0x3c) = 0
*(arg2 + 0x48) = 0
*(arg2 + 0x50) = 0
return result
