// 函数: sub_142ae5de0
// 地址: 0x142ae5de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::DateFormat::icu_64::Win32DateFormat::VTable** result = arg1
sub_142a6cbf0(arg1)
*result = &icu_64::Win32DateFormat::`vftable'{for `icu_64::DateFormat'}
result[0x2c] = 0
result[0x2d].d = arg2
*(result + 0x16c) = arg3
sub_142a456d0(&result[0x2e], arg4)
result[0x4a] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x4b].w = 2
result[0x53] = 0

if (*arg5 s<= 0)
    sub_142ab14f0(arg4, &result[0x53])
    int64_t rax_1 = sub_142a7dd00(0xac)
    result[0x52] = rax_1
    memset(rax_1, 0, 0xac)
    sub_142ae6110(result, sub_142a68a40(arg4, arg5))

return result
