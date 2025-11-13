// 函数: sub_142aadaf0
// 地址: 0x142aadaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
struct icu_64::NumberFormat::icu_64::RuleBasedNumberFormat::VTable** result = arg1
struct icu_64::UObject::icu_64::Format::VTable** var_e0 = arg1
sub_142a57f10(arg1)
*result = &icu_64::RuleBasedNumberFormat::`vftable'{for `icu_64::NumberFormat'}
__builtin_memset(&result[0x2e], 0, 0x14)
result[0x31] = 0
sub_142a456d0(&result[0x32], arg3)
__builtin_memset(&result[0x4e], 0, 0x20)
result[0x52].d = 7
*(result + 0x294) = 0
result[0x53] = 0
result[0x54] = 0
result[0x55] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x56].w = 2
result[0x5d].w = 0
*(result + 0x2ea) = 0
result[0x5e] = 0

if (*arg4 s<= 0)
    char const* const rsi_3
    
    if (arg2 == 0)
        rsi_3 = "SpelloutRules"
    label_142aadc3a:
        char** rax_2 = sub_142a641c0("icudt64l-rbnf", result[0x37], arg4)
        
        if (*arg4 s<= 0)
            char* rax_3 = sub_142a637a0(rax_2, 0, arg4)
            sub_142aa8420(result, sub_142a637a0(rax_2, 1, arg4), rax_3)
            char** rax_5 = sub_142a62230(rax_2, "RBNFRules", nullptr, arg4)
            
            if (*arg4 s> 0)
                sub_142a5f860(rax_2)
            
            char** rax_6 = sub_142a62230(rax_5, rsi_3, nullptr, arg4)
            
            if (*arg4 s<= 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_d0_1 = 2
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                
                if (sub_142a63fa0(rax_6) != 0)
                    char i
                    
                    do
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_8 =
                            sub_142a71650(&var_98, rax_6, nullptr, arg4)
                        int16_t rcx_10 = rax_8[1].w
                        int32_t r9_4
                        
                        if (rcx_10 s< 0)
                            r9_4 = *(rax_8 + 0xc)
                        else
                            r9_4 = sx.d(rcx_10) s>> 5
                        
                        sub_142a48d00(&var_d8, rax_8, 0, r9_4)
                        sub_142a47ff0(&var_98)
                        i = sub_142a63fa0(rax_6)
                    while (i != 0)
                
                sub_142aaf8c0(result, &var_d8, nullptr, &var_98, arg4)
                sub_142a5f860(rax_6)
                sub_142a5f860(rax_5)
                sub_142a47ff0(&var_d8)
            else
                sub_142a5f860(rax_5)
        
        sub_142a5f860(rax_2)
    else
        if (arg2 == 1)
            rsi_3 = "OrdinalRules"
            goto label_142aadc3a
        
        if (arg2 == 2)
            rsi_3 = "DurationRules"
            goto label_142aadc3a
        
        if (arg2 == 3)
            rsi_3 = "NumberingSystemRules"
            goto label_142aadc3a
        
        *arg4 = 1

__security_check_cookie(rax_1 ^ &var_118)
return result
