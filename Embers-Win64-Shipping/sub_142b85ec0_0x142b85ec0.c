// 函数: sub_142b85ec0
// 地址: 0x142b85ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_650 = -2
void var_688
int64_t rax_1 = __security_cookie ^ &var_688
struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    rax_2 = j_sub_142a7dd00(0x290)
struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    var_658 = rax_2
struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    result_1

if (rax_2 == 0)
    result_1 = nullptr
else
    result_1 = sub_142b85d30(rax_2, arg5, arg6)

struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    result

if (result_1 != 0)
    int64_t (* var_668_1)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
        sub_142a47ff0
    void var_248
    `eh vector constructor iterator'(&var_248, 0x40, 8)
    sub_142b866d0(arg1, arg2, arg4, &var_248, arg7)
    
    if (*arg7 s<= 0)
        int64_t (* var_668_3)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
            sub_142a47ff0
        void var_448
        `eh vector constructor iterator'(&var_448, 0x40, 8)
        sub_142b866d0(arg1, arg3, arg4, &var_448, arg7)
        
        if (*arg7 s<= 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_5c8 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_5c0_1 = 2
            char var_280
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_4c8
            
            if ((var_280 & 1) != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_508
                sub_142b86a90(&var_508, arg1, arg4, arg7)
                
                if (*arg7 s> 0)
                    sub_142a47ff0(&var_508)
                else
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_608 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_600_1 = 2
                    sub_142b62570(&var_608, &var_508, 2, 2, arg7)
                    
                    if (*arg7 s> 0)
                        j_sub_142a47ff0(&var_608)
                        sub_142a47ff0(&var_508)
                    else
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_548
                        sub_142b86c90(&var_548, &var_448, 1, arg7)
                        
                        if (*arg7 s> 0)
                            goto label_142b861a9
                        
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_648 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_640_1 = 2
                        sub_142b62570(&var_648, &var_548, 1, 1, arg7)
                        
                        if (*arg7 s> 0)
                            goto label_142b8619f
                        
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_588
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_488
                        sub_142a479b0(&var_588, sub_142b573b0(sub_142b86c30(&var_648, &var_488)))
                        sub_142a47ff0(&var_488)
                        sub_142b62a90(&var_608, 
                            Concurrency::agent::agent(&var_4c8, &data_14367e518), &var_588, 
                            &var_5c8, arg7)
                        sub_142a47ff0(&var_4c8)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_17 =
                            &var_588
                        
                        if (*arg7 s<= 0)
                            sub_142a47ff0(rcx_17)
                            j_sub_142a47ff0(&var_648)
                            sub_142a47ff0(&var_548)
                            j_sub_142a47ff0(&var_608)
                            sub_142a47ff0(&var_508)
                            sub_142b86d10(result_1, &var_248, sub_142a479b0(&var_4c8, &var_5c8), 
                                0xb, arg7)
                        else
                            sub_142a47ff0(rcx_17)
                        label_142b8619f:
                            j_sub_142a47ff0(&var_648)
                        label_142b861a9:
                            sub_142a47ff0(&var_548)
                            j_sub_142a47ff0(&var_608)
                            sub_142a47ff0(&var_508)
            else
                void var_288
                sub_142a48100(&var_5c8, &var_288)
                sub_142b86d10(result_1, &var_248, sub_142a479b0(&var_4c8, &var_5c8), 0xb, arg7)
            sub_142a47ff0(&var_5c8)
        
        `eh vector vbase constructor iterator'(&var_448, 0x40, 8)
    
    `eh vector vbase constructor iterator'(&var_248, 0x40, 8)
    result = result_1
else
    *arg7 = 7
    result = nullptr

__security_check_cookie(rax_1 ^ &var_688)
return result
