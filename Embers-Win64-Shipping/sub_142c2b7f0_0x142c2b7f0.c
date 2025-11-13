// 函数: sub_142c2b7f0
// 地址: 0x142c2b7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8_4 = (zx.d(*(arg1 + 5)) << 0x10).b + (zx.d(*(arg1 + 6)) << 8).b
    + (zx.d(*(arg1 + 4)) << 0x18).b + *(arg1 + 7)
uint32_t rax_5 = zx.d(r8_4)

if (r8_4 == 0)
    return sub_142c34ef0(arg1 + 0xc, arg2) != 0

if (rax_5 == 1)
    return sub_142c2b620(arg2, arg1) __tailcall

if (rax_5 == 2)
    return sub_142c33460(arg1, arg2) __tailcall

if (rax_5 == 4)
    return sub_142c2b620(arg2, arg1) __tailcall

if (rax_5 == 6)
    return sub_142c33500(arg1, arg2) __tailcall

uint64_t result
result.b = 1
return result
