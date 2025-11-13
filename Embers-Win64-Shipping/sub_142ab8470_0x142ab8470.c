// 函数: sub_142ab8470
// 地址: 0x142ab8470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t rcx = *arg1

if (rcx == 1 || rcx == 2)
    int64_t* rcx_2 = *(arg1 + 8)
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

*arg1 = 1
struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** result = j_sub_142a7dd00(0xb00)
struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** result_1 = result

if (result == 0)
    *(arg1 + 8) = 0
else
    result = sub_142aabc60(result, arg2)
    *(arg1 + 8) = result

return result
