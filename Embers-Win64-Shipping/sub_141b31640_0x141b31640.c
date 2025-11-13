// 函数: sub_141b31640
// 地址: 0x141b31640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
sub_1405bb0c0(*(arg1 + 0x38), &var_58, arg2)
void* rax
int512_t result
rax, result = sub_1405bdd80(&var_58)
int64_t rax_1

if (rax != 0)
    rax_1 = sx.q(*(rax + 0x4c))

int64_t var_30
int128_t zmm6

if (rax == 0 || rax_1 == neg.q(var_30))
    zmm6 = zx.o(0)
else
    zmm6 = *(rax_1 + var_30)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

result.o = zmm6
return result
