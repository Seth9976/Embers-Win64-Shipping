// 函数: sub_142aab230
// 地址: 0x142aab230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::UObject::icu_64::NumberingSystem::VTable** var_68 = arg1
*arg1 = &icu_64::NumberingSystem::`vftable'{for `icu_64::UObject'}
arg1[1] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[2].w = 2
arg1[9].d = 0xa
*(arg1 + 0x4c) = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
sub_142a47a60(&var_58, 1, u"0123456789", 0xffffffff)
sub_142a48aa0(&arg1[1], &var_58, 0)
char const* const rcx_2 = "latn"
char const i

do
    i = *rcx_2
    rcx_2[arg1 - "lements"] = i
    rcx_2 = &rcx_2[1]
while (i != 0)
sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_98)
return arg1
