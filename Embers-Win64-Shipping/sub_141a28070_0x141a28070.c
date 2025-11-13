// 函数: sub_141a28070
// 地址: 0x141a28070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t* rax_2 = *arg1
int32_t rdi = 0
int64_t var_68
__builtin_memset(&var_68, 0, 0x4c)
int32_t rsi = 4
int32_t var_1c = 4
*arg2 = *rax_2
*(arg2 + 0x48) = 0
memmove(&arg2[2], &var_68, 0x40)
int64_t rcx_2 = *(arg2 + 0x48)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
    rsi = var_1c
    int32_t var_20
    rdi = var_20

int128_t var_30
*(arg2 + 0x48) = var_30:8.q
arg2[0x14] = rdi
arg2[0x15] = rsi
__security_check_cookie(rax_1 ^ &var_88)
return arg2
