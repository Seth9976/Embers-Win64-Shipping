// 函数: sub_142a587e0
// 地址: 0x142a587e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = -2
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
struct icu_64::UObject::icu_64::Locale::VTable* var_108
sub_142a45710(&var_108, *(arg1 + 0x38), nullptr, nullptr, nullptr)
struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** rax_2 =
    sub_142a59360(&var_108, 1, arg3)
sub_142a45a20(&var_108)
struct icu_64::SharedObject::icu_64::SharedNumberFormat::VTable** result

if (*arg3 s> 0)
    result = nullptr
else
    struct icu_64::SharedObject::icu_64::SharedNumberFormat::VTable** result_1 =
        j_sub_142a7dd00(0x20)
    struct icu_64::SharedObject::icu_64::SharedNumberFormat::VTable** result_2 = result_1
    
    if (result_1 == 0)
        *arg3 = 7
        
        if (rax_2 != 0)
            (*rax_2)->__offset(0x0).q(rax_2, 1)
        
        result = nullptr
    else
        result_1[1] = 0
        result_1[2] = 0
        *result_1 = &icu_64::SharedNumberFormat::`vftable'{for `icu_64::SharedObject'}
        result_1[3] = rax_2
        sub_142aa6d40(result_1)
        result = result_1

__security_check_cookie(rax_1 ^ &var_148)
return result
