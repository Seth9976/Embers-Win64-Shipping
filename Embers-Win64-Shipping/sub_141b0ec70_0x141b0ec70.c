// 函数: sub_141b0ec70
// 地址: 0x141b0ec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void** var_138
sub_141a30780(&var_138, *(arg1 + 0x60), arg1 + 0x68)
var_138 = &data_143057380
void** var_f0
sub_141af7690(&var_f0, arg3 + 0xe0)
arg2[0x10].b &= 0xfc
int64_t* rax_2 = sub_140a82f30(0x108, 8)
*arg2 = rax_2
int64_t* rdx_2 = rax_2
char rax_3 = arg2[0x10].b | 1
arg2[0x10].b = rax_3

if ((rax_3 & 2) != 0)
    rdx_2 = arg2

*rdx_2 = &data_142d4b9d8
char var_130
rdx_2[1].b = var_130
*rdx_2 = &data_142d4ba68
char var_128
rdx_2[2].b = var_128
int64_t var_124
*(rdx_2 + 0x14) = var_124
*rdx_2 = &data_142d4c6c8
int64_t var_118
rdx_2[4] = var_118
rdx_2[5] = 0
int64_t var_110
rdx_2[5] = var_110
int64_t var_110_1 = 0
int32_t var_108
rdx_2[6].d = var_108
int32_t var_104
*(rdx_2 + 0x34) = var_104
var_108.q = 0
int64_t var_100
rdx_2[7] = var_100
int64_t var_f8
rdx_2[8] = var_f8
*rdx_2 = &data_143057380
sub_141af7540(&rdx_2[9], &var_f0)
sub_141afd490(&var_f0)

if (var_110_1 != 0)
    sub_140a74f90(var_110_1)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
