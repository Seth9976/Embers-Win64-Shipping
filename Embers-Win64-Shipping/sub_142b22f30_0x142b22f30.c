// 函数: sub_142b22f30
// 地址: 0x142b22f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(arg1.b)

if (rdx u< 0xc0)
    return zx.q(((arg1 & 0xffffff00) << 8 | rdx) << 8) | (zx.q(arg1) & 0xffffffffffff0000) << 0x20

int32_t result_1 = arg1 - rdx
rdx.b &= 0xf
uint64_t result = zx.q(result_1)

if (rdx.b != 1)
    return result

return result << 0x20 | 0x5000500
