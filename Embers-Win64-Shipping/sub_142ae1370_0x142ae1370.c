// 函数: sub_142ae1370
// 地址: 0x142ae1370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_170 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t var_174 = 0

if (*arg5 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_120_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_e8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_e0_1 = 2
    int32_t r14_1 = 0
    
    if (arg3 == 0)
    label_142ae16ef:
        sub_142a47930(arg2, &var_128)
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_160_1 = 2
        sub_142a48050(&var_128, &var_168)
        sub_142a47ff0(&var_168)
        int64_t var_180 = 0
        struct icu_64::PatternMapIterator::VTable** rax_3 =
            sub_142ae1b10(arg1, *(arg1 + 0xf0), arg3, *(arg1 + 0xf8), arg5, &var_180)
        
        if (*arg5 s<= 0)
            sub_142a48100(&var_e8, rax_3)
            int64_t* var_1a0_1
            var_1a0_1.d = arg6
            int32_t* var_1a8_1
            var_1a8_1.d = arg4
            sub_142a48050(&var_128, 
                sub_142ae08a0(arg1, &var_168, &var_e8, var_180, var_1a8_1.b, var_1a0_1.d))
            sub_142a47ff0(&var_168)
            void* rcx_7 = *(arg1 + 0xf8)
            int32_t rdi_1 = *(rcx_7 + 8)
            
            if (rdi_1 == 0)
            label_142ae16ef_1:
                sub_142a47930(arg2, &var_128)
            else
                while (true)
                    if (r14_1 == rdi_1)
                        goto label_142ae16ef_1
                    
                    if ((rdi_1 & 0x6000) != 0x4000 || (arg3 & 0x6000) != 0x6000)
                        struct icu_64::PatternMapIterator::VTable** rax_15 =
                            sub_142ae1b10(arg1, *(arg1 + 0xf0), rdi_1, rcx_7, arg5, &var_180)
                        
                        if (*arg5 s> 0)
                            break
                        
                        sub_142a48100(&var_e8, rax_15)
                        var_1a0_1.d = arg6
                        var_1a8_1.d = arg4
                        sub_142a48050(&var_e8, 
                            sub_142ae08a0(arg1, &var_168, &var_e8, var_180, var_1a8_1.b, 
                                var_1a0_1.d))
                        sub_142a47ff0(&var_168)
                        int32_t i = not.d(*(*(arg1 + 0xf8) + 8)) & rdi_1
                        int64_t rdx_11
                        int32_t rdi_2
                        
                        if (i != 0)
                            int32_t rcx_17 = 0
                            int64_t rdx_12 = 0
                            
                            do
                                rcx_17 += 1
                                rdx_12 += 1
                                i s>>= 1
                            while (i != 0)
                            
                            rdi_2 = rcx_17 - 1
                            
                            if (rdi_2 s<= 0xf)
                                rdx_11 = rdx_12 - 1
                            else
                                rdi_2 = 0xf
                                rdx_11 = 0xf
                        else
                            rdi_2 = 0
                            rdx_11 = 0
                        
                        int64_t rdx_13 = rdx_11 << 6
                        int16_t rax_22 = *(rdx_13 + arg1 + 0x110)
                        int32_t rax_24
                        
                        if (rax_22 s< 0)
                            rax_24 = *(rdx_13 + arg1 + 0x114)
                        else
                            rax_24 = sx.d(rax_22) s>> 5
                        
                        if (rax_24 != 0)
                            var_168 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                            int16_t var_160_2 = 2
                            sub_142ae12a0(arg1, rdi_2, &var_168)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_68 =
                                &var_128
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_60_1 =
                                &var_e8
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_58_1 =
                                &var_168
                            void** var_a8 =
                                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                            int16_t var_a0_1 = 2
                            sub_142b62570(&var_a8, arg1 + 0x108 + (sx.q(rdi_2) << 6), 2, 3, arg5)
                            var_1a0_1.d = 0
                            sub_142b62d70(&var_a8, &var_68, 3, &var_128, nullptr, var_1a0_1.d, arg5)
                            j_sub_142a47ff0(&var_a8)
                            sub_142a47ff0(&var_168)
                        
                        r14_1 = *(*(arg1 + 0xf8) + 8)
                    else
                        var_1a0_1.d = arg6
                        var_1a8_1.d = arg4 | 1
                        sub_142a48050(&var_128, 
                            sub_142ae08a0(arg1, &var_168, &var_128, var_180, var_1a8_1.b, 
                                var_1a0_1.d))
                        sub_142a47ff0(&var_168)
                        void* rax_14 = *(arg1 + 0xf8)
                        *(rax_14 + 8) &= 0xffffbfff
                    
                    rcx_7 = *(arg1 + 0xf8)
                    rdi_1 = *(rcx_7 + 8)
                    
                    if (rdi_1 == 0)
                        goto label_142ae16ef_1
                
                *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                arg2[1].w = 2
        else
            *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            arg2[1].w = 2
    
    sub_142a47ff0(&var_e8)
    sub_142a47ff0(&var_128)
else
    *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    arg2[1].w = 2

__security_check_cookie(rax_1 ^ &var_1c8)
return arg2
