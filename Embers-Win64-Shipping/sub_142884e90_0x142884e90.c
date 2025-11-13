// 函数: sub_142884e90
// 地址: 0x142884e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = arg2
*(arg1 + 0x18) = 0

if (arg2 == 0)
    *(arg1 + 0x28) = 0
    __builtin_memset(arg1 + 0x78, 0, 0x20)
    return 0

*(arg1 + 0x28) = arg2 + 0x5c4
*(arg1 + 0x88) = arg2 + 0x5cc
*(arg1 + 0x90) = arg2 + 0x5d0
int64_t result = *(arg2 + 0x488) + 0x1c
*(arg1 + 0x78) = result
*(arg1 + 0x80) = arg2 + 0x558
return result
