// 函数: sub_141a28140
// 地址: 0x141a28140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int128_t* rax_2 = *arg1
int32_t rdi = 0
int64_t var_38
__builtin_memset(&var_38, 0, 0x1c)
int32_t rsi = 1
int32_t var_1c = 1
*arg2 = *rax_2
arg2[1].b = 0
arg2[2].q = 0
int128_t var_30
memmove(arg2 + 0x18, &var_30, 8)
int64_t rcx_1 = arg2[2].q

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
    rsi = var_1c
    int32_t var_20
    rdi = var_20

arg2[2].q = var_30:8.q
*(arg2 + 0x28) = rdi
*(arg2 + 0x2c) = rsi
__security_check_cookie(rax_1 ^ &var_58)
return arg2
