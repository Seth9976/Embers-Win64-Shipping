// 函数: sub_141ba67b0
// 地址: 0x141ba67b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rax_2 = sub_140d3c6e0(arg1 + 8)
int64_t rdi = *(arg1 + 0x10)
int32_t var_48 = *(arg1 + 0x18)
char var_44 = *(arg1 + 0x1c)
int64_t var_40 = 0
int32_t var_38 = 0
sub_140692f90(&var_40, arg1 + 0x20)
void var_30
int32_t* rax_4 = rdi(rax_2, &var_30, &var_48)
arg2[1].b = 0

if (rax_4[1].b != 0)
    *arg2 = *rax_4
    arg2[1].b = 1

__security_check_cookie(rax_1 ^ &var_68)
return arg2
