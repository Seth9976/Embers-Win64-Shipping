// 函数: sub_14209f560
// 地址: 0x14209f560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t r10_1 = sx.q(arg2)

if (r10_1.d s>= *(arg1 + 0x78))
    return 

int32_t rcx = *(arg1 + 0x78)
int32_t rax_2 = rcx - r10_1.d

if (rax_2 != 1)
    int64_t r9_1 = *(arg1 + 0x70)
    memmove(r9_1 + r10_1 * 0x14, r9_1 + sx.q((r10_1 + 1).d) * 0x14, (rax_2 - 1) * 0x14)
    rcx = *(arg1 + 0x78)

*(arg1 + 0x78) = rcx - 1
sub_1413a8970(arg1 + 0x70)
sub_141fdb4d0(arg1 + 0x70, *(arg1 + 0x88), 1)
