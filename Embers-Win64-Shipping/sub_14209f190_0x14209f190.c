// 函数: sub_14209f190
// 地址: 0x14209f190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)

if (arg2 s< 0 || r10.d s>= *(arg1 + 0xa0))
    return 

int32_t rcx = *(arg1 + 0xa0)
int32_t rax_1 = rcx - r10.d

if (rax_1 != 1)
    memmove((r10 << 5) + *(arg1 + 0x98), (sx.q((r10 + 1).d) << 5) + *(arg1 + 0x98), 
        (rax_1 - 1) << 5)
    rcx = *(arg1 + 0xa0)

*(arg1 + 0xa0) = rcx - 1
return sub_1405dad20(arg1 + 0x98) __tailcall
