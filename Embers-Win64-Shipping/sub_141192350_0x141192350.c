// 函数: sub_141192350
// 地址: 0x141192350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_1 = zx.q(*(arg1 + 4)) & 0x80000001

if (r8_1.d s< 0)
    r8_1 = zx.q(((r8_1.d - 1) | 0xfffffffe) + 1)

sub_1410b3fe0(arg2, u"PERMUTATION_DEBUGAABBBUFFER", r8_1)
return sub_1410b3fe0(arg2, u"SHADER_DRAWDEBUGAABB", 1) __tailcall
