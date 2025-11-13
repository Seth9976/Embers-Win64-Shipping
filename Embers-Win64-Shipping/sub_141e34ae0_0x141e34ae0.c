// 函数: sub_141e34ae0
// 地址: 0x141e34ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_4c = 0x80
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int64_t var_40 = 0
int32_t var_30 = 0
*arg2 = **arg1
void* rcx_1 = &arg2[7]
__builtin_memset(&arg2[1], 0, 0x14)
arg2[2] = 0
arg2[3] = 0
__builtin_memset(&arg2[4], 0, 0x18)
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int64_t var_38 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x20)
*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[0xb].d = 0xffffffff
*(arg2 + 0x5c) = 0
arg2[0xd] = 0
arg2[0xe].d = 0
sub_140780e10(&arg2[5], &var_78)

if (var_38 == 0)
    memmove(&arg2[0xc], &var_40, 4)

int64_t rcx_4 = arg2[0xd]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg2[0xd] = var_38
arg2[0xe].d = var_30
var_30 = 0
int64_t var_38_1 = 0
sub_1405ae180(&var_78)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_7 = var_98

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
