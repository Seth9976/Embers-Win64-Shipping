// 函数: sub_14181d0f0
// 地址: 0x14181d0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* rax_2 = *(arg2 + 0x10)
void* rcx = arg2 + 0x20

if (rax_2 != 0)
    rcx = rax_2

int64_t var_b8
int64_t* rax_5 = (*arg2)(&var_b8, (*(*rcx + 8))(rcx))
int64_t var_158
sub_1409f5d90(&var_158, rax_5)
int64_t var_108
sub_1409f5d90(&var_108, &rax_5[0xa])
int32_t var_20 = 0
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t var_68
sub_14059ad90(&var_68, 0)
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rcx_7 = var_68

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t var_70 = 0
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

sub_14059ad90(&var_b8, 0)
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t rcx_11 = var_b8

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_141819690(arg1, &var_158, arg3, arg4)
int32_t var_c0 = 0
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

sub_14059ad90(&var_108, 0)
int64_t var_e8

if (var_e8 != 0)
    sub_140a74f90(var_e8)

int64_t rcx_16 = var_108

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int32_t var_110 = 0
int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int64_t result = sub_14059ad90(&var_158, 0)
int64_t var_138

if (var_138 != 0)
    result = sub_140a74f90(var_138)

int64_t rcx_20 = var_158

if (rcx_20 != 0)
    result = sub_140a74f90(rcx_20)

__security_check_cookie(rax_1 ^ &var_178)
return result
