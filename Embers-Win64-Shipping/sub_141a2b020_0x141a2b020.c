// 函数: sub_141a2b020
// 地址: 0x141a2b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
sub_1405bb0c0(arg1, &var_48, arg2)
void* rax = sub_1405bdd80(&var_48)
int64_t result

if (rax == 0 || ((zx.q(*(*(rax + 8) + 0x10)) u>> 0x1a).b & 1) == 0)
    result = 0
else
    int64_t r8_1 = *rax
    int64_t var_20
    result = (*(r8_1 + 0x140))(rax, sx.q(*(rax + 0x4c)) + var_20, r8_1)

int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

return result
