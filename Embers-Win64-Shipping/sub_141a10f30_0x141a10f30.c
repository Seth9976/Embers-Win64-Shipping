// 函数: sub_141a10f30
// 地址: 0x141a10f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t var_28 = 0
int32_t var_24 = 0x10
char var_b8[0x10]
char* rax_2 = sub_1419c5110(arg1, &var_b8, arg1 + 0x130, 0)
int64_t rbx = sx.q(var_28)
int32_t rdx_1 = (rbx + 1).d
int32_t var_28_1 = rdx_1
int64_t var_a8[0x10]

if (rdx_1 s> var_24)
    sub_14088f7f0(&var_a8)

var_a8[rbx] = *rax_2
int64_t result = sub_1419d0260(arg1, &var_a8, 0)
__security_check_cookie(rax_1 ^ &var_d8)
return result
