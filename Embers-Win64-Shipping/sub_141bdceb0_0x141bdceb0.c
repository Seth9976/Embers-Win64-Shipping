// 函数: sub_141bdceb0
// 地址: 0x141bdceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
sub_1405bb0c0(*(arg1 + 0x38), &var_48, arg3)
void* rax = sub_1405bdd80(&var_48)
int64_t rax_1

if (rax != 0)
    rax_1 = sx.q(*(rax + 0x4c))

int64_t var_20
int128_t zmm0

if (rax == 0 || rax_1 == neg.q(var_20))
    zmm0 = zx.o(0)
else
    zmm0 = *(rax_1 + var_20)

*arg2 = zmm0
int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

return arg2
