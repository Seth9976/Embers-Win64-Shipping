// 函数: sub_140b90670
// 地址: 0x140b90670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rax_2 = *arg1
int64_t var_78 = 0
int64_t var_70 = 0
int64_t var_58 = 0
*arg2 = *rax_2
void* rcx_1 = &arg2[3]
__builtin_memset(&arg2[1], 0, 0x14)
arg2[2] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)
int32_t var_50 = 0
int32_t var_4c = 0x80

if (rax_3 != 0)
    rcx_1 = rax_3

int64_t var_68 = 0
int64_t var_60 = 0
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[7].d = 0xffffffff
*(arg2 + 0x3c) = 0
arg2[9] = 0
arg2[0xa].d = 0
int64_t var_38 = 0
int32_t var_30 = 0
sub_140780e10(&arg2[1], &var_78)
void var_40

if (var_38 == 0)
    memmove(&arg2[8], &var_40, 4)
int64_t rcx_4 = arg2[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg2[9] = var_38
arg2[0xa].d = var_30
int32_t var_30_1 = 0
int64_t var_38_1 = 0
var_70.d = 0
int32_t var_48_1 = 0xffffffff
int32_t var_44_1 = 0
sub_14059a8e0(&var_68, 0)

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t rcx_8 = var_78

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_98)
return arg2
