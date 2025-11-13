// 函数: sub_142ab2d50
// 地址: 0x142ab2d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[8].b == 0
*arg1 = &icu_64::number::impl::DecimalQuantity::`vftable'{for `icu_64::IFixedDecimal'}

if (not(cond:0))
    sub_142a7dcd0(arg1[6])
    arg1[6] = 0
    arg1[8].b = 0

*arg1 = &icu_64::IFixedDecimal::`vftable'

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_142a47920(arg1)
return arg1
