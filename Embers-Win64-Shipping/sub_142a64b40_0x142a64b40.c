// 函数: sub_142a64b40
// 地址: 0x142a64b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_78
int32_t var_74
int32_t var_70
int32_t var_68
struct icu_64::BasicTimeZone::icu_64::SimpleTimeZone::VTable** result

if (sub_142a66530(arg1, &var_70, &var_68, &var_78, &var_74) == 0)
    result = nullptr
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_50_1 = 2
    sub_142a65390(var_68, var_78, var_74, var_70 s< 0, &var_58)
    int32_t rbx_1 = ((var_68 * 0x3c + var_78) * 0x3c + var_74) * var_70 * 0x3e8
    struct icu_64::UObject::icu_64::TimeZone::VTable** rax_5 = j_sub_142a7dd00(0xa0)
    var_68.q = rax_5
    struct icu_64::BasicTimeZone::icu_64::SimpleTimeZone::VTable** result_1
    
    if (rax_5 == 0)
        result_1 = nullptr
    else
        result_1 = sub_142ac3f60(rax_5, rbx_1, &var_58)
    
    sub_142a47ff0(&var_58)
    result = result_1

__security_check_cookie(rax_1 ^ &var_a8)
return result
