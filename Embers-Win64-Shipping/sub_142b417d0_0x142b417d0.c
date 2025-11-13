// 函数: sub_142b417d0
// 地址: 0x142b417d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
    sub_142a47e10(&var_58, sub_142ab63b0(arg1), 0xffffffff)
int16_t rcx_1 = rax_3[1].w
int32_t r9_2

if (rcx_1 s< 0)
    r9_2 = *(rax_3 + 0xc)
else
    r9_2 = sx.d(rcx_1) s>> 5

sub_142a48d00(arg2, rax_3, 0, r9_2)
sub_142a47ff0(&var_58)
int16_t var_68 = 0x2d
sub_142a48d70(arg2, &var_68, 0, 1)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5 =
    sub_142a47e10(&var_58, sub_142ab6380(arg1), 0xffffffff)
int16_t rcx_7 = rax_5[1].w
int32_t r9_5

if (rcx_7 s< 0)
    r9_5 = *(rax_5 + 0xc)
else
    r9_5 = sx.d(rcx_7) s>> 5

sub_142a48d00(arg2, rax_5, 0, r9_5)
sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_88)
return &icu_64::UObject::`vftable'
