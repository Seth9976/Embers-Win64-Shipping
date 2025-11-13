// 函数: sub_142a64ce0
// 地址: 0x142a64ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result

if (*arg2 s<= 0)
    struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result_1 = nullptr
    char* var_f8
    sub_142a5f830(&var_f8)
    char** rax_2 = sub_142a66480(arg1, &var_f8, arg2)
    
    if (*arg2 s<= 0)
        struct icu_64::UObject::icu_64::TimeZone::VTable** rax_3 = j_sub_142a7dd00(0xe0)
        struct icu_64::UObject::icu_64::TimeZone::VTable** var_100_1 = rax_3
        
        if (rax_3 == 0)
            result_1 = nullptr
        else
            result_1 = sub_142accc40(rax_3, rax_2, &var_f8, arg1, arg2)
        
        if (result_1 == 0)
            *arg2 = 7
    
    sub_142a5f860(rax_2)
    
    if (*arg2 s> 0)
        if (result_1 != 0)
            (*result_1)->__offset(0x0).q(result_1, 1)
        
        result_1 = nullptr
    
    sub_142a5f860(&var_f8)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_138)
return result
