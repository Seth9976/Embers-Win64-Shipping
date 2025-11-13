// 函数: sub_142a5a4b0
// 地址: 0x142a5a4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable*** result = arg1
struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable** rdi = nullptr
*arg1 = 0

if (*arg2 != 0)
    struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable** rax_1 = j_sub_142a7dd00(0x28)
    struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable** arg_10 = rax_1
    
    if (rax_1 != 0)
        rdi = sub_142ab9980(rax_1, *arg2)
    
    struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable** rcx_1 = *result
    
    if (rcx_1 != 0)
        (*rcx_1)->__offset(0x0).q(rcx_1, 1)
    
    *result = rdi

return result
