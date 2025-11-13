// 函数: sub_1420dead0
// 地址: 0x1420dead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg2 + 0x8b)) & 0x30

if (rax.d == 0x10)
    int64_t rax_1 = *(arg1 + 0x200)
    *(rax_1 + (sx.q(*(arg2 + 0x80)) << 3)) = 0
    *(arg2 + 0x8b) &= 0xcf
    *(arg2 + 0x80) = 0xffffffff
    return rax_1

if (rax.d == 0x20)
    rax = *(arg1 + 0x210)
    *(rax + (sx.q(*(arg2 + 0x80)) << 3)) = 0

*(arg2 + 0x8b) &= 0xcf
*(arg2 + 0x80) = 0xffffffff
return rax
