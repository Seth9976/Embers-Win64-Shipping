// 函数: sub_142c2b710
// 地址: 0x142c2b710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8_3 = (zx.d(*(arg1 + 5)) << 0x10).b + (zx.d(*(arg1 + 6)) << 8).b
    + (zx.d(*(arg1 + 4)) << 0x18).b + *(arg1 + 7)
uint32_t rax_5 = zx.d(r8_3)

if (r8_3 == 0)
    return sub_142c2b670(arg2, arg1 + 0xc) __tailcall

if (rax_5 == 1)
    return sub_142c2f5f0(arg1 + 0xc, arg2) __tailcall

if (rax_5 == 2)
    return sub_142c2ffa0(arg1 + 0xc, arg2) __tailcall

if (rax_5 == 4)
    return sub_142c30190(arg1 + 0xc, arg2) __tailcall

if (rax_5 == 5)
    return sub_142c2f700(arg1 + 0xc, arg2) __tailcall

uint64_t result
result.b = 0
return result
