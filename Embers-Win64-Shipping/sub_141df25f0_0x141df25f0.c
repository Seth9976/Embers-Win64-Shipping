// 函数: sub_141df25f0
// 地址: 0x141df25f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
__builtin_memset(&arg1[8], 0, 0x18)
__builtin_memset(&arg1[0x20], 0, 0x1b)

if (&arg1[8] != &arg2[8])
    *(arg1 + 8) = *(arg2 + 8)
    __builtin_memset(&arg2[8], 0, 0x18)
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *(arg1 + 0x14) = *(arg2 + 0x14)
    *(arg1 + 0x18) = *(arg2 + 0x18)

*(arg1 + 0x30) = *(arg2 + 0x30)
int16_t rax_6 = *(arg2 + 0x38)
*(arg2 + 0x30) = 0
*(arg1 + 0x38) = rax_6
*(arg2 + 0x38) = 0

if (&arg1[0x20] != &arg2[0x20])
    *(arg1 + 0x20) = *(arg2 + 0x20)
    *(arg2 + 0x20) = 0
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg1 + 0x2c) = *(arg2 + 0x2c)
    *(arg2 + 0x28) = 0

arg1[0x3a] = 1
arg2[0x3a] = 0
return arg1
