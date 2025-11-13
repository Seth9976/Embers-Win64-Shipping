// 函数: sub_142b5caa0
// 地址: 0x142b5caa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint64_t result

if (*arg4 s> 0)
    result = 3
else if ((*(*arg3 + 0x10))(arg3) != 3)
    result = 3
else
    int32_t var_f4
    int64_t rax_5 = (*(*arg3 + 0x20))(arg3, &var_f4, arg4)
    
    if (*arg4 s> 0)
        result = 3
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
        sub_142a47f60(&var_98, rax_5, var_f4)
        int32_t result_1 = 0
        
        if (sub_142a48fb0(&var_98, 0, 0x11, u"/LOCALE/calendar/", 0, 0x11) != 0)
            *arg4 = 5
            result_1 = 3
        else
            int32_t var_8c
            int32_t r9 = var_8c
            int16_t var_90
            int32_t rcx_5
            
            if (var_90 s< 0)
                rcx_5 = r9
            else
                rcx_5 = sx.d(var_90) s>> 5
            
            if (rcx_5 s<= 0x11)
                *arg4 = 5
                result_1 = 3
            else
                int32_t r8_2 = 0x11
                int32_t rcx_7
                
                if (var_90 s< 0)
                    rcx_7 = r9
                else
                    rcx_7 = sx.d(var_90) s>> 5
                
                if (rcx_7 s< 0x11)
                    if (var_90 s< 0)
                        r8_2 = r9
                    else
                        r8_2 = sx.d(var_90) s>> 5
                
                if (var_90 s>= 0)
                    r9 = sx.d(var_90) s>> 5
                
                int32_t rax_8 = sub_142a491f0(&var_98, 0x2f, r8_2, r9 - r8_2)
                
                if (rax_8 s<= 0x11)
                    *arg4 = 5
                    result_1 = 3
                else
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
                    sub_142a71620(&var_98, &var_d8, 0x11, rax_8)
                    int32_t rsi_2
                    
                    if (var_90 s< 0)
                        rsi_2 = var_8c
                    else
                        rsi_2 = sx.d(var_90) s>> 5
                    
                    sub_142a4afe0(arg1 + 0x218)
                    int16_t rax_9 = *(arg1 + 0x220)
                    int32_t r8_5
                    
                    if (rax_9 s< 0)
                        r8_5 = *(arg1 + 0x224)
                    else
                        r8_5 = sx.d(rax_9) s>> 5
                    
                    sub_142a49310(arg1 + 0x218, 0, r8_5, &var_98, rax_8 + 1, rsi_2)
                    int16_t var_d0
                    int32_t var_cc
                    int16_t rcx_13
                    
                    if ((*(arg1 + 0x198) & 1) == 0)
                        int16_t rax_12 = *(arg1 + 0x198)
                        int32_t r8_7
                        
                        if (rax_12 s< 0)
                            r8_7 = *(arg1 + 0x19c)
                        else
                            r8_7 = sx.d(rax_12) s>> 5
                        
                        rcx_13 = var_d0
                        int32_t rax_14
                        
                        if (rcx_13 s< 0)
                            rax_14 = var_cc
                        else
                            rax_14 = sx.d(rcx_13) s>> 5
                        
                        if ((rcx_13.b & 1) != 0 || r8_7 != rax_14)
                            goto label_142b5ccab
                        
                        if (sub_142a490e0(arg1 + 0x190, &var_d8, r8_7) == 0)
                            goto label_142b5cca7
                        
                        goto label_142b5cc9a
                    
                    rcx_13 = var_d0
                    
                    if ((rcx_13.b & 1) == 0)
                        goto label_142b5ccab
                    
                label_142b5cc9a:
                    
                    if (sub_142ac14c0(arg2, arg1 + 0x218) != 0)
                        sub_142a47ff0(&var_d8)
                    else
                    label_142b5cca7:
                        rcx_13 = var_d0
                    label_142b5ccab:
                        
                        if ((*(arg1 + 0x198) & 1) == 0)
                            int16_t rax_18 = *(arg1 + 0x198)
                            int32_t r8_9
                            
                            if (rax_18 s< 0)
                                r8_9 = *(arg1 + 0x19c)
                            else
                                r8_9 = sx.d(rax_18) s>> 5
                            
                            int32_t rax_20
                            
                            if (rcx_13 s< 0)
                                rax_20 = var_cc
                            else
                                rax_20 = sx.d(rcx_13) s>> 5
                            
                            if ((rcx_13.b & 1) != 0 || r8_9 != rax_20)
                                goto label_142b5cd0c
                            
                            if (sub_142a490e0(arg1 + 0x190, &var_d8, r8_9) != 0)
                                goto label_142b5ce2c
                            
                            rcx_13 = var_d0
                        label_142b5cd0c:
                            
                            if ((*(arg2 + 8) & 1) == 0)
                                int16_t rax_23 = *(arg2 + 8)
                                int32_t r8_11
                                
                                if (rax_23 s< 0)
                                    r8_11 = *(arg2 + 0xc)
                                else
                                    r8_11 = sx.d(rax_23) s>> 5
                                
                                int16_t rax_24 = *(arg1 + 0x220)
                                int32_t rax_26
                                
                                if (rax_24 s< 0)
                                    rax_26 = *(arg1 + 0x224)
                                else
                                    rax_26 = sx.d(rax_24) s>> 5
                                
                                if ((*(arg1 + 0x220) & 1) != 0 || r8_11 != rax_26)
                                    goto label_142b5ce2c
                                
                                if (sub_142a490e0(arg2, arg1 + 0x218, r8_11) == 0)
                                    goto label_142b5ce2c
                                
                                rcx_13 = var_d0
                            else if ((*(arg1 + 0x220) & 1) == 0)
                                goto label_142b5ce2c
                            
                            int32_t r8_13
                            
                            if (rcx_13 s< 0)
                                r8_13 = var_cc
                            else
                                r8_13 = sx.d(rcx_13) s>> 5
                            
                            if (sub_142a48fb0(&var_d8, 0, r8_13, u"gregorian", 0, 9) == 0)
                                result_1 = 2
                                sub_142a47ff0(&var_d8)
                            else if ((*(arg1 + 0x1d8) & 1) == 0)
                                bool cond:0_1
                                
                                if ((*(arg1 + 0x1d8) & 1) == 0)
                                    int16_t rax_30 = *(arg1 + 0x1d8)
                                    int32_t r8_15
                                    
                                    if (rax_30 s< 0)
                                        r8_15 = *(arg1 + 0x1dc)
                                    else
                                        r8_15 = sx.d(rax_30) s>> 5
                                    
                                    int32_t rax_32
                                    
                                    if (var_d0 s< 0)
                                        rax_32 = var_cc
                                    else
                                        rax_32 = sx.d(var_d0) s>> 5
                                    
                                    if ((var_d0.b & 1) != 0 || r8_15 != rax_32)
                                        goto label_142b5ce2c
                                    
                                    cond:0_1 = sub_142a490e0(arg1 + 0x1d0, &var_d8, r8_15) == 0
                                else
                                    cond:0_1 = (var_d0.b & 1) == 0
                                
                                if (cond:0_1)
                                    goto label_142b5ce2c
                                
                                result_1 = 1
                                sub_142a47ff0(&var_d8)
                            else
                                sub_142a48100(arg1 + 0x1d0, &var_d8)
                                result_1 = 1
                                sub_142a47ff0(&var_d8)
                        else
                            if ((rcx_13.b & 1) == 0)
                                goto label_142b5cd0c
                            
                        label_142b5ce2c:
                            sub_142a47ff0(&var_d8)
                            *arg4 = 5
                            result_1 = 3
        
        sub_142a47ff0(&var_98)
        result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_128)
return result
