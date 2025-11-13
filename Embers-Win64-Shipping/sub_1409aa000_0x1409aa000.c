// 函数: sub_1409aa000
// 地址: 0x1409aa000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rdi = sx.q(arg2[1].d)
int64_t rsi = *arg2
arg1[1].d = rdi.d

if (rdi.d == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1409da0d0(arg1, rdi.d, 0)
memcpy(*arg1, rsi, (rdi * 0x60).d)
return arg1
