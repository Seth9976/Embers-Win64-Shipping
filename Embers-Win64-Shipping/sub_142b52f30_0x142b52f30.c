// 函数: sub_142b52f30
// 地址: 0x142b52f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_160 = -2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* var_178 = j_sub_142a65150(arg2)
int64_t rax_3 = sub_142acf590(arg3)
int64_t result = sub_142a86c30(*(arg1 + 0xf8), &var_178)

if (result == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_150_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_d0_1 = 2
    sub_142acfe40(arg2, &var_d8, nullptr)
    int32_t r14_1 = 4
    
    if ((var_d0_1 & 0xffe0) == 0)
        int64_t* rcx_10 = *(arg1 + 0xe8)
        (*(*rcx_10 + 0x50))(rcx_10, arg2, &var_158)
        
        if ((var_150_1 & 0xffe0) == 0)
            sub_142a48aa0(&var_158, arg2, 0)
    else
        int32_t r8_1
        int32_t var_cc
        
        if (var_d0_1 s< 0)
            r8_1 = var_cc
        else
            r8_1 = sx.d(var_d0_1) s>> 5
        int32_t var_190_1 = 0
        char var_180[0x8]
        int64_t rcx_5 = sx.q(sub_142a49990(&var_d8, 0, r8_1, &var_180, 4))
        
        if (rcx_5 u>= 4)
            __report_rangecheckfailure()
            noreturn
        
        var_180[rcx_5] = 0
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_110_1 = 2
        int64_t* rcx_6 = *(arg1 + 0xe8)
        (*(*rcx_6 + 0x38))(rcx_6, arg3, &var_180, &var_118)
        int64_t* rcx_8
        char (* rdx_4)[0x8]
        bool cond:0_1
        
        if ((arg2[1][0] & 1) == 0)
            int16_t rax_8 = arg2[1][0].w
            int32_t r8_4
            
            if (rax_8 s< 0)
                r8_4 = *(arg2 + 0xc)
            else
                r8_4 = sx.d(rax_8) s>> 5
            
            int32_t rax_11
            int32_t var_10c
            
            if (var_110_1 s< 0)
                rax_11 = var_10c
            else
                rax_11 = sx.d(var_110_1) s>> 5
            
            if ((var_110_1.b & 1) == 0 && r8_4 == rax_11)
                cond:0_1 = sub_142a490e0(arg2, &var_118, r8_4) == 0
                goto label_142b530a9
            
            rcx_8 = *(arg1 + 0xe8)
            rdx_4 = arg2
        else
            cond:0_1 = (var_110_1.b & 1) == 0
        label_142b530a9:
            
            if (cond:0_1)
                rcx_8 = *(arg1 + 0xe8)
                rdx_4 = arg2
            else
                rcx_8 = *(arg1 + 0x180)
                rdx_4 = &var_180
        (*(*rcx_8 + 0x50))(rcx_8, rdx_4, &var_158)
        sub_142a47ff0(&var_118)
    
    int32_t var_188 = 0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_90_1 = 2
    sub_142b62a90(arg1 + 0x140, &var_158, arg5, &var_98, &var_188)
    
    if (var_188 s<= 0)
        int64_t result_1 = sub_142b4eab0(arg1 + 0x188, &var_98, &var_188)
        
        if (var_188 s<= 0)
            void** rax_15 = sub_142a7dd00(0x18)
            
            if (rax_15 != 0)
                *rax_15 = var_178
                rax_15[1] = rax_3
                rax_15[2].b = arg4
                sub_142a86f50(*(arg1 + 0xf8), rax_15, result_1, &var_188)
                
                if (var_188 s<= 0)
                    int32_t* rax_16 = sub_142a7dd00(0x10)
                    
                    if (rax_16 != 0)
                        if (arg4 != 0)
                            r14_1 = 2
                        
                        *rax_16 = r14_1
                        *(rax_16 + 8) = var_178
                        sub_142b50890(arg1 + 0x198, result_1, rax_16, &var_188)
                else
                    sub_142a7dcd0(rax_15)
        
        sub_142a47ff0(&var_98)
        sub_142a47ff0(&var_d8)
        sub_142a47ff0(&var_158)
        result = result_1
    else
        sub_142a47ff0(&var_98)
        sub_142a47ff0(&var_d8)
        sub_142a47ff0(&var_158)
        result = 0

__security_check_cookie(rax_1 ^ &var_1b8)
return result
