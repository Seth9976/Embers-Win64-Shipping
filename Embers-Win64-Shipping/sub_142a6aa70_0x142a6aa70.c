// 函数: sub_142a6aa70
// 地址: 0x142a6aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
sub_142a459c0(&var_f8)
(*(*arg2 + 0x50))(arg2, &var_f8)
struct icu_64::Calendar::icu_64::GregorianCalendar::VTable** rax_3 = j_sub_142a7dd00(0x290)
struct icu_64::Calendar::icu_64::GregorianCalendar::VTable** var_100 = rax_3
struct icu_64::Calendar::icu_64::GregorianCalendar::VTable** result

if (rax_3 == 0)
    result = nullptr
else
    result = sub_142a726f0(rax_3, &var_f8, arg4)

if (result == 0)
    *arg4 = 7

sub_142a45a20(&var_f8)
__security_check_cookie(rax_1 ^ &var_128)
return result
