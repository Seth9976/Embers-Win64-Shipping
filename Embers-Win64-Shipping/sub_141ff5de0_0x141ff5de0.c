// 函数: sub_141ff5de0
// 地址: 0x141ff5de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_140d15db0(arg1, arg2)
int32_t var_a8
int32_t var_a8_1 = var_a8 | 0xf
*arg1 = &data_143298378
arg1[5] = 0
arg1[6] = 0
void** var_a0
sub_141f7a080(&var_a0)
int64_t rbx = sx.q(arg1[6].d)
int32_t rax_2 = (rbx + 1).d
arg1[6].d = rax_2

if (rax_2 s> *(arg1 + 0x34))
    sub_140dbc660(&arg1[5])

int32_t* rbx_3 = &arg1[5][rbx * 0x12]
*rbx_3 ^= (*rbx_3 ^ var_a8_1) & 1
int32_t rcx_5 = ((*rbx_3 ^ var_a8_1) & 2) ^ *rbx_3
*rbx_3 = rcx_5
int32_t rdx_4 = ((rcx_5 ^ var_a8_1) & 4) ^ rcx_5
*rbx_3 = rdx_4
*rbx_3 = ((rdx_4 ^ var_a8_1) & 8) ^ rdx_4
sub_141adec50(&rbx_3[2], &var_a0)
int64_t var_20
*(rbx_3 + 0x88) = var_20
int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

var_a0 = &data_142d6a040
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

void var_98
sub_1405ae180(&var_98)
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
