// 函数: sub_142c1eb80
// 地址: 0x142c1eb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t r9 = zx.w(*(arg1 + 6))
uint64_t r10 = zx.q(*(arg1 + 7))
void* r8_2

if (0 != r9 * 0x100 + r10.w)
    r8_2 = (zx.q(r9.b) << 8) + arg1 + r10
else
    r8_2 = &data_14369a5d0

int128_t* const rax_1

if (arg2 u< (zx.d(*r8_2) << 8) + zx.d(*(r8_2 + 1)))
    rax_1 = r8_2 + ((zx.q(arg2) * 3 + 1) << 1)
else
    rax_1 = &data_14369a5d0

uint16_t r9_1 = zx.w(*(rax_1 + 4))
uint64_t r10_1 = zx.q(*(rax_1 + 5))

if (0 != r9_1 * 0x100 + r10_1.w)
    return (zx.q(r9_1.b) << 8) + r8_2 + r10_1

return &data_14369a5d0
