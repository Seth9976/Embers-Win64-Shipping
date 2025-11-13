// 函数: sub_142a57710
// 地址: 0x142a57710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = -2
void var_148
int64_t rax_1 = __security_cookie ^ &var_148

if (arg3 != 0)
    if ((*(arg3 + 8) & 1) == 0)
        int16_t rax_2 = *(arg3 + 8)
        int32_t rcx_2
        
        if (rax_2 s< 0)
            rcx_2 = *(arg3 + 0xc)
        else
            rcx_2 = sx.d(rax_2) s>> 5
        
        if (rcx_2 != 0)
            *(arg3 + 8) = rax_2 & 0x1f
    else
        sub_142a4afe0(arg3)

struct icu_64::UObject::icu_64::Locale::VTable* var_108
sub_142a45710(&var_108, &data_1434cce10, nullptr, nullptr, nullptr)
(*(*arg2 + 0x50))(arg2, &var_108)
int64_t* rax_4 = sub_142a9d4f0(&var_108, arg4)

if (*arg4 s> 0)
    goto label_142a577f7

struct icu_64::UObject::icu_64::Collator::VTable** rax_5 = j_sub_142a7dd00(0x110)
struct icu_64::UObject::icu_64::Collator::VTable** var_110_1 = rax_5
struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** result

if (rax_5 == 0)
    result = nullptr
else
    result = sub_142aa1270(rax_5, rax_4)

if (result == 0)
    *arg4 = 7
label_142a577f7:
    
    if (rax_4 != 0)
        sub_142aa6d70(rax_4)
    
    result = nullptr
else
    sub_142aa6d70(rax_4)

sub_142a45a20(&var_108)
__security_check_cookie(rax_1 ^ &var_148)
return result
