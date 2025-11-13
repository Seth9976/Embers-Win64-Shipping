// 函数: sub_142a74210
// 地址: 0x142a74210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t* rdi = arg3

if (*arg3 s<= 0)
    int32_t rax_1 = *(arg1 + 0x78)
    
    if (rax_1 s<= 0)
        struct icu_64::UObject::icu_64::RegexMatcher::VTable** rax_2 = j_sub_142a7dd00(0x148)
        struct icu_64::UObject::icu_64::RegexMatcher::VTable** arg_18 = rax_2
        struct icu_64::UObject::icu_64::RegexMatcher::VTable** result
        
        if (rax_2 == 0)
            result = nullptr
        else
            result = sub_142a746b0(rax_2, arg1, arg4)
        
        if (result == 0)
            *rdi = 7
            return nullptr
        
        *(result + 0x13c) = *rdi
        sub_142a7c730(result, arg2)
        return result
    
    *arg3 = rax_1

return nullptr
