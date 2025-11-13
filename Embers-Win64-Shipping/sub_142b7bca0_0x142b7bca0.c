// 函数: sub_142b7bca0
// 地址: 0x142b7bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_168 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_d0 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_150 = 2
int32_t r13 = sub_142b7c070(arg1, sub_142b7c9e0(arg1, arg3), &var_158, arg4)

if (*arg4 s<= 0)
    int16_t rcx_2 = var_150
    char const* const rax_4
    
    if ((rcx_2 & 0xffe0) != 0)
        int32_t rsi_1 = 0
    label_142b7bd40:
        int32_t rbx_1 = -1
        
        while (true)
            int32_t rax_6
            int32_t var_14c
            
            if (rcx_2 s< 0)
                rax_6 = var_14c
            else
                rax_6 = sx.d(rcx_2) s>> 5
            
            if (rsi_1 s>= rax_6)
                void* rax_13 = arg1[2]
                int16_t rcx_8 = *(rax_13 + 8)
                int32_t rcx_10
                
                if (rcx_8 s< 0)
                    rcx_10 = *(rax_13 + 0xc)
                else
                    rcx_10 = sx.d(rcx_8) s>> 5
                
                if (r13 s< rcx_10)
                    int16_t rdx_7 = *(rax_13 + 8)
                    int32_t rcx_12
                    
                    if (rdx_7 s< 0)
                        rcx_12 = *(rax_13 + 0xc)
                    else
                        rcx_12 = sx.d(rdx_7) s>> 5
                    
                    if (r13 u< rcx_12)
                        void* rcx_13 = rax_13 + 0xa
                        
                        if ((rdx_7.b & 2) == 0)
                            rcx_13 = *(rax_13 + 0x18)
                        
                        if (*(rcx_13 + (sx.q(r13) << 1)) == 0x2d)
                            if (rbx_1 s< 0)
                                if (*arg4 s> 0)
                                    goto label_142b7c033
                                
                                rax_4 = "range without start in starred-relation string"
                                goto label_142b7bfe6
                            
                            r13 = sub_142b7c070(arg1, r13 + 1, &var_158, arg4)
                            
                            if (*arg4 s> 0)
                                goto label_142b7c033
                            
                            if ((var_150 & 0xffe0) == 0)
                                if (*arg4 s> 0)
                                    goto label_142b7c033
                                
                                rax_4 = "range without end in starred-relation string"
                                goto label_142b7bfe6
                            
                            int32_t rax_16 = sub_142a486d0(&var_158, 0)
                            
                            if (rax_16 s< rbx_1)
                                if (*arg4 s> 0)
                                    goto label_142b7c033
                                
                                rax_4 = "range start greater than end in starred-relation string"
                                goto label_142b7bfe6
                            
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
                                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                            int16_t var_110_1 = 2
                            int32_t rbx_2 = rbx_1 + 1
                            
                            if (rbx_2 s> rax_16)
                            label_142b7bf5c:
                                int32_t rsi_2
                                rsi_2.b = rax_16 u> 0xffff
                                rsi_1 = rsi_2 + 1
                                sub_142a47ff0(&var_118)
                                rcx_2 = var_150
                                goto label_142b7bd40
                            
                            while (true)
                                int64_t* rcx_16 = *arg1
                                char const* const rax_24
                                
                                if ((*(*rcx_16 + 0x80))(rcx_16, zx.q(rbx_2)) == 0)
                                    if (*arg4 s<= 0)
                                        rax_24 =
                                            "starred-relation string range is not all NFD-inert"
                                    label_142b7bfb3:
                                        *arg4 = 3
                                        arg1[6] = rax_24
                                        
                                        if (arg1[5] != 0)
                                            sub_142b7c7c0(arg1)
                                else if ((rbx_2 & 0xfffff800) == 0xd800)
                                    if (*arg4 s<= 0)
                                        rax_24 =
                                            "starred-relation string range contains a surrogate"
                                        goto label_142b7bfb3
                                else if (rbx_2 - 0xfffd u> 2)
                                    sub_142a4afe0(&var_118)
                                    int32_t r8_4
                                    int32_t var_10c
                                    
                                    if (var_110_1 s< 0)
                                        r8_4 = var_10c
                                    else
                                        r8_4 = sx.d(var_110_1) s>> 5
                                    sub_142a4a6b0(&var_118, 0, r8_4, rbx_2)
                                    int64_t* rcx_19 = arg1[7]
                                    (*(*rcx_19 + 0x18))(rcx_19, zx.q(arg2), &var_d8, &var_118, 
                                        &var_d8, &arg1[6], arg4)
                                    
                                    if (*arg4 s<= 0)
                                        rbx_2 += 1
                                        
                                        if (rbx_2 s> rax_16)
                                            goto label_142b7bf5c
                                        
                                        continue
                                    
                                    sub_142b7c7c0(arg1)
                                else if (*arg4 s<= 0)
                                    rax_24 = "starred-relation string range contains U+FFFD, U+FFFE or U+FFFF"
                                    goto label_142b7bfb3
                                sub_142a47ff0(&var_118)
                                break
                            
                            goto label_142b7c033
                
                arg1[9].d = sub_142b7c9e0(arg1, r13)
                goto label_142b7c033
            
            rbx_1 = sub_142a486d0(&var_158, rsi_1)
            int64_t* rcx_4 = *arg1
            
            if ((*(*rcx_4 + 0x80))(rcx_4, zx.q(rbx_1)) == 0)
                if (*arg4 s> 0)
                    goto label_142b7c033
                
                rax_4 = "starred-relation string is not all NFD-inert"
                break
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10 =
                sub_142a47b70(&var_98, rbx_1)
            int64_t* rcx_6 = arg1[7]
            (*(*rcx_6 + 0x18))(rcx_6, zx.q(arg2), &var_d8, rax_10, &var_d8, &arg1[6], arg4)
            sub_142a47ff0(&var_98)
            
            if (*arg4 s> 0)
                goto label_142b7bffb
            
            int32_t rax_11
            rax_11.b = rbx_1 u> 0xffff
            rsi_1 += rax_11 + 1
            rcx_2 = var_150
    else
        rax_4 = "missing starred-relation string"
    
label_142b7bfe6:
    *arg4 = 3
    arg1[6] = rax_4
    
    if (arg1[5] != 0)
    label_142b7bffb:
        sub_142b7c7c0(arg1)

label_142b7c033:
sub_142a47ff0(&var_158)
sub_142a47ff0(&var_d8)
__security_check_cookie(rax_1 ^ &var_1a8)
return &icu_64::UObject::`vftable'
