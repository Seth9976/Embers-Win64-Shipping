// 函数: sub_1411927a0
// 地址: 0x1411927a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*(arg1 + 4)) & 0x80000001

if (r8.d s< 0)
    r8 = zx.q(((r8.d - 1) | 0xfffffffe) + 1)

return sub_1410b3fe0(arg2, u"PERMUTATION_INPUT_TYPE", r8) __tailcall
