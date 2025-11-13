// 函数: sub_1403bf610
// 地址: 0x1403bf610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_24 = 0
int64_t var_30 = 0
int32_t rbx

if (sub_1403bf470(arg1, arg2, &var_24, &var_30) == 0)
    rbx = 0
else
    int64_t rax_3 = var_30
    rbx = 1
    
    if (rax_3 != arg2)
        rbx.b = arg1[rax_3] == 0

__security_check_cookie(rax_1 ^ &var_58)
return zx.q(rbx)
