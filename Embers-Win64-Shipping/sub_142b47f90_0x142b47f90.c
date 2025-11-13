// 函数: sub_142b47f90
// 地址: 0x142b47f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::numparse::impl::ArraySeriesMatcher::`vftable'{for `icu_64::numparse::impl::SeriesMatcher'}
arg1[1] = *arg2
arg1[2].d = arg2[1].d
*(arg1 + 0x14) = *(arg2 + 0xc)

if (*arg2 == &arg2[2])
    arg1[1] = &arg1[3]
    memcpy(&arg1[3], &arg2[2], arg2[1].d << 3)
    arg1[6].d = arg3
    return arg1

*arg2 = &arg2[2]
arg2[1].d = 3
*(arg2 + 0xc) = 0
arg1[6].d = arg3
return arg1
