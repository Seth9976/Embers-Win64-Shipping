// 函数: sub_142b967c0
// 地址: 0x142b967c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8_1 = *(arg1 + 0x38)

if (&r8_1[1] u>= *(arg1 + 0x40))
    *(arg1 + 0x38) = r8_1
    return 0

uint16_t result = zx.w(r8_1[1]) | zx.w(*r8_1) << 8
*(arg1 + 0x38) = &r8_1[2]
return result
