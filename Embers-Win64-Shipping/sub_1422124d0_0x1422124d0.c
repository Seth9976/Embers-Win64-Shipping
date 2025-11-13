// 函数: sub_1422124d0
// 地址: 0x1422124d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void var_48
int128_t* result = sub_14226bee0(&var_48, arg2)
int128_t* rcx_1 = *arg1
*rcx_1 = *result
rcx_1[1] = result[1]
rcx_1[2] = result[2]
__security_check_cookie(rax_1 ^ &var_68)
return result
