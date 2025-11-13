// 函数: sub_142212540
// 地址: 0x142212540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void var_48
int128_t* result = sub_142218b50(&var_48, arg1[1], *arg1[2], *arg1[3])
int128_t* rcx_1 = *arg1
*rcx_1 = *result
rcx_1[1] = result[1]
rcx_1[2] = result[2]
__security_check_cookie(rax_1 ^ &var_68)
return result
