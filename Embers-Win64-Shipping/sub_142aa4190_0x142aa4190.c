// 函数: sub_142aa4190
// 地址: 0x142aa4190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result

if (*arg2 s> 0)
    result = nullptr
else
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_2 = j_sub_142a7dd00(0xc8)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_90_1 = rax_2
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_1
    
    if (rax_2 == 0)
        result_1 = nullptr
    else
        result_1 = sub_142a9db60(rax_2)
    
    if (result_1 != 0)
        int64_t** rdx = *(arg1 + 8)
        
        if (rdx[4] != 0)
            int128_t var_88 = zx.o(0)
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_2 = result_1
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_70 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_68_1 = 2
            int64_t var_30_1 = 0
            int32_t var_28_1 = 0
            sub_142b264d0(&var_88, rdx, arg2)
            sub_142a47ff0(&var_70)
        
        if (rdx[4] == 0 || *arg2 s<= 0)
            result = result_1
        else
            sub_142a9dbc0(result_1)
            sub_142a47920(result_1)
            result = nullptr
    else
        *arg2 = 7
        result = nullptr

__security_check_cookie(rax_1 ^ &var_b8)
return result
