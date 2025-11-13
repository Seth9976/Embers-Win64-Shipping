// 函数: sub_142b69d20
// 地址: 0x142b69d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint64_t result

if (*arg5 s> 0)
    result = 0
else
    uint32_t rax_2
    
    if (arg3 != 0)
        rax_2 = arg4 u>> 0x1f
    else
        rax_2.b = arg4 != 0
    
    if (rax_2 == 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
        sub_142a47d50(&var_78, arg3, 0, arg4)
        int32_t result_1
        
        if ((*(*arg1 + 0x38))(arg1, zx.q(arg2), &var_78) == 0)
            result_1 = -1
        else
            result_1 = sub_142a49a60(&var_78, arg3, arg4, arg5)
        
        sub_142a47ff0(&var_78)
        result = zx.q(result_1)
    else
        *arg5 = 1
        result = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
