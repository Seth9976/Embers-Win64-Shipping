// 函数: sub_1418ce670
// 地址: 0x1418ce670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
arg1[1].d = rsi.d

if (rsi.d != 0)
    sub_140808f70(arg1, rsi.d, 0)
    memcpy(*arg1, rbp, (rsi * 0x18).d)
else
    *(arg1 + 0xc) = 0

arg1[2].d = arg2[2].d
return arg1
