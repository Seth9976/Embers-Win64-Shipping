// 函数: sub_141b070f0
// 地址: 0x141b070f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rbx = *(arg1 + 8)
char rax_2 = sub_141a2b090(rbx, arg3)
void** const var_b8 = &data_14305db20
int64_t var_a8
sub_1405ac3f0(&var_a8, rbx)
arg2[4].b &= 0xfc
void*** rax_3 = sub_140a82f30(0x88, 8)
arg2[4].b |= 1
bool cond:0 = (arg2[4].b & 2) != 0
void*** rcx_2 = rax_3
*arg2 = rax_3

if (cond:0)
    rcx_2 = arg2

*rcx_2 = &data_14305db20
rcx_2[1].b = rax_2
sub_1405ac2f0(&rcx_2[2], &var_a8)
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int32_t var_60 = 0
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_1405b8a50(&var_a8, 0)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_8 = var_a8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
