// 函数: sub_142a9f940
// 地址: 0x142a9f940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (*(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0 && (*(arg1 + 0x20) & 1) == 0)
    sub_142a9eee0(arg1)
    void* rax_1 = *(arg1 + 0x50)
    struct icu_64::BMPSet::VTable** rsi_1 = nullptr
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_8
    
    if (rax_1 == 0 || *(rax_1 + 8) == 0)
    label_142a9f9e6:
        
        if (*(arg1 + 0x58) == 0)
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_4 =
                j_sub_142a7dd00(0x368)
            arg_8 = rax_4
            
            if (rax_4 != 0)
                rsi_1 = sub_142b13ea0(rax_4, *(arg1 + 0x10), *(arg1 + 0x1c))
            
            *(arg1 + 0x28) = rsi_1
            
            if (rsi_1 == 0)
                sub_142aa0650(arg1)
    else
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_2 = j_sub_142a7dd00(0x180)
        arg_8 = rax_2
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rdi_1
        
        if (rax_2 == 0)
            rdi_1 = nullptr
        else
            rdi_1 = sub_142b15620(rax_2, arg1, *(arg1 + 0x50), 0x3f)
        
        *(arg1 + 0x58) = rdi_1
        
        if (rdi_1 != 0)
            if (*(rdi_1 + 0xf4) == 0)
                sub_142b15d30(rdi_1)
                sub_142a47920(rdi_1)
                *(arg1 + 0x58) = 0
            
            goto label_142a9f9e6
        
        sub_142aa0650(arg1)

return arg1
