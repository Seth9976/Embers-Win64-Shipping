// 函数: sub_141fd6a20
// 地址: 0x141fd6a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
__builtin_memset(arg1, 0, 0x1d)
int32_t rdx = 0
int32_t var_28 = 0

if (*(arg1 + 0x14) != 1)
    sub_1405dadb0(&arg1[1], 1)
    rdx = arg1[2].d

arg1[2].d = rdx + 1

if (rdx + 1 s> *(arg1 + 0x14))
    sub_1406105e0(&arg1[1])

int32_t* rcx_2 = arg1[1]
arg1[3].d = 0x10101
*arg1 = 0
*rcx_2 = var_28
__security_check_cookie(rax_1 ^ &var_48)
return arg1
