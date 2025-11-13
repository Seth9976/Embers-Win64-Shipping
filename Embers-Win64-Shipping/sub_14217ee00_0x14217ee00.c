// 函数: sub_14217ee00
// 地址: 0x14217ee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rax_2 = *arg1
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int128_t var_58
__builtin_memset(&var_58, 0, 0x24)
*arg2 = *rax_2
void* rcx_1 = &arg2[3]
__builtin_memset(&arg2[1], 0, 0x14)
arg2[2] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[7].d = 0xffffffff
*(arg2 + 0x3c) = 0
arg2[9] = 0
arg2[0xa].d = 0
sub_142182bc0(&arg2[1], &var_a8)
int64_t r14 = var_68
void var_70

if (r14 == 0)
    memmove(&arg2[8], &var_70, 4)
int64_t rcx_4 = arg2[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
    r14 = var_68

arg2[9] = r14
arg2[0xa].d = var_60
arg2[0xb].d = var_58.d
*(arg2 + 0x5c) = var_58:4.d
arg2[0xc].d = var_58:8.d
*(arg2 + 0x64) = var_58:0xc.d
__builtin_memset(&arg2[0xd], 0, 0x14)
int64_t var_68_1 = 0
int32_t var_60_1 = 0
sub_14218cad0(&var_a8, 0)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_7 = var_a8

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_c8)
return arg2
