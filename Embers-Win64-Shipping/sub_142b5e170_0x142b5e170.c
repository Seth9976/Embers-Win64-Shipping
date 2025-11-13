// 函数: sub_142b5e170
// 地址: 0x142b5e170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
struct icu_64::Format::icu_64::MessageFormat::VTable** result = arg1
sub_142aa8270(arg1)
*result = &icu_64::MessageFormat::`vftable'{for `icu_64::Format'}
sub_142a456d0(&result[0x29], arg3)
sub_142b749a0(&result[0x45], arg4)
result[0x55] = 0
result[0x56].d = 0
__builtin_memset(&result[0x57], 0, 0x11)
__builtin_memset(&result[0x5a], 0, 0x20)
result[0x5e] = &icu_64::MessageFormat::PluralSelectorProvider::`vftable'{for `icu_64::PluralFormat::PluralSelector'}
result[0x5f] = result
result[0x60] = 0
result[0x61].d = 0
result[0x62] = &icu_64::MessageFormat::PluralSelectorProvider::`vftable'{for `icu_64::PluralFormat::PluralSelector'}
result[0x63] = result
result[0x64] = 0
result[0x65].d = 1
char* rdx_2 = result[0x2e]
sub_142aa8420(result, rdx_2, rdx_2)
void var_88
(*result)->vFunc_10(result, arg2, &var_88, arg4, var_98, arg1)
__security_check_cookie(rax_1 ^ &var_b8)
return result
