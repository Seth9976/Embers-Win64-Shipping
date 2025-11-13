// 函数: sub_142a65950
// 地址: 0x142a65950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_88 = 0
char** rax_2 = sub_142a64160(nullptr, "zoneinfo64", arg3)
char** rax_3 = sub_142a625a0(rax_2, "Names", rax_2, arg3)
void* rax_4 = sub_142a63b20(rax_3, arg2, &var_88, arg3)

if (*arg3 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
    sub_142a49d00(arg1 + 8, sub_142a47a60(&var_68, 1, rax_4, var_88))
    sub_142a47ff0(&var_68)
else if ((*(arg1 + 0x10) & 1) == 0)
    int16_t rax_5 = *(arg1 + 0x10)
    int32_t rdx_3
    
    if (rax_5 s< 0)
        rdx_3 = *(arg1 + 0x14)
    else
        rdx_3 = sx.d(rax_5) s>> 5
    
    if (rdx_3 != 0)
        *(arg1 + 0x10) = rax_5 & 0x1f
else
    sub_142a4afe0(arg1 + 8)

sub_142a5f860(rax_3)
int64_t result
result.b = *arg3 s<= 0
__security_check_cookie(rax_1 ^ &var_a8)
return result
