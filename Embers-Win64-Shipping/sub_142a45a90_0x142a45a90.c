// 函数: sub_142a45a90
// 地址: 0x142a45a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc) != 0)
    sub_142a7dcd0(*arg1)

arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
int64_t rcx_1 = *arg2

if (rcx_1 == arg2 + 0xd)
    *arg1 = arg1 + 0xd
    memcpy(arg1 + 0xd, arg2 + 0xd, arg2[1].d)
    return arg1

*arg1 = rcx_1
*arg2 = arg2 + 0xd
arg2[1].d = 0x28
*(arg2 + 0xc) = 0
return arg1
