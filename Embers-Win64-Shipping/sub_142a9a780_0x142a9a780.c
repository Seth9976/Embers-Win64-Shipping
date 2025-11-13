// 函数: sub_142a9a780
// 地址: 0x142a9a780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rax_3 = (*(*arg1 + 0x60))(arg1, arg3, arg5, arg3)

if (rax_3 == 0)
    goto label_142a9a852

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_70_1 = 2
int64_t r8_1 = *rax_3
(*(r8_1 + 0x18))(rax_3, &var_78, r8_1)
(**rax_3)(rax_3, 1)
int64_t rax_6 = (*(*arg1 + 0x70))(arg1, arg2, &var_78, zx.q(arg4), arg5)
int64_t result

if (rax_6 == 0)
    sub_142a47ff0(&var_78)
label_142a9a852:
    
    if (arg2 != 0)
        (**arg2)(arg2, 1)
    
    result = 0
else
    int64_t r9_2 = *arg1
    int64_t result_1 = (*(r9_2 + 0x40))(arg1, rax_6, arg5, r9_2)
    sub_142a47ff0(&var_78)
    result = result_1

__security_check_cookie(rax_1 ^ &var_b8)
return result
