// 函数: sub_142b44810
// 地址: 0x142b44810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
void var_38
int32_t* rax_2

if (arg2 == 8)
    rax_2 = sub_142b45ab0(&var_38)
    *arg1 = *rax_2
    arg1[1] = *(rax_2 + 0x10)
else if (arg2 == 9)
    sub_142b45d10(arg1)
else
    if (arg2 == 0xa)
        rax_2 = sub_142b457c0(&var_38, 0)
    else
        if (arg2 != 0xb)
            abort()
            noreturn
        
        rax_2 = sub_142b457c0(&var_38, 1)
    
    *arg1 = *rax_2
    arg1[1] = *(rax_2 + 0x10)
__security_check_cookie(rax_1 ^ &var_58)
return arg1
