// 函数: sub_142b79fb0
// 地址: 0x142b79fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = -2
void var_128
int64_t result = __security_cookie ^ &var_128
int64_t result_1 = result

if (*arg3 s<= 0)
    int32_t rdi_1 = 7
    int16_t rax_1 = *(arg2 + 8)
    int32_t rax_3
    
    if (rax_1 s< 0)
        rax_3 = *(arg2 + 0xc)
    else
        rax_3 = sx.d(rax_1) s>> 5
    
    if (rax_3 != 7)
        struct icu_64::UObject::icu_64::UVector32::VTable* var_f8
        sub_142ae7bc0(&var_f8, arg3)
        
        if (*arg3 s<= 0)
            int16_t var_bc
            void* var_c8 = &var_bc:1
            int32_t var_c0_1 = 0x28
            var_bc = 0
            int32_t var_90_1 = 0
            int32_t var_f0
            int32_t* var_e0
            
            if (sub_142a4a1f0(arg2) s<= 7)
            label_142b7a1ae:
                sub_142b27540(*(arg1 + 0x20), *(arg1 + 0x18), var_e0, var_f0, arg3)
            else
                while (true)
                    int32_t r8 = rdi_1 + 1
                    
                    if (rdi_1 + 1 s>= 0)
                        int16_t rax_5 = *(arg2 + 8)
                        int32_t rcx_4
                        
                        if (rax_5 s< 0)
                            rcx_4 = *(arg2 + 0xc)
                        else
                            rcx_4 = sx.d(rax_5) s>> 5
                        
                        if (rdi_1 + 1 s> rcx_4)
                            if (rax_5 s< 0)
                                r8 = *(arg2 + 0xc)
                            else
                                r8 = sx.d(rax_5) s>> 5
                    else
                        r8 = 0
                    
                    int16_t rax_6 = *(arg2 + 8)
                    int32_t r9_2
                    
                    if (rax_6 s< 0)
                        r9_2 = *(arg2 + 0xc)
                    else
                        r9_2 = sx.d(rax_6) s>> 5
                    
                    int32_t rax_7 = sub_142a491f0(arg2, 0x20, r8, r9_2 - r8)
                    int32_t rsi_1 = rax_7
                    
                    if (rax_7 s< 0)
                        rsi_1 = sub_142a4a1f0(arg2)
                    
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_9 =
                        sub_142a71620(arg2, &var_88, rdi_1 + 1, rsi_1)
                    int32_t var_90_2 = 0
                    *var_c8 = 0
                    sub_142a8cd50(&var_c8, rax_9, arg3)
                    sub_142a47ff0(&var_88)
                    
                    if (*arg3 s> 0)
                        break
                    
                    int32_t rax_10 = sub_142b79860(var_c8)
                    
                    if (rax_10 s< 0)
                        if (*arg3 s<= 0)
                            *arg3 = 3
                            *(arg1 + 0x30) = "unknown script or reorder code"
                            
                            if (*(arg1 + 0x28) != 0)
                                sub_142b7c7c0(arg1)
                        
                        break
                    
                    int32_t var_ec
                    
                    if (var_f0 + 1 s< 0 || var_ec s< var_f0 + 1)
                        if (sub_142ae7df0(&var_f8, var_f0 + 1, arg3) != 0)
                            var_e0[sx.q(var_f0)] = rax_10
                            var_f0 += 1
                    else
                        var_e0[sx.q(var_f0)] = rax_10
                        var_f0 += 1
                    
                    if (*arg3 s> 0)
                        break
                    
                    rdi_1 = rsi_1
                    
                    if (rsi_1 s>= sub_142a4a1f0(arg2))
                        goto label_142b7a1ae
            
            if (var_bc.b != 0)
                sub_142a7dcd0(var_c8)
        
        result = sub_142ae7c50(&var_f8)
    else
        result = sub_142b272b0(*(arg1 + 0x20))

__security_check_cookie(result_1 ^ &var_128)
return result
