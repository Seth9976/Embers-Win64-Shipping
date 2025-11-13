// 函数: sub_142a94c10
// 地址: 0x142a94c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 1 || arg5 s< arg2)
    *arg6 = 0
    return 0

int32_t r10_1 = *(arg1 + 0x10) - *(arg1 + 0x14)

if (r10_1 s< arg2)
    *arg6 = arg5
    return arg4

*arg6 = r10_1
return sx.q(*(arg1 + 0x14)) + *(arg1 + 8)
