// 函数: sub_142b11d00
// 地址: 0x142b11d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::ICUServiceKey::VTable** arg_8 = arg1
int64_t var_28 = -2
struct icu_64::ICUServiceKey::icu_64::LocaleKey::VTable** result = arg1
sub_142a99540(arg1, arg2)
*result = &icu_64::LocaleKey::`vftable'{for `icu_64::ICUServiceKey'}
result[9].d = arg5
sub_142a479b0(&result[0xa], arg3)
result[0x12] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x13].w = 2
result[0x1a] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x1b].w = 2
sub_142a4ab40(&result[0x12])
int16_t rax_1 = result[0xb].w
int32_t rax_3

if (rax_1 s< 0)
    rax_3 = *(result + 0x5c)
else
    rax_3 = sx.d(rax_1) s>> 5

if (rax_3 != 0 && arg4 != 0 && sub_142ac14c0(&result[0xa], arg4) != 0)
    sub_142a48100(&result[0x12], arg4)

sub_142a48100(&result[0x1a], &result[0xa])
return result
