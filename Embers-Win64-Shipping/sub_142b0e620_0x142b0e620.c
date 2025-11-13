// 函数: sub_142b0e620
// 地址: 0x142b0e620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_1
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result

if (*(arg1 + 8) == 0)
    result = j_sub_142a7dd00(0xc8)
    result_1 = result
    
    if (result != 0)
        result = sub_142a9db60(result)
    
    *(arg1 + 8) = result

if (*(arg1 + 8) != 0 || result != 0)
    result = sub_142a9f280(*(arg1 + 8), zx.q(arg2))
    
    if (result.b == 0)
        result_1.d = 0
        int32_t rax_1 = sub_142af46b0(zx.q(arg2), 0x100a)
        return sub_142b66390(*(arg1 + 8), 0x100a, rax_1, &result_1)

return result
