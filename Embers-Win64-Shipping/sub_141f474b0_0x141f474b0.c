// 函数: sub_141f474b0
// 地址: 0x141f474b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0x71a)
uint8_t result = r8 u>> 3 & 1

if (result != arg2)
    result = 0
    *(arg1 + 0x71a) = (r8 & 0xf7) | arg2 << 3
    *(arg1 + 0x720) = 0

return result
