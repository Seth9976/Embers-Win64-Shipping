// 函数: sub_141b25f60
// 地址: 0x141b25f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int128_t zmm0 = *arg3
int64_t rsi = 0
arg2[1].d = 0xffffffff
*(arg2 + 0x14) = 0
*arg2 = zmm0
*(arg2 + 0x48) = 0
int32_t r14 = 4
int128_t var_88 = zmm0
int32_t var_78 = 0xffffffff
char var_74 = 0
int64_t var_40 = 0
int32_t rbp = 0
int32_t var_38 = 0
int32_t var_34 = 4
void var_70
memmove(arg2 + 0x18, &var_70, 0x30)
int64_t rcx_1 = *(arg2 + 0x48)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
    r14 = var_34
    rbp = var_38
    rsi = var_40

*(arg2 + 0x48) = rsi
arg2[5].d = rbp
*(arg2 + 0x54) = r14
*(arg2 + 0x58) = 1
__security_check_cookie(rax_1 ^ &var_a8)
return arg2
