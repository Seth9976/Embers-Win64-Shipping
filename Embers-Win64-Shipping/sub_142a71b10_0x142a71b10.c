// 函数: sub_142a71b10
// 地址: 0x142a71b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_3 = sx.q(*(arg1 + 0x10))
*(arg1 + 0xc) = rax_3.d

if (rax_3.d s>= *(arg1 + 0x14))
    return 0xffff

return zx.q(*(*(arg1 + 0x18) + (rax_3 << 1)))
