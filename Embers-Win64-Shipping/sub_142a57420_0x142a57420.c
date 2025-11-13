// 函数: sub_142a57420
// 地址: 0x142a57420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** result

if (*arg2 s> 0)
    result = nullptr
else if (*(arg1 + 0xd8) == 0)
    int64_t rax_3
    
    if (data_1440155f0 != 0)
        rax_3 = sub_142a57620()
    
    struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** result_1
    
    if (data_1440155f0 == 0 || rax_3 == 0)
        result_1 = sub_142a57900(arg1, arg2)
    else
        struct icu_64::UObject::icu_64::Locale::VTable* var_f8
        sub_142a459c0(&var_f8)
        result_1 = sub_142a9b5a0(data_1440155e8, arg1, &var_f8, arg2)
        sub_142a45a20(&var_f8)
    
    if (*arg2 s> 0)
        result = nullptr
    else
        sub_142a57990(arg1, result_1, arg2)
        
        if (*arg2 s<= 0)
            result = result_1
        else if (result_1 == 0)
            result = nullptr
        else
            (*result_1)->__offset(0x0).q(result_1, 1)
            result = nullptr
else
    *arg2 = 1
    result = nullptr

__security_check_cookie(rax_1 ^ &var_128)
return result
