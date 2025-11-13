// 函数: sub_142c17b60
// 地址: 0x142c17b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1

if (arg2 u< (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
    rax_1 = arg1 + ((zx.q(arg2) + 3) << 1)
else
    rax_1 = &data_14369a5d0

uint16_t r8_2 = zx.w(*rax_1)
uint64_t r10 = zx.q(*(rax_1 + 1))

if (0 != r8_2 * 0x100 + r10.w)
    return (zx.q(r8_2.b) << 8) + arg1 + r10

return &data_14369a5d0
