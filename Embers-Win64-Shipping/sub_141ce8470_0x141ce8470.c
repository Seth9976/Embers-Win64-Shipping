// 函数: sub_141ce8470
// 地址: 0x141ce8470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t rdx = data_143a1c6c0
int64_t rdi = 0
int32_t rax_2 = data_143a1c6b8
int32_t r14 = 2
int32_t var_48 = rdx
int32_t rbp = 0
int64_t var_30 = 0
int32_t var_28 = 0
int32_t var_24 = 2
int32_t var_44 = rax_2
int64_t var_40 = 0
*arg2 = **arg1
arg2[2] = rdx
arg2[3] = rax_2
*(arg2 + 0x10) = 0
*(arg2 + 0x20) = 0
void var_38
memmove(&arg2[6], &var_38, 8)
int64_t rcx_2 = *(arg2 + 0x20)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
    r14 = var_24
    rbp = var_28
    rdi = var_30

*(arg2 + 0x20) = rdi
arg2[0xa] = rbp
arg2[0xb] = r14
__security_check_cookie(rax_1 ^ &var_68)
return arg2
