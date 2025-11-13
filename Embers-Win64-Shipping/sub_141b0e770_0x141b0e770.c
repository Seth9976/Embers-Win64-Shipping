// 函数: sub_141b0e770
// 地址: 0x141b0e770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void** var_118
sub_141a30780(&var_118, *(arg1 + 0x60), arg1 + 0x68)
var_118 = &data_1430588e8
void** var_d0
sub_1407431a0(&var_d0, arg3 + 0xe0)
char rax_2 = *(arg3 + 0xc9)
arg2[0x10].b &= 0xfc
void*** rax_3 = sub_140a82f30(0xf0, 8)
*arg2 = rax_3
void*** rbx_1 = rax_3
char rax_4 = arg2[0x10].b | 1
arg2[0x10].b = rax_4

if ((rax_4 & 2) != 0)
    rbx_1 = arg2

*rbx_1 = &data_142d4b9d8
char var_110
rbx_1[1].b = var_110
*rbx_1 = &data_142d4ba68
char var_108
rbx_1[2].b = var_108
int64_t var_104
*(rbx_1 + 0x14) = var_104
*rbx_1 = &data_142d4c6c8
int64_t var_f8
rbx_1[4] = var_f8
rbx_1[5] = 0
int64_t var_f0
rbx_1[5] = var_f0
int64_t var_f0_1 = 0
int32_t var_e8
rbx_1[6].d = var_e8
int32_t var_e4
*(rbx_1 + 0x34) = var_e4
var_e8.q = 0
int64_t var_e0
rbx_1[7] = var_e0
int64_t var_d8
rbx_1[8] = var_d8
*rbx_1 = &data_1430588e8
sub_1405ac0c0(&rbx_1[9], &var_d0)
rbx_1[0x1d].b = rax_2
sub_1405aec80(&var_d0)

if (var_f0_1 != 0)
    sub_140a74f90(var_f0_1)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
