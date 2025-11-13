// 函数: sub_142ad1870
// 地址: 0x142ad1870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_390 = -2
void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
int32_t var_398 = 0
struct icu_64::Calendar::icu_64::GregorianCalendar::VTable* var_388
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
sub_142a726f0(&var_388, sub_142a45710(&var_f8, "@calendar=roc", nullptr, nullptr, nullptr), 
    &var_398)
var_388 = &icu_64::TaiwanCalendar::`vftable'{for `icu_64::GregorianCalendar'}
sub_142a6c1a0(&var_388, j_sub_142a4bbc0(), &var_398)
sub_142a45a20(&var_f8)

if (var_398 s<= 0)
    sub_142a6c1a0(&var_388, j_sub_142a4bbc0(), &var_398)
    sub_142a67700(&var_388, 1, 0xffffffb0, &var_398)
    data_143ccb0c8 = sub_142a6a540(&var_388, &var_398)
    data_143ccb0d0 = sub_142a695b0(&var_388, 1, &var_398)

var_388 = &icu_64::TaiwanCalendar::`vftable'{for `icu_64::GregorianCalendar'}
sub_142a72850(&var_388)
__security_check_cookie(rax_1 ^ &var_3c8)
return &icu_64::UObject::`vftable'
