// 函数: sub_142b9f3a0
// 地址: 0x142b9f3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2450)
void var_2468
int64_t rax_1 = __security_cookie ^ &var_2468
int64_t rbx = **(arg1 + 8)
int64_t var_23e8
memset(&var_23e8, 0, 0x1180)
var_23e8 = rbx
int128_t var_2438
memset(&var_2438, 0, 0x50)
int64_t* var_2428 = &var_23e8
int32_t rax_4 = sub_142ba6290(&var_2438, arg1, *(arg2 + 8), arg4, arg5)
__builtin_memset(&var_2438, 0, 0x18)
sub_142ba2760(&var_23e8)
__security_check_cookie(rax_1 ^ &var_2468)
return zx.q(rax_4)
