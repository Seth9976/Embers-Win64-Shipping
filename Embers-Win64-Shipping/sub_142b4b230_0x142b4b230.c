// 函数: sub_142b4b230
// 地址: 0x142b4b230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::AnnualTimeZoneRule::`vftable'{for `icu_64::TimeZoneRule'}
int64_t* rcx = arg1[0xa]

if (rcx != 0)
    (**rcx)(rcx, 1)

*arg1 = &icu_64::TimeZoneRule::`vftable'{for `icu_64::UObject'}
sub_142a47ff0(&arg1[1])
sub_142a47900(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_142a47920(arg1)
return arg1
