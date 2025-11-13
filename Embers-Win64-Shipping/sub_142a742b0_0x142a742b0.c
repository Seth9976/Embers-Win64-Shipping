// 函数: sub_142a742b0
// 地址: 0x142a742b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_74 = 0
void* rdx = *(arg1 + 0x10)

if (rdx == 0)
    void* rcx_1 = *(arg1 + 8)
    
    if (rcx_1 != 0)
        int32_t var_78 = 0
        int64_t rax_2 = sub_142aea860(rcx_1, rdx)
        int32_t rax_3 = sub_142aea690(*(arg1 + 8), 0, rax_2, 0, 0, &var_78, var_78, var_70)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_60_1 = 2
        var_78 = 0
        void* rax_4 = sub_142a4a0b0(&var_68, rax_3)
        sub_142aea690(*(arg1 + 8), 0, rax_2, rax_4, rax_3, &var_78, var_78)
        sub_142a4a600(&var_68, rax_3)
        sub_142a47930(arg2, &var_68)
        sub_142a47ff0(&var_68)
    else
        *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        arg2[1].w = 2
else
    sub_142a479b0(arg2, rdx)

__security_check_cookie(rax_1 ^ &var_a8)
return arg2
