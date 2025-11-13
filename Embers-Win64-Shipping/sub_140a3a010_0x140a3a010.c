// 函数: sub_140a3a010
// 地址: 0x140a3a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rcx = *arg1
*arg2 = 0
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x2c)
int32_t var_8c = 0x80
int32_t var_88 = 0xffffffff
int32_t var_84
__builtin_memset(&var_84, 0, 0x48)
int32_t var_3c = 0x80
int32_t var_38 = 0xffffffff
int32_t var_34
__builtin_memset(&var_34, 0, 0x1c)
*arg2 = *rcx
*rcx = 0
arg2[1].d = rcx[1].d
*(arg2 + 0xc) = *(rcx + 0xc)
rcx[1] = 0
sub_140a3b380(&arg2[2], &var_b8)
int64_t var_20
var_20.d = 0
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

uint64_t var_68
sub_1407547c0(&var_68, 0)
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

uint64_t rcx_5 = var_68

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t var_70
var_70.d = 0
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

sub_140a42d40(&var_b8, 0)
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t rcx_9 = var_b8

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
