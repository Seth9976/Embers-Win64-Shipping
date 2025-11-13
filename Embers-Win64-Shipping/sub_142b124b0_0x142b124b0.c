// 函数: sub_142b124b0
// 地址: 0x142b124b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::SimpleLocaleKeyFactory::`vftable'{for `icu_64::LocaleKeyFactory'}
int64_t* rcx = arg1[0xa]

if (rcx != 0)
    (**rcx)(rcx, 1)

arg1[0xa] = 0
sub_142a47ff0(&arg1[0xb])
sub_142a9aa40(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_142a47920(arg1)
return arg1
