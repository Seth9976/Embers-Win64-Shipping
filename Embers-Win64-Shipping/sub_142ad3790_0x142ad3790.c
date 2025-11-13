// 函数: sub_142ad3790
// 地址: 0x142ad3790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_370 = -2
void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int32_t var_378 = 0
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
struct icu_64::UObject::icu_64::Locale::VTable** rax_2 =
    sub_142a45710(&var_f8, "@calendar=hebrew", nullptr, nullptr, nullptr)
struct icu_64::UObject::icu_64::Calendar::VTable* var_368
sub_142a66ee0(&var_368, sub_142a64c40(), rax_2, &var_378)
var_368 = &icu_64::HebrewCalendar::`vftable'{for `icu_64::Calendar'}
sub_142a6c1a0(&var_368, j_sub_142a4bbc0(), &var_378)
sub_142a45a20(&var_f8)

if (var_378 s<= 0)
    sub_142a6c1a0(&var_368, j_sub_142a4bbc0(), &var_378)
    
    if (var_378 s<= 0)
        sub_142a67700(&var_368, 1, 0xffffffb0, &var_378)
    
    data_143ccb0f0 = sub_142a6a540(&var_368, &var_378)
    data_143ccb0f8 = sub_142a695b0(&var_368, 1, &var_378)

var_368 = &icu_64::HebrewCalendar::`vftable'{for `icu_64::Calendar'}
sub_142a670d0(&var_368)
__security_check_cookie(rax_1 ^ &var_3a8)
return &icu_64::UObject::`vftable'
