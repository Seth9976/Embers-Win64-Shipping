// 函数: sub_142ae01b0
// 地址: 0x142ae01b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
void var_e8
int64_t result = __security_cookie ^ &var_e8
int64_t result_1 = result

if (*arg2 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_a0_1 = 2
    int32_t i = 0
    wchar16 const* const rdi_1 = u"GyQMwWEDFdaHmsSv"
    
    do
        wchar16 const rdx = *rdi_1
        
        if (rdx != 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 =
                sub_142a47fc0(&var_68, rdx)
            int32_t rcx_1 = *(arg1 + 0x11f8)
            
            if (rcx_1 s<= 0)
                sub_142ae04a0(arg1, rax_1, nullptr, 0, &var_a8, arg2)
            else
                *arg2 = rcx_1
            
            sub_142a47ff0(&var_68)
        
        if (*arg2 s> 0)
            break
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< 0x10)
    
    result = sub_142a47ff0(&var_a8)

__security_check_cookie(result_1 ^ &var_e8)
return result
