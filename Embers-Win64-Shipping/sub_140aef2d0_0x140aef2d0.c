// 函数: sub_140aef2d0
// 地址: 0x140aef2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rax_2 = arg2[1].d
int32_t rdi = rax_2 - 1

if (rax_2 == 0)
    rdi = 0

int16_t* rdx

if (rax_2 == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void var_b8
sub_1408f2b40(&var_b8, rdx)
char* var_30
sub_140aef380(arg1, var_30, rdi)
int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

__security_check_cookie(rax_1 ^ &var_d8)
return arg1
