// 函数: sub_142b4faf0
// 地址: 0x142b4faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_98
void* result = __security_cookie ^ &var_98
void* result_1 = result

if (*arg3 s<= 0)
    int32_t var_78 = 0
    char** rax_1 = sub_142a641c0("icudt64l-zone", *(arg2 + 0x28), &var_78)
    arg1[0x1d] = rax_1
    arg1[0x1d] = sub_142a62230(rax_1, "zoneStrings", rax_1, &var_78)
    int32_t rax_3 = var_78
    
    if (rax_3 s<= 0)
        arg1[0x1f] = sub_142a86f30(sub_142a86d10, sub_142a86ba0, 0, arg3)
        arg1[0x1e] = sub_142a86f30(sub_142a86d10, sub_142a86ba0, 0, arg3)
        
        if (*arg3 s> 0)
            result = sub_142b4e060(arg1)
        else
            std::ios_base::width(arg1[0x1f], sub_142b51220)
            void* rcx_3 = arg1[0x1e]
            std::ios_base::width(rcx_3, sub_142b51220)
            int64_t* rax_6 = sub_142a64c40(rcx_3, sub_142b51220)
            result = sub_142acf980(rax_6)
            
            if (result != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
                sub_142b50320(arg1, Concurrency::agent::agent(&var_68, result), arg3)
                result = sub_142a47ff0(&var_68)
            
            if (rax_6 != 0)
                result = (**rax_6)(rax_6, 1)
    else
        *arg3 = rax_3
        result = sub_142b4e060(arg1)

__security_check_cookie(result_1 ^ &var_98)
return result
