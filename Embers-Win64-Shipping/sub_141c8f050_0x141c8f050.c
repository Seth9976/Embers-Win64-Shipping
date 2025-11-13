// 函数: sub_141c8f050
// 地址: 0x141c8f050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d

if (rdi == 0)
    return 

int32_t rcx = arg1[1].d
int32_t rdx = rcx + rdi

if (rdx s> *(arg1 + 0xc))
    sub_141a641d0(arg1, rdx)
    rcx = arg1[1].d

memmove(sx.q(rcx) * 0xc8 + *arg1, *arg2, rdi * 0xc8)
arg2[1].d = 0
arg1[1].d += rdi
