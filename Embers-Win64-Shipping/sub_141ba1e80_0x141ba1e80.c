// 函数: sub_141ba1e80
// 地址: 0x141ba1e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
void** var_2f8
sub_141a30780(&var_2f8, *(arg1 + 0x60), arg1 + 0x68)
var_2f8 = &data_14306e318
void** var_2b0
sub_1407431a0(&var_2b0, arg3 + 0xe0)
void** var_210
sub_1407431a0(&var_210, arg3 + 0x180)
void** var_170
sub_1407431a0(&var_170, arg3 + 0x220)
void** var_d0
sub_1407431a0(&var_d0, arg3 + 0x2c0)
char rax_2 = *(arg3 + 0xc9)
arg2[0x10].b &= 0xfc
void*** rax_3 = sub_140a82f30(0x2d0, 8)
*arg2 = rax_3
void*** rbx_1 = rax_3
char rax_4 = arg2[0x10].b | 1
arg2[0x10].b = rax_4

if ((rax_4 & 2) != 0)
    rbx_1 = arg2

*rbx_1 = &data_142d4b9d8
char var_2f0
rbx_1[1].b = var_2f0
*rbx_1 = &data_142d4ba68
char var_2e8
rbx_1[2].b = var_2e8
int64_t var_2e4
*(rbx_1 + 0x14) = var_2e4
*rbx_1 = &data_142d4c6c8
int64_t var_2d8
rbx_1[4] = var_2d8
rbx_1[5] = 0
int64_t var_2d0
rbx_1[5] = var_2d0
int64_t var_2d0_1 = 0
int32_t var_2c8
rbx_1[6].d = var_2c8
int32_t var_2c4
*(rbx_1 + 0x34) = var_2c4
var_2c8.q = 0
int64_t var_2c0
rbx_1[7] = var_2c0
int64_t var_2b8
rbx_1[8] = var_2b8
*rbx_1 = &data_14306e318
sub_1405ac0c0(&rbx_1[9], &var_2b0)
sub_1405ac0c0(&rbx_1[0x1d], &var_210)
sub_1405ac0c0(&rbx_1[0x31], &var_170)
sub_1405ac0c0(&rbx_1[0x45], &var_d0)
rbx_1[0x59].b = rax_2
sub_1405aec80(&var_d0)
sub_1405aec80(&var_170)
sub_1405aec80(&var_210)
sub_1405aec80(&var_2b0)

if (var_2d0_1 != 0)
    sub_140a74f90(var_2d0_1)

__security_check_cookie(rax_1 ^ &var_318)
return arg2
