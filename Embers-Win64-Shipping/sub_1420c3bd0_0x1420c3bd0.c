// 函数: sub_1420c3bd0
// 地址: 0x1420c3bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x78))
    *arg2 = data_143a2e424
    return arg2

char rcx = *(sx.q(arg3) * 0x2c + *(arg1 + 0x70) + 0x28)

if (rcx == 1 || rcx - 3 u<= 2)
    *arg2 = data_143a2e428
    return arg2

if (rcx != 0)
    *arg2 = data_143a2e430
    return arg2

*arg2 = data_143a2e42c
return arg2
