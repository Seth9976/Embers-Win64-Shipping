// 函数: sub_142a5f300
// 地址: 0x142a5f300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_368 = -2
void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int64_t* rdx = *(arg1 + 0x170)

if (rdx != 0)
    struct icu_64::ErrorCode::VTable* var_378 = &icu_64::ErrorCode::`vftable'
    int32_t var_370 = 0
    void var_318
    sub_142a5ad40(&var_318, *rdx)
    char var_310
    int64_t* var_2e8
    char var_2e0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_258
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1d8
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    
    if (var_310 == 0 || var_2e8 != 0 || var_2e0 == 0)
    label_142a5f3d8:
        void* rdx_6 = *(arg1 + 0x170)
        int32_t var_2b4_1 = *(*(rdx_6 + 0x888) + 0x64)
        int32_t var_2c4_1 = *(*(rdx_6 + 0x888) + 0x54)
        int64_t var_38_1 = *(*(rdx_6 + 0x888) + 0x2e0)
    else
        if (sub_142abba70(&var_f8, &var_370) != 0)
            goto label_142a5f3d8
        
        if (sub_142abba70(&var_78, &var_370) != 0)
            goto label_142a5f3d8
        
        if (sub_142abba70(&var_258, &var_370) != 0)
            goto label_142a5f3d8
        
        if (sub_142abba70(&var_1d8, &var_370) != 0)
            goto label_142a5f3d8
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_358
    sub_142a48050(arg2, sub_142ac0a60(&var_358, &var_318, &var_370))
    sub_142a47ff0(&var_358)
    sub_142a47ff0(&var_78)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
    sub_142a47ff0(&var_b8)
    sub_142a47ff0(&var_f8)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138
    sub_142a47ff0(&var_138)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_190
    sub_142a47ff0(&var_190)
    sub_142a47ff0(&var_1d8)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_218
    sub_142a47ff0(&var_218)
    sub_142a47ff0(&var_258)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_298
    sub_142a47ff0(&var_298)
    
    if (var_2e8 != 0)
        (**var_2e8)(var_2e8, 1)
    
    struct icu_64::MeasureUnit::icu_64::CurrencyUnit::VTable* var_308
    sub_142ab6900(&var_308)
    sub_142ab6000(&var_378)
else
    sub_142a4ab40(arg2)

__security_check_cookie(rax_1 ^ &var_398)
return arg2
