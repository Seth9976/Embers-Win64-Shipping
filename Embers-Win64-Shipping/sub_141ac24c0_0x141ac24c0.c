// 函数: sub_141ac24c0
// 地址: 0x141ac24c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    int64_t rax_2 = sub_141ea5640(arg1 + 4, arg2)
    *(arg1 + 0x58) = -1
    return rax_2

int64_t rax = sx.q(*(arg1 + 0x58))

if (rax.d != 0xffffffff)
    int64_t r9_1 = sx.q(*(arg2[0xc] + (rax << 2)))
    rax = arg2[0x10]
    *(arg1 + 0x5c) = *(rax + (r9_1 << 2))

*(arg1 + 0xc) |= 0x7fffffff
*(arg1 + 0x10) = 0xffffffff
return rax
