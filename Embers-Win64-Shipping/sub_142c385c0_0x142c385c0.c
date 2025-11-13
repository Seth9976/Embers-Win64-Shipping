// 函数: sub_142c385c0
// 地址: 0x142c385c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_2 = zx.d(*(arg1 + 0x10))

if ((1 << (rax_2.b & 0x1f) & 0x1c00) == 0)
    return 0

return zx.q(rax_2 u>> 8)
