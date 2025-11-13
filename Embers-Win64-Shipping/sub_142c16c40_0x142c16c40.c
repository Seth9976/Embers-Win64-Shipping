// 函数: sub_142c16c40
// 地址: 0x142c16c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8_3 = (zx.d(*(arg1 + 5)) << 0x10).b + (zx.d(*(arg1 + 6)) << 8).b
    + (zx.d(*(arg1 + 4)) << 0x18).b + *(arg1 + 7)
uint32_t rax_5 = zx.d(r8_3)

if (r8_3 == 0)
    return sub_142c26f00(arg1 + 0xc, arg2, nullptr) __tailcall

if (rax_5 == 1)
    return sub_142c24c90(arg1 + 0xc, arg2) __tailcall

if (rax_5 == 2)
    return sub_142c25470(arg1 + 0xc, arg2) __tailcall

if (rax_5 == 4)
    return sub_142c25530(arg1 + 0xc, arg2) __tailcall

if (rax_5 == 5)
    return sub_142c24da0(arg1 + 0xc, arg2) __tailcall

uint64_t result
result.b = 1
return result
