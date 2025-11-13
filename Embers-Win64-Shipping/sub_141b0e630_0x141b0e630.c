// 函数: sub_141b0e630
// 地址: 0x141b0e630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
char var_f0 = 0
int32_t var_e4 = 0xffffffff
void** const var_f8 = &data_143055a58
int32_t var_e0 = 0
char var_e8 = 0
void** var_d8
sub_1407431a0(&var_d8, arg3 + 0xe0)
int32_t var_28
int32_t rcx_2 = *(arg3 + 0x190) ^ var_28
int128_t zmm0 = *(arg3 + 0x180)
arg2[0x10].b &= 0xfc
int64_t* rax_4 = sub_140a82f30(0xd8, 8)
*arg2 = rax_4
int64_t* rbx_1 = rax_4
char rax_5 = arg2[0x10].b | 1
arg2[0x10].b = rax_5

if ((rax_5 & 2) != 0)
    rbx_1 = arg2

rbx_1[1].b = var_f0
rbx_1[2].b = var_e8
*(rbx_1 + 0x14) = var_e4.q
*rbx_1 = &data_143055a58
sub_1405ac0c0(&rbx_1[4], &var_d8)
rbx_1[0x1a].d &= 0xfffffffe
rbx_1[0x1a].d |= (var_28 ^ (rcx_2 & 1)) & 1
*(rbx_1 + 0xc0) = zmm0
sub_1405aec80(&var_d8)
__security_check_cookie(rax_1 ^ &var_118)
return arg2
