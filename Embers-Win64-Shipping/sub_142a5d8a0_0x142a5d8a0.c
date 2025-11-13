// 函数: sub_142a5d8a0
// 地址: 0x142a5d8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1a0 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
struct icu_64::UObject::icu_64::Measure::VTable** result

if (*(arg1 + 0x170) == 0)
    result = nullptr
else
    int32_t rcx = *(arg3 + 8)
    
    if (rcx s< 0)
        result = nullptr
    else
        int16_t rax_2 = *(arg2 + 8)
        int32_t rax_4
        
        if (rax_2 s< 0)
            rax_4 = *(arg2 + 0xc)
        else
            rax_4 = sx.d(rax_2) s>> 5
        
        if (rcx s>= rax_4)
            result = nullptr
        else
            struct icu_64::ErrorCode::VTable* var_1b8 = &icu_64::ErrorCode::`vftable'
            struct icu_64::UObject::icu_64::Measure::VTable** result_1 = nullptr
            int32_t var_1b0[0x4]
            var_1b0[0] = 0
            struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_188
            sub_142ab9780(&var_188)
            int32_t r14_1 = *(arg3 + 8)
            struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::NumberParserImpl::VTable
                ** rax_5 = sub_142a5cf50(arg1, &var_1b0)
            
            if (var_1b0[0] s<= 0)
                sub_142abe2e0(rax_5, arg2, r14_1, 1, &var_188, &var_1b0)
                
                if (var_1b0[0] s<= 0)
                    int32_t var_140
                    
                    if (sub_142ab9960(&var_188) == 0)
                        *(arg3 + 0xc) = var_140 + r14_1
                    else
                        *(arg3 + 8) = var_140
                        struct icu_64::UObject::icu_64::Formattable::VTable* var_a8
                        sub_142aa7770(&var_a8)
                        sub_142ab9810(&var_188, &var_a8, sub_1408e52c0(rax_5))
                        struct icu_64::UObject::icu_64::Measure::VTable** rax_9 =
                            j_sub_142a7dd00(0x80)
                        struct icu_64::UObject::icu_64::Measure::VTable** var_198_1 = rax_9
                        struct icu_64::UObject::icu_64::Measure::VTable** result_2
                        int16_t var_b8[0x8]
                        
                        if (rax_9 == 0)
                            result_2 = nullptr
                        else
                            result_2 = sub_142aab090(rax_9, &var_a8, &var_b8, &var_1b0)
                        
                        if (result_2 == 0)
                            if (var_1b0[0] s<= result_2.d)
                                var_1b0[0] = 7
                            
                            goto label_142a5da08
                        
                        if (var_1b0[0] s<= 0)
                            result_1 = result_2
                        else
                        label_142a5da08:
                            
                            if (result_2 != 0)
                                (*result_2)->__offset(0x0).q(result_2, 1)
                        
                        sub_142aa7840(&var_a8)
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8
            sub_142a47ff0(&var_f8)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138
            sub_142a47ff0(&var_138)
            sub_142ab2c10(&var_188)
            sub_142ab6000(&var_1b8)
            result = result_1

__security_check_cookie(rax_1 ^ &var_1e8)
return result
