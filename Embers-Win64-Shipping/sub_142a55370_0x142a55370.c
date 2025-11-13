// 函数: sub_142a55370
// 地址: 0x142a55370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
struct icu_64::BreakIterator::icu_64::RuleBasedBreakIterator::VTable** result

if (*arg3 s<= 0)
    int64_t rax_3
    
    if (data_1440155c8 != 0)
        rax_3 = sub_142a55530()
    
    if (data_1440155c8 == 0 || rax_3 == 0)
        result = sub_142a55690(arg1, arg2, arg3)
    else
        struct icu_64::UObject::icu_64::Locale::VTable* var_108
        sub_142a45710(&var_108, &data_1434cce10, nullptr, nullptr, nullptr)
        struct icu_64::BreakIterator::icu_64::RuleBasedBreakIterator::VTable** result_1 =
            sub_142a9b460(data_1440155d0, arg1, arg2, &var_108, arg3)
        char* var_e0
        
        if (*arg3 s<= 0 && result_1 != 0 && *var_e0 != 0)
            void* var_128 = result_1 + 0xa5
            void* var_120_1 = &result_1[1]
            sub_142a9ba50(&var_128, var_e0, var_e0)
        
        sub_142a45a20(&var_108)
        result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_158)
return result
