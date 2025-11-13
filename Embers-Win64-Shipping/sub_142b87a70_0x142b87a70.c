// 函数: sub_142b87a70
// 地址: 0x142b87a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_2b8 = -2
void var_2d8
int64_t result = __security_cookie ^ &var_2d8
int64_t result_1 = result

if (*arg3 s<= 0)
    struct icu_64::UObject::icu_64::UVector::VTable* var_2b0
    sub_142ae6da0(&var_2b0, 0xc, arg3)
    
    if (*arg3 s<= 0)
        sub_142b87780(arg1 + 0xf0, &var_2b0, arg3)
        
        if (*arg3 s<= 0)
            int32_t var_2a8
            *(arg1 + 0xe8) = var_2a8
            
            if (*(arg1 + 0x20) s>= var_2a8)
            label_142b87b1a:
                int32_t rdi_1 = 0
                
                if (*(arg1 + 0xe8) s> 0)
                    int64_t r14_1 = 0
                    
                    while (true)
                        int64_t rax_1 = sub_142ae72d0(&var_2b0, rdi_1)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_288
                        Concurrency::agent::agent(&var_288, rax_1)
                        int64_t* r15_1 = *(arg1 + 0x18)
                        struct icu_64::number::impl::AffixPatternProvider::VTable* var_248 = &icu_64::number::impl::ParsedPatternInfo::`vftable'{for `icu_64::number::impl::AffixPatternProvider'}
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_240 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_238_1 = 2
                        void var_200
                        sub_142abc970(&var_200)
                        void var_158
                        sub_142abc970(&var_158)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_b0_1 =
                            &var_240
                        int32_t var_a8_1 = 0
                        int64_t var_a0_1 = 0
                        char var_98_1 = 0
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                        sub_142ac0430(Concurrency::agent::agent(&var_88, rax_1), &var_248, arg3)
                        sub_142a47ff0(&var_88)
                        struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable*
                             var_1c8
                        struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable*
                             var_120
                        
                        if (*arg3 s<= 0)
                            sub_142ab9750(arg2, &var_248, 0xc)
                            *(r15_1 + r14_1) = sub_142ab8f00(arg2, arg3)
                            
                            if (*arg3 s<= 0)
                                *(r15_1 + r14_1 + 8) = rax_1
                                sub_142ab2c10(&var_120)
                                sub_142ab2c10(&var_1c8)
                                sub_142a47ff0(&var_240)
                                sub_142ab8850(&var_248)
                                sub_142a47ff0(&var_288)
                                rdi_1 += 1
                                r14_1 += 0x10
                                
                                if (rdi_1 s>= *(arg1 + 0xe8))
                                    break
                                
                                continue
                        
                        sub_142ab2c10(&var_120)
                        sub_142ab2c10(&var_1c8)
                        sub_142a47ff0(&var_240)
                        sub_142ab8850(&var_248)
                        sub_142a47ff0(&var_288)
                        break
            else
                sub_142b77260(arg1 + 0x18, var_2a8, *arg3)
                
                if (*arg3 s<= 0)
                    goto label_142b87b1a
    
    result = sub_142ae6f60(&var_2b0)

__security_check_cookie(result_1 ^ &var_2d8)
return result
