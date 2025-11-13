// 函数: sub_142c1fba0
// 地址: 0x142c1fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3]) u< 0x10003)
    return &data_14369a5d0

uint64_t r9 = zx.q(arg1[0x10])
uint64_t rdx_7 = zx.q(arg1[0xf])
uint64_t r10 = zx.q(arg1[0xe])
uint64_t r11 = zx.q(arg1[0x11])

if ((r10.d << 0x18) + (r9.d << 8) + (rdx_7.d << 0x10) != neg.d(r11.d))
    return &arg1[((((rdx_7 + (r10 << 8)) << 8) + r9) << 8) + r11]

return &data_14369a5d0
