// 函数: sub_141f2b4a0
// 地址: 0x141f2b4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)

if (rdi.d == 0)
    return 

int32_t rcx = arg1[1].d
int32_t rdx = rcx + rdi.d

if (rdx s> *(arg1 + 0xc))
    sub_1405a5220(arg1, rdx)
    rcx = arg1[1].d

memcpy(sx.q(rcx) * 0x30 + *arg1, *arg2, (rdi * 0x30).d)
arg1[1].d += rdi.d
