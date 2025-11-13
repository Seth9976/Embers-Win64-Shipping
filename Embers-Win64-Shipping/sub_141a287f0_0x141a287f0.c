// 函数: sub_141a287f0
// 地址: 0x141a287f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_48
sub_1405bb0c0(arg1, &var_48, arg2)
void var_18
void* rax = sub_140d3c6e0(&var_18)

if (rax == 0)
    void* rax_1 = sub_1405bdd80(&var_48)
    
    if (rax_1 != 0 && ((zx.q(*(*(rax_1 + 8) + 0x10)) u>> 0x1a).b & 1) != 0)
        int64_t r9_1 = *rax_1
        int64_t var_20
        (*(r9_1 + 0x148))(rax_1, sx.q(*(rax_1 + 0x4c)) + var_20, arg_18, r9_1)
else
    sub_141a2cc80(arg2, rax, &arg_18)

void var_10
int64_t result = sub_140d3c6e0(&var_10)

if (result != 0)
    int64_t r9_2 = *arg2
    result = (*(r9_2 + 0x210))(arg2, result, 0, r9_2)

int64_t var_30

if (var_30 == 0)
    return result

return sub_140a74f90(var_30)
