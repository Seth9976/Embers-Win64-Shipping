// 函数: sub_141a28200
// 地址: 0x141a28200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rdi = 0
int64_t var_38 = 0
int32_t var_30 = 0
int32_t rbp = 4
int32_t var_2c = 4
int32_t rsi = 0
*arg2 = **arg1
arg2[5].q = 0
void var_78
memmove(&arg2[1], &var_78, 0x40)
int64_t rcx_1 = arg2[5].q

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
    rbp = var_2c
    rsi = var_30
    rdi = var_38

arg2[5].q = rdi
*(arg2 + 0x58) = rsi
*(arg2 + 0x5c) = rbp
__security_check_cookie(rax_1 ^ &var_98)
return arg2
