// 函数: sub_14205f620
// 地址: 0x14205f620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t var_28 = 0
int32_t var_24 = 0x10
int64_t var_a8[0x10]
sub_14204c8a0(arg1, &arg1[0x58], &var_a8)
char var_b8[0x10]
char* rax_2 = sub_1419c5110(arg1, &var_b8, &arg1[0x7c], 9)
int64_t rbx = sx.q(var_28)
int32_t rcx_1 = (rbx + 1).d

if (rcx_1 s> var_24)
    sub_14088f7f0(&var_a8)

var_a8[rbx] = *rax_2
char* rax_4 = sub_1419c5110(arg1, &var_b8, &arg1[0x7e], 0xa)
int64_t rbx_1 = sx.q(rcx_1)
int32_t rdx_4 = (rbx_1 + 1).d
int32_t var_28_2 = rdx_4

if (rdx_4 s> var_24)
    sub_14088f7f0(&var_a8)

var_a8[rbx_1] = *rax_4
int64_t result = sub_1419d0260(arg1, &var_a8, 0)
__security_check_cookie(rax_1 ^ &var_d8)
return result
