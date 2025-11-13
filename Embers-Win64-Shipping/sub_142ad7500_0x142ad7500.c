// 函数: sub_142ad7500
// 地址: 0x142ad7500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_28 = -2
struct icu_64::DateFormat::icu_64::SimpleDateFormat::VTable** result = arg1
sub_142a6cbf0(arg1)
*result = &icu_64::SimpleDateFormat::`vftable'{for `icu_64::DateFormat'}
sub_142a479b0(&result[0x2c], arg2)
result[0x34] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x35].w = 2
result[0x3c] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x3d].w = 2
sub_142a456d0(&result[0x44], arg3)
result[0x61] = 0
__builtin_memset(&result[0x64], 0, 0x30)
result[0x6b] = 0
sub_142a4ab40(&result[0x34])
sub_142a4ab40(&result[0x3c])
sub_142ad95f0(result)

if (*arg4 s<= 0)
    result[0x29] = sub_142a68a70(sub_142a64c40(), &result[0x44], arg4)

result[0x60] = sub_142b591d0(&result[0x44], arg4)
sub_142ad9670(result, sub_142ad94e0(result, &result[0x44], arg4))
return result
