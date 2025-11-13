// 函数: sub_142bd3af0
// 地址: 0x142bd3af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
bool cond:0 = arg1[5].b != 0
int64_t var_40 = arg1[0x926]
int32_t var_20 = 1

if (not(cond:0))
    sub_142bd39e0(arg1, arg1[0x927].d, *(arg1 + 0x493c), arg4, arg5, arg3)

int64_t result_1
sub_142bd3560(arg1, &arg1[2], &result_1, arg2.d, arg2:4.d)
int64_t rax_4 = arg1[1]
(*rax_4)(rax_4, &var_40)
int64_t result = result_1
arg1[0x926] = result
arg1[0x923] = arg2
__security_check_cookie(rax_1 ^ &var_78)
return result
