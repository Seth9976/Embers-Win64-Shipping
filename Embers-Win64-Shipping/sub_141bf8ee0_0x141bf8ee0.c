// 函数: sub_141bf8ee0
// 地址: 0x141bf8ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
uint128_t var_38[0x3]
uint128_t* result = sub_141bae310(arg1, &var_38)
*arg3 = *result
arg3[1] = result[1]
arg3[2].q = result[2].q
return result
