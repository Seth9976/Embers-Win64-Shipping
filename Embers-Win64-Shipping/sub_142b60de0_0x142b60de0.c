// 函数: sub_142b60de0
// 地址: 0x142b60de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2d8) != 0)
    return *(arg1 + 0x2d8)

int64_t result = sub_142a6d4b0(3, 3, arg1 + 0x148)
*(arg1 + 0x2d8) = result

if (result != 0)
    return result

*arg2 = 7
return *(arg1 + 0x2d8)
