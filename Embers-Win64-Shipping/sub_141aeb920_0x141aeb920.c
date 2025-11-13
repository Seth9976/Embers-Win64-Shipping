// 函数: sub_141aeb920
// 地址: 0x141aeb920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rax_2 = *arg1
int64_t rbx = 0
int64_t var_58
__builtin_memset(&var_58, 0, 0x40)
int32_t rsi = 2
int64_t var_20
var_20:4.d = 2
*arg2 = *rax_2
*(arg2 + 9) = 0
arg2[7] = 0
int64_t var_50
memmove(&arg2[2], &var_50, 0x28)
int64_t rcx_2 = arg2[7]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
    rsi = var_20:4.d
    int64_t var_28
    rbx = var_28

arg2[7] = rbx
arg2[8].d = var_20.d
*(arg2 + 0x44) = rsi
__security_check_cookie(rax_1 ^ &var_78)
return arg2
