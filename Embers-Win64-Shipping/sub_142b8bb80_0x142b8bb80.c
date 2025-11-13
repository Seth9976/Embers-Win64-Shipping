// 函数: sub_142b8bb80
// 地址: 0x142b8bb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2

if (*arg2 s> 0)
    return nullptr

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_1 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_10 = rax_1
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result = nullptr
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_1

if (rax_1 == 0)
    result_1 = nullptr
else
    result_1 = sub_142a9db60(rax_1)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_2 = result_1
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_3 = result_2

if (result_1 != 0)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_3 = sub_142b8b620(arg1, arg2)
    
    if (*arg2 s<= 0)
        int32_t rax_4 = sub_142a9fa50(rax_3)
        int32_t rdi_1 = -1
        int32_t r14_1 = 0
        
        if (rax_4 s> 0)
            do
                int32_t rax_5 = sub_142a9fa60(rax_3, zx.q(r14_1))
                int32_t rax_6 = sub_142a9fa80(rax_3, r14_1)
                int32_t rbx_1 = rax_6
                
                if (rax_6 s<= rax_5)
                    do
                        if (sub_142af4740(zx.q(rbx_1), zx.q(arg1)) == 0)
                            if (rdi_1 s>= 0)
                                sub_142a9e9d0(result_1, rdi_1, rbx_1 - 1)
                                rdi_1 = -1
                        else if (rdi_1 s< 0)
                            rdi_1 = rbx_1
                        
                        rbx_1 += 1
                    while (rbx_1 s<= rax_5)
                
                r14_1 += 1
            while (r14_1 s< rax_4)
            
            if (rdi_1 s>= 0)
                sub_142a9e9d0(result_1, rdi_1, 0x10ffff)
        
        sub_142a9f940(result_1)
        result_2 = nullptr
        result = result_1
else
    *arg2 = 7

if (result_2 != 0)
    sub_142a9dbc0(result_2)
    sub_142a47920(result_2)

return result
