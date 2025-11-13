// 函数: sub_141fde4b0
// 地址: 0x141fde4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int32_t rcx = *(arg1 + 0x18)
int32_t rax_1 = rcx - r10.d

if (rax_1 != 1)
    int64_t r9_1 = *(arg1 + 0x10)
    memmove(r9_1 + r10 * 0x14, r9_1 + sx.q((r10 + 1).d) * 0x14, (rax_1 - 1) * 0x14)
    rcx = *(arg1 + 0x18)

*(arg1 + 0x18) = rcx - 1
sub_1413a8970(arg1 + 0x10)
int64_t result = sub_141fdb4d0(arg1 + 0x10, zx.o(0), 1)
*(arg1 + 8) |= 2
return result
