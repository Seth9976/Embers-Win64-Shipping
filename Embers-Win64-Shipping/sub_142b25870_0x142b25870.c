// 函数: sub_142b25870
// 地址: 0x142b25870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
sub_142a48100(arg1 + 0x18, arg3)
int16_t rax_2 = *(arg1 + 0x20)
int32_t r8_1

if (rax_2 s< 0)
    r8_1 = *(arg1 + 0x24)
else
    r8_1 = sx.d(rax_2) s>> 5

sub_142a49810(arg1 + 0x18, 0, r8_1)
int32_t rax_3 = sub_142aa60d0(arg2, arg5)

if (rax_3.b u>= 0xc0 && (rax_3.b & 0xf) == 9)
    sub_142b25770(arg1, arg4, *(arg2 + 0x18) + 4 + (zx.q(rax_3) u>> 0xd << 1))

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
void* rax_7 = sub_142a48580(sub_142a479b0(&var_78, arg1 + 0x18), arg4)
sub_142a9e730(*(arg1 + 0x10), rax_7)
int64_t result = sub_142a47ff0(&var_78)

if ((*(arg1 + 0x20) & 1) == 0)
    *(arg1 + 0x20) &= 0x1f
else
    result = 2
    *(arg1 + 0x20) = 2

__security_check_cookie(rax_1 ^ &var_a8)
return result
