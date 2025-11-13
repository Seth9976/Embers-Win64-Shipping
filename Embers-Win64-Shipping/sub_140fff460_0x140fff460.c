// 函数: sub_140fff460
// 地址: 0x140fff460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t* rax_2 = *arg1
int64_t rdi = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x24)
int32_t rbp = 4
int32_t rsi = 0
int32_t var_24 = 4
*arg2 = *rax_2
arg2[1].d = 0
arg2[4] = 0
int128_t var_40
memmove(&arg2[2], &var_40, 0x10)
int64_t rcx_2 = arg2[4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
    rbp = var_24
    int32_t var_28
    rsi = var_28
    int64_t var_30
    rdi = var_30

arg2[4] = rdi
arg2[5].d = rsi
*(arg2 + 0x2c) = rbp
__security_check_cookie(rax_1 ^ &var_68)
return arg2
