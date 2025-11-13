// 函数: sub_142a6d4d0
// 地址: 0x142a6d4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
struct icu_64::DateFormat::icu_64::SimpleDateFormat::VTable** result_1 = nullptr
char rbp = 0
int32_t var_98 = 0
struct icu_64::DateFormat::icu_64::SimpleDateFormat::VTable** result

if (*arg3 s<= 0)
    struct icu_64::UObject::icu_64::Format::VTable** rax_2 = j_sub_142a7dd00(0x360)
    struct icu_64::UObject::icu_64::Format::VTable** var_88_1 = rax_2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    struct icu_64::DateFormat::icu_64::SimpleDateFormat::VTable** result_2
    
    if (rax_2 == 0)
        result_2 = nullptr
    else
        rbp = 1
        int32_t var_98_1 = 1
        result_2 = sub_142ad7500(rax_2, sub_142a6da90(&var_78, arg2, arg1, arg3), arg2, arg3)
    
    if (result_2 == 0 && *arg3 s<= result_2.d)
        *arg3 = 7
    
    if ((rbp & 1) != 0)
        sub_142a47ff0(&var_78)
    
    if (*arg3 s<= 0)
        result_1 = result_2
    else if (result_2 != 0)
        struct icu_64::DateFormat::icu_64::SimpleDateFormat::VTable* r8_2 = *result_2
        r8_2->__offset(0x0).q(result_2, 1, r8_2)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_b8)
return result
