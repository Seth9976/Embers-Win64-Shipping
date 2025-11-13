// 函数: sub_1419e9df0
// 地址: 0x1419e9df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
*arg2 = **arg1
arg2[1] = 0
int64_t rsi = sx.q(r8[1].d)
int64_t rbp = *r8
arg2[2].d = rsi.d

if (rsi.d != 0)
    sub_140808f70(&arg2[1], rsi.d, 0)
    memcpy(arg2[1], rbp, (rsi * 0x18).d)
else
    *(arg2 + 0x14) = 0

return arg2
