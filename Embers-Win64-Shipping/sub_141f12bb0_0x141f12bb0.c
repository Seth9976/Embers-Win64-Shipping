// 函数: sub_141f12bb0
// 地址: 0x141f12bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void var_48
sub_141f12c10(arg1, &var_48, arg3, arg4)
float var_28[0x4]
*arg2 = var_28[0]
float temp0[0x4] = _mm_shuffle_ps(var_28, var_28, 0x55)
arg2[2] = _mm_shuffle_ps(var_28, var_28, 0xaa)[0]
arg2[1] = temp0[0]
__security_check_cookie(rax_1 ^ &var_68)
return arg2
