// 函数: sub_1417e3350
// 地址: 0x1417e3350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rax_2 = *(arg2 + 0x20)
int64_t r9
r9.b = rax_2 != 0
*(arg2 + 0x20) = r9 + rax_2
void var_48
int128_t* result = sub_1417db030(arg1, &var_48)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
__security_check_cookie(rax_1 ^ &var_68)
return result
