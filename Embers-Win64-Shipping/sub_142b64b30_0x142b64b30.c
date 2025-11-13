// 函数: sub_142b64b30
// 地址: 0x142b64b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t rdi
rdi.b = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
sub_142a47f60(&var_58, arg2, arg3)
struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** rax_2 = sub_142a64de0(&var_58)
int32_t var_98
int32_t var_94
int32_t var_90
int128_t var_80
int128_t var_70

if (rax_2 != 0 && sub_142b64810(rax_2, &var_80, &var_70, &var_98, &var_94, &var_90) != 0)
    memset(arg1, 0, 0xac)
    *arg1 = var_98
    arg1[0x2a] = var_94
    arg1[0x15] = var_90
    *(arg1 + 0x98) = var_80
    *(arg1 + 0x44) = var_70
    rdi.b = 1

sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rdi.b)
