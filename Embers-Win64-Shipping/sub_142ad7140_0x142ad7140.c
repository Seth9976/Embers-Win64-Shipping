// 函数: sub_142ad7140
// 地址: 0x142ad7140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_38 = -2
struct icu_64::DateFormat::icu_64::SimpleDateFormat::VTable** result = arg1
sub_142a6cbf0(arg1)
*result = &icu_64::SimpleDateFormat::`vftable'{for `icu_64::DateFormat'}
Concurrency::agent::agent(&result[0x2c], u"yyyyMMdd hh:mm a")
result[0x34] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x35].w = 2
result[0x3c] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x3d].w = 2
sub_142a456d0(&result[0x44], arg2)
struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rbx_1 = nullptr
result[0x60] = 0
result[0x61] = 0
__builtin_memset(&result[0x64], 0, 0x30)
result[0x6b] = 0

if (*arg3 s<= 0)
    sub_142ad95f0(result)
    
    if (*arg3 s<= 0)
        result[0x29] = sub_142a68a70(sub_142a64c40(), &result[0x44], arg3)
    
    result[0x60] = sub_142b591d0(&result[0x44], arg3)
    
    if (*arg3 s> 0)
        *arg3 = 0
        struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rbp_1 = result[0x60]
        
        if (rbp_1 != 0)
            sub_142b57bd0(rbp_1)
            sub_142a47920(rbp_1)
        
        struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rax_4 = j_sub_142a7dd00(0x4d8)
        struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** arg_18 = rax_4
        
        if (rax_4 != 0)
            rbx_1 = sub_142b57880(rax_4, arg3)
        
        result[0x60] = rbx_1
    
    if (*arg3 s<= 0 || rbx_1 != 0)
        sub_142a4ab40(&result[0x34])
        sub_142a4ab40(&result[0x3c])
        int64_t zmm0_1 = sub_142ad94e0(result, &result[0x44], arg3)
        
        if (*arg3 s<= 0)
            sub_142ad9670(result, zmm0_1)
    else
        *arg3 = 7

return result
