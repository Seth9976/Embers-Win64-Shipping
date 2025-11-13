// 函数: sub_142c16da0
// 地址: 0x142c16da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 8).b == 0
        || (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
        == neg.d(zx.d(*(arg1 + 7))) || zx.w(*(arg1 + 2)) * 0x100 + zx.w(*(arg1 + 3)) == 7)
    uint32_t result
    result.b = 0
    return result

uint32_t r8_8 = (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))
uint32_t rcx_4 =
    (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
uint32_t rax_9 = zx.d(*(arg1 + 7))

if (rcx_4 != neg.d(rax_9))
    return sub_142c17490(zx.q(rcx_4 + rax_9) + arg1, arg2, r8_8) __tailcall

return sub_142c17490(&data_14369a5d0, arg2, r8_8) __tailcall
