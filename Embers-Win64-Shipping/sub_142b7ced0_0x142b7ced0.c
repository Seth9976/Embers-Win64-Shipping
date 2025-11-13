// 函数: sub_142b7ced0
// 地址: 0x142b7ced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_120 = -2
void var_158
void* result = __security_cookie ^ &var_158
void* result_1 = result

if (*arg5 s<= 0)
    if ((*(arg3 + 8) & 0xffe0) != 0)
        void* rcx = *(arg1 + 0x20)
        
        if (rcx != 0)
            result = sub_142a95bd0(rcx)
        
        if (rcx == 0 || result.b != 0)
            *arg5 = 0x1b
        else
            int32_t rax_1 = sub_142a486d0(arg3, 0)
            int32_t rbx_1
            rbx_1.b = rax_1 u> 0xffff
            int32_t rbx_2 = rbx_1 + 1
            int32_t rdi_1 = sub_142a959a0(*(arg1 + 0x20), rax_1)
            int32_t rax_5
            
            if ((*(arg2 + 8) & 0xffe0) == 0)
                int16_t rax_3 = *(arg3 + 8)
                
                if (rax_3 s< 0)
                    rax_5 = *(arg3 + 0xc)
                else
                    rax_5 = sx.d(rax_3) s>> 5
            
            int64_t r15
            
            if ((*(arg2 + 8) & 0xffe0) != 0 || rax_5 s> rbx_2)
                r15.b = 1
            else
                r15.b = 0
            
            if (rdi_1 != 0xc0)
            label_142b7d00d:
                
                if (r15.b == 0)
                    goto label_142b7d012
                
                void* rax_13
                void* r15_1
                
                if (rdi_1.b u< 0xc0 || (rdi_1.b & 0xf) != 7)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                    int32_t rax_15 = sub_142b7d330(arg1, sub_142a47fc0(&var_98, 0), rdi_1, arg5)
                    result = sub_142a47ff0(&var_98)
                    
                    if (*arg5 s<= 0)
                        sub_142b8d880(*(arg1 + 0x20), rax_1, rax_15 << 0xd | 0xc7, arg5)
                        sub_142a9e7d0(arg1 + 0x90, rax_1)
                        r15_1 = arg1 + 0x68
                        rax_13 = sub_142ae72d0(r15_1, rax_15)
                        goto label_142b7d0f7
                else
                    r15_1 = arg1 + 0x68
                    rax_13 = sub_142ae72d0(r15_1, rdi_1 u>> 0xd)
                    *(rax_13 + 0x48) = 1
                label_142b7d0f7:
                    void* rbp_2 = rax_13
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
                    Concurrency::details::_SyncOriginator<enum Concurrency::agent_status>::_SyncOriginator<enum Concurrency::agent_status>(
                        &var_d8, arg3, rbx_2)
                    int16_t rax_16 = *(arg2 + 8)
                    int16_t rax_18
                    
                    if (rax_16 s< 0)
                        rax_18 = (*(arg2 + 0xc)).w
                    else
                        rax_18 = rax_16 s>> 5
                    
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118
                    sub_142a47fc0(&var_118, rax_18)
                    int16_t rax_19 = *(arg2 + 8)
                    int32_t r9_6
                    
                    if (rax_19 s< 0)
                        r9_6 = *(arg2 + 0xc)
                    else
                        r9_6 = sx.d(rax_19) s>> 5
                    
                    void* rax_20 = sub_142a48d00(&var_118, arg2, 0, r9_6)
                    int16_t var_d0
                    int32_t r9_8
                    int32_t var_cc
                    
                    if (var_d0 s< 0)
                        r9_8 = var_cc
                    else
                        r9_8 = sx.d(var_d0) s>> 5
                    sub_142a48d00(rax_20, &var_d8, 0, r9_8)
                    sub_142a9eb60(arg1 + 0x198, &var_d8)
                    int32_t rdi_5 = *(rbp_2 + 0x4c)
                    
                    if (rdi_5 s>= 0)
                        while (true)
                            void* rax_21 = sub_142ae72d0(r15_1, rdi_5)
                            char rax_22 = sub_142a98a20(&var_118, rax_21)
                            
                            if (rax_22 s< 0)
                                int32_t rax_23 = sub_142b7d330(arg1, &var_118, arg4, arg5)
                                
                                if (*arg5 s> 0)
                                    goto label_142b7d24d
                                
                                *(rbp_2 + 0x4c) = rax_23
                                *(sub_142ae72d0(r15_1, rax_23) + 0x4c) = rdi_5
                                break
                            
                            if (rax_22 == 0)
                                *(rax_21 + 0x40) = arg4
                                break
                            
                            rbp_2 = rax_21
                            rdi_5 = *(rax_21 + 0x4c)
                            
                            if (rdi_5 s< 0)
                                goto label_142b7d219
                        
                        goto label_142b7d22c
                    
                label_142b7d219:
                    int32_t rax_25 = sub_142b7d330(arg1, &var_118, arg4, arg5)
                    
                    if (*arg5 s> 0)
                    label_142b7d24d:
                        sub_142a47ff0(&var_118)
                        result = sub_142a47ff0(&var_d8)
                    else
                        *(rbp_2 + 0x4c) = rax_25
                    label_142b7d22c:
                        sub_142a47ff0(&var_118)
                        result = sub_142a47ff0(&var_d8)
                        *(arg1 + 0x260) = 1
            else
                int32_t rax_6 = sub_142aa3ce0(*(arg1 + 0x10), rax_1)
                int32_t rax_7 = sub_142aa60d0(*(arg1 + 0x10), rax_6)
                
                if (r15.b != 0 || (rax_7.b u>= rdi_1.b && (rax_7 & 0xf) - 8 u<= 1))
                    int32_t rax_8 = sub_142b7eac0(arg1, rax_1, rax_7, 1, arg5)
                    rdi_1 = rax_8
                    result = sub_142b8d880(*(arg1 + 0x20), rax_1, rax_8, arg5)
                    
                    if (*arg5 s<= 0)
                        goto label_142b7d00d
                else
                label_142b7d012:
                    
                    if (rdi_1.b u< 0xc0 || (rdi_1.b & 0xf) != 7)
                        result = sub_142b8d880(*(arg1 + 0x20), rax_1, arg4, arg5)
                        *(arg1 + 0x260) = 1
                    else
                        result = sub_142ae72d0(arg1 + 0x68, rdi_1 u>> 0xd)
                        *(result + 0x48) = 1
                        *(result + 0x40) = arg4
                        *(arg1 + 0x260) = 1
    else
        *arg5 = 1

__security_check_cookie(result_1 ^ &var_158)
return result
