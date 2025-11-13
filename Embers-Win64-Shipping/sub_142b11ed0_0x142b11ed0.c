// 函数: sub_142b11ed0
// 地址: 0x142b11ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::ICUServiceKey::icu_64::LocaleKey::VTable** result

if (arg1 == 0 || *arg4 s> 0)
    result = nullptr
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_50_1 = 2
    sub_142aa6da0(arg1, &var_58)
    struct icu_64::UObject::icu_64::ICUServiceKey::VTable** rax_2 = j_sub_142a7dd00(0x110)
    struct icu_64::UObject::icu_64::ICUServiceKey::VTable** var_60_1 = rax_2
    struct icu_64::ICUServiceKey::icu_64::LocaleKey::VTable** result_1
    
    if (rax_2 == 0)
        result_1 = nullptr
    else
        result_1 = sub_142b11d00(rax_2, arg1, &var_58, arg2, arg3)
    
    sub_142a47ff0(&var_58)
    result = result_1

__security_check_cookie(rax_1 ^ &var_98)
return result
