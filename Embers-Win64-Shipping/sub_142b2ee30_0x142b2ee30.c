// 函数: sub_142b2ee30
// 地址: 0x142b2ee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_20 = rdi
int64_t var_288 = -2
void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
uint64_t result

if (*arg7 s<= 0)
    struct icu_64::UObject::icu_64::CanonicalIterator::VTable** rcx_11
    int32_t result_1
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_278
    char var_270
    void var_26e
    int32_t var_26c
    void* var_260
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_238
    char var_230
    struct icu_64::UObject::icu_64::CanonicalIterator::VTable* var_1f8
    
    if ((*(arg2 + 8) & 0xffe0) != 0)
        struct icu_64::UObject::icu_64::CanonicalIterator::VTable* var_128
        sub_142b775e0(&var_128, arg2, arg7)
        sub_142b775e0(&var_1f8, arg3, arg7)
        
        if (*arg7 s> 0)
            result_1 = arg6
        else
            sub_142b784c0(&var_128, &var_238)
            result_1 = arg6
            
            while ((var_230 & 1) == 0)
                if (*arg7 s<= 0)
                    int64_t* rcx_15 = *(arg1 + 0x10)
                    
                    if ((*(*rcx_15 + 0x50))(rcx_15, &var_238, arg7) != 0)
                        int16_t rax_17 = var_230.w
                        
                        if ((rax_17.b & 1) == 0)
                            int32_t r8_8
                            int32_t var_22c
                            
                            if (rax_17 s< 0)
                                r8_8 = var_22c
                            else
                                r8_8 = sx.d(rax_17) s>> 5
                            int16_t rax_18 = *(arg2 + 8)
                            int32_t rax_20
                            
                            if (rax_18 s< 0)
                                rax_20 = *(arg2 + 0xc)
                            else
                                rax_20 = sx.d(rax_18) s>> 5
                            
                            char rax_21
                            
                            if ((*(arg2 + 8) & 1) == 0 && r8_8 == rax_20)
                                rax_21 = sub_142a490e0(&var_238, arg2, r8_8)
                            
                            if ((*(arg2 + 8) & 1) != 0 || r8_8 != rax_20 || rax_21 == 0)
                                rdi.b = 0
                            else
                                rdi.b = 1
                        else
                            rdi.b = *(arg2 + 8) & 1
                        
                        sub_142b784c0(&var_1f8, &var_278)
                        
                        if ((var_270 & 1) == 0)
                            while (true)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_22
                                
                                if (*arg7 s> 0)
                                    rcx_22 = &var_278
                                else
                                    int64_t* rcx_18 = *(arg1 + 0x10)
                                    
                                    if ((*(*rcx_18 + 0x50))(rcx_18, &var_278, arg7) == 0)
                                        rcx_22 = &var_278
                                    else
                                        int32_t r8_10 = var_26c
                                        int16_t rcx_19 = var_270.w
                                        int32_t rax_25
                                        
                                        if (rcx_19 s< 0)
                                            rax_25 = r8_10
                                        else
                                            rax_25 = sx.d(rcx_19) s>> 5
                                        
                                        int16_t rdx_13
                                        
                                        if (rax_25 == 0)
                                            rdx_13 = -1
                                        else
                                            void* rax_26 = &var_26e
                                            
                                            if ((rcx_19.b & 2) == 0)
                                                rax_26 = var_260
                                            
                                            rdx_13 = *rax_26
                                        
                                        if (zx.d(rdx_13) - 0xac00 u<= 0x2ba3)
                                            rcx_22 = &var_278
                                        else if (rdi.b == 0)
                                        label_142b2f1fe:
                                            result_1 = sub_142b2ed20(arg1, &var_238, &var_278, 
                                                arg4, arg5, result_1, arg7)
                                            rcx_22 = &var_278
                                            
                                            if (*arg7 s> 0)
                                                sub_142a47ff0(rcx_22)
                                                break
                                        else
                                            bool cond:3_1
                                            
                                            if ((rcx_19.b & 1) == 0)
                                                if (rcx_19 s>= 0)
                                                    r8_10 = sx.d(rcx_19) s>> 5
                                                
                                                int16_t rax_30 = *(arg3 + 8)
                                                int32_t rax_32
                                                
                                                if (rax_30 s< 0)
                                                    rax_32 = *(arg3 + 0xc)
                                                else
                                                    rax_32 = sx.d(rax_30) s>> 5
                                                
                                                if ((*(arg3 + 8) & 1) != 0 || r8_10 != rax_32)
                                                    goto label_142b2f1fe
                                                
                                                cond:3_1 = sub_142a490e0(&var_278, arg3, r8_10) != 0
                                                goto label_142b2f1d7
                                            
                                            cond:3_1 = (*(arg3 + 8) & 1) != 0
                                        label_142b2f1d7:
                                            
                                            if (not(cond:3_1))
                                                goto label_142b2f1fe
                                            
                                            rcx_22 = &var_278
                                
                                sub_142a47ff0(rcx_22)
                                sub_142b784c0(&var_1f8, &var_278)
                                
                                if ((var_270 & 1) != 0)
                                    goto label_142b2f236
                            
                            break
                        
                    label_142b2f236:
                        sub_142a47ff0(&var_278)
                        sub_142b78930(&var_1f8)
                
                sub_142a47ff0(&var_238)
                sub_142b784c0(&var_128, &var_238)
            
            sub_142a47ff0(&var_238)
        
        sub_142b776a0(&var_1f8)
        rcx_11 = &var_128
    else
        sub_142b775e0(&var_1f8, arg3, arg7)
        
        if (*arg7 s> 0)
            result_1 = arg6
            rcx_11 = &var_1f8
        else
            var_238 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            var_230.w = 2
            sub_142b784c0(&var_1f8, &var_278)
            result_1 = arg6
            
            if ((var_270 & 1) != 0)
            label_142b2f00c:
                sub_142a47ff0(&var_278)
                sub_142a47ff0(&var_238)
                rcx_11 = &var_1f8
            else
                while (true)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_6
                    
                    if (*arg7 s> 0)
                        rcx_6 = &var_278
                    else
                        int64_t* rcx_2 = *(arg1 + 0x10)
                        
                        if ((*(*rcx_2 + 0x50))(rcx_2, &var_278, arg7) == 0)
                            rcx_6 = &var_278
                        else
                            int32_t r8_2 = var_26c
                            int16_t rcx_3 = var_270.w
                            int32_t rax_5
                            
                            if (rcx_3 s< 0)
                                rax_5 = r8_2
                            else
                                rax_5 = sx.d(rcx_3) s>> 5
                            
                            int16_t rdx_3
                            
                            if (rax_5 == 0)
                                rdx_3 = -1
                            else
                                void* rax_6 = &var_26e
                                
                                if ((rcx_3.b & 2) == 0)
                                    rax_6 = var_260
                                
                                rdx_3 = *rax_6
                            
                            if (zx.d(rdx_3) - 0xac00 u<= 0x2ba3)
                                rcx_6 = &var_278
                            else
                                bool cond:1_1
                                
                                if ((rcx_3.b & 1) == 0)
                                    if (rcx_3 s>= 0)
                                        r8_2 = sx.d(rcx_3) s>> 5
                                    
                                    int16_t rax_10 = *(arg3 + 8)
                                    int32_t rax_12
                                    
                                    if (rax_10 s< 0)
                                        rax_12 = *(arg3 + 0xc)
                                    else
                                        rax_12 = sx.d(rax_10) s>> 5
                                    
                                    if ((*(arg3 + 8) & 1) != 0 || r8_2 != rax_12)
                                        goto label_142b2efc2
                                    
                                    cond:1_1 = sub_142a490e0(&var_278, arg3, r8_2) != 0
                                    goto label_142b2ef9e
                                
                                cond:1_1 = (*(arg3 + 8) & 1) != 0
                            label_142b2ef9e:
                                
                                if (cond:1_1)
                                    rcx_6 = &var_278
                                else
                                label_142b2efc2:
                                    result_1 = sub_142b2ed20(arg1, &var_238, &var_278, arg4, arg5, 
                                        result_1, arg7)
                                    rcx_6 = &var_278
                                    
                                    if (*arg7 s> 0)
                                        sub_142a47ff0(rcx_6)
                                        sub_142a47ff0(&var_238)
                                        break
                    
                    sub_142a47ff0(rcx_6)
                    sub_142b784c0(&var_1f8, &var_278)
                    
                    if ((var_270 & 1) != 0)
                        goto label_142b2f00c
                
                rcx_11 = &var_1f8
    sub_142b776a0(rcx_11)
    result = zx.q(result_1)
else
    result = zx.q(arg6)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
