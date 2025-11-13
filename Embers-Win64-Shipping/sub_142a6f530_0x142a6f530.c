// 函数: sub_142a6f530
// 地址: 0x142a6f530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_120 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
struct icu_64::SharedObject::icu_64::SharedPluralRules::VTable** result = nullptr
struct icu_64::UObject::icu_64::Locale::VTable* var_108
sub_142a45710(&var_108, *(arg1 + 0x38), nullptr, nullptr, nullptr)
void* rax_2 = sub_142a70800(&var_108, 0, arg3)
void* rbx = rax_2

if (rax_2 == 0 && *arg3 s<= rax_2.d)
    *arg3 = 7

sub_142a45a20(&var_108)

if (*arg3 s<= 0)
    struct icu_64::SharedObject::icu_64::SharedPluralRules::VTable** result_2 =
        j_sub_142a7dd00(0x20)
    struct icu_64::SharedObject::icu_64::SharedPluralRules::VTable** result_1 = result_2
    struct icu_64::SharedObject::icu_64::SharedPluralRules::VTable** result_4 = result_2
    
    if (result_2 == 0)
        result_1 = nullptr
    else
        result_2[1] = 0
        result_2[2] = 0
        *result_1 = &icu_64::SharedPluralRules::`vftable'{for `icu_64::SharedObject'}
        result_1[3] = rbx
    
    struct icu_64::SharedObject::icu_64::SharedPluralRules::VTable** result_3 = result_1
    struct icu_64::SharedObject::icu_64::SharedPluralRules::VTable** result_5 = result_3
    
    if (result_1 == 0 && *arg3 s<= result_1.d)
        *arg3 = 7
    
    if (*arg3 s<= 0)
        rbx = nullptr
        int64_t var_118_1 = 0
        sub_142aa6d40(result_1)
        result_3 = nullptr
        result = result_1
    
    if (result_3 != 0)
        struct icu_64::SharedObject::icu_64::SharedPluralRules::VTable* r8_1 = *result_3
        r8_1->__offset(0x0).q(result_3, 1, r8_1)

if (rbx != 0)
    int64_t r8_2 = *rbx
    (*r8_2)(rbx, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_158)
return result
