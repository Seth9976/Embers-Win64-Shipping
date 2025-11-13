// 函数: sub_142c1f4d0
// 地址: 0x142c1f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t r10 = zx.w(*(arg1 + 8))
uint64_t r11 = zx.q(*(arg1 + 9))
uint64_t r9 = zx.q(arg2)
void* r8_2

if (0 != r10 * 0x100 + r11.w)
    r8_2 = (zx.q(r10.b) << 8) + arg1 + r11
else
    r8_2 = &data_14369a5d0

if (r9.d u< (zx.d(*r8_2) << 8) + zx.d(*(r8_2 + 1)))
    uint64_t r10_1 = zx.q(*(r8_2 + (r9 << 1) + 3))
    uint16_t r9_1 = zx.w(*(r8_2 + (r9 << 1) + 2))
    
    if (0 != r9_1 * 0x100 + r10_1.w)
        return (zx.q(r9_1.b) << 8) + r8_2 + r10_1

return &data_14369a5d0
