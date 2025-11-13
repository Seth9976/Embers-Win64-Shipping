// 函数: sub_142b51c60
// 地址: 0x142b51c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rbx = arg2
int32_t result_1 = 0
*arg6 = 0
int32_t rcx_2 = sub_142a4ab40(arg5)
uint64_t result

if (*arg7 s<= 0)
    int32_t rcx_4 = sbb.d(rcx_2, rcx_2, (arg4.b & 2) != 0) & 3
    uint64_t r9_1 = zx.q(rcx_4) | 0x18
    
    if ((arg4.b & 4) == 0)
        r9_1 = zx.q(rcx_4)
    
    int32_t* var_118
    int64_t* rdi_1
    
    if (arg4 == 0)
        rdi_1 = nullptr
    else
        int64_t* rcx_5 = *(arg1 + 0xe8)
        var_118 = arg7
        rdi_1 = (*(*rcx_5 + 0x70))(rcx_5, rbx, zx.q(arg3), r9_1, var_118)
    
    if (*arg7 s> 0)
        result = 0
    else
        int32_t result_2 = 0
        int32_t rbp_1 = 0
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_d0_1 = 2
        int64_t r12
        r12.b = 0
        int32_t rdi_2
        
        if (rdi_1 == 0)
            rdi_2 = arg3
        label_142b51e96:
            int32_t* var_118_1 = arg7
            int64_t* rax_19 = sub_142b51fe0(arg1, rbx, rdi_2, zx.q(arg4))
            
            if (*arg7 s<= 0)
                if (rax_19 != 0)
                    int32_t rbx_2 = 0
                    
                    if (sub_142b53930(rax_19) s> 0)
                        int32_t rax_25
                        
                        do
                            void* rax_21 = sub_142ae72d0(*rax_19, rbx_2)
                            int32_t rax_22
                            
                            if (rax_21 == 0)
                                rax_22 = -1
                            else
                                rax_22 = *(rax_21 + 8)
                            
                            if (rax_22 s>= result_2)
                                void* rax_23 = sub_142ae72d0(*rax_19, rbx_2)
                                
                                if (rax_23 == 0)
                                    result_2 = -1
                                else
                                    result_2 = *(rax_23 + 8)
                                
                                rbp_1 = 0
                                int64_t* rax_24 = sub_142ae72d0(*rax_19, rbx_2)
                                int64_t r8_6
                                
                                if (rax_24 != 0)
                                    r8_6 = *(*rax_24 + 8)
                                
                                if (rax_24 == 0 || r8_6 == 0)
                                    sub_142a4ab40(&var_d8)
                                else
                                    sub_142a4aa20(&var_d8, 1, r8_6, 0xffffffff)
                            
                            rbx_2 += 1
                            rax_25 = sub_142b53930(rax_19)
                        while (rbx_2 s< rax_25)
                    
                    int64_t* rcx_25 = *rax_19
                    
                    if (rcx_25 != 0)
                        (**rcx_25)(rcx_25, 1)
                    
                    sub_142a47920(rax_19)
                
                if (result_2 s> 0)
                    *arg6 = rbp_1
                    sub_142a48aa0(arg5, &var_d8, 0)
                
                result_1 = result_2
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_90_1 = 2
            int32_t rbx_1 = 0
            
            if (sub_142ac69b0(rdi_1) s> 0)
                int32_t rax_12
                
                do
                    int32_t result_3 = sub_142ac67c0(rdi_1, rbx_1)
                    
                    if (result_3 s> result_2)
                        result_2 = result_3
                        
                        if (sub_142ac68a0(rdi_1, rbx_1, &var_d8) == 0
                                && sub_142ac6800(rdi_1, rbx_1, &var_98) != 0)
                            int64_t* rcx_10 = *(arg1 + 0xe8)
                            (*(*rcx_10 + 0x38))(rcx_10, &var_98, arg1 + 0x1d1, &var_d8, var_118)
                        
                        int32_t rax_11 = sub_142ac6860(rdi_1, rbx_1)
                        
                        if (*arg7 s> 0)
                            break
                        
                        if (rax_11 == 2)
                            r12.b = 1
                            rbp_1 = 1
                        else if (rax_11 == 4)
                            rbp_1 = 2
                        else if (rax_11 == 0x10)
                            r12.b = 1
                            rbp_1 = 1
                        else if (rax_11 == 0x20)
                            rbp_1 = 2
                        else
                            rbp_1 = 0
                    
                    rbx_1 += 1
                    rax_12 = sub_142ac69b0(rdi_1)
                while (rbx_1 s< rax_12)
            
            (**rdi_1)(rdi_1, 1)
            
            if (*arg7 s> 0)
                sub_142a47ff0(&var_98)
            else
                rbx = arg2
                int16_t rax_14 = *(rbx + 8)
                int32_t rax_16
                
                if (rax_14 s< 0)
                    rax_16 = *(rbx + 0xc)
                else
                    rax_16 = sx.d(rax_14) s>> 5
                
                rdi_2 = arg3
                
                if (result_2 != rax_16 - rdi_2 || r12.b != 0)
                    sub_142a47ff0(&var_98)
                    goto label_142b51e96
                
                sub_142a48aa0(arg5, &var_d8, 0)
                *arg6 = rbp_1
                result_1 = result_2
                sub_142a47ff0(&var_98)
        sub_142a47ff0(&var_d8)
        result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_138)
return result
