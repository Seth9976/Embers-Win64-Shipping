// 函数: sub_142a5b670
// 地址: 0x142a5b670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 = sub_142a5f1d0(arg2, &var_58)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 = sub_142a5f1d0(arg1, &var_98)
int64_t* rbx

if ((rax_4[1].b & 1) == 0)
    int16_t rax_5 = rax_4[1].w
    int32_t r8_2
    
    if (rax_5 s< 0)
        r8_2 = *(rax_4 + 0xc)
    else
        r8_2 = sx.d(rax_5) s>> 5
    
    int16_t rax_6 = rax_3[1].w
    int32_t rax_8
    
    if (rax_6 s< 0)
        rax_8 = *(rax_3 + 0xc)
    else
        rax_8 = sx.d(rax_6) s>> 5
    
    char rax_9
    
    if ((rax_3[1].b & 1) == 0 && r8_2 == rax_8)
        rax_9 = sub_142a490e0(rax_4, rax_3, r8_2)
    
    if ((rax_3[1].b & 1) != 0 || r8_2 != rax_8 || rax_9 == 0)
        rbx.b = 0
    else
        rbx.b = 1
else
    rbx.b = rax_3[1].b & 1

sub_142a47ff0(&var_98)
sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rbx.b)
