// 函数: sub_141ac1960
// 地址: 0x141ac1960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ea5640(arg1 + 0xc8, arg2)

if (*(arg1 + 0xe0) == 0)
    int64_t rax_2 = sub_141ea5640(arg1 + 0xe4, arg2)
    *(arg1 + 0x138) = -1
    return rax_2

int64_t rax = sx.q(*(arg1 + 0x138))

if (rax.d != 0xffffffff)
    int64_t rcx_1 = sx.q(*(arg2[0xc] + (rax << 2)))
    rax = arg2[0x10]
    *(arg1 + 0x13c) = *(rax + (rcx_1 << 2))

*(arg1 + 0xec) |= 0x7fffffff
*(arg1 + 0xf0) = 0xffffffff
return rax
