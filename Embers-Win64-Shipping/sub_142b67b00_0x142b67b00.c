// 函数: sub_142b67b00
// 地址: 0x142b67b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_b8
int64_t result = __security_cookie ^ &var_b8
int64_t result_1 = result

if (*arg4 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_78 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_70_1 = 2
    sub_142b8be70(arg2, &var_78, 0xffffffff)
    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_98 =
        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t var_90_1 = 0
    int32_t var_8c_1 = 0xffffffff
    sub_142b67720(arg1, &var_78, &var_98, arg4)
    
    if (*arg4 s<= 0)
        if (var_90_1 != 0)
            j_sub_142b8bda0(arg2, var_90_1)
            sub_142a48d00(arg3, &var_78, 0, var_90_1)
        else
            *arg4 = 0x10002
    
    sub_142aa8450(&var_98)
    result = sub_142a47ff0(&var_78)

__security_check_cookie(result_1 ^ &var_b8)
return result
