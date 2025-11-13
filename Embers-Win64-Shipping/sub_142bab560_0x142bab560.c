// 函数: sub_142bab560
// 地址: 0x142bab560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x210)
void* r11 = arg2
uint32_t rdx = zx.d(*(sx.q(r9 + 1) + *(arg1 + 0x208)))
int32_t rax_4 = *(arg1 + 0x20) - *(arg1 + 0x1c) + 1

if (rdx u>= rax_4)
    *(arg1 + 0x18) = 0x82
    return rax_4

*(arg1 + 0x210) = r9 + 2
int32_t rax_6 = 0

if (0 u< rdx.w)
    uint64_t i_1 = zx.q(rdx.w)
    uint64_t i
    
    do
        *(arg1 + 0x210) += 2
        r11 += 4
        int32_t r9_1 = *(arg1 + 0x210)
        int64_t r10_1 = *(arg1 + 0x208)
        rax_6 = sx.d(zx.w(*(sx.q(r9_1 - 1) + r10_1)) + zx.w(*(sx.q(r9_1 - 2) + r10_1)) * 0x100)
        *(r11 - 4) = rax_6
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x220) = 0
*(arg1 + 0x34) += rdx
return rax_6
