// 函数: sub_142b92bd0
// 地址: 0x142b92bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x60) = 0
*(arg1 + 0x98) = 0
*(arg1 + 0x68) = *(arg1 + 0x20) + (sx.q(*(arg1 + 0x1a)) << 3)
*(arg1 + 0x70) = sx.q(*(arg1 + 0x1a)) + *(arg1 + 0x28)
*(arg1 + 0x78) = *(arg1 + 0x30) + (sx.q(*(arg1 + 0x18)) << 1)

if (*(arg1 + 0x14) != 0)
    int64_t rax_5 = *(arg1 + 0x48)
    *(arg1 + 0x88) = *(arg1 + 0x40) + (sx.q(*(arg1 + 0x1a)) << 3)
    *(arg1 + 0x90) = rax_5 + (sx.q(*(arg1 + 0x1a)) << 3)

int64_t result = (zx.q(*(arg1 + 0x50)) << 5) + *(arg1 + 0x58)
*(arg1 + 0xa0) = result
return result
