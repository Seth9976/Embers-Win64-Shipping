// 函数: sub_142b2d7a0
// 地址: 0x142b2d7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::PluralFormat::`vftable'{for `icu_64::Format'}
int64_t* rcx = arg1[0x55]

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t* rcx_1 = arg1[0x58]
arg1[0x57] = &icu_64::PluralFormat::PluralSelectorAdapter::`vftable'{for `icu_64::PluralFormat::PluralSelector'}

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

arg1[0x57] = &icu_64::PluralFormat::PluralSelector::`vftable'
sub_142b74ad0(&arg1[0x45])
sub_142a45a20(&arg1[0x29])
return sub_142aa82a0(arg1) __tailcall
