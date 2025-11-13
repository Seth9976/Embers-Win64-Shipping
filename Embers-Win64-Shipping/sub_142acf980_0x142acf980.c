// 函数: sub_142acf980
// 地址: 0x142acf980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* result

if (__RTDynamicCast(arg1, 0, &class icu_64::TimeZone `RTTI Type Descriptor', 
        &class icu_64::OlsonTimeZone `RTTI Type Descriptor', 0) == 0)
    int32_t var_68 = 0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_50_1 = 2
    sub_142a48100(&var_58, arg1 + 8)
    void* result_1 = sub_142acfa40(&var_58, &var_68)
    sub_142a47ff0(&var_58)
    result = result_1
else
    result = *(arg1 + 0x98)

__security_check_cookie(rax_1 ^ &var_98)
return result
