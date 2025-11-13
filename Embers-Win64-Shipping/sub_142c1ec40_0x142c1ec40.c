// 函数: sub_142c1ec40
// 地址: 0x142c1ec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(arg2)

if (arg2 == 0xffff)
    return 0

uint16_t rdx = zx.w(*(arg1 + 6))
int128_t* const r8 = &data_14369a5d0
uint64_t r11 = zx.q(*(arg1 + 7))
int128_t* const rdx_1

if (0 != rdx * 0x100 + r11.w)
    rdx_1 = (zx.q(rdx.b) << 8) + arg1 + r11
else
    rdx_1 = &data_14369a5d0

if (r9.d u< (zx.d(*rdx_1) << 8) + zx.d(*(rdx_1 + 1)))
    r8 = rdx_1 + ((r9 * 3 + 1) << 1)

return zx.q((zx.d(*(r8 + 1)) << 0x10) + (zx.d(*(r8 + 2)) << 8) + (zx.d(*r8) << 0x18)
    + zx.d(*(r8 + 3)))
