// 函数: sub_142a7adb0
// 地址: 0x142a7adb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_98 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
int64_t rax_2 = sub_142a7d670(arg1, arg3, arg4)
int64_t rax_3 = sub_142a79b00(arg1, arg3, arg4)

if (*arg4 s<= 0 && rax_2 != -1 && rax_2 != rax_3)
    int32_t rax_4 = sub_142aea690(*(arg1 + 0x20), rax_2, rax_3, 0, 0, arg4, var_98, var_90)
    
    if (*arg4 == 0xf)
        *arg4 = 0
        void* rax_5 = sub_142a4a0b0(&var_88, rax_4)
        
        if (rax_5 != 0)
            sub_142a4a600(&var_88, sub_142aea690(*(arg1 + 0x20), rax_2, rax_3, rax_5, rax_4, arg4))
        else
            *arg4 = 7

sub_142a47930(arg2, &var_88)
sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
