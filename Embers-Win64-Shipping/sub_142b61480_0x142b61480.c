// 函数: sub_142b61480
// 地址: 0x142b61480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_10 = -2
struct icu_64::UObject::icu_64::Format::VTable** rax = j_sub_142a7dd00(0x2f8)
struct icu_64::UObject::icu_64::Format::VTable** var_18 = rax
struct icu_64::NumberFormat::icu_64::RuleBasedNumberFormat::VTable** result

if (rax == 0)
    result = nullptr
else
    result = sub_142aadaf0(rax, arg1, arg2, arg4)

if (result == 0)
    *arg4 = 7
else if (*arg4 s<= 0)
    int16_t rax_2 = *(arg3 + 8)
    int32_t rax_4
    
    if (rax_2 s< 0)
        rax_4 = *(arg3 + 0xc)
    else
        rax_4 = sx.d(rax_2) s>> 5
    
    if (rax_4 s> 0)
        var_18.d = 0
        (*result)->vFunc_46(result, arg3, &var_18)

return result
