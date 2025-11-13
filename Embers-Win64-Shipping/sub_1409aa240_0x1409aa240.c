// 函数: sub_1409aa240
// 地址: 0x1409aa240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
int64_t rsi = sx.q(arg2[4])
int64_t rbp = *(arg2 + 8)
arg1[4] = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&arg1[2], rsi.d, 0)
    memcpy(*(arg1 + 8), rbp, (rsi << 3).d)
else
    arg1[5] = 0

return arg1
