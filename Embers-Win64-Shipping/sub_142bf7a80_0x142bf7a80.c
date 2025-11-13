// 函数: sub_142bf7a80
// 地址: 0x142bf7a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int32_t rdx_1 = (arg1 & 0xdfffffff) | 0x202020

if (rdx_1 == 0x51616169)
    return 0x5a696e68

if (rdx_1 == 0x43797273)
    return 0x4379726c

if (rdx_1 == 0x4c617466 || rdx_1 == 0x4c617467)
    return 0x4c61746e

if (rdx_1 == 0x51616163)
    return 0x436f7074

if (rdx_1 == 0x53797265 || rdx_1 == 0x5379726a || rdx_1 == 0x5379726e)
    return 0x53797263

if ((rdx_1 & 0xe0e0e0e0) == 0x40606060)
    return zx.q(rdx_1)

return 0x5a7a7a7a
