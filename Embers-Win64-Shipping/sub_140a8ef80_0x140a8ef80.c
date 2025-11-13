// 函数: sub_140a8ef80
// 地址: 0x140a8ef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_50 = 2
sub_140a6db10(arg2, &var_58, 1)
void* rax_3 = sub_142a4b1c0(&var_58)
*arg1 = 0
arg1[1] = 0
int16_t rcx_2 = *(rax_3 + 8)
int32_t r9_1

if (rcx_2 s< 0)
    r9_1 = *(rax_3 + 0xc)
else
    r9_1 = sx.d(rcx_2) s>> 5

void var_68

if (r9_1 != 0)
    sub_140a6d980(&var_68, rax_3, 0, r9_1, arg1)
sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_98)
return arg1
