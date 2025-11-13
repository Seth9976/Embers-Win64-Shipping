// 函数: sub_142b49fc0
// 地址: 0x142b49fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t result = sub_142b49cc0(*(arg1 + 8), arg2 + 0x50)

if (result.b != 0)
    result = sub_142b49cc0(*(arg1 + 0x10), arg2 + 0x90)
    
    if (result.b != 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
        
        if ((*(arg2 + 0x58) & 1) != 0)
            var_78 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_70_1 = 2
            sub_142a48050(arg2 + 0x50, &var_78)
            sub_142a47ff0(&var_78)
        
        if ((*(arg2 + 0x98) & 1) != 0)
            var_78 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_70_2 = 2
            sub_142a48050(arg2 + 0x90, &var_78)
            sub_142a47ff0(&var_78)
        
        result = *(arg1 + 0x18)
        *(arg2 + 0x4c) |= result
        int64_t* rcx_6 = *(arg1 + 8)
        
        if (rcx_6 != 0)
            result = (*(*rcx_6 + 0x20))(rcx_6, arg2)
        
        int64_t* rcx_7 = *(arg1 + 0x10)
        
        if (rcx_7 != 0)
            result = (*(*rcx_7 + 0x20))(rcx_7, arg2)

__security_check_cookie(rax_1 ^ &var_98)
return result
