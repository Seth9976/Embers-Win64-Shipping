// 函数: sub_141b0eff0
// 地址: 0x141b0eff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char var_c0 = 0
int32_t var_b4 = 0xffffffff
void** const var_c8 = &data_143059f00
int32_t var_b0 = 0
char var_b8 = 0
void** var_a8
sub_141af6d00(&var_a8, arg3 + 0xe8)
arg2[0x10].b &= 0xfc
void*** rax_2 = sub_140a82f30(0xb0, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
*arg2 = rax_2

if (cond:0)
    rax_2 = arg2

rax_2[1].b = var_c0
rax_2[2].b = var_b8
*(rax_2 + 0x14) = var_b4.q
*rax_2 = &data_143059f00
sub_141af6c40(&rax_2[4], &var_a8)
sub_140746700(&var_a8)
__security_check_cookie(rax_1 ^ &var_e8)
return arg2
