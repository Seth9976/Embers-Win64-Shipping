// 函数: sub_141ac12e0
// 地址: 0x141ac12e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ea5640(arg1 + 0x160, arg2)
sub_141ea5640(arg1 + 0x170, arg2)

if (*(arg1 + 0x100) == 0)
    int64_t rax_2 = sub_141ea5640(arg1 + 0x104, arg2)
    *(arg1 + 0x158) = -1
    return rax_2

int64_t rax = sx.q(*(arg1 + 0x158))

if (rax.d != 0xffffffff)
    int64_t rdx_1 = sx.q(*(arg2[0xc] + (rax << 2)))
    rax = arg2[0x10]
    *(arg1 + 0x15c) = *(rax + (rdx_1 << 2))

*(arg1 + 0x10c) |= 0x7fffffff
*(arg1 + 0x110) = 0xffffffff
return rax
