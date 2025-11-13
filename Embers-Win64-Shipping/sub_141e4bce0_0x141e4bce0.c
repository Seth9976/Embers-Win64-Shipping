// 函数: sub_141e4bce0
// 地址: 0x141e4bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rax_2 = *arg1
int64_t var_98
__builtin_memset(&var_98, 0, 0x4c)
int32_t var_4c = 0x80
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int64_t var_38 = 0
int32_t var_30 = 0
*arg2 = *rax_2
void* rcx_1 = &arg2[7]
__builtin_memset(&arg2[1], 0, 0x14)
arg2[2] = 0
arg2[3] = 0
__builtin_memset(&arg2[4], 0, 0x18)
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[0xb].d = 0xffffffff
*(arg2 + 0x5c) = 0
arg2[0xd] = 0
arg2[0xe].d = 0
int64_t var_78
sub_141e51430(&arg2[5], &var_78)
int64_t r14 = var_38
void var_40

if (r14 == 0)
    memmove(&arg2[0xc], &var_40, 4)
int64_t rcx_4 = arg2[0xd]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
    r14 = var_38

arg2[0xd] = r14
arg2[0xe].d = var_30
int32_t var_30_1 = 0
int64_t var_38_1 = 0
sub_141e5bde0(&var_78, 0)
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t rcx_7 = var_78

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t var_88
sub_1409aad70(&var_88)
int64_t rcx_9 = var_98

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
