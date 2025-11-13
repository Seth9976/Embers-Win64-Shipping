// 函数: sub_1405a98f0
// 地址: 0x1405a98f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
sub_1405bb0c0(arg1, &var_48, arg3)
void* rax = sub_1405bdd80(&var_48)
int64_t var_20
int64_t rax_1
int128_t* rax_2

if (rax != 0)
    rax_1 = sx.q(*(rax + 0x4c))
    rax_2 = rax_1 + var_20

int128_t var_68
int32_t var_58

if (rax == 0 || rax_1 == neg.q(var_20))
    var_68 = data_142d4cc10
    int32_t var_54_1 = 0x3f800000
    var_58 = 0
else
    var_68 = *rax_2
    var_58.q = rax_2[1].q

*arg2 = var_68
arg2[1].q = var_58.q
int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

return arg2
