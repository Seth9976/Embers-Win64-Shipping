// 函数: sub_140e44de0
// 地址: 0x140e44de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t* rax_2 = *arg1
int64_t var_40 = 0
int32_t var_30 = 0
int64_t var_78 = 0
*arg2 = *rax_2
void* rcx_1 = &arg2[6]
__builtin_memset(&arg2[2], 0, 0x14)
*(arg2 + 0x10) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)
int64_t var_70 = 0
int64_t var_58 = 0

if (rax_3 != 0)
    rcx_1 = rax_3

int32_t var_50 = 0
int32_t var_4c = 0x80
int64_t var_68 = 0
int64_t var_60 = 0
*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[0xe] = 0xffffffff
arg2[0xf] = 0
*(arg2 + 0x48) = 0
int32_t var_48 = 0xffffffff
arg2[0x14] = 0
int32_t var_44 = 0
int64_t var_38 = 0
sub_140780e10(&arg2[2], &var_78)

if (var_38 == 0)
    memmove(&arg2[0x10], &var_40, 4)

int64_t rcx_4 = *(arg2 + 0x48)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*(arg2 + 0x48) = var_38
arg2[0x14] = var_30
int64_t var_38_1 = 0
var_30 = 0
sub_1405ae100(&var_78)
__security_check_cookie(rax_1 ^ &var_98)
return arg2
