// 函数: sub_142acba70
// 地址: 0x142acba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rdi = arg2
struct icu_64::UObject::icu_64::UVector::VTable** result

if (*arg3 s> 0)
    result = nullptr
else
    struct icu_64::UObject::icu_64::UVector::VTable** rax_2 = j_sub_142a7dd00(0x28)
    struct icu_64::UObject::icu_64::UVector::VTable** var_e0_1 = rax_2
    struct icu_64::UObject::icu_64::UVector::VTable** result_1
    
    if (rax_2 == 0)
        result_1 = nullptr
    else
        result_1 = sub_142ae6e40(rax_2, sub_140a4f210, 0, arg3)
    
    if (result_1 != 0)
        int32_t var_e8_1 = 0
        int64_t r12
        r12.b = 0
        bool var_f8_1 = false
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
        int16_t var_88[0x20]
        sub_142a47d50(&var_c8, &var_88, 0, 0x20)
        int32_t rbx_1 = 0
        int32_t rsi_1 = 1
        int32_t r13_1 = 0
        int16_t var_c0
        int32_t var_bc
        
        if (sub_142a4a1f0(arg1) s> 0)
            int16_t* rdi_1 = nullptr
            int16_t* var_e0_2 = nullptr
            int32_t rax_18
            
            do
                int16_t rcx_3 = *(arg1 + 8)
                int32_t rax_6
                
                if (rcx_3 s< 0)
                    rax_6 = *(arg1 + 0xc)
                else
                    rax_6 = sx.d(rcx_3) s>> 5
                
                int16_t var_f0
                int16_t rdi_2
                
                if (r13_1 u>= rax_6)
                    rdi_2 = -1
                label_142acbc21:
                    r12.b = 0
                    
                    if (var_f8_1 != 0)
                        var_f0 = rdi_2
                        sub_142a48d70(&var_c8, &var_f0, 0, 1)
                    else
                        int32_t rdi_3
                        
                        if (rdi_2 != 0x48)
                            if (rdi_2 == 0x6d)
                                rdi_3 = 2
                                goto label_142acbc55
                            
                            if (rdi_2 == 0x73)
                                rdi_3 = 4
                                goto label_142acbc55
                            
                            if (rbx_1 != 0)
                                if (rbx_1 != 1)
                                    if (rbx_1 != 2 && rbx_1 != 4)
                                        abort()
                                        noreturn
                                    
                                    if (rsi_1 != 2)
                                        goto label_142acbe53
                                else if (rsi_1 - 1 u> 1)
                                    goto label_142acbe53
                                
                                sub_142ae7110(result_1, sub_142ac7bb0(rbx_1, rsi_1.b, arg3), arg3)
                                
                                if (*arg3 s> 0)
                                    goto label_142acbe65
                                
                                rbx_1 = 0
                            
                            var_f0 = rdi_2
                            sub_142a48d70(&var_c8, &var_f0, 0, 1)
                        else
                            rdi_3 = 1
                        label_142acbc55:
                            
                            if (rdi_3 != rbx_1)
                                if (rbx_1 != 0)
                                    if (sub_142ac94b0(rbx_1, rsi_1) == 0)
                                        goto label_142acbe53
                                    
                                    sub_142ae7110(result_1, sub_142ac7bb0(rbx_1, rsi_1.b, arg3), 
                                        arg3)
                                    
                                    if (*arg3 s> 0)
                                        goto label_142acbe65
                                else
                                    int32_t rax_12
                                    
                                    if (var_c0 s< 0)
                                        rax_12 = var_bc
                                    else
                                        rax_12 = sx.d(var_c0) s>> 5
                                    
                                    if (rax_12 s> 0)
                                        sub_142ae7110(result_1, sub_142ac7ab0(&var_c8, arg3), arg3)
                                        
                                        if (*arg3 s> 0)
                                            goto label_142acbe65
                                        
                                        if ((var_c0.b & 1) == 0)
                                            var_c0 &= 0x1f
                                        else
                                            var_c0 = 2
                                
                                rbx_1 = rdi_3
                                rsi_1 = 1
                                var_e8_1 |= rdi_3
                            else
                                rsi_1 += 1
                else
                    void* rax_7 = arg1 + 0xa
                    
                    if ((rcx_3.b & 2) == 0)
                        rax_7 = *(arg1 + 0x18)
                    
                    rdi_2 = *(rdi_1 + rax_7)
                    
                    if (rdi_2 != 0x27)
                        goto label_142acbc21
                    
                    if (r12.b == 0)
                        r12.b = 1
                        
                        if (rbx_1 != 0)
                            if (rbx_1 != 1)
                                if (rbx_1 != 2 && rbx_1 != 4)
                                    abort()
                                    noreturn
                                
                                if (rsi_1 != 2)
                                    goto label_142acbe53
                            else if (rsi_1 - 1 u> 1)
                                goto label_142acbe53
                            
                            sub_142ae7110(result_1, sub_142ac7bb0(rbx_1, rsi_1.b, arg3), arg3)
                            
                            if (*arg3 s> 0)
                                goto label_142acbe65
                            
                            rbx_1 = 0
                    else
                        var_f0 = 0x27
                        sub_142a48d70(&var_c8, &var_f0, 0, 1)
                        r12.b = 0
                    
                    var_f8_1 = var_f8_1 == 0
                r13_1 += 1
                rdi_1 = &var_e0_2[1]
                var_e0_2 = rdi_1
                rax_18 = sub_142a4a1f0(arg1)
            while (r13_1 s< rax_18)
            rdi = arg2
        
        if (*arg3 s> 0)
            goto label_142acbe65
        
        struct icu_64::GMTOffsetField::VTable** rax_20
        
        if (rbx_1 == 0)
            int32_t rcx_23
            
            if (var_c0 s< 0)
                rcx_23 = var_bc
            else
                rcx_23 = sx.d(var_c0) s>> 5
            
            if (rcx_23 s<= 0)
                goto label_142acbe24
            
            rax_20 = sub_142ac7ab0(&var_c8, arg3)
            goto label_142acbe1f
        
        if (rbx_1 != 1)
            if (rbx_1 != 2 && rbx_1 != 4)
                abort()
                noreturn
            
            if (rsi_1 != 2)
                goto label_142acbe53
            
            goto label_142acbe11
        
        if (rsi_1 - 1 u> 1)
        label_142acbe53:
            *arg3 = 1
        label_142acbe65:
            (*result_1)->__offset(0x0).q(result_1, 1)
            result_1 = nullptr
        else
        label_142acbe11:
            rax_20 = sub_142ac7bb0(rbx_1, rsi_1.b, arg3)
        label_142acbe1f:
            sub_142ae7110(result_1, rax_20, arg3)
        label_142acbe24:
            
            if (*arg3 s> 0)
                goto label_142acbe65
            
            int32_t rcx_30 = 0
            
            if (rdi == 0)
                rcx_30 = 1
            else if (rdi == 1)
                rcx_30 = 3
            else if (rdi == 2)
                rcx_30 = rdi + 5
            
            if (var_e8_1 != rcx_30)
                goto label_142acbe65
        
        sub_142a47ff0(&var_c8)
        result = result_1
    else
        *arg3 = 7
        result = nullptr

__security_check_cookie(rax_1 ^ &var_118)
return result
