// 函数: sub_142b5e020
// 地址: 0x142b5e020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_28 = -2
struct icu_64::Format::icu_64::MessageFormat::VTable** result = arg1
sub_142aa8200(arg1, arg2)
*result = &icu_64::MessageFormat::`vftable'{for `icu_64::Format'}
sub_142a456d0(&result[0x29], arg2 + 0x148)
sub_142b74a00(&result[0x45], arg2 + 0x228)
result[0x55] = 0
result[0x56].d = 0
result[0x57] = 0
result[0x58] = 0
result[0x59].b = *(arg2 + 0x2c8)
__builtin_memset(&result[0x5a], 0, 0x20)
result[0x5e] = &icu_64::MessageFormat::PluralSelectorProvider::`vftable'{for `icu_64::PluralFormat::PluralSelector'}
result[0x5f] = result
result[0x60] = 0
result[0x61].d = 0
result[0x62] = &icu_64::MessageFormat::PluralSelectorProvider::`vftable'{for `icu_64::PluralFormat::PluralSelector'}
result[0x63] = result
result[0x64] = 0
result[0x65].d = 1
int32_t arg_10 = 0
sub_142b5f320(result, arg2, &arg_10)

if (arg_10 s> 0)
    sub_142b74f70(&result[0x45])
    sub_142a869e0(result[0x5c])
    result[0x5c] = 0
    sub_142a869e0(result[0x5d])
    result[0x5d] = 0
    result[0x58].d = 0
    result[0x59].b = 0

return result
