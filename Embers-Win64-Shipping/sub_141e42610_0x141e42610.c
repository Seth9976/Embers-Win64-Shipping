// 函数: sub_141e42610
// 地址: 0x141e42610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int64_t rdi = sx.q(*(arg1 + 0x88))
int64_t rsi = *(arg1 + 0x80)
arg2[1].d = rdi.d

if (rdi.d == 0)
    *(arg2 + 0xc) = 0
    return arg2

sub_1407c3650(arg2, rdi.d, 0)
memcpy(*arg2, rsi, (rdi * 0xc).d)
return arg2
