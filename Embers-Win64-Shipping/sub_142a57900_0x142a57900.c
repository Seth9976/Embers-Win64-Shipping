// 函数: sub_142a57900
// 地址: 0x142a57900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t* rsi = arg2
int64_t* rax = sub_142a9d4f0(arg1, arg2)

if (*rsi s<= 0)
    struct icu_64::UObject::icu_64::Collator::VTable** rax_1 = j_sub_142a7dd00(0x110)
    struct icu_64::UObject::icu_64::Collator::VTable** arg_10 = rax_1
    struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** result
    
    if (rax_1 == 0)
        result = nullptr
    else
        result = sub_142aa1270(rax_1, rax)
    
    if (result != 0)
        sub_142aa6d70(rax)
        return result
    
    *rsi = 7

if (rax != 0)
    sub_142aa6d70(rax)

return nullptr
