// 函数: sub_142b8ba00
// 地址: 0x142b8ba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
int32_t* rdi = arg2
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result =
    sub_142b8b6f0(sub_142af4880(arg1), rdi)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_3 = result
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_2 = result

if (*rdi s<= 0)
    result = j_sub_142a7dd00(0xc8)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_1 = result
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_4
    
    if (result == 0)
        result_4 = nullptr
    else
        result = sub_142a9d940(result, 0, 0)
        result_4 = result
    
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_5 = result_4
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_6 = result_5
    
    if (result_4 != 0)
        result = sub_142a9fa50(result_3)
        int32_t rbp_1 = 0
        int32_t r12_1 = 0
        
        if (result.d s> 0)
            int32_t rbx_1 = result.d
            
            do
                int32_t rax_1 = sub_142a9fa60(result_3, zx.q(r12_1))
                result = sub_142a9fa80(result_3, r12_1)
                int32_t rdi_1 = result.d
                
                if (result.d s<= rax_1)
                    do
                        result = sub_142af46b0(zx.q(rdi_1), zx.q(arg1))
                        int32_t rsi = result.d
                        
                        if (result.d != rbp_1)
                            result = sub_142a9e7d0(result_4, rdi_1)
                            rbp_1 = rsi
                        
                        rdi_1 += 1
                    while (rdi_1 s<= rax_1)
                    
                    result_3 = result_2
                
                r12_1 += 1
            while (r12_1 s< rbx_1)
            
            result_5 = result_4
            rdi = arg2
        
        if ((result_4[4].b & 1) == 0)
            sub_142a9eee0(result_4)
            result_5 = nullptr
            *(&data_144016f70 + sx.q(arg1 - 0xff1) * 0x10) = result_4
            result = sub_142a7db20(0xc, sub_142b8b4d0)
        else
            *rdi = 7
    else
        *rdi = 7
    
    if (result_5 != 0)
        sub_142a9dbc0(result_5)
        return sub_142a47920(result_5)

return result
