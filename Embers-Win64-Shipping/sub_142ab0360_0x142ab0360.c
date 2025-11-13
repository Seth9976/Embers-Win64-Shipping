// 函数: sub_142ab0360
// 地址: 0x142ab0360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_118
int64_t result = __security_cookie ^ &var_118
int64_t result_1 = result
*(arg1 + 0x188) = 0

if (*(arg1 + 0x170) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
    sub_142a47a60(&var_58, 1, u"%spellout-numbering", 0xffffffff)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
    sub_142a47a60(&var_98, 1, u"%digits-ordinal", 0xffffffff)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
    sub_142a47a60(&var_d8, 1, u"%duration", 0xffffffff)
    int64_t* rbx_1 = *(arg1 + 0x170)
    void* rax_1 = *rbx_1
    
    if (rax_1 == 0)
    label_142ab056c:
        void* rbx_2 = rbx_1 - 8
        void* rax_14 = *rbx_2
        *(arg1 + 0x188) = rax_14
        
        if (*(rax_14 + 0x99) == 0)
            int64_t rcx_7 = *(arg1 + 0x170)
            
            if (rbx_2 != rcx_7)
                void* rax_15
                
                while (true)
                    rbx_2 -= 8
                    rax_15 = *rbx_2
                    
                    if (*(rax_15 + 0x99) != 0)
                        break
                    
                    if (rbx_2 == rcx_7)
                        goto label_142ab05b3
                
                *(arg1 + 0x188) = rax_15
    else
        int16_t var_50
        int16_t rcx_3 = var_50
        int16_t var_90
        int16_t rdx_1 = var_90
        int16_t var_d0
        int16_t r8_1 = var_d0
        
        while (true)
            if ((*(rax_1 + 8) & 1) == 0)
                int16_t r9_1 = *(rax_1 + 8)
                int32_t r9_3
                
                if (r9_1 s< 0)
                    r9_3 = *(rax_1 + 0xc)
                else
                    r9_3 = sx.d(r9_1) s>> 5
                
                int32_t r10_2
                int32_t var_4c
                
                if (rcx_3 s< 0)
                    r10_2 = var_4c
                else
                    r10_2 = sx.d(rcx_3) s>> 5
                
                if ((rcx_3.b & 1) != 0 || r9_3 != r10_2)
                    goto label_142ab047f
                
                if (sub_142a490e0(rax_1, &var_58, r9_3) == 0)
                    rcx_3 = var_50
                    rdx_1 = var_90
                    r8_1 = var_d0
                label_142ab047f:
                    void* r10_3 = *rbx_1
                    
                    if ((*(r10_3 + 8) & 1) == 0)
                        int16_t rax_5 = *(r10_3 + 8)
                        int32_t rax_7
                        
                        if (rax_5 s< 0)
                            rax_7 = *(r10_3 + 0xc)
                        else
                            rax_7 = sx.d(rax_5) s>> 5
                        
                        int32_t r9_5
                        int32_t var_8c
                        
                        if (rdx_1 s< 0)
                            r9_5 = var_8c
                        else
                            r9_5 = sx.d(rdx_1) s>> 5
                        
                        if ((rdx_1.b & 1) != 0 || rax_7 != r9_5)
                            goto label_142ab04ec
                        
                        if (sub_142a490e0(r10_3, &var_98, rax_7) == 0)
                            rcx_3 = var_50
                            rdx_1 = var_90
                            r8_1 = var_d0
                        label_142ab04ec:
                            void* r10_4 = *rbx_1
                            
                            if ((*(r10_4 + 8) & 1) == 0)
                                int16_t rax_10 = *(r10_4 + 8)
                                int32_t rax_12
                                
                                if (rax_10 s< 0)
                                    rax_12 = *(r10_4 + 0xc)
                                else
                                    rax_12 = sx.d(rax_10) s>> 5
                                
                                int32_t r9_7
                                int32_t var_cc
                                
                                if (r8_1 s< 0)
                                    r9_7 = var_cc
                                else
                                    r9_7 = sx.d(r8_1) s>> 5
                                
                                if ((r8_1.b & 1) != 0 || rax_12 != r9_7)
                                    goto label_142ab0556
                                
                                if (sub_142a490e0(r10_4, &var_d8, rax_12) == 0)
                                    rcx_3 = var_50
                                    rdx_1 = var_90
                                    r8_1 = var_d0
                                label_142ab0556:
                                    rbx_1 = &rbx_1[1]
                                    rax_1 = *rbx_1
                                    
                                    if (rax_1 == 0)
                                        goto label_142ab056c
                                    
                                    continue
                            else if ((r8_1.b & 1) == 0)
                                goto label_142ab0556
                    else if ((rdx_1.b & 1) == 0)
                        goto label_142ab04ec
            else if ((rcx_3.b & 1) == 0)
                goto label_142ab047f
            
            break
        
        *(arg1 + 0x188) = *rbx_1
    
label_142ab05b3:
    sub_142a47ff0(&var_d8)
    sub_142a47ff0(&var_98)
    result = sub_142a47ff0(&var_58)

__security_check_cookie(result_1 ^ &var_118)
return result
