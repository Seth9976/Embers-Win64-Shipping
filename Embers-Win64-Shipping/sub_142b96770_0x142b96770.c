// 函数: sub_142b96770
// 地址: 0x142b96770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_1 = *(arg1 + 0x38)

if (r8_1 + 3 u>= *(arg1 + 0x40))
    *(arg1 + 0x38) = r8_1
    return 0

uint64_t result =
    zx.q(*r8_1) | zx.q(((zx.d(*(r8_1 + 3)) << 8 | zx.d(*(r8_1 + 2))) << 8 | zx.d(*(r8_1 + 1))) << 8)
*(arg1 + 0x38) = r8_1 + 4
return result
