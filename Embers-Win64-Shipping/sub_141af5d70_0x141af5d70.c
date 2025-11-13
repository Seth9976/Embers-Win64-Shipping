// 函数: sub_141af5d70
// 地址: 0x141af5d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].q = arg2[1].q
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x21) = 0

if (*(arg2 + 0x21) != 0)
    arg1[2].b = arg2[2].b
    *(arg1 + 0x21) = 1

*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x29) = 0

if (*(arg2 + 0x29) != 0)
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg1 + 0x29) = 1

*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[3] = arg2[3]
arg1[4].q = arg2[4].q
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
return arg1
