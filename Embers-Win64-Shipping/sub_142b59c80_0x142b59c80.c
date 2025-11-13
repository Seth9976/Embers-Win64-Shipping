// 函数: sub_142b59c80
// 地址: 0x142b59c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* result = arg4

if (*arg5 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    sub_142a47e10(&var_78, *result, 0xffffffff)
    int64_t rax_2 = sub_142a86c30(*(arg3 + 8), &var_78)
    
    if (rax_2 == 0)
        *arg2 = 0
        *arg5 = 2
    else
        *arg2 = sub_142a86c70(*(arg3 + 0x60), &var_78)
        *arg1 = rax_2
        j_sub_142a868c0(*(arg3 + 8), &var_78)
    
    result = sub_142a47ff0(&var_78)

__security_check_cookie(rax_1 ^ &var_98)
return result
