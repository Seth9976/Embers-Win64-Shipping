// 函数: sub_1414c0490
// 地址: 0x1414c0490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 0x110) = 0

if (*(arg2 + 0x110) == 0)
    memmove(&arg1[0x10], &arg2[0x10], 0x100)

int64_t rcx_1 = *(arg1 + 0x110)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0x110) = *(arg2 + 0x110)
*(arg2 + 0x110) = 0
*(arg1 + 0x120) = *(arg2 + 0x120)
*(arg1 + 0x124) = *(arg2 + 0x124)
*(arg2 + 0x120) = 0
*(arg2 + 0x124) = 0x10
*(arg1 + 0x130) = *(arg2 + 0x130)
*(arg1 + 0x138) = *(arg2 + 0x138)
*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x148) = *(arg2 + 0x148)
*(arg1 + 0x150) = *(arg2 + 0x150)
*(arg1 + 0x158) = *(arg2 + 0x158)
return arg1
