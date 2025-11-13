// 函数: sub_142ad5920
// 地址: 0x142ad5920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_380 = -2
void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int32_t var_388 = 0
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
struct icu_64::UObject::icu_64::Locale::VTable** rax_2 =
    sub_142a45710(&var_f8, "@calendar=chinese", nullptr, nullptr, nullptr)
struct icu_64::UObject::icu_64::Calendar::VTable* var_378
sub_142a66ee0(&var_378, sub_142a64c40(), rax_2, &var_388)
var_378 = &icu_64::ChineseCalendar::`vftable'{for `icu_64::Calendar'}
char var_110 = 0
int32_t var_10c = 0xfffff5b4

if (data_144016748 != 2 && sub_142a85f00(&data_144016748) != 0)
    sub_142ad5850()
    sub_142a85e80(&data_144016748)

int64_t var_108 = data_144016740
sub_142a6c1a0(&var_378, j_sub_142a4bbc0(), &var_388)
sub_142a45a20(&var_f8)

if (var_388 s<= 0)
    sub_142a6c1a0(&var_378, j_sub_142a4bbc0(), &var_388)
    sub_142a67700(&var_378, 1, 0xffffffb0, &var_388)
    data_143ccb120 = sub_142a6a540(&var_378, &var_388)
    data_143ccb128 = sub_142a695b0(&var_378, 1, &var_388)

var_378 = &icu_64::ChineseCalendar::`vftable'{for `icu_64::Calendar'}
sub_142a670d0(&var_378)
__security_check_cookie(rax_1 ^ &var_3b8)
return &icu_64::UObject::`vftable'
