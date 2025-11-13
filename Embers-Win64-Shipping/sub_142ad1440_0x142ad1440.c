// 函数: sub_142ad1440
// 地址: 0x142ad1440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_3a0 = -2
int128_t zmm6
int128_t var_18 = zmm6
void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
int32_t var_3a8 = 0
struct icu_64::Calendar::icu_64::GregorianCalendar::VTable* var_398
struct icu_64::UObject::icu_64::Locale::VTable* var_108
sub_142a726f0(&var_398, sub_142a45710(&var_108, "@calendar=buddhist", nullptr, nullptr, nullptr), 
    &var_3a8)
var_398 = &icu_64::BuddhistCalendar::`vftable'{for `icu_64::GregorianCalendar'}
sub_142a6c1a0(&var_398, j_sub_142a4bbc0(), &var_3a8)
sub_142a45a20(&var_108)

if (var_3a8 s<= 0)
    sub_142a6c1a0(&var_398, j_sub_142a4bbc0(), &var_3a8)
    sub_142a67700(&var_398, 1, 0xffffffb0, &var_3a8)
    int128_t zmm0_2 = sub_142a6a540(&var_398, &var_3a8)
    data_143ccb0c0 = sub_142a695b0(&var_398, 1, &var_3a8)
    data_143ccb0b8 = zmm0_2.q

var_398 = &icu_64::BuddhistCalendar::`vftable'{for `icu_64::GregorianCalendar'}
sub_142a72850(&var_398)
__security_check_cookie(rax_1 ^ &var_3d8)
return &icu_64::UObject::`vftable'
