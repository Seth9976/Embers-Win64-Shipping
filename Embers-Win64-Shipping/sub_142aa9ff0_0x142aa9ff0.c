// 函数: sub_142aa9ff0
// 地址: 0x142aa9ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f0 = -2
void var_118
int64_t result = __security_cookie ^ &var_118
int64_t result_1 = result

if (*arg2 s<= 0)
    void* const rdi_1 = &data_143651660
    
    while (true)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
        sub_142a47b70(&var_68, *(rdi_1 + 4))
        void* rax_1 = sub_142b2ca60(*rdi_1)
        
        if (rax_1 != 0)
            void var_e8
            sub_142b18760(&var_e8, rax_1)
            
            if (sub_142b18960(&var_e8) == 0)
            label_142aaa121:
                sub_142b187a0(&var_e8)
                result = sub_142a47ff0(&var_68)
                rdi_1 += 8
                
                if (rdi_1 == &data_143651688)
                    break
                
                continue
            else
                while (true)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a8
                    sub_142a479b0(&var_a8, sub_142b18860(&var_e8))
                    int16_t var_a0
                    char var_60
                    bool cond:0_1
                    
                    if ((var_a0.b & 1) == 0)
                        int32_t r8_2
                        int32_t var_9c
                        
                        if (var_a0 s< 0)
                            r8_2 = var_9c
                        else
                            r8_2 = sx.d(var_a0) s>> 5
                        int16_t rcx_6 = var_60.w
                        int32_t rax_7
                        int32_t var_5c
                        
                        if (rcx_6 s< 0)
                            rax_7 = var_5c
                        else
                            rax_7 = sx.d(rcx_6) s>> 5
                        
                        if ((rcx_6.b & 1) != 0 || r8_2 != rax_7)
                            goto label_142aaa0f7
                        
                        cond:0_1 = sub_142a490e0(&var_a8, &var_68, r8_2) != 0
                        goto label_142aaa0e7
                    
                    cond:0_1 = (var_60 & 1) != 0
                label_142aaa0e7:
                    
                    if (not(cond:0_1))
                    label_142aaa0f7:
                        sub_142aa9ae0(&var_68, &var_a8, arg1, arg2)
                        
                        if (*arg2 s> 0)
                            sub_142a47ff0(&var_a8)
                            sub_142b187a0(&var_e8)
                            break
                    
                    sub_142a47ff0(&var_a8)
                    
                    if (sub_142b18960(&var_e8) == 0)
                        goto label_142aaa121
        
        result = sub_142a47ff0(&var_68)
        break

__security_check_cookie(result_1 ^ &var_118)
return result
