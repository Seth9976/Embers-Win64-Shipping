// 函数: sub_1405b7220
// 地址: 0x1405b7220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
void** var_428
void*** rax_3 = sub_1405abd70(&var_428, arg3, arg1)
arg2[0x10].b &= 0xfc
void*** rax_4 = sub_140a82f30(0x410, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
*arg2 = rax_4

if (cond:0)
    rax_4 = arg2

sub_1405abaa0(rax_4, rax_3)
sub_1405aeb20(&var_428)
__security_check_cookie(rax_1 ^ &var_448)
return arg2
