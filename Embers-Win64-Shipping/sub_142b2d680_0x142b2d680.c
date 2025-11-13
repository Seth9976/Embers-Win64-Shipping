// 函数: sub_142b2d680
// 地址: 0x142b2d680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_38 = -2
struct icu_64::Format::icu_64::PluralFormat::VTable** result = arg1
sub_142aa8270(arg1)
*result = &icu_64::PluralFormat::`vftable'{for `icu_64::Format'}
sub_142a456d0(&result[0x29], arg2)
int128_t zmm0 = sub_142b749a0(&result[0x45], arg5)
result[0x55] = 0
result[0x56] = 0
result[0x57] = &icu_64::PluralFormat::PluralSelectorAdapter::`vftable'{for `icu_64::PluralFormat::PluralSelector'}
result[0x58] = 0

if (*arg5 s<= 0)
    result[0x58] = sub_142a6f930(&result[0x29], arg3, arg5)
    int64_t rax_2
    rax_2, zmm0 = sub_142a586f0(&result[0x29], arg5)
    result[0x55] = rax_2

sub_142b77000(&result[0x45], arg4, nullptr, arg5, zmm0)

if (*arg5 s<= 0)
    result[0x56] = sub_142b75310(&result[0x45], 0)
else
    sub_142b74f70(&result[0x45])
    result[0x56] = 0

return result
