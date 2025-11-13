// 函数: sub_142ad7020
// 地址: 0x142ad7020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_370 = -2
void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int32_t var_378 = 0
struct icu_64::Calendar::icu_64::CECalendar::VTable* var_368
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
sub_142b55100(&var_368, sub_142a45710(&var_f8, "@calendar=ethiopic", nullptr, nullptr, nullptr), 
    &var_378)
var_368 = &icu_64::EthiopicCalendar::`vftable'{for `icu_64::CECalendar'}
int32_t var_100 = 0
sub_142a45a20(&var_f8)

if (var_378 s<= 0)
    sub_142a6c1a0(&var_368, j_sub_142a4bbc0(), &var_378)
    sub_142a67700(&var_368, 1, 0xffffffb0, &var_378)
    data_143ccb140 = sub_142a6a540(&var_368, &var_378)
    data_143ccb148 = sub_142a695b0(&var_368, 1, &var_378)

var_368 = &icu_64::EthiopicCalendar::`vftable'{for `icu_64::CECalendar'}
sub_142b55170(&var_368)
__security_check_cookie(rax_1 ^ &var_3a8)
return &icu_64::UObject::`vftable'
