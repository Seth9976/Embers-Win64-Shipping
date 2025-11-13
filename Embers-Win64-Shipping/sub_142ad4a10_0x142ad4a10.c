// 函数: sub_142ad4a10
// 地址: 0x142ad4a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_380 = -2
int128_t zmm6
int128_t var_18 = zmm6
void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int32_t var_388 = 0
struct icu_64::UObject::icu_64::Locale::VTable* var_108
struct icu_64::UObject::icu_64::Locale::VTable** rax_2 =
    sub_142a45710(&var_108, "@calendar=Indian", nullptr, nullptr, nullptr)
struct icu_64::UObject::icu_64::Calendar::VTable* var_378
sub_142a66ee0(&var_378, sub_142a64c40(), rax_2, &var_388)
var_378 = &icu_64::IndianCalendar::`vftable'{for `icu_64::Calendar'}
sub_142a6c1a0(&var_378, j_sub_142a4bbc0(), &var_388)
sub_142a45a20(&var_108)

if (var_388 s<= 0)
    sub_142a6c1a0(&var_378, j_sub_142a4bbc0(), &var_388)
    sub_142a67700(&var_378, 1, 0xffffffb0, &var_388)
    int128_t zmm0_2 = sub_142a6a540(&var_378, &var_388)
    int32_t rax_4 = sub_142a695b0(&var_378, 1, &var_388)
    data_143ccb110 = zmm0_2.q
    data_143ccb118 = rax_4

var_378 = &icu_64::IndianCalendar::`vftable'{for `icu_64::Calendar'}
sub_142a670d0(&var_378)
__security_check_cookie(rax_1 ^ &var_3b8)
return &icu_64::UObject::`vftable'
