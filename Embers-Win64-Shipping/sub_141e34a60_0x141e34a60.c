// 函数: sub_141e34a60
// 地址: 0x141e34a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
*arg2 = **arg1
arg2[1] = *r8
arg2[2] = 0
int64_t rsi = sx.q(r8[2].d)
int64_t rbp = r8[1]
arg2[3].d = rsi.d

if (rsi.d != 0)
    sub_1405a4b40(&arg2[2], rsi.d, 0)
    memcpy(arg2[2], rbp, (rsi * 0x30).d)
else
    *(arg2 + 0x1c) = 0

return arg2
