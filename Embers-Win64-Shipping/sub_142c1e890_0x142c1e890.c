// 函数: sub_142c1e890
// 地址: 0x142c1e890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = (zx.q(*(arg1 + 2)) << 8) + zx.q(*(arg1 + 3)) + 2
int128_t* const rax_3 = &data_14369a5d0

if (zx.d(*(arg1 + (r8_1 << 1))) << 8 != neg.d(zx.d(*(arg1 + (r8_1 << 1) + 1))))
    rax_3 = arg1 + (r8_1 << 1) + 2

uint16_t r8_3 = zx.w(*rax_3)
uint64_t r10 = zx.q(*(rax_3 + 1))

if (0 != r8_3 * 0x100 + r10.w)
    return (zx.q(r8_3.b) << 8) + arg1 + r10

return &data_14369a5d0
