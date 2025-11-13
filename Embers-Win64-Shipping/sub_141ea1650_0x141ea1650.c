// 函数: sub_141ea1650
// 地址: 0x141ea1650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x50))

if (rdi.d == 0)
    return 

int32_t rax_1 = arg2[1].d
int32_t rdx = rax_1 + rdi.d

if (rdx s> *(arg2 + 0xc))
    sub_1405a5410(arg2, rdx)
    rax_1 = arg2[1].d

memcpy((sx.q(rax_1) << 4) + *arg2, *(arg1 + 0x48), (rdi << 4).d)
arg2[1].d += rdi.d
