// 函数: sub_142ab8b30
// 地址: 0x142ab8b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rax_2 = sub_142ab94f0(arg1 - 8, arg2, arg3, arg5)
int32_t rax_3 = sub_142ab9580(arg1 - 8, arg2, arg4 + rax_2, arg5)
int32_t rbx = 0
int64_t* rcx_2 = *(arg1 + 0x18)
int64_t rdx_1 = *rcx_2

if ((*(rdx_1 + 0x48))(rcx_2, rdx_1) == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_90_1 = 2
    rbx = sub_142b40880(arg2, arg3 + rax_2, arg4 + rax_2, &var_98, 0, 0, 0xd, arg5)
    sub_142a47ff0(&var_98)

sub_142b3cbd0(arg2, arg3, rax_2, arg4 + rbx + rax_2, rax_3, *(arg1 + 0x30), arg5)
__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rbx + rax_3 + rax_2)
