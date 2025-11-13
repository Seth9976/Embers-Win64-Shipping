// 函数: sub_1419f4250
// 地址: 0x1419f4250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int128_t* rax_2 = *arg1
int64_t* rcx = arg2 + 0x28
int64_t var_40 = 0
int32_t var_30 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x18)
int64_t var_58 = 0
*arg2 = *rax_2
int32_t var_50 = 0
arg2[1].q = rax_2[1].q
*(arg2 + 0x18) = 0
arg2[2].q = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_3 = rcx[2]
int32_t var_4c = 0x80

if (rax_3 != 0)
    rcx = rax_3

int64_t var_60 = 0
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int64_t var_38 = 0
*rcx = 0
rcx[1] = 0
*(arg2 + 0x48) = 0xffffffff
*(arg2 + 0x4c) = 0
*(arg2 + 0x58) = 0
arg2[6].d = 0
sub_140780e10(arg2 + 0x18, &var_78)

if (var_38 == 0)
    memmove(&arg2[5], &var_40, 4)

int64_t rcx_3 = *(arg2 + 0x58)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*(arg2 + 0x58) = var_38
arg2[6].d = var_30
var_30 = 0
int64_t var_38_1 = 0
int64_t var_70
var_70.d = 0
int32_t var_48_1 = 0xffffffff
int32_t var_44_1 = 0
int64_t var_68
sub_14059a8e0(&var_68, 0)

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t rcx_7 = var_78

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_98)
return arg2
