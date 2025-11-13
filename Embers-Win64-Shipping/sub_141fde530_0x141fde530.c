// 函数: sub_141fde530
// 地址: 0x141fde530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int32_t rcx = *(arg1 + 0x18)
int32_t rax_1 = rcx - r10.d

if (rax_1 != 1)
    memmove((r10 << 5) + *(arg1 + 0x10), (sx.q((r10 + 1).d) << 5) + *(arg1 + 0x10), 
        (rax_1 - 1) << 5)
    rcx = *(arg1 + 0x18)

*(arg1 + 0x18) = rcx - 1
sub_1405dad20(arg1 + 0x10)
int64_t result = sub_141fdbdd0(arg1 + 0x10, zx.o(0), 1)
*(arg1 + 8) |= 2
return result
