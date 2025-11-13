// 函数: sub_142797de0
// 地址: 0x142797de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x1f0) & 7) == 0)
    *(arg1 + 0x14d) &= 0xbf
    int32_t temp0_2 = *(arg1 + 0x380)
    *(arg1 + 0x380) = 1
    return zx.q(temp0_2)

if (*(arg1 + 0x208) != 4 && *(arg1 + 0x220) != 3 && *(arg1 + 0x238) != 3)
    *(arg1 + 0x14d) &= 0xbf
    *(arg1 + 0x14d) = *(arg1 + 0x14d)
    int32_t temp0 = *(arg1 + 0x380)
    *(arg1 + 0x380) = 1
    return zx.q(temp0)

*(arg1 + 0x14d) &= 0xbf
*(arg1 + 0x14d) |= 0x40
int32_t temp0_1 = *(arg1 + 0x380)
*(arg1 + 0x380) = 1
return zx.q(temp0_1)
