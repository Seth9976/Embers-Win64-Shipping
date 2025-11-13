// 函数: sub_142b77810
// 地址: 0x142b77810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_168 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t rdi = arg6
int32_t var_18c = rdi
int64_t** result

if (*arg7 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158
    sub_142a47b70(&var_158, arg3)
    int32_t var_190_1
    int16_t var_150
    int32_t var_14c
    
    if (var_150 s< 0)
        var_190_1 = var_14c
    else
        var_190_1 = sx.d(var_150) s>> 5
        rdi = var_18c
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_110_1 = 2
    int64_t* rcx_1 = *(arg1 + 0xb8)
    (*(*rcx_1 + 0x10))(rcx_1, &var_158, &var_118, arg7)
    int64_t** result_1 = nullptr
    
    if (*arg7 s> 0)
        goto label_142b77bad
    
    char rax_5 = var_110_1.b
    
    if ((rax_5 & 1) == 0)
        int16_t* r15_1
        
        if ((rax_5 & 0x11) == 0)
            void var_10e
            r15_1 = &var_10e
            int16_t* var_100
            
            if ((rax_5 & 2) == 0)
                r15_1 = var_100
        else
            r15_1 = nullptr
        
        int32_t rcx_3
        int32_t var_10c
        
        if (var_110_1 s< 0)
            rcx_3 = var_10c
        else
            rcx_3 = sx.d(var_110_1) s>> 5
        uint32_t rbx_1 = zx.d(*r15_1)
        int32_t r8_1 = 1
        
        if ((rbx_1 & 0xfffffc00) == 0xd800 && rcx_3 != 1)
            uint32_t rdx_2 = zx.d(r15_1[1])
            
            if ((rdx_2 & 0xfffffc00) == 0xdc00)
                r8_1 = 2
                rbx_1 = ((rbx_1 - 0xd7f7) << 0xa) + rdx_2
        
        int32_t r12_1 = rdi
        int64_t rax_11 = sx.q(rdi)
        int64_t rsi_1 = rax_11
        int64_t r13_1 = sx.q(arg5)
        
        if (rax_11 s>= r13_1)
            goto label_142b77bad
        
        int64_t rcx_4 = sx.q(rcx_3)
        int64_t var_198_1 = rcx_4
        uint64_t rdi_3 = zx.q(r8_1)
        int64_t r8_2 = arg4
        
        while (true)
            uint32_t rdx_5 = zx.d(*(r8_2 + (rsi_1 << 1)))
            r12_1 += 1
            rsi_1 += 1
            
            if ((rdx_5 & 0xfffffc00) == 0xd800 && rsi_1 != r13_1)
                uint32_t rcx_5 = zx.d(*(r8_2 + (rsi_1 << 1)))
                
                if ((rcx_5 & 0xfffffc00) == 0xdc00)
                    r12_1 += 1
                    rsi_1 += 1
                    rdx_5 = ((rdx_5 - 0xd7f7) << 0xa) + rcx_5
                
                rcx_4 = var_198_1
            
            if (rdx_5 != rbx_1)
                sub_142a48580(&var_158, rdx_5)
                r8_2 = arg4
                rcx_4 = var_198_1
            else
                if (rdi_3 == rcx_4)
                    break
                
                rbx_1 = zx.d(r15_1[rdi_3])
                rdi_3 += 1
                
                if ((rbx_1 & 0xfffffc00) == 0xd800 && rdi_3 != rcx_4)
                    uint32_t rcx_6 = zx.d(r15_1[rdi_3])
                    
                    if ((rcx_6 & 0xfffffc00) == 0xdc00)
                        rdi_3 += 1
                        rbx_1 = ((rbx_1 - 0xd7f7) << 0xa) + rcx_6
                    
                    rcx_4 = var_198_1
            
            if (rsi_1 s>= r13_1)
                goto label_142b77bad
        
        sub_142a48d70(&var_158, r8_2 + (sx.q(r12_1) << 1), 0, arg5 - r12_1)
        int32_t rax_23
        
        if (var_150 s< 0)
            rax_23 = var_14c
        else
            rax_23 = sx.d(var_150) s>> 5
        
        int64_t rdi_4 = sx.q(var_190_1)
        
        if (rdi_4.d != rax_23)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_d0_1 = 2
            int64_t* rcx_11 = *(arg1 + 0xb8)
            (*(*rcx_11 + 0x10))(rcx_11, &var_158, &var_d8, arg7)
            
            if (*arg7 s<= 0)
                int64_t rcx_12 = sx.q(var_18c)
                int32_t r8_6
                int32_t var_cc
                
                if (var_d0_1 s< 0)
                    r8_6 = var_cc
                else
                    r8_6 = sx.d(var_d0_1) s>> 5
                
                if (sub_142a48fb0(&var_d8, 0, r8_6, arg4 + (rcx_12 << 1), 0, arg5 - rcx_12.d) == 0)
                    int32_t r9_8
                    
                    if (var_150 s< 0)
                        r9_8 = var_14c
                    else
                        r9_8 = sx.d(var_150) s>> 5
                    
                    if ((var_150.b & 0x11) == 0)
                        void var_14e
                        result_1 = &var_14e
                        int64_t** result_2
                        
                        if ((var_150.b & 2) == 0)
                            result_1 = result_2
                    
                    int32_t var_1a8_1
                    var_1a8_1.q = arg7
                    result_1 = sub_142b77c00(arg1, arg2, result_1 + (rdi_4 << 1), r9_8 - rdi_4.d, 
                        var_1a8_1)
            
            sub_142a47ff0(&var_d8)
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_24 =
                j_sub_142a7dd00(0x40)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_188_1 = rax_24
            
            if (rax_24 == 0)
                rax_24 = nullptr
            else
                *rax_24 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                rax_24[1].w = 2
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_90_1 = 2
            sub_142a5a080(arg2, &var_98, rax_24, arg7)
            sub_142a47ff0(&var_98)
            result_1 = arg2
    else
        *arg7 = 7
    label_142b77bad:
        result_1 = nullptr
    
    sub_142a47ff0(&var_118)
    sub_142a47ff0(&var_158)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_1c8)
return result
