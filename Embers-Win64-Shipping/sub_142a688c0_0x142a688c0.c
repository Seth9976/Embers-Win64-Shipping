// 函数: sub_142a688c0
// 地址: 0x142a688c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_148 = -2
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
sub_142a459c0(&var_f8)
(*(*arg2 + 0x58))(arg2, &var_f8)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result_1 = j_sub_142a7dd00(0x40)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result = result_1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result_2 = result_1

if (result_1 == 0)
    result = nullptr
    *arg4 = 7
else
    *result = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    result[1].w = 2
    int16_t var_158 = 0x40
    sub_142a48d70(result, &var_158, 0, 1)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
        sub_142a47a60(&var_138, 1, calendar=", 9)
    int16_t rcx_4 = rax_3[1].w
    int32_t r9_1
    
    if (rcx_4 s< 0)
        r9_1 = *(rax_3 + 0xc)
    else
        r9_1 = sx.d(rcx_4) s>> 5
    
    sub_142a48d00(result, rax_3, 0, r9_1)
    sub_142a47ff0(&var_138)
    char* var_d0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5 =
        sub_142a47e10(&var_138, (&data_14363ee70)[sx.q(sub_142a69e60(var_d0))], 0xffffffff)
    int16_t rcx_9 = rax_5[1].w
    int32_t r9_4
    
    if (rcx_9 s< 0)
        r9_4 = *(rax_5 + 0xc)
    else
        r9_4 = sx.d(rcx_9) s>> 5
    
    sub_142a48d00(result, rax_5, 0, r9_4)
    sub_142a47ff0(&var_138)

sub_142a45a20(&var_f8)
__security_check_cookie(rax_1 ^ &var_178)
return result
