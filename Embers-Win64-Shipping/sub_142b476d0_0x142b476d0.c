// 函数: sub_142b476d0
// 地址: 0x142b476d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
struct icu_64::numparse::impl::NumberParseMatcher::icu_64::numparse::impl::SymbolMatcher::VTable** 
    var_60 = arg1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_50 = 2
*arg1 = &icu_64::numparse::impl::SymbolMatcher::`vftable'{for `icu_64::numparse::impl::NumberParseMatcher'}
arg1[1] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[2].w = 2
void* rax_2 = sub_142b2ca60(arg2)
arg1[9] = rax_2

if (sub_142a9f1b0(rax_2, &var_58) == 0)
    sub_142a48100(&arg1[1], &var_58)
else
    sub_142a4ab40(&arg1[1])

sub_142a47ff0(&var_58)
*arg1 = &icu_64::numparse::impl::IgnorablesMatcher::`vftable'{for `icu_64::numparse::impl::SymbolMatcher'}
__security_check_cookie(rax_1 ^ &var_88)
return arg1
