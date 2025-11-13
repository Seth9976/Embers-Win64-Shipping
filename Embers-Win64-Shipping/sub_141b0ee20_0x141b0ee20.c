// 函数: sub_141b0ee20
// 地址: 0x141b0ee20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rax_2 = *(arg1 + 0x88)
void** const var_108 = &data_143058198
char var_100 = 0
int32_t var_f4 = 0xffffffff
int32_t var_f0 = 0
char var_f8 = 0
void** var_e0
sub_141af7690(&var_e0, arg3 + 0xe0)
arg2[0x10].b &= 0xfc
void*** rax_3 = sub_140a82f30(0xe8, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
*arg2 = rax_3

if (cond:0)
    rax_3 = arg2

rax_3[1].b = var_100
rax_3[2].b = var_f8
*(rax_3 + 0x14) = var_f4.q
rax_3[4].d = rax_2
*rax_3 = &data_143058198
sub_141af7540(&rax_3[5], &var_e0)
sub_141afd490(&var_e0)
__security_check_cookie(rax_1 ^ &var_128)
return arg2
