// 函数: sub_142ac02f0
// 地址: 0x142ac02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f8 = -2
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int16_t rax_2 = *(arg1 + 8)
int32_t rax_4

if (rax_2 s< 0)
    rax_4 = *(arg1 + 0xc)
else
    rax_4 = sx.d(rax_2) s>> 5

int64_t result

if (rax_4 != 0)
    struct 
        icu_64::number::impl::AffixPatternProvider::icu_64::number::impl::ParsedPatternInfo::VTable*
         const var_1e8 = &icu_64::number::impl::ParsedPatternInfo::`vftable'{for `icu_64::number::impl::AffixPatternProvider'}
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1e0 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_1d8_1 = 2
    void var_1a0
    sub_142abc970(&var_1a0)
    void var_f8
    sub_142abc970(&var_f8)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_50_1 = &var_1e0
    int32_t var_48_1 = 0
    int64_t var_40_1 = 0
    char var_38_1 = 0
    sub_142abf2a0(&var_1e8, arg1, arg4)
    
    if (*arg4 s<= 0)
        sub_142ac0440(arg2, &var_1e8, arg3, arg4)
    
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_c0
    sub_142ab2c10(&var_c0)
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_168
    sub_142ab2c10(&var_168)
    sub_142a47ff0(&var_1e0)
    result = sub_142ab8850(&var_1e8)
else
    result = sub_142abaeb0(arg2)

__security_check_cookie(rax_1 ^ &var_218)
return result
