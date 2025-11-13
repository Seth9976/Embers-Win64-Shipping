// 函数: sub_142c14e30
// 地址: 0x142c14e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_1 = (zx.d(*arg1) << 8) + zx.d(arg1[1])

if (rdx_1 != 1 && rdx_1 != 2)
    return &data_14369a5d0

uint16_t rdx_4 = zx.w(arg1[2])
uint64_t r9 = zx.q(arg1[3])

if (0 != rdx_4 * 0x100 + r9.w)
    return &arg1[(zx.q(rdx_4.b) << 8) + r9]

return &data_14369a5d0
