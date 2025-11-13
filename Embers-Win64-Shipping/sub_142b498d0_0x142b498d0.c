// 函数: sub_142b498d0
// 地址: 0x142b498d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
(*(*arg1 + 0x18))(arg1, &var_78, 0x100)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8
(*(*arg1 + 0x18))(arg1, &var_f8, 0)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_130 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_178 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_170 = 2

if ((*(*arg1 + 0x30))(arg1) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
    sub_142a48050(&var_138, (*(*arg1 + 0x18))(arg1, &var_b8, 0x300))
    sub_142a47ff0(&var_b8)
    sub_142a48050(&var_178, (*(*arg1 + 0x18))(arg1, &var_b8, 0x200))
    sub_142a47ff0(&var_b8)

int32_t* rbx

if (test_bit(arg3, 8))
    rbx.b = 1
else if (sub_142abb5c0(&var_78, sub_1408f3520(arg2), arg4) == 0)
    rbx.b = 1
else if (sub_142abb5c0(&var_f8, sub_1408f3520(arg2), arg4) == 0)
    rbx.b = 1
else if (sub_142abb5c0(&var_138, sub_1408f3520(arg2), arg4) == 0)
    rbx.b = 1
else if (sub_142abb5c0(&var_178, sub_1408f3520(arg2), arg4) == 0)
    rbx.b = 1
else if (sub_142abb6b0(&var_f8, 0xfffffffe, arg4) != 0)
    rbx.b = 1
else if (sub_142abb6b0(&var_f8, 0xffffffff, arg4) != 0)
    rbx.b = 1
else if (sub_142abb6b0(&var_178, 0xfffffffe, arg4) != 0)
    rbx.b = 1
else if (sub_142abb6b0(&var_178, 0xffffffff, arg4) != 0)
    rbx.b = 1
else
    rbx.b = 0

sub_142a47ff0(&var_178)
sub_142a47ff0(&var_138)
sub_142a47ff0(&var_f8)
sub_142a47ff0(&var_78)
__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(rbx.b)
