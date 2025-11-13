// 函数: sub_141b20a50
// 地址: 0x141b20a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
char var_e0 = 0
int32_t var_d4 = 0xffffffff
int32_t var_d0 = 0
char var_d8 = 0
void** const var_e8 = &data_143058110
void** var_c8
sub_141af70a0(&var_c8, arg1 + 0xe0)
arg2[0x10].b &= 0xfc
var_c8 = &data_143057da0
void*** rax_2 = sub_140a82f30(0xb8, 8)
arg2[0x10].b |= 1
void*** rbx = rax_2

if ((arg2[0x10].b & 2) != 0)
    rbx = arg2

*arg2 = rax_2
rbx[2].b = var_d8
*(rbx + 0x14) = var_d4.q
rbx[1].b = var_e0
*rbx = &data_143058110
sub_141af6fe0(&rbx[4], &var_c8)
rbx[4] = &data_143057da0
sub_141afd270(&var_c8)
__security_check_cookie(rax_1 ^ &var_108)
return arg2
