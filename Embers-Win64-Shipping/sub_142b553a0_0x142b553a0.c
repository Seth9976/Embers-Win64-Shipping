// 函数: sub_142b553a0
// 地址: 0x142b553a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::TimeZone::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::BasicTimeZone::icu_64::RuleBasedTimeZone::VTable** result = arg1
sub_142b4c050(arg1, arg2)
*result = &icu_64::RuleBasedTimeZone::`vftable'{for `icu_64::BasicTimeZone'}
int64_t* rcx = *(arg2 + 0x48)
result[9] = (*(*rcx + 0x10))(rcx)
result[0xc] = 0
result[0xd].b = 0
result[0xa] = sub_142b55f50(result, *(arg2 + 0x50))
result[0xb] = sub_142b55f50(result, *(arg2 + 0x58))

if (*(arg2 + 0x68) != 0)
    int32_t arg_10 = 0
    sub_142b557d0(result, &arg_10)

return result
