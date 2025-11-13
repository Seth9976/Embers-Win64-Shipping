// 函数: sub_140b0e8d0
// 地址: 0x140b0e8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
wchar16 var_38[0x10]

if (sub_140b2b020(arg1, arg2, &var_38, 0x10, 1) == 0)
    __security_check_cookie(rax_1 ^ &var_68)
    return 0

*arg3 = sub_140b16cc0(&var_38)
__security_check_cookie(rax_1 ^ &var_68)
return 1
