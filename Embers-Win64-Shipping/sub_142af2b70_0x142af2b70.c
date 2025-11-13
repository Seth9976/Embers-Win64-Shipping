// 函数: sub_142af2b70
// 地址: 0x142af2b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result

if (**(arg1 + 8) s<= 0)
    int64_t rsi
    rsi.b = *(arg1 + 0x48) == 0x50
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_50_1 = 2
    int512_t zmm0 = sub_142af21f0(arg1, arg1 + 0x48, arg2)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_1
    
    if (*(arg1 + 0x48) != 0x7b)
        sub_142af0120(arg1, 0x10304)
        result_1 = nullptr
    else
        sub_142af21f0(arg1, arg1 + 0x48, zmm0)
        int32_t i = *(arg1 + 0x48)
        
        if (i == 0x7d)
        label_142af2c34:
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_2
            int512_t zmm0_2
            result_2, zmm0_2 = sub_142aec4c0(arg1, &var_58, rsi.b)
            result_1 = result_2
            sub_142af21f0(arg1, arg1 + 0x48, zmm0_2)
        else
            while (i != 0xffffffff)
                sub_142af21f0(arg1, arg1 + 0x48, sub_142a48580(&var_58, i))
                i = *(arg1 + 0x48)
                
                if (i == 0x7d)
                    goto label_142af2c34
            
            sub_142af0120(arg1, 0x10304)
            result_1 = nullptr
    
    sub_142a47ff0(&var_58)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_88)
return result
