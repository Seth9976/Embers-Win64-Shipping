// 函数: sub_142a5aa40
// 地址: 0x142a5aa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_28 = -2
struct icu_64::NumberFormat::icu_64::DecimalFormat::VTable** result = arg1
sub_142a5a530(arg1, nullptr, arg4)
*result = &icu_64::DecimalFormat::`vftable'{for `icu_64::NumberFormat'}

if (*arg4 s<= 0)
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_1 = j_sub_142a7dd00(0xb00)
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** arg_20 = rax_1
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rsi_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        rsi_1 = sub_142aabc60(rax_1, arg3)
    
    if (rsi_1 == 0 && *arg4 s<= rsi_1.d)
        *arg4 = 7
    
    if (*arg4 s<= 0)
        arg_20 = nullptr
        void* r14_1 = result[0x2e]
        int64_t* rcx_4 = *(r14_1 + 8)
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
        
        *(r14_1 + 8) = rsi_1
        
        if (*arg4 s<= 0)
            j_sub_142ac02f0(arg2, result[0x2e]->__offset(0x0).q, 1, arg4)
        
        sub_142a5f4f0(result, arg4)
    else
        int64_t* rbp_1 = result[0x2e]
        
        if (rbp_1 != 0)
            sub_142a5b340(rbp_1)
            sub_142a47920(rbp_1)
        
        result[0x2e] = 0
        *arg4 = 7
        
        if (rsi_1 != 0)
            (*rsi_1)->__offset(0x0).q(rsi_1, 1)

return result
