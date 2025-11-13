// 函数: sub_142a5d720
// 地址: 0x142a5d720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_128 = -2
void var_168
uint64_t result = __security_cookie ^ &var_168
uint64_t result_1 = result

if (*(arg1 + 0x170) != 0)
    int32_t rcx = *(arg4 + 8)
    int32_t rax_3
    
    if (rcx s>= 0)
        int16_t rax_1 = *(arg2 + 8)
        
        if (rax_1 s< 0)
            rax_3 = *(arg2 + 0xc)
        else
            rax_3 = sx.d(rax_1) s>> 5
    
    if (rcx s< 0 || rcx s>= rax_3)
        int16_t rax_8 = *(arg2 + 8)
        
        if (rax_8 s< 0)
            result = zx.q(*(arg2 + 0xc))
        else
            result = zx.q(sx.d(rax_8) s>> 5)
        
        if (rcx == result.d)
            *(arg4 + 0xc) = rcx
    else
        struct icu_64::ErrorCode::VTable* var_138 = &icu_64::ErrorCode::`vftable'
        int32_t var_130 = 0
        struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_118
        sub_142ab9780(&var_118)
        int32_t rsi_1 = *(arg4 + 8)
        struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::NumberParserImpl::VTable
            ** rax_4 = sub_142a5d390(arg1, &var_130)
        
        if (var_130 s<= 0)
            sub_142abe2e0(rax_4, arg2, rsi_1, 1, &var_118, &var_130)
            
            if (var_130 s<= 0)
                int32_t var_d0
                
                if (sub_142ab9960(&var_118) == 0)
                    *(arg4 + 0xc) = var_d0 + rsi_1
                else
                    *(arg4 + 8) = var_d0
                    sub_142ab9810(&var_118, arg3, sub_1408e52c0(rax_4))
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        sub_142a47ff0(&var_88)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
        sub_142a47ff0(&var_c8)
        sub_142ab2c10(&var_118)
        result = sub_142ab6000(&var_138)

__security_check_cookie(result_1 ^ &var_168)
return result
