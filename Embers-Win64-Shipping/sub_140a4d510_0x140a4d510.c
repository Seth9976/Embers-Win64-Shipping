// 函数: sub_140a4d510
// 地址: 0x140a4d510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c68
uint64_t var_28 = __security_cookie ^ &var_c68
uint64_t result

if (arg3 == 0 || arg4 == 0)
    result.b = 0
else
    char var_c48[0xc20]
    sub_140a3bea0(&var_c48)
    sub_140b71650(arg2, &var_c48)
    result = sub_140a548a0(&var_c48, arg3, arg4)

__security_check_cookie(var_28 ^ &var_c68)
return result
