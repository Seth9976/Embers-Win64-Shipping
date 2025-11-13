// 函数: sub_141fde5b0
// 地址: 0x141fde5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int32_t rcx = *(arg1 + 0x18)
int32_t rax_1 = rcx - r10.d

if (rax_1 != 1)
    memmove(r10 * 0x2c + *(arg1 + 0x10), sx.q((r10 + 1).d) * 0x2c + *(arg1 + 0x10), 
        (rax_1 - 1) * 0x2c)
    rcx = *(arg1 + 0x18)

*(arg1 + 0x18) = rcx - 1
sub_141febab0(arg1 + 0x10)
int64_t result = sub_141f55fe0(arg1 + 0x10, zx.o(0), 1)
*(arg1 + 8) |= 2
return result
