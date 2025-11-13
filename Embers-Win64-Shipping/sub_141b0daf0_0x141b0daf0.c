// 函数: sub_141b0daf0
// 地址: 0x141b0daf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void** var_108
sub_141a30780(&var_108, *(arg1 + 0x60), arg1 + 0x68)
var_108 = &data_143058938
void** var_c0
sub_141af70a0(&var_c0, arg3 + 0xe0)
arg2[0x10].b &= 0xfc
int64_t* rax_2 = sub_140a82f30(0xe0, 8)
*arg2 = rax_2
int64_t* rdx_2 = rax_2
char rax_3 = arg2[0x10].b | 1
arg2[0x10].b = rax_3

if ((rax_3 & 2) != 0)
    rdx_2 = arg2

*rdx_2 = &data_142d4b9d8
char var_100
rdx_2[1].b = var_100
*rdx_2 = &data_142d4ba68
char var_f8
rdx_2[2].b = var_f8
int64_t var_f4
*(rdx_2 + 0x14) = var_f4
*rdx_2 = &data_142d4c6c8
int64_t var_e8
rdx_2[4] = var_e8
rdx_2[5] = 0
int64_t var_e0
rdx_2[5] = var_e0
int64_t var_e0_1 = 0
int32_t var_d8
rdx_2[6].d = var_d8
int32_t var_d4
*(rdx_2 + 0x34) = var_d4
var_d8.q = 0
int64_t var_d0
rdx_2[7] = var_d0
int64_t var_c8
rdx_2[8] = var_c8
*rdx_2 = &data_143058938
sub_141af6fe0(&rdx_2[9], &var_c0)
sub_141afd270(&var_c0)

if (var_e0_1 != 0)
    sub_140a74f90(var_e0_1)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
