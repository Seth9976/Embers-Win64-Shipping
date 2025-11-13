// 函数: sub_142c14b70
// 地址: 0x142c14b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10_2 = (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))
uint32_t r8_3 = (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
uint32_t rax_4 = zx.d(*(arg1 + 7))

if (r8_3 != neg.d(rax_4))
    return sub_142c14cc0(zx.q(r8_3 + rax_4) + arg1, arg2, r10_2) __tailcall

return sub_142c14cc0(&data_14369a5d0, arg2, r10_2) __tailcall
