// 函数: sub_142ab10c0
// 地址: 0x142ab10c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result = arg1
sub_142a57ec0(arg1, arg2)
*result = &icu_64::Win32NumberFormat::`vftable'{for `icu_64::NumberFormat'}
sub_142a459c0(&result[0x2f])
int64_t rax = sub_142a7dd00(0x30)
result[0x4c] = rax

if (rax != 0)
    __builtin_memset(rax, 0, 0x30)

sub_142ab1370(result, arg2)
return result
