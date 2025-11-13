// 函数: sub_14209f280
// 地址: 0x14209f280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)

if (arg2 s< 0 || r9.d s>= *(arg1 + 0x78))
    return 

int32_t rcx = *(arg1 + 0x78)
int32_t rax_1 = rcx - r9.d

if (rax_1 != 1)
    int64_t r10_1 = *(arg1 + 0x70)
    memmove(r10_1 + r9 * 0x14, r10_1 + sx.q((r9 + 1).d) * 0x14, (rax_1 - 1) * 0x14)
    rcx = *(arg1 + 0x78)

*(arg1 + 0x78) = rcx - 1
return sub_1413a8970(arg1 + 0x70) __tailcall
