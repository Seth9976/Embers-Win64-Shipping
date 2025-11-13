// 函数: sub_142bab620
// 地址: 0x142bab620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t result_1 = zx.w(*(arg1 + 0x218)) - 0xaf
uint32_t result = zx.d(result_1)

if (result u>= *(arg1 + 0x20) - *(arg1 + 0x1c) + 1)
    *(arg1 + 0x18) = 0x82
    return result

int16_t r9 = 1

if (1 u<= result_1)
    do
        uint32_t r8_3 = zx.d(r9)
        r9 += 1
        result = r8_3 - 1
        *(arg2 + (sx.q(result) << 2)) = zx.d(*(sx.q(*(arg1 + 0x210) + r8_3) + *(arg1 + 0x208)))
    while (r9 u<= result_1)

return result
