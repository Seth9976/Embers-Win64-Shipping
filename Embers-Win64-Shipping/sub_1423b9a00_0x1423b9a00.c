// 函数: sub_1423b9a00
// 地址: 0x1423b9a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 0x158) = 0

if (*(arg2 + 0x158) == 0)
    memmove(&arg1[2], &arg2[2], 0x150)

int64_t rcx_1 = *(arg1 + 0x158)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0x158) = *(arg2 + 0x158)
*(arg2 + 0x158) = 0
arg1[0x58] = arg2[0x58]
arg1[0x59] = arg2[0x59]
arg2[0x58] = 0
arg2[0x59] = 0xe
return arg1
