// 函数: sub_142b19a70
// 地址: 0x142b19a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int32_t rax = sub_142b73ee0(*arg1, arg3)

if ((rax & 0x3fffff) == 0 && arg2 != 0)
    return sub_142b73fe0(*arg1, arg3, rax | arg2, arg4)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_2

if (test_bit(rax, 0x15))
    result_2 = sub_142ae72d0(&arg1[2], rax & 0x1fffff)
else
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result = j_sub_142a7dd00(0xc8)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_1 = result
    
    if (result == 0)
        result_2 = nullptr
    else
        result = sub_142a9db60(result)
        result_2 = result
    
    if (result_2 == 0)
        *arg4 = 7
        return result
    
    sub_142b73fe0(*arg1, arg3, (rax & 0xffe00000) | arg1[3].d | 0x200000, arg4)
    sub_142ae7110(&arg1[2], result_2, arg4)
    int32_t r12_2 = rax & 0x1fffff
    
    if (r12_2 != 0)
        sub_142a9e7d0(result_2, r12_2)

return sub_142a9e7d0(result_2, arg2)
