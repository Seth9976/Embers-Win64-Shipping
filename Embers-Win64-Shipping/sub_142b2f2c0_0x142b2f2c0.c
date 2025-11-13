// 函数: sub_142b2f2c0
// 地址: 0x142b2f2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_228 = -2
void var_278
int64_t rax_1 = __security_cookie ^ &var_278
void* result = arg5

if (*arg7 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1d8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_1d0_1 = 2
    
    if ((*(arg3 + 8) & 0xffe0) != 0)
        int64_t* rcx = *(arg1 + 8)
        (*(*rcx + 0x10))(rcx, arg3, &var_1d8, arg7)
    
    if ((*(arg3 + 8) & 0xffe0) == 0 || *arg7 s<= 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_218
        sub_142af4330(*(arg1 + 8), &var_218, arg4)
        
        if (*arg7 s<= 0)
            int32_t var_20c
            int32_t r8_2 = var_20c
            int16_t var_210
            int32_t r9_3
            
            if (var_210 s< 0)
                r9_3 = r8_2
            else
                r9_3 = sx.d(var_210) s>> 5
            
            if (r9_3 s< 2)
            label_142b2f4bb:
                
                if (arg2 == 0xf)
                label_142b2f5d5:
                    sub_142b32100(arg1, &var_218, arg6, arg7)
                    
                    if (*arg7 s<= 0)
                        int32_t rax_27 = *(arg1 + 0x220)
                        
                        if ((*(result + 8) & 0xffe0) == 0)
                            goto label_142b2f669
                        
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_198
                        sub_142af4330(*(arg1 + 8), &var_198, result)
                        
                        if (*arg7 s<= 0)
                            int32_t rax_30 = sub_142b7fa60(*(arg1 + 0x48), &var_198, arg1 + 0x128, 
                                *(arg1 + 0x220))
                            *(arg1 + 0x220) = rax_30
                            
                            if (rax_30 s<= 0x1f)
                                sub_142a47ff0(&var_198)
                            label_142b2f669:
                                int32_t r15_3 = -1
                                bool cond:1_1
                                
                                if ((*(arg3 + 8) & 1) == 0)
                                    int16_t rax_32 = *(arg3 + 8)
                                    int32_t r8_13
                                    
                                    if (rax_32 s< 0)
                                        r8_13 = *(arg3 + 0xc)
                                    else
                                        r8_13 = sx.d(rax_32) s>> 5
                                    
                                    int32_t rax_35
                                    int32_t var_1cc
                                    
                                    if (var_1d0_1 s< 0)
                                        rax_35 = var_1cc
                                    else
                                        rax_35 = sx.d(var_1d0_1) s>> 5
                                    
                                    if ((var_1d0_1.b & 1) != 0 || r8_13 != rax_35)
                                        goto label_142b2f718
                                    
                                    cond:1_1 = sub_142a490e0(arg3, &var_1d8, r8_13) == 0
                                    goto label_142b2f6bd
                                
                                cond:1_1 = (var_1d0_1.b & 1) == 0
                            label_142b2f6bd:
                                
                                if (cond:1_1)
                                label_142b2f718:
                                    
                                    if (*arg7 s<= 0)
                                        int64_t* rcx_27 = *(arg1 + 0x10)
                                        
                                        if ((*(*rcx_27 + 0x50))(rcx_27, arg3, arg7) != 0
                                                && sub_142b31080(arg1, arg4, arg7) == 0)
                                            r15_3 = sub_142b2ed20(arg1, arg3, arg4, arg1 + 0x128, 
                                                *(arg1 + 0x220), 0xffffffff, arg7)
                                else
                                    bool cond:3_1
                                    
                                    if ((*(arg4 + 8) & 1) == 0)
                                        int16_t rax_38 = *(arg4 + 8)
                                        int32_t r8_15
                                        
                                        if (rax_38 s< 0)
                                            r8_15 = *(arg4 + 0xc)
                                        else
                                            r8_15 = sx.d(rax_38) s>> 5
                                        
                                        int32_t rax_40
                                        
                                        if (var_210 s< 0)
                                            rax_40 = var_20c
                                        else
                                            rax_40 = sx.d(var_210) s>> 5
                                        
                                        if ((var_210.b & 1) != 0 || r8_15 != rax_40)
                                            goto label_142b2f718
                                        
                                        cond:3_1 = sub_142a490e0(arg4, &var_218, r8_15) != 0
                                        goto label_142b2f716
                                    
                                    cond:3_1 = (var_210.b & 1) != 0
                                label_142b2f716:
                                    
                                    if (not(cond:3_1))
                                        goto label_142b2f718
                                
                                int64_t r12_1 = sx.q(*(arg1 + 0x220))
                                
                                if (*arg7 s<= 0)
                                    int64_t rsi_1 = 0
                                    int64_t var_158[0x20]
                                    
                                    if (r12_1.d != sub_142b7f9b0(*(arg1 + 0x48), &var_1d8, 
                                        &var_218, &var_158, 0))
                                    label_142b2f7de:
                                        
                                        if (r15_3 == 0xffffffff)
                                            int64_t* rcx_32 = *(arg1 + 0x48)
                                            r15_3 = (*(*rcx_32 + 0x18))(rcx_32, arg1 + 0x128, 
                                                zx.q(r12_1.d), arg7)
                                        
                                        int32_t var_258_2
                                        var_258_2.q = arg7
                                        sub_142b7ced0(*(arg1 + 0x48), &var_1d8, &var_218, r15_3, 
                                            var_258_2)
                                    else if (r12_1.d s> 0)
                                        while (*(&var_158 + arg1 + 0x128 - &var_158 + (rsi_1 << 3))
                                                == var_158[rsi_1])
                                            rsi_1 += 1
                                            
                                            if (rsi_1 s>= r12_1)
                                                goto label_142b2f836
                                        
                                        goto label_142b2f7de
                                
                            label_142b2f836:
                                sub_142b2ee30(arg1, &var_1d8, &var_218, arg1 + 0x128, r12_1.d, 
                                    r15_3, arg7)
                                sub_142b2fd10(arg1, &var_1d8, &var_218, arg7)
                                
                                if (*arg7 s<= 0)
                                    *(arg1 + 0x220) = rax_27
                                else
                                    *arg6 = "writing collation elements"
                            else
                                *arg7 = 1
                                *arg6 = "extension string adds too many collation elements (more "
                                "than 31 total)"
                                sub_142a47ff0(&var_198)
                        else
                            *arg6 = "normalizing the relation extension"
                            sub_142a47ff0(&var_198)
                else
                    int32_t rax_16 = sub_142b30490(arg1, arg2, arg6, arg7)
                    int64_t r15_2 = *(arg1 + (sx.q(*(arg1 + 0x220) - 1) << 3) + 0x128)
                    
                    if (arg2 == 0)
                        if ((r15_2.d u>> 0x18) - 6 u<= 0x3f || (r15_2 s>> 0x20).d != 0)
                            goto label_142b2f547
                        
                        *arg7 = 0x10
                        *arg6 = "tailoring primary after ignorables not supported"
                    else if (arg2 != 3 || r15_2 != 0)
                    label_142b2f547:
                        int32_t rax_19 = sub_142b31220(arg1, rax_16, arg2, arg7)
                        
                        if (*arg7 s<= 0)
                            int32_t rax_20 = sub_142b30050(r15_2)
                            int32_t r9_7 = rax_20
                            
                            if (arg2 s< rax_20)
                                r9_7 = arg2
                            
                            *(arg1 + (sx.q(*(arg1 + 0x220) - 1) << 3) + 0x128) = 0x4040000006002000
                                + (((zx.q(rax_19) & 0x1fc0) + ((zx.q(rax_19) & 0xfe000) << 1))
                                << 0x2a) + zx.q((rax_19 & 0x3f) << 0x18) + sx.q(r9_7 << 8)
                            goto label_142b2f5d5
                        
                        *arg6 = "modifying collation elements"
                    else
                        *arg7 = 0x10
                        *arg6 = "tailoring quaternary after tertiary ignorables not supported"
            else
                int32_t rax_4
                
                if (var_210 s< 0)
                    rax_4 = r8_2
                else
                    rax_4 = sx.d(var_210) s>> 5
                
                int16_t r10_1 = -1
                void var_20e
                void* var_200
                int16_t rcx_2
                
                if (rax_4 == 0)
                    rcx_2 = -1
                else
                    void* rax_5 = &var_20e
                    
                    if ((var_210.b & 2) == 0)
                        rax_5 = var_200
                    
                    rcx_2 = *rax_5
                
                uint32_t rcx_3 = zx.d(rcx_2)
                
                if (rcx_3 - 0x1100 u< 0x13 || rcx_3 - 0x1161 u< 0x15)
                    *arg7 = 0x10
                    *arg6 = "contractions starting with conjoining Jamo L or V not supported"
                else
                    int32_t rax_9
                    
                    if (var_210 s< 0)
                        rax_9 = r8_2
                    else
                        rax_9 = sx.d(var_210) s>> 5
                    
                    int16_t r11_2
                    
                    if (r9_3 - 1 u>= rax_9)
                        r11_2 = -1
                    else
                        void* rcx_4 = &var_20e
                        
                        if ((var_210.b & 2) == 0)
                            rcx_4 = var_200
                        
                        r11_2 = *(rcx_4 + (sx.q(r9_3 - 1) << 1))
                    
                    uint32_t rcx_5 = zx.d(r11_2)
                    
                    if (rcx_5 - 0x1100 u< 0x13)
                        *arg7 = 0x10
                        *arg6 = "contractions ending with conjoining Jamo L or L+V not supported"
                    else
                        if (rcx_5 - 0x1161 u>= 0x15)
                            goto label_142b2f4bb
                        
                        if (var_210 s>= 0)
                            r8_2 = sx.d(var_210) s>> 5
                        
                        if (r9_3 - 2 u< r8_2)
                            void* rcx_6 = &var_20e
                            
                            if ((var_210.b & 2) == 0)
                                rcx_6 = var_200
                            
                            r10_1 = *(rcx_6 + (sx.q(r9_3 - 2) << 1))
                        
                        if (zx.d(r10_1) - 0x1100 u>= 0x13)
                            goto label_142b2f4bb
                        
                        *arg7 = 0x10
                        *arg6 = "contractions ending with conjoining Jamo L or L+V not supported"
        else
            *arg6 = "normalizing the relation string"
        
        sub_142a47ff0(&var_218)
    else
        *arg6 = "normalizing the relation prefix"
    
    result = sub_142a47ff0(&var_1d8)

__security_check_cookie(rax_1 ^ &var_278)
return result
