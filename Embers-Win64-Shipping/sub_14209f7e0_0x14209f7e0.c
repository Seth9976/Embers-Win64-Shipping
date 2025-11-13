// 函数: sub_14209f7e0
// 地址: 0x14209f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 s>= 0 && rbx.d s< *(arg1 + 0x78))
    int32_t rcx = *(arg1 + 0x78)
    int32_t rax_2 = rcx - rbx.d
    
    if (rax_2 != 1)
        int64_t r9_1 = *(arg1 + 0x70)
        memmove(r9_1 + rbx * 0x14, r9_1 + sx.q((rbx + 1).d) * 0x14, (rax_2 - 1) * 0x14)
        rcx = *(arg1 + 0x78)
    
    *(arg1 + 0x78) = rcx - 1
    sub_1413a8970(arg1 + 0x70)
    sub_141fdb4d0(arg1 + 0x70, *(arg1 + 0x88), 1)

int32_t rcx_7 = *(arg1 + 0xa0)
int32_t rax_9 = rcx_7 - rbx.d

if (rax_9 != 1)
    int64_t r10_1 = *(arg1 + 0x98)
    memmove(r10_1 + rbx * 0xc, r10_1 + sx.q((rbx + 1).d) * 0xc, (rax_9 - 1) * 0xc)
    rcx_7 = *(arg1 + 0xa0)

*(arg1 + 0xa0) = rcx_7 - 1
return sub_140775970(arg1 + 0x98) __tailcall
