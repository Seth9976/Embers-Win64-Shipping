// 函数: sub_141b0d810
// 地址: 0x141b0d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int128_t zmm0 = *(arg3 + 0xf0)
int64_t zmm1 = *(arg3 + 0x100)
char var_f0 = 0
int32_t var_e4 = 0xffffffff
int32_t var_e0 = 0
char var_e8 = 0
void** const var_f8 = &data_1430512b8
void** var_c0
sub_1407431a0(&var_c0, arg3 + 0x108)
int32_t rcx_1 = *(arg3 + 0x1ac)
char rax_2 = *(arg3 + 0x1a8)
char rax_3 = *(arg3 + 0x1a9)
arg2[0x10].b &= 0xfc
void*** rax_11 = sub_140a82f30(0xe0, 8)
void*** rbx_1 = rax_11
*arg2 = rax_11
char rax_12 = arg2[0x10].b | 1
arg2[0x10].b = rax_12

if ((rax_12 & 2) != 0)
    rbx_1 = arg2

rbx_1[1].b = var_f0
rbx_1[2].b = var_e8
*(rbx_1 + 0x20) = zmm0
*(rbx_1 + 0x14) = var_e4.q
*rbx_1 = &data_1430512b8
rbx_1[6] = zmm1
sub_1405ac0c0(&rbx_1[7], &var_c0)
*(rbx_1 + 0xdc) &= 0xfffffff8
rbx_1[0x1b].b = rax_2
*(rbx_1 + 0xd9) = rax_3
int32_t var_1c
*(rbx_1 + 0xdc) |= (((((rcx_1 u>> 2 & 1) * 2) | (rcx_1 u>> 1 & 1)) * 2) | (zx.d(rcx_1.b) & 1)
    | (var_1c & 0xfffffff8)) & 7
sub_1405aec80(&var_c0)
__security_check_cookie(rax_1 ^ &var_118)
return arg2
