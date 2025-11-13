// 函数: sub_142ae1760
// 地址: 0x142ae1760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_270 = -2
void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int32_t var_278 = 0

if (*arg5 s> 0)
    *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    arg2[1].w = 2
else
    int32_t rax_2 = *(arg1 + 0x11f8)
    
    if (rax_2 s<= 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_228 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_220_1 = 2
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_268 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_260_1 = 2
        int32_t var_288 = 0
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168
        sub_142ae3040(arg1, &var_168, arg3, &var_288, arg5)
        
        if (*arg5 s<= 0)
            int16_t rax_3 = var_260_1 & 0x1f
            
            if ((var_260_1.b & 1) != 0)
                rax_3 = 2
            
            int16_t var_260_2 = rax_3
            struct icu_64::PtnSkeleton::VTable* const var_e8 = &icu_64::PtnSkeleton::`vftable'
            int64_t var_a0
            __builtin_memset(&var_a0, 0, 0x40)
            sub_142ae3d60(*(arg1 + 0xf0), &var_168, *(arg1 + 0xe8), &var_e8)
            int64_t var_280 = 0
            struct icu_64::PatternMapIterator::VTable** rax_4 =
                sub_142ae1b10(arg1, *(arg1 + 0xf0), 0xffffffff, *(arg1 + 0xf8), arg5, &var_280)
            
            if (*arg5 s> 0)
                *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                arg2[1].w = 2
            else
                void* rax_5 = *(arg1 + 0xf8)
                int64_t* var_290_1
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128
                
                if (*(rax_5 + 8) != 0 || *(rax_5 + 0xc) != 0)
                    int32_t rax_8 = sub_142ae2260(*(arg1 + 0xf0))
                    var_290_1.d = arg4
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1a8
                    sub_142ae1370(arg1, &var_1a8, rax_8 & 0x3ff, var_288, arg5, var_290_1.d)
                    var_290_1.d = arg4
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1e8
                    sub_142ae1370(arg1, &var_1e8, rax_8 & 0xfc00, var_288, arg5, var_290_1.d)
                    
                    if (*arg5 s<= 0)
                        int16_t var_1a0
                        int32_t rax_12
                        int32_t var_19c
                        
                        if (var_1a0 s< 0)
                            rax_12 = var_19c
                        else
                            rax_12 = sx.d(var_1a0) s>> 5
                        int32_t var_1dc
                        int32_t rcx_9 = var_1dc
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdx_9
                        int16_t var_1e0
                        int16_t rax_15
                        
                        if (rax_12 != 0)
                            rax_15 = var_260_2
                        label_142ae1a07:
                            
                            if (var_1e0 s>= 0)
                                rcx_9 = sx.d(var_1e0) s>> 5
                            
                            if (rcx_9 != 0)
                                rax_15 &= 0x1f
                                
                                if ((var_260_2.b & 1) != 0)
                                    rax_15 = 2
                                
                                int16_t var_260_3 = rax_15
                                *arg5 = 0
                                sub_142a48100(&var_228, arg1 + 0x1108)
                                var_128 =
                                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                                int16_t var_120_1 = 2
                                sub_142b62570(&var_128, &var_228, 2, 2, arg5)
                                sub_142b62a90(&var_128, &var_1e8, &var_1a8, &var_268, arg5)
                                j_sub_142a47ff0(&var_128)
                                rdx_9 = &var_268
                            else
                                rdx_9 = &var_1a8
                        else
                            int32_t rax_14
                            
                            if (var_1e0 s< 0)
                                rax_14 = rcx_9
                            else
                                rax_14 = sx.d(var_1e0) s>> 5
                            
                            if (rax_14 == 0)
                                if ((var_260_2.b & 1) == 0)
                                    rax_15 = var_260_2 & 0x1f
                                    var_260_2 = rax_15
                                else
                                    rax_15 = 2
                                    var_260_2 = 2
                                
                                goto label_142ae1a07
                            
                            rdx_9 = &var_1e8
                        sub_142a47930(arg2, rdx_9)
                    else
                        *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        arg2[1].w = 2
                    
                    sub_142a47ff0(&var_1e8)
                    sub_142a47ff0(&var_1a8)
                else
                    var_290_1.d = arg4
                    int32_t* var_298_2
                    var_298_2.d = var_288
                    sub_142a48050(&var_268, 
                        sub_142ae08a0(arg1, &var_128, rax_4, var_280, var_298_2.b, var_290_1.d))
                    sub_142a47ff0(&var_128)
                    sub_142a47930(arg2, &var_268)
        else
            *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            arg2[1].w = 2
        
        sub_142a47ff0(&var_168)
        sub_142a47ff0(&var_268)
        sub_142a47ff0(&var_228)
    else
        *arg5 = rax_2
        *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        arg2[1].w = 2

__security_check_cookie(rax_1 ^ &var_2b8)
return arg2
