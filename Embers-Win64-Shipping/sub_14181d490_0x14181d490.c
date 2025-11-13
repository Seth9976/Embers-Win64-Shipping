// 函数: sub_14181d490
// 地址: 0x14181d490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rax_2 = *(arg2 + 0x10)
void* rcx = arg2 + 0x20

if (rax_2 != 0)
    rcx = rax_2

void var_78
char* rax_5 = (*arg2)(&var_78, (*(*rcx + 8))(rcx))
char var_d8 = *rax_5
int64_t var_d0 = *(rax_5 + 8)
int64_t var_c8
sub_1409f5d90(&var_c8, &rax_5[0x10])
int32_t var_20 = 0
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t var_68
sub_14059ad90(&var_68, 0)
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rcx_8 = var_68

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_1418198c0(arg1, &var_d8, arg3, arg4)
int32_t var_80 = 0
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_14059ad90(&var_c8, 0)
int64_t var_a8

if (var_a8 != 0)
    result = sub_140a74f90(var_a8)

int64_t rcx_13 = var_c8

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

__security_check_cookie(rax_1 ^ &var_f8)
return result
