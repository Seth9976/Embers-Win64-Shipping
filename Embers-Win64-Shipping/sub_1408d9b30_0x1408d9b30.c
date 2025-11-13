// 函数: sub_1408d9b30
// 地址: 0x1408d9b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e0f110
arg1[1] = 0
int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
arg1[2].d = rsi.d

if (rsi.d != 0)
    sub_140638750(&arg1[1], rsi.d, 0)
    memcpy(arg1[1], rbp, (rsi << 2).d)
else
    *(arg1 + 0x14) = 0

return arg1
