// 函数: sub_141b71eb0
// 地址: 0x141b71eb0
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

int32_t var_68
int32_t var_58
int32_t var_50

if (rax == 0 || rax_1 == neg.q(var_20))
    int32_t zmm3_1 = data_143dbb1f0.d
    int32_t zmm2_1 = data_143dbb1f0:4.d
    int32_t var_60_1 = data_14399f658.d
    var_50 = 0
    var_68 = zmm3_1
    int32_t var_64_1 = zmm2_1
    int32_t var_5c_1 = data_14399f65c.d
    var_58 = zmm3_1
    int32_t var_54_1 = zmm2_1
else
    var_68.o = *rax_2
    var_50 = *(rax_2 + 0x18)
    var_58.q = rax_2[1].q

*arg2 = var_68.o
arg2[1].q = var_58.q
*(arg2 + 0x18) = var_50
int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

return arg2
