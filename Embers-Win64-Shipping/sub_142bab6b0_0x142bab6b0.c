// 函数: sub_142bab6b0
// 地址: 0x142bab6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t i_2 = zx.w(*(arg1 + 0x218)) - 0xb7
void* r11 = arg2
uint32_t i_3 = zx.d(i_2)

if (i_3 u>= *(arg1 + 0x20) - *(arg1 + 0x1c) + 1)
    *(arg1 + 0x18) = 0x82
    return i_3

*(arg1 + 0x210) += 1
int32_t rax = 0

if (0 u< i_2)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        *(arg1 + 0x210) += 2
        r11 += 4
        int32_t r9 = *(arg1 + 0x210)
        int64_t r10_1 = *(arg1 + 0x208)
        rax = sx.d(zx.w(*(sx.q(r9 - 1) + r10_1)) + zx.w(*(sx.q(r9 - 2) + r10_1)) * 0x100)
        *(r11 - 4) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x220) = 0
return rax
