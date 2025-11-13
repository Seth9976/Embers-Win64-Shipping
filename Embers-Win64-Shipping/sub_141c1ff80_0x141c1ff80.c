// 函数: sub_141c1ff80
// 地址: 0x141c1ff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rax_2 = *(arg2 + 0x20)
int64_t r8
r8.b = rax_2 != 0
*(arg2 + 0x20) = r8 + rax_2
void var_d8
sub_1405979f0(arg3, sub_141bf3bc0(&var_d8))
int64_t result = sub_140597700(&var_d8)
__security_check_cookie(rax_1 ^ &var_f8)
return result
