// 函数: sub_14185e9d0
// 地址: 0x14185e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* rax_2 = *(arg2 + 0x10)
void* rcx = arg2 + 0x20

if (rax_2 != 0)
    rcx = rax_2

int64_t var_158
int64_t var_b8
sub_14185f3f0(&var_158, (*arg2)(&var_b8, (*(*rcx + 8))(rcx)))
void var_68
sub_140f23e90(&var_68)
int32_t var_70 = 0
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int32_t var_b0 = 0
int32_t var_ac

if (var_ac != 0)
    sub_140638cc0(&var_b8, 0)

int32_t var_88 = 0xffffffff
int32_t var_84 = 0
void var_a8
sub_14059a8e0(&var_a8, 0)
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t rcx_8 = var_b8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_14185b830(arg1, &var_158, arg3, arg4)
void var_108
sub_140f23e90(&var_108)
int32_t var_110 = 0
int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int32_t var_150 = 0
int32_t var_14c

if (var_14c != 0)
    sub_140638cc0(&var_158, 0)

int32_t var_128 = 0xffffffff
int32_t var_124 = 0
void var_148
void* result = sub_14059a8e0(&var_148, 0)
int64_t var_138

if (var_138 != 0)
    result = sub_140a74f90(var_138)

int64_t rcx_15 = var_158

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_178)
return result
