// 函数: sub_142a47b70
// 地址: 0x142a47b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 2

if (arg2 u<= 0xffff)
    *(arg1 + 0xa) = arg2.w
    arg1[1].w &= 0x1f
    arg1[1].w |= 0x20
    return arg1

if (arg2 u<= 0x10ffff)
    *(arg1 + 0xa) = (arg2 s>> 0xa).w - 0x2840
    arg2.w &= 0x3ff
    arg2.w |= 0xdc00
    *(arg1 + 0xc) = arg2.w
    arg1[1].w &= 0x1f
    arg1[1].w |= 0x40

return arg1
