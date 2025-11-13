// 函数: sub_142b52ba0
// 地址: 0x142b52ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_218 = -2
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int16_t rax_2 = *(arg2 + 8)
int32_t rax_4

if (rax_2 s< 0)
    rax_4 = *(arg2 + 0xc)
else
    rax_4 = sx.d(rax_2) s>> 5

int64_t result

if (rax_4 s> 0x80)
    result = 0
else
    int32_t var_224 = 0
    int16_t var_148[0x88]
    
    if (sx.q(sub_142a49a60(arg2, &var_148, 0x81, &var_224)) * 2 u>= 0x102)
        __report_rangecheckfailure()
        noreturn
    
    var_148[sx.q(sub_142a49a60(arg2, &var_148, 0x81, &var_224))] = 0
    result = sub_142a86c30(*(arg1 + 0xf0), &var_148)
    
    if (result == 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_188 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_180_1 = 2
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1c8 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_1c0_1 = 2
        char var_228 = 0
        sub_142acfe40(arg2, &var_1c8, &var_228)
        
        if ((var_1c0_1 & 0xffe0) == 0)
        label_142b52d99:
            int64_t result_1
            
            if ((var_180_1 & 0xffe0) != 0)
                result_1 = sub_142b4eab0(arg1 + 0x188, &var_188, &var_224)
            else
                result_1 = 0
            
            if (var_224 s<= 0)
                void* rax_11 = j_sub_142a65150(arg2)
                int32_t* r9_5 = &var_224
                int64_t* rcx_16 = *(arg1 + 0xf0)
                
                if (result_1 != 0)
                    sub_142a86f50(rcx_16, rax_11, result_1, r9_5)
                    
                    if (var_224 s<= 0)
                        int32_t* rax_12 = sub_142a7dd00(0x10)
                        
                        if (rax_12 != 0)
                            *rax_12 = 1
                            *(rax_12 + 8) = rax_11
                            sub_142b50890(arg1 + 0x198, result_1, rax_12, &var_224)
                    else
                        result_1 = 0
                else
                    sub_142a86f50(rcx_16, rax_11, &data_14366fabc, r9_5)
            
            sub_142a47ff0(&var_1c8)
            sub_142a47ff0(&var_188)
            result = result_1
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_208
            
            if (var_228 == 0)
                var_208 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_200_2 = 2
                int64_t* rcx_9 = *(arg1 + 0xe8)
                (*(*rcx_9 + 0x50))(rcx_9, arg2, &var_208)
                sub_142b62c00(arg1 + 0x100, &var_208, &var_188, &var_224)
            else
                int32_t r8_3
                int32_t var_1bc
                
                if (var_1c0_1 s< 0)
                    r8_3 = var_1bc
                else
                    r8_3 = sx.d(var_1c0_1) s>> 5
                int32_t var_230_1 = 0
                char var_220[0x8]
                int64_t rcx_6 = sx.q(sub_142a49990(&var_1c8, 0, r8_3, &var_220, 4))
                
                if (rcx_6 u>= 4)
                    __report_rangecheckfailure()
                    noreturn
                
                var_220[rcx_6] = 0
                var_208 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_200_1 = 2
                int64_t* rcx_7 = *(arg1 + 0x180)
                (*(*rcx_7 + 0x50))(rcx_7, &var_220, &var_208)
                sub_142b62c00(arg1 + 0x100, &var_208, &var_188, &var_224)
            
            sub_142a47ff0(&var_208)
            
            if (var_224 s<= 0)
                goto label_142b52d99
            
            sub_142a47ff0(&var_1c8)
            sub_142a47ff0(&var_188)
            result = 0
    else if (result == &data_14366fabc)
        result = 0

__security_check_cookie(rax_1 ^ &var_258)
return result
