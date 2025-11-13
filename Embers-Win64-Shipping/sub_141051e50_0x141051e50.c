// 函数: sub_141051e50
// 地址: 0x141051e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rdi = **(arg1 + 0x20)
void var_88
void*** rax_2 = sub_141021860(rdi + 0x220, arg3, &var_88)

if (rax_2 == 0)
    rax_2 = sub_141019460(rdi + 0x220, arg3, &var_88)
    *arg2 = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
else
    *arg2 = rax_2
    rax_2[1].d += 1

__security_check_cookie(rax_1 ^ &var_a8)
return arg2
