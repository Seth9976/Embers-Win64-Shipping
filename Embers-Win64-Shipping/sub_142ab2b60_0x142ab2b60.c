// 函数: sub_142ab2b60
// 地址: 0x142ab2b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*arg1 = &icu_64::number::impl::DecimalQuantity::`vftable'{for `icu_64::IFixedDecimal'}
*(arg1 + 0x24) = 0
arg1[8].w = 0

if (arg1 != arg2)
    sub_142ab34b0(arg1, arg2)
    arg1[1].b = *(arg2 + 8)
    *(arg1 + 0x24) = *(arg2 + 0x24)
    arg1[5].d = *(arg2 + 0x28)
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg1[2].d = *(arg2 + 0x10)
    *(arg1 + 0x14) = *(arg2 + 0x14)
    arg1[3] = *(arg2 + 0x18)
    arg1[4].d = *(arg2 + 0x20)
    *(arg1 + 0x15) = *(arg2 + 0x15)

return arg1
