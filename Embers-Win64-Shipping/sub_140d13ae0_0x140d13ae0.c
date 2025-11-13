// 函数: sub_140d13ae0
// 地址: 0x140d13ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rax_2 = *arg1
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int32_t var_4c = 0x80
int32_t var_48 = 0xffffffff
int32_t var_44
__builtin_memset(&var_44, 0, 0x18)
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
sub_140d16650(&arg2[1], &var_78)
int64_t var_38
int64_t r14 = var_38
int64_t var_40

if (r14 == 0)
    memmove(&arg2[8], &var_40, 4)
int64_t rcx_4 = arg2[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
    r14 = var_38

arg2[9] = r14
int32_t var_30
arg2[0xa].d = var_30
var_30 = 0
int64_t var_38_1 = 0
sub_1407ece30(&var_78, 0)
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t rcx_7 = var_78

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_98)
return arg2
