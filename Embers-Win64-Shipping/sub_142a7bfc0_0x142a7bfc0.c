// 函数: sub_142a7bfc0
// 地址: 0x142a7bfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return arg1

if (arg2 s> arg3 || arg2 s< 0 || arg3 s< 0)
    *arg4 = 1

int64_t rax = *(arg1 + 0x30)

if (arg2 s> rax || arg3 s> rax)
    *arg4 = 1

int64_t rax_1 = *(arg1 + 0x30)
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = rax_1
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = rax_1
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x98) = -1
*(arg1 + 0xa0) = 0
*(arg1 + 0x82) = 0
*(arg1 + 0xa8) = 0
*(arg1 + 0x10c) = 0
*(arg1 + 0x110) = 0x2710
*(arg1 + 0x40) = arg2
*(arg1 + 0x48) = arg3
*(arg1 + 0x70) = arg2
*(arg1 + 0x78) = arg3

if (*(arg1 + 0x80) == 0)
    *(arg1 + 0x60) = arg2
    *(arg1 + 0x68) = arg3

if (*(arg1 + 0x81) == 0)
    return arg1

*(arg1 + 0x50) = arg2
*(arg1 + 0x58) = arg3
return arg1
