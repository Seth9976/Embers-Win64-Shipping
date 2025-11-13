// 函数: sub_142b46420
// 地址: 0x142b46420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_34 = 0

if (*(arg2 + 8) != 0)
    int32_t var_38 = 0
    int64_t var_28 = 0
    sub_142aaa2d0(*(arg3 + 0x28), &var_28, 4, &var_38)
    
    if (var_38 s> 0)
        sub_142ab6890(arg1)
    else
        sub_142ab67d0(arg1, &var_28, arg4)
else
    sub_142a5d2d0(arg2 + 8, arg1)

__security_check_cookie(rax_1 ^ &var_58)
return arg1
