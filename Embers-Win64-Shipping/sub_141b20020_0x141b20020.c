// 函数: sub_141b20020
// 地址: 0x141b20020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6a8
int64_t rax_1 = __security_cookie ^ &var_6a8
char var_680 = 0
int32_t var_674 = 0xffffffff
int32_t var_670 = 0
char var_678 = 0
void** const var_688 = &data_143051628
void var_668
sub_141af65f0(&var_668, arg1)
arg2[0x10].b &= 0xfc
void*** rax_2 = sub_140a82f30(0x670, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
*arg2 = rax_2

if (cond:0)
    rax_2 = arg2

*rax_2 = &data_142d4b9d8
rax_2[1].b = var_680
*rax_2 = &data_142d4ba68
rax_2[2].b = var_678
*(rax_2 + 0x14) = var_674.q
*rax_2 = &data_143051628
sub_141af62a0(&rax_2[4], &var_668)
sub_141afd050(&var_668)
__security_check_cookie(rax_1 ^ &var_6a8)
return arg2
