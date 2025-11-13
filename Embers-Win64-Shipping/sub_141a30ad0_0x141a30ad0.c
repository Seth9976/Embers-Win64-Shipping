// 函数: sub_141a30ad0
// 地址: 0x141a30ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x48) = 0

if (*(arg2 + 0x48) == 0)
    memmove(arg1 + 0x18, arg2 + 0x18, 0x30)

int64_t rcx_1 = *(arg1 + 0x48)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg2 + 0x48) = 0
arg1[5].d = arg2[5].d
*(arg1 + 0x54) = *(arg2 + 0x54)
arg2[5].d = 0
*(arg2 + 0x54) = 4
return arg1
