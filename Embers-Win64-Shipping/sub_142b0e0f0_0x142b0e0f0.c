// 函数: sub_142b0e0f0
// 地址: 0x142b0e0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0x51)
    return zx.q(arg2 - 0x10)

if (arg2 s< 0x6c)
    return zx.q((arg2 - 0x51) << 8) | zx.q(*arg1)

uint32_t rax_4 = zx.d(*arg1)

if (arg2 s< 0x7e)
    return zx.q(rax_4 << 8) | zx.q((arg2 - 0x6c) << 0x10) | zx.q(arg1[1])

uint32_t rcx_4 = zx.d(arg1[1])

if (arg2 != 0x7e)
    return zx.q(((rax_4 << 8 | rcx_4) << 8 | zx.d(arg1[2])) << 8) | zx.q(arg1[3])

return zx.q((rax_4 << 8 | rcx_4) << 8) | zx.q(arg1[2])
