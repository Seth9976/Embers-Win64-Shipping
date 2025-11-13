// 函数: sub_142a54dd0
// 地址: 0x142a54dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::ICUNotifier::VTable** var_68 = arg1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
sub_142a9afd0(arg1, sub_142a47a60(&var_58, 1, u"Break Iterator", 0xe))
sub_142a47ff0(&var_58)
*arg1 = &icu_64::ICUBreakIteratorService::`vftable'{for `icu_64::ICULocaleService'}
int32_t var_78 = 0
int64_t* rax_3 = j_sub_142a7dd00(0x90)
int64_t* rbx = rax_3
int64_t* var_60 = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    memset(rax_3, 0, 0x90)
    sub_142a9ae10(rbx)
    *rbx = &icu_64::ICUBreakIteratorFactory::`vftable'{for `icu_64::ICUResourceBundleFactory'}

sub_142a9a680(arg1, rbx, &var_78)
__security_check_cookie(rax_1 ^ &var_98)
return arg1
