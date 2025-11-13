// 函数: sub_1413e9f90
// 地址: 0x1413e9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int64_t rdi = sx.q(*(arg1 + 0xe40))
int64_t rsi = *(arg1 + 0xe38)
arg2[1].d = rdi.d

if (rdi.d == 0)
    *(arg2 + 0xc) = 0
    return arg2

sub_1405c4a90(arg2, rdi.d, 0)
memcpy(*arg2, rsi, (rdi << 2).d)
return arg2
