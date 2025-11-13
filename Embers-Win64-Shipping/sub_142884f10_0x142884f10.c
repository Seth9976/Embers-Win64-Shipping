// 函数: sub_142884f10
// 地址: 0x142884f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = arg2
*(arg1 + 0x20) = 0

if (arg2 == 0)
    *(arg1 + 0x28) = 0
    __builtin_memset(arg1 + 0x78, 0, 0x20)
    return 0

*(arg1 + 0x28) = arg2 + 0x118
*(arg1 + 0x88) = arg2 + 0x120
*(arg1 + 0x90) = arg2 + 0x124
int64_t result = *(arg2 + 0x130) + 0x1c
*(arg1 + 0x78) = result
*(arg1 + 0x80) = arg2 + 0x150
return result
