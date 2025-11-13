// 函数: sub_140618490
// 地址: 0x140618490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
arg1[1].d = rsi.d

if (rsi.d != 0)
    sub_14061cb30(arg1, rsi.d, 0)
    memcpy(*arg1, rbp, (rsi << 4).d)
else
    *(arg1 + 0xc) = 0

sub_140596d10(&arg1[2], &arg2[2])
return arg1
