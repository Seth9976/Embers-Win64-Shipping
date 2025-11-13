// 函数: sub_142854ca0
// 地址: 0x142854ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
char var_48[0x30]

if (sub_142897c20(&var_48, 0x30) s> 0)
    *(arg1 + 0x7d0) = sub_14288fa60(&var_48, 0x30, *(arg1 + 0x7d0))
    sub_1428b8960(&var_48, 0x30)
    int64_t* rax_4 = sub_1428b8980(*(arg1 + 0x7d0), *(arg1 + 0x7a8), *(arg1 + 0x7b0))
    *(arg1 + 0x7c8) = rax_4
    
    if (rax_4 != 0)
        __security_check_cookie(rax_1 ^ &var_68)
        return 1

__security_check_cookie(rax_1 ^ &var_68)
return 0
