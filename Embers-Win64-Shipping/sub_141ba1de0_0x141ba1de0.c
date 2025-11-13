// 函数: sub_141ba1de0
// 地址: 0x141ba1de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4e8
int64_t rax_1 = __security_cookie ^ &var_4e8
void** var_4c8
void*** rax_3 = sub_141b7b5e0(&var_4c8, arg3, arg1)
arg2[0x10].b &= 0xfc
void*** rax_4 = sub_140a82f30(0x4b0, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
*arg2 = rax_4

if (cond:0)
    rax_4 = arg2

sub_141b7b230(rax_4, rax_3)
sub_141b84560(&var_4c8)
__security_check_cookie(rax_1 ^ &var_4e8)
return arg2
