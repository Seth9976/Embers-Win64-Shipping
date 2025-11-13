// 函数: sub_141b0f180
// 地址: 0x141b0f180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6e8
int64_t rax_1 = __security_cookie ^ &var_6e8
void** var_6c8
sub_141a30780(&var_6c8, *(arg1 + 0x60), arg1 + 0x68)
var_6c8 = &data_143058ac8
void var_680
sub_141af65f0(&var_680, arg3)
arg2[0x10].b &= 0xfc
int64_t* rax_2 = sub_140a82f30(0x698, 8)
*arg2 = rax_2
int64_t* rdx_2 = rax_2
char rax_3 = arg2[0x10].b | 1
arg2[0x10].b = rax_3

if ((rax_3 & 2) != 0)
    rdx_2 = arg2

*rdx_2 = &data_142d4b9d8
char var_6c0
rdx_2[1].b = var_6c0
*rdx_2 = &data_142d4ba68
char var_6b8
rdx_2[2].b = var_6b8
int64_t var_6b4
*(rdx_2 + 0x14) = var_6b4
*rdx_2 = &data_142d4c6c8
int64_t var_6a8
rdx_2[4] = var_6a8
rdx_2[5] = 0
int64_t var_6a0
rdx_2[5] = var_6a0
int64_t var_6a0_1 = 0
int32_t var_698
rdx_2[6].d = var_698
int32_t var_694
*(rdx_2 + 0x34) = var_694
var_698.q = 0
int64_t var_690
rdx_2[7] = var_690
int64_t var_688
rdx_2[8] = var_688
*rdx_2 = &data_143058ac8
sub_141af62a0(&rdx_2[9], &var_680)
sub_141afd050(&var_680)

if (var_6a0_1 != 0)
    sub_140a74f90(var_6a0_1)

__security_check_cookie(rax_1 ^ &var_6e8)
return arg2
