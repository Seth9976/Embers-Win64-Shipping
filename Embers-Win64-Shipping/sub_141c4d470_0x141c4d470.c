// 函数: sub_141c4d470
// 地址: 0x141c4d470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0
int64_t rsi = sx.q(arg2[2].d)
int64_t rbp = arg2[1]
arg1[2].d = rsi.d

if (rsi.d != 0)
    sub_1405a4b40(&arg1[1], rsi.d, 0)
    memcpy(arg1[1], rbp, (rsi * 0x30).d)
else
    *(arg1 + 0x14) = 0

return arg1
