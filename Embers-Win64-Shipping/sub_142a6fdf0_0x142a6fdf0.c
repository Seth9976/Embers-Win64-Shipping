// 函数: sub_142a6fdf0
// 地址: 0x142a6fdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (*arg2 s<= 0)
    int32_t rax_1 = *(arg1 + 0x10)
    
    if (rax_1 s<= 0)
        struct icu_64::UObject::icu_64::StringEnumeration::VTable** rax_2 = j_sub_142a7dd00(0xa8)
        struct icu_64::UObject::icu_64::StringEnumeration::VTable** arg_10 = rax_2
        struct icu_64::StringEnumeration::icu_64::PluralKeywordEnumeration::VTable** result
        
        if (rax_2 == 0)
            result = nullptr
        else
            result = sub_142a6e400(rax_2, *(arg1 + 8), arg2)
        
        if (result != 0)
            if (*arg2 s<= 0)
                return result
        else if (*arg2 s<= result.d)
            *arg2 = 7
        
        if (result != 0)
            (*result)->__offset(0x0).q(result, 1)
        
        return nullptr
    
    *arg2 = rax_1

return nullptr
