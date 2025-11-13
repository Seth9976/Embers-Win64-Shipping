// 函数: sub_142aa73f0
// 地址: 0x142aa73f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88

if (*(arg1 + 0xd8) == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
        sub_142a47e10(&var_58, *(arg1 + 0x28), 0xffffffff)
    int16_t rcx_2 = rax_2[1].w
    int32_t r9_3
    
    if (rcx_2 s< 0)
        r9_3 = *(rax_2 + 0xc)
    else
        r9_3 = sx.d(rcx_2) s>> 5
    
    sub_142a48d00(arg2, rax_2, 0, r9_3)
    sub_142a47ff0(&var_58)
else
    sub_142a4ab40(arg2)

__security_check_cookie(rax_1 ^ &var_88)
return arg2
