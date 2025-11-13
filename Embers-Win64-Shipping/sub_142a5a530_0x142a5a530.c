// 函数: sub_142a5a530
// 地址: 0x142a5a530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_28 = -2
struct icu_64::NumberFormat::icu_64::DecimalFormat::VTable** result = arg1
sub_142a57f10(arg1)
*result = &icu_64::DecimalFormat::`vftable'{for `icu_64::NumberFormat'}
result[0x2e] = 0
int64_t* arg_10 = arg2

if (*arg3 s> 0)
    goto label_142a5a5ba

struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_1 = j_sub_142a7dd00(0x8a0)
struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** arg_18 = rax_1

if (rax_1 != 0)
    memset(rax_1, 0, 0x8a0)
    rax_1 = sub_142a5ace0(rax_1)

result[0x2e] = rax_1

if (rax_1 != 0)
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_3 = j_sub_142a7dd00(0x1d8)
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rbp_2 = rax_3
    arg_18 = rax_3
    
    if (rax_3 == 0)
        rbp_2 = nullptr
    else
        memset(rax_3, 0, 0x1d8)
        sub_142a5b060(rbp_2)
        rbp_2[0x39] = 0
        rbp_2[0x3a] = 0
    
    sub_142a5bc00(&result[0x2e]->__offset(0x10).q, rbp_2, arg3)
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_4 = j_sub_142a7dd00(0x2f8)
    arg_18 = rax_4
    
    if (rax_4 != 0)
        rax_4 = sub_142aba890(rax_4)
    
    sub_142a5bb70(result[0x2e], rax_4, arg3)
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_5 = j_sub_142a7dd00(0x2f8)
    arg_18 = rax_5
    
    if (rax_5 != 0)
        rax_5 = sub_142aba890(rax_5)
    
    sub_142a5bb70(result[0x2e] + 0x888, rax_5, arg3)
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rdx_4
    
    if (arg2 != 0)
        rdx_4 = arg2
    else
        struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_6 =
            j_sub_142a7dd00(0xb00)
        arg_18 = rax_6
        
        if (rax_6 != 0)
            rax_6 = sub_142aabb50(rax_6, arg3)
        
        rdx_4 = rax_6
    
    sub_142a58580(&result[0x2e]->__offset(0x8).q, rdx_4, arg3)
    int64_t* rdi_1 = result[0x2e]
    
    if (rdi_1[2] == 0 || *rdi_1 == 0 || rdi_1[0x111] == 0 || rdi_1[1] == 0)
        if (rdi_1 != 0)
            sub_142a5b340(rdi_1)
            sub_142a47920(rdi_1)
        
        result[0x2e] = 0
        *arg3 = 7
else
    *arg3 = 7
label_142a5a5ba:
    
    if (arg2 != 0)
        (**arg2)(arg2, 1)

return result
