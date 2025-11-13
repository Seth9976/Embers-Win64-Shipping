// 函数: sub_142b0e3a0
// 地址: 0x142b0e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rdi = arg1[1]
*arg1 = &icu_64::UnhandledEngine::`vftable'{for `icu_64::LanguageBreakEngine'}

if (rdi != 0)
    sub_142a9dbc0(rdi)
    sub_142a47920(rdi)

arg1[1] = 0
*arg1 = &icu_64::LanguageBreakEngine::`vftable'

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_142a47920(arg1)
return arg1
