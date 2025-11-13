// 函数: sub_141b0f360
// 地址: 0x141b0f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void** var_108
sub_141af6ec0(&var_108, arg3, arg1)
arg2[0x10].b &= 0xfc
var_108 = &data_143059fa8
void*** rax_3 = sub_140a82f30(0xd8, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
void*** rbx = rax_3
*arg2 = rax_3

if (cond:0)
    rbx = arg2

*rbx = &data_142d4b9d8
char var_100
rbx[1].b = var_100
*rbx = &data_142d4ba68
char var_f8
rbx[2].b = var_f8
int64_t var_f4
*(rbx + 0x14) = var_f4
*rbx = &data_142d4c6c8
int64_t var_e8
rbx[4] = var_e8
rbx[5] = 0
int64_t var_e0
rbx[5] = var_e0
int64_t var_e0_1 = 0
int32_t var_d8
rbx[6].d = var_d8
int32_t var_d4
*(rbx + 0x34) = var_d4
var_d8.q = 0
int64_t var_d0
rbx[7] = var_d0
int64_t var_c8
rbx[8] = var_c8
*rbx = &data_143058898
void** var_c0
sub_141af6c40(&rbx[9], &var_c0)
*rbx = &data_143059fa8
sub_140746700(&var_c0)

if (var_e0_1 != 0)
    sub_140a74f90(var_e0_1)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
