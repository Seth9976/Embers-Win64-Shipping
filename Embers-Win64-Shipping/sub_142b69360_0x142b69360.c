// 函数: sub_142b69360
// 地址: 0x142b69360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char rdi = 0
int32_t var_88 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
char rax_3

if (*arg3 s<= 0)
    int128_t var_78 = *arg2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
        sub_142a49f80(&var_68, &var_78)
    rdi = 1
    int64_t r9_1 = *arg1
    rax_3 = (*(r9_1 + 0x50))(arg1, rax_2, arg3, r9_1, 1, var_80, var_78)

int32_t* rbx

if (*arg3 s> 0 || rax_3 == 0)
    rbx.b = 0
else
    rbx = 1

if ((rdi & 1) != 0)
    sub_142a47ff0(&var_68)

__security_check_cookie(rax_1 ^ &var_a8)
return zx.q(rbx.b)
