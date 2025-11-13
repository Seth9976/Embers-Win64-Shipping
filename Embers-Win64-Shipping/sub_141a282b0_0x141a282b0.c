// 函数: sub_141a282b0
// 地址: 0x141a282b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rax_2 = *arg1
int64_t rdi = 0
int64_t var_38 = 0
int32_t var_30 = 0
int32_t rbp = 4
int32_t var_2c = 4
int32_t rsi = 0
*arg2 = *rax_2
arg2[1].d = rax_2[1].d
arg2[6] = 0
void var_58
memmove(&arg2[2], &var_58, 0x20)
int64_t rcx_1 = arg2[6]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
    rbp = var_2c
    rsi = var_30
    rdi = var_38

arg2[6] = rdi
arg2[7].d = rsi
*(arg2 + 0x3c) = rbp
__security_check_cookie(rax_1 ^ &var_78)
return arg2
