// 函数: sub_141b0ef10
// 地址: 0x141b0ef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char var_d0 = 0
int32_t var_c4 = 0xffffffff
void** const var_d8 = &data_143059b70
int32_t var_c0 = 0
char var_c8 = 0
void** var_b8
sub_1407431a0(&var_b8, arg3 + 0xe0)
arg2[0x10].b &= 0xfc
void*** rax_2 = sub_140a82f30(0xc0, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
*arg2 = rax_2

if (cond:0)
    rax_2 = arg2

rax_2[1].b = var_d0
rax_2[2].b = var_c8
*(rax_2 + 0x14) = var_c4.q
*rax_2 = &data_143059b70
sub_1405ac0c0(&rax_2[4], &var_b8)
sub_1405aec80(&var_b8)
__security_check_cookie(rax_1 ^ &var_f8)
return arg2
