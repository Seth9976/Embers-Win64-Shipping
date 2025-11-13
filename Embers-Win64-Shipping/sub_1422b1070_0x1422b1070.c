// 函数: sub_1422b1070
// 地址: 0x1422b1070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t* rax_2 = *arg1
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int32_t var_4c = 0x80
int32_t var_48 = 0xffffffff
int32_t var_44
__builtin_memset(&var_44, 0, 0x18)
*arg2 = *rax_2
void* rcx_1 = &arg2[6]
__builtin_memset(&arg2[2], 0, 0x14)
*(arg2 + 0x10) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[0xe] = 0xffffffff
arg2[0xf] = 0
*(arg2 + 0x48) = 0
arg2[0x14] = 0
sub_1422b56d0(&arg2[2], &var_78)
int64_t var_38
int64_t rsi = var_38
int64_t var_40

if (rsi == 0)
    memmove(&arg2[0x10], &var_40, 4)
int64_t rcx_4 = *(arg2 + 0x48)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
    rsi = var_38

*(arg2 + 0x48) = rsi
int32_t var_30
arg2[0x14] = var_30
int64_t var_38_1 = 0
var_30 = 0
sub_141fa5d70(&var_78)
__security_check_cookie(rax_1 ^ &var_98)
return arg2
