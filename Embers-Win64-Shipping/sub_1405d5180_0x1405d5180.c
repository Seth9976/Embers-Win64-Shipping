// 函数: sub_1405d5180
// 地址: 0x1405d5180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rdi = sx.q(arg2[1].d)
int64_t rsi = *arg2
arg1[1].d = rdi.d

if (rdi.d == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1405a4be0(arg1, rdi.d, 0)
memcpy(*arg1, rsi, (rdi << 4).d)
return arg1
