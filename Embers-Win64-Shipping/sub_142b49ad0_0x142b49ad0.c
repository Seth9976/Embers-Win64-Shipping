// 函数: sub_142b49ad0
// 地址: 0x142b49ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
char rax_2 = 0
int32_t var_68 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
int32_t rbx

if (arg1 != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 = sub_142b498a0(arg1, &var_58)
    rax_2 = 1
    int16_t rdx_2 = rax_3[1].w
    
    if (rdx_2 s< 0)
        rbx = *(rax_3 + 0xc)
    else
        rbx = sx.d(rdx_2) s>> 5
else
    rbx = 0

if ((rax_2 & 1) != 0)
    sub_142a47ff0(&var_58)

__security_check_cookie(rax_1 ^ &var_88)
return zx.q(rbx)
