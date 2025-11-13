// 函数: sub_142a70800
// 地址: 0x142a70800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_140 = -2
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* const result

if (*arg3 s> 0)
    result = nullptr
else if (arg2 s< 2)
    struct icu_64::UObject::icu_64::PluralRules::VTable** result_3 = j_sub_142a7dd00(0x18)
    struct icu_64::UObject::icu_64::PluralRules::VTable** result_2 = result_3
    struct icu_64::UObject::icu_64::PluralRules::VTable** result_5 = result_3
    void* const result_1 = nullptr
    
    if (result_3 == 0)
        result_2 = nullptr
    else
        *result_2 = &icu_64::PluralRules::`vftable'{for `icu_64::UObject'}
        result_2[1] = 0
        result_2[2].d = 0
    
    struct icu_64::UObject::icu_64::PluralRules::VTable** result_4 = result_2
    struct icu_64::UObject::icu_64::PluralRules::VTable** result_6 = result_4
    
    if (result_2 == 0 && *arg3 s<= result_2.d)
        *arg3 = 7
    
    if (*arg3 s<= 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
        sub_142a70240(result_2, &var_b8, arg1, arg2, arg3)
        int16_t var_b0
        int32_t rax_4
        int32_t var_ac
        
        if (var_b0 s< 0)
            rax_4 = var_ac
        else
            rax_4 = sx.d(var_b0) s>> 5
        
        if (rax_4 != 0)
            goto label_142a70924
        
        if (*arg3 != 7)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
            sub_142a48050(&var_b8, Concurrency::agent::agent(&var_78, u"other: n"))
            sub_142a47ff0(&var_78)
            *arg3 = 0
        label_142a70924:
            struct icu_64::PluralRuleParser::VTable* const var_138 =
                &icu_64::PluralRuleParser::`vftable'
            int32_t var_128_1 = 0
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_120 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_118_1 = 2
            int64_t var_e0
            __builtin_memset(&var_e0, 0, 0x18)
            int64_t var_c8_1 = -1
            sub_142a70c40(&var_138, &var_b8, result_2, arg3)
            result_4 = nullptr
            result_1 = result_2
            var_138 = &icu_64::PluralRuleParser::`vftable'
            sub_142a47ff0(&var_120)
        
        sub_142a47ff0(&var_b8)
    
    if (result_4 != 0)
        struct icu_64::UObject::icu_64::PluralRules::VTable* r8_2 = *result_4
        r8_2->__offset(0x0).q(result_4, 1, r8_2)
    
    result = result_1
else
    *arg3 = 1
    result = nullptr

__security_check_cookie(rax_1 ^ &var_178)
return result
