// 函数: sub_142a5ab70
// 地址: 0x142a5ab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_130 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
struct icu_64::NumberFormat::icu_64::DecimalFormat::VTable** result = arg1
struct icu_64::UObject::icu_64::Format::VTable** var_128 = arg1
char rbp = 0
int32_t var_138 = 0
sub_142a5a530(arg1, arg3, arg5)
*result = &icu_64::DecimalFormat::`vftable'{for `icu_64::NumberFormat'}

if (*arg5 s<= 0)
    int32_t r8_1
    
    if (arg4 u<= 0x10)
        r8_1 = 2
    
    if (arg4 u> 0x10 || not(test_bit(0x13c04, arg4)))
        r8_1 = 1
    
    j_sub_142ac02f0(arg2, result[0x2e]->__offset(0x0).q, r8_1, arg5)
    
    if (arg4 != 0xb)
        sub_142a5f4f0(result, arg5)
    else
        struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable** rax_4 =
            j_sub_142a7dd00(zx.q(arg4 + 0x1d))
        struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable** var_120_1 = rax_4
        struct icu_64::UObject::icu_64::Locale::VTable* var_118
        struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable** rdi_2
        
        if (rax_4 == 0)
            rdi_2 = nullptr
        else
            rbp = 1
            int32_t var_138_1 = 1
            rdi_2 =
                sub_142ab99c0(rax_4, sub_142a5d0b0(result[0x2e]->__offset(0x8).q, &var_118), arg5)
        
        if (rdi_2 == 0 && *arg5 s<= rdi_2.d)
            *arg5 = 7
        
        if ((rbp & 1) != 0)
            sub_142a45a20(&var_118)
        
        if (*arg5 s<= 0)
            void* rbp_1 = result[0x2e]->__offset(0x0).q
            int64_t* rcx_6 = *(rbp_1 + 0x30)
            
            if (rcx_6 != 0)
                (**rcx_6)(rcx_6, 1)
            
            *(rbp_1 + 0x30) = rdi_2
            sub_142a5f4f0(result, arg5)
        else if (rdi_2 != 0)
            struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable* r8_3 = *rdi_2
            r8_3->__offset(0x0).q(rdi_2, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_158)
return result
