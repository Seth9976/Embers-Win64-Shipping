// 函数: sub_1420ba870
// 地址: 0x1420ba870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x50)
int64_t r10 = sx.q(arg2)
int32_t rax_1 = r8 - r10.d

if (rax_1 != 1)
    int64_t r9_1 = *(arg1 + 0x48)
    memmove(r9_1 + r10 * 0x14, r9_1 + sx.q((r10 + 1).d) * 0x14, (rax_1 - 1) * 0x14)
    r8 = *(arg1 + 0x50)

*(arg1 + 0x50) = r8 - 1
sub_1413a8970(arg1 + 0x48)
return sub_141fdb4d0(arg1 + 0x48, *(arg1 + 0x60), 1) __tailcall
