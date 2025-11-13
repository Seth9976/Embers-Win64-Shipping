// 函数: sub_142b4ad00
// 地址: 0x142b4ad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::TimeZoneRule::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable** result = arg1
*arg1 = &icu_64::TimeZoneRule::`vftable'{for `icu_64::UObject'}
sub_142a479b0(&arg1[1], arg2 + 8)
result[9].d = *(arg2 + 0x48)
*(result + 0x4c) = *(arg2 + 0x4c)
*result = &icu_64::AnnualTimeZoneRule::`vftable'{for `icu_64::TimeZoneRule'}
struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_2 = j_sub_142a7dd00(0x28)
struct icu_64::UObject::icu_64::DateTimeRule::VTable** arg_10 = rax_2

if (rax_2 != 0)
    rax_2 = sub_142b4ab00(rax_2, *(arg2 + 0x50))

result[0xa] = rax_2
result[0xb].d = *(arg2 + 0x58)
*(result + 0x5c) = *(arg2 + 0x5c)
return result
