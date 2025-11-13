// 函数: sub_140e50940
// 地址: 0x140e50940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 0x128) = 0

if (*(arg2 + 0x128) == 0)
    memmove(&arg1[8], &arg2[8], 0x120)

int64_t rcx_1 = *(arg1 + 0x128)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0x128) = *(arg2 + 0x128)
*(arg2 + 0x128) = 0
*(arg1 + 0x130) = *(arg2 + 0x130)
*(arg1 + 0x134) = *(arg2 + 0x134)
*(arg2 + 0x130) = 0
*(arg2 + 0x134) = 4
arg1[0x138] = arg2[0x138]
return arg1
