// 函数: sub_141b0da40
// 地址: 0x141b0da40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void** var_f8
void*** rax_3 = sub_141af6ec0(&var_f8, arg3, arg1)
arg2[0x10].b &= 0xfc
void*** rax_4 = sub_140a82f30(0xd8, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
*arg2 = rax_4

if (cond:0)
    rax_4 = arg2

sub_141af6e20(rax_4, rax_3)
void** var_b0
sub_140746700(&var_b0)
int64_t var_d0

if (var_d0 != 0)
    sub_140a74f90(var_d0)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
