// 函数: sub_142a56fb0
// 地址: 0x142a56fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::ICUNotifier::VTable** var_68 = arg1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
sub_142a9afd0(arg1, sub_142a47a60(&var_58, 1, u"Collator", 0xffffffff))
sub_142a47ff0(&var_58)
*arg1 = &icu_64::ICUCollatorService::`vftable'{for `icu_64::ICULocaleService'}
int64_t* rdi = nullptr
int32_t var_78 = 0
struct icu_64::ICUServiceFactory::icu_64::LocaleKeyFactory::VTable** rax_3 = j_sub_142a7dd00(0x90)
struct icu_64::ICUServiceFactory::icu_64::LocaleKeyFactory::VTable** var_60 = rax_3

if (rax_3 != 0)
    rdi = sub_142a56f30(rax_3)

sub_142a9a680(arg1, rdi, &var_78)
__security_check_cookie(rax_1 ^ &var_98)
return arg1
