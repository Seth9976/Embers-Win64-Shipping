// 函数: sub_141fd6ac0
// 地址: 0x141fd6ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
__builtin_memset(arg1, 0, 0x1d)
int32_t rdx = 0
int64_t var_28 = 0
int32_t var_20 = 0

if (*(arg1 + 0x14) != 3)
    sub_1405dadb0(&arg1[1], 3)
    rdx = arg1[2].d

arg1[2].d = rdx + 3

if (rdx + 3 s> *(arg1 + 0x14))
    sub_1406105e0(&arg1[1])

int32_t* rcx_2 = arg1[1]
arg1[3].d = 0x30101
*arg1 = 0
*rcx_2 = var_28.d
*(arg1[1] + 4) = var_28:4.d
*(arg1[1] + 8) = var_20
__security_check_cookie(rax_1 ^ &var_48)
return arg1
