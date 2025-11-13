// 函数: sub_142a57330
// 地址: 0x142a57330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** result

if ((*(*arg1 + 0x28))(arg1, arg5, arg4) == 0)
    result = nullptr
else
    struct icu_64::UObject::icu_64::Locale::VTable* var_108
    sub_142a459c0(&var_108)
    (*(*arg2 + 0x50))(arg2, &var_108)
    int64_t* rax_5 = sub_142a9d4f0(&var_108, arg4)
    
    if (*arg4 s> 0)
        goto label_142a573d9
    
    struct icu_64::UObject::icu_64::Collator::VTable** rax_6 = j_sub_142a7dd00(0x110)
    struct icu_64::UObject::icu_64::Collator::VTable** var_110_1 = rax_6
    struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** result_1
    
    if (rax_6 == 0)
        result_1 = nullptr
    else
        result_1 = sub_142aa1270(rax_6, rax_5)
    
    if (result_1 == 0)
        *arg4 = 7
    label_142a573d9:
        
        if (rax_5 != 0)
            sub_142aa6d70(rax_5)
        
        result_1 = nullptr
    else
        sub_142aa6d70(rax_5)
    
    sub_142a45a20(&var_108)
    result = result_1

__security_check_cookie(rax_1 ^ &var_138)
return result
