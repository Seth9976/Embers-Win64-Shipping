// 函数: sub_142b50d70
// 地址: 0x142b50d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_e8
uint64_t result = __security_cookie ^ &var_e8
uint64_t result_1 = result
void* var_a0 = arg3
void* const rbx = arg2
void* rsi = arg1

if (*arg7 s<= 0)
    int64_t rbp_1 = sx.q(arg5)
    
    if (*arg2 == 0)
        goto label_142b50e03
    
    result = (**arg6)(arg6, zx.q(rbp_1.d - arg4), rbx, arg7)
    
    if (result.b != 0 && *arg7 s<= 0)
        arg3 = var_a0
    label_142b50e03:
        int32_t rbp_2
        
        if (*(rsi + 8) != 0)
            int32_t rax_2 = sub_142a486d0(arg3, rbp_1.d)
            int32_t rcx_2
            rcx_2.b = rax_2 u> 0xffff
            rbp_2 = rbp_1.d + rcx_2 + 1
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
            sub_142a47b70(&var_78, rax_2)
            sub_142a8ef00(&var_78, 0)
            int32_t rsi_1 = 0
            int32_t rax_3 = sub_142a4a1f0(&var_78)
            
            if (rax_3 s> 0)
                int16_t* r9_1 = nullptr
                
                while (true)
                    int16_t var_70
                    int32_t rax_5
                    int32_t var_6c
                    
                    if (var_70 s< 0)
                        rax_5 = var_6c
                    else
                        rax_5 = sx.d(var_70) s>> 5
                    int16_t rcx_7
                    
                    if (rsi_1 u>= rax_5)
                        rcx_7 = -1
                    else
                        void var_6e
                        void* rax_6 = &var_6e
                        void* var_60
                        
                        if ((var_70.b & 2) == 0)
                            rax_6 = var_60
                        rcx_7 = *(r9_1 + rax_6)
                    
                    rsi_1 += 1
                    r9_1 = &r9_1[1]
                    int16_t rax_7 = *(rbx + 0xa)
                    
                    if (rax_7 == 0)
                        break
                    
                    while (true)
                        rbx = (zx.q(rax_7) << 4) + *(arg1 + 0x10)
                        int16_t rax_8 = *(rbx + 8)
                        
                        if (rax_8 == rcx_7)
                            if (rsi_1 s>= rax_3)
                                goto label_142b50eef
                            
                            break
                        
                        if (rax_8 u> rcx_7)
                            goto label_142b50ee8
                        
                        rax_7 = *(rbx + 0xc)
                        
                        if (rax_7 == 0)
                            goto label_142b50ee8
                
            label_142b50ee8:
                rbx = nullptr
            
        label_142b50eef:
            result = sub_142a47ff0(&var_78)
            arg3 = var_a0
            rsi = arg1
            goto label_142b50f70
        
        int16_t rcx_9 = *(arg3 + 8)
        int32_t rax_10
        
        if (rcx_9 s< 0)
            rax_10 = *(arg3 + 0xc)
        else
            rax_10 = sx.d(rcx_9) s>> 5
        
        int16_t rdi_1
        
        if (rbp_1.d u>= rax_10)
            rdi_1 = -1
        else
            void* rcx_10 = arg3 + 0xa
            
            if ((rcx_9.b & 2) == 0)
                rcx_10 = *(arg3 + 0x18)
            
            rdi_1 = *(rcx_10 + (rbp_1 << 1))
        
        rbp_2 = rbp_1.d + 1
        result = zx.q(*(rbx + 0xa))
        
        if (result.w != 0)
            while (true)
                rbx = (zx.q(result.w) << 4) + *(rsi + 0x10)
                result = zx.q(*(rbx + 8))
                
                if (result.w == rdi_1)
                    break
                
                if (result.w u> rdi_1)
                    goto label_142b50fa8
                
                result = zx.q(*(rbx + 0xc))
                
                if (result.w == 0)
                    goto label_142b50fa8
            
        label_142b50f70:
            
            if (rbx != 0)
                result = sub_142b50d70(rsi, rbx, arg3, zx.q(arg4), rbp_2, arg6, arg7)

label_142b50fa8:
__security_check_cookie(result_1 ^ &var_e8)
return result
