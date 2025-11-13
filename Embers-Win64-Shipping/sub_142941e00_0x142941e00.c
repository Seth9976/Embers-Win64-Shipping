// 函数: sub_142941e00
// 地址: 0x142941e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x190)
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
char var_58
sub_1428c8f90(arg2, 0x20, &var_58)
var_58 &= 0xf8
char var_39
char var_39_1 = (var_39 & 0x3f) | 0x40
void var_f8
sub_142945ea0(&var_f8, &var_58)
char var_178
void var_a8
sub_142942950(&var_178, &var_a8)
void var_128
sub_142942bd0(&var_128, &var_f8, &var_178)
void var_150
void var_d0
sub_142942bd0(&var_150, &var_d0, &var_178)
sub_1429444b0(arg1, &var_150)
sub_1429444b0(&var_178, &var_128)
arg1[0x1f] ^= var_178 << 7
int64_t result = sub_1428b8960(&var_58, 0x40)
__security_check_cookie(rax_1 ^ &var_198)
return result
