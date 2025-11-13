// 函数: sub_141f6af80
// 地址: 0x141f6af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x44c) & 2) != 0)
    *arg2 = *(arg1 + 0x448)
    return arg2

char rax_2 = *(arg1 + 0x14f)

if (rax_2 == 0)
    *arg2 = 0xff00ffff
    return arg2

if (rax_2 == 1)
    *arg2 = 0xff8080ff
    return arg2

char rax_5 = *(arg1 + 0x2b4)
*(arg2 + 3) = 0xff

if ((rax_5 & 0x10) == 0)
    *arg2 = 0xff
    *(arg2 + 2) = 0xff
    return arg2

*arg2 = 0xff80
*(arg2 + 2) = 0
return arg2
