// 函数: sub_142abe450
// 地址: 0x142abe450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_200 = -2
void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t result = sub_142b467c0(arg2)

if (result != 0 && arg4 != 0)
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_118
    sub_142ab2b60(&var_118, arg3)
    int32_t rax_3 = *(arg3 + 0x48)
    int32_t rax_4 = *(arg3 + 0x4c)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
    sub_142a479b0(&var_c8, arg3 + 0x50)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
    sub_142a479b0(&var_88, arg3 + 0x90)
    int64_t rax_5 = *(arg3 + 0xd0)
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_1f8
    sub_142ab9780(&var_1f8)
    int32_t rax_6 = sub_1408e52c0(arg2)
    int32_t i_1 = 0
    void* rax_7 = arg1
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1a8
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168
    
    if (*(rax_7 + 0xc) s> 0)
        int64_t* rdx_3 = nullptr
        int64_t* var_210_1 = nullptr
        int32_t i
        
        do
            int64_t* rcx_7 = *(rdx_3 + *(rax_7 + 0x10))
            
            if ((*(*rcx_7 + 0x18))(rcx_7, arg2) != 0)
                int32_t rsi_1 = 0
                
                if (sub_142b467c0(arg2) s> 0)
                    int32_t rax_29
                    
                    do
                        int32_t rcx_10
                        rcx_10.b = sub_142b46580(arg2, rsi_1) u> 0xffff
                        rsi_1 += rcx_10 + 1
                        sub_142ab2ce0(&var_1f8, &var_118)
                        sub_142a48100(&var_1a8, &var_c8)
                        sub_142a48100(&var_168, &var_88)
                        sub_142b467f0(arg2, rsi_1)
                        int32_t* var_248
                        char rax_16 = (*(*rcx_7 + 0x10))(rcx_7, arg2, &var_1f8, arg5, var_248)
                        sub_142b467d0(arg2)
                        
                        if (*arg5 s> 0)
                            goto label_142abe715
                        
                        if (sub_1408e52c0(arg2) - rax_6 == rsi_1)
                            var_248 = arg5
                            sub_142abe450(arg1, arg2, &var_1f8, zx.q(arg4 + 1), var_248)
                            
                            if (*arg5 s> 0)
                                goto label_142abe715
                            
                            if (sub_142ab9800(&var_1f8, arg3) != 0)
                                sub_142ab2ce0(arg3, &var_1f8)
                                *(arg3 + 0x48) = rax_3
                                *(arg3 + 0x4c) = rax_4
                                sub_142a48100(arg3 + 0x50, &var_1a8)
                                sub_142a48100(arg3 + 0x90, &var_168)
                                *(arg3 + 0xd0) = rax_5.w
                                *(arg3 + 0xd2) = rax_5:2.w
                                *(arg3 + 0xd4) = rax_5:4.w
                                *(arg3 + 0xd6) = rax_5:6.w
                        
                        sub_14266cbe0(arg2, rax_6)
                        
                        if (rax_16 == 0)
                            break
                        
                        rax_29 = sub_142b467c0(arg2)
                    while (rsi_1 s< rax_29)
            
            i = i_1 + 1
            i_1 = i
            rdx_3 = &var_210_1[1]
            var_210_1 = rdx_3
            rax_7 = arg1
        while (i s< *(rax_7 + 0xc))
    
label_142abe715:
    sub_142a47ff0(&var_168)
    sub_142a47ff0(&var_1a8)
    sub_142ab2c10(&var_1f8)
    sub_142a47ff0(&var_88)
    sub_142a47ff0(&var_c8)
    result = sub_142ab2c10(&var_118)

__security_check_cookie(rax_1 ^ &var_268)
return result
