// 函数: sub_1405ac190
// 地址: 0x1405ac190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
arg1[2] = 0
int64_t rsi = sx.q(arg2[3].d)
int64_t rbp = arg2[2]
arg1[3].d = rsi.d

if (rsi.d != 0)
    sub_1405c4bc0(&arg1[2], rsi.d, 0)
    memcpy(arg1[2], rbp, (rsi * 0x14).d)
else
    *(arg1 + 0x1c) = 0

return arg1
