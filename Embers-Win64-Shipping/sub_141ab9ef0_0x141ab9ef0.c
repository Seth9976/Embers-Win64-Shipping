// 函数: sub_141ab9ef0
// 地址: 0x141ab9ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_7 = *(arg1 + 8)

if (rax_7 s>= 0)
    *arg2 = *(arg1 + 0xc)
    return arg2

int32_t rcx = rax_7 * 2

if ((rcx & 0xfffffffe) == 0xfffffffe)
    *arg2 = 0xffffffff
    return arg2

*arg2 = *(*(arg3 + 0x80) + (sx.q(rcx) s>> 1 << 2))
return arg2
