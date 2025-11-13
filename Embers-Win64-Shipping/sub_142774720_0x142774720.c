// 函数: sub_142774720
// 地址: 0x142774720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_54 = 0x80
int64_t var_80
__builtin_memset(&var_80, 0, 0x2c)
char var_88 = 0
int64_t var_48 = 0
int32_t var_38 = 0
*arg2 = **arg1
void* rcx_1 = &arg2[4]
arg2[1].b = var_88
arg2[2] = 0
arg2[3] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_4 = *(rcx_1 + 0x10)

if (rax_4 != 0)
    rcx_1 = rax_4

int32_t var_50 = 0xffffffff
int32_t var_4c = 0
int64_t var_40 = 0
*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[8].d = 0xffffffff
*(arg2 + 0x44) = 0
arg2[0xa] = 0
arg2[0xb].d = 0
sub_140780e10(&arg2[2], &var_80)

if (var_40 == 0)
    memmove(&arg2[9], &var_48, 4)

int64_t rcx_4 = arg2[0xa]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg2[0xa] = var_40
arg2[0xb].d = var_38
var_38 = 0
int64_t var_40_1 = 0
int64_t var_78
var_78.d = 0
int32_t var_50_1 = 0xffffffff
int32_t var_4c_1 = 0
int64_t var_70
sub_14059a8e0(&var_70, 0)
int64_t var_60

if (var_60 != 0)
    sub_140a74f90(var_60)

int64_t rcx_8 = var_80

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_a8)
return arg2
