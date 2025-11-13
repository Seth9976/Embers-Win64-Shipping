// 函数: sub_141b0f2c0
// 地址: 0x141b0f2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
void** var_2e8
void*** rax_3 = sub_141af81f0(&var_2e8, arg3, arg1)
arg2[0x10].b &= 0xfc
void*** rax_4 = sub_140a82f30(0x2d0, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
*arg2 = rax_4

if (cond:0)
    rax_4 = arg2

sub_141af8030(rax_4, rax_3)
sub_141afd2e0(&var_2e8)
__security_check_cookie(rax_1 ^ &var_308)
return arg2
