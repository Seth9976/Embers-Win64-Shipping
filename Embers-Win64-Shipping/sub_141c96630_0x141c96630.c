// 函数: sub_141c96630
// 地址: 0x141c96630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void var_138
sub_141c93490(&var_138, **arg1, arg1[1] + 0xd0, arg2)
int32_t var_148 = 6
int512_t zmm1 = sub_141cb4090(&var_138, &var_148, arg2)
int512_t zmm1_1 = sub_141cb2c90(arg1[1], &var_138, zmm1)
*arg1[2] = 0
int64_t result = sub_141c94860(&var_138, zmm1_1)
__security_check_cookie(rax_1 ^ &var_168)
return result
