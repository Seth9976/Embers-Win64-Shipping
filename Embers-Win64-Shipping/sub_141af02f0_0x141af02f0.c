// 函数: sub_141af02f0
// 地址: 0x141af02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void var_88
sub_1405bb0c0(arg1, &var_88, arg3)
void* rax_2 = sub_1405bdd80(&var_88)
int64_t var_60
int64_t rax_3
int128_t* rax_4

if (rax_2 != 0)
    rax_3 = sx.q(*(rax_2 + 0x4c))
    rax_4 = rax_3 + var_60

uint32_t var_48[0x4]
float var_38[0x4]
uint32_t var_28[0x4]

if (rax_2 == 0 || rax_3 == neg.q(var_60))
    uint32_t zmm3_1[0x4] = data_143f2c440
    float zmm1[0x4] = zmm3_1
    var_38 = zx.o(0)
    uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm3_1, data_143f2c450)
    zmm1[0].q = zx.o(0) u>> 0x40
    var_48 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    var_28 = temp0_2
else
    var_48 = *rax_4
    var_28 = rax_4[2]
    var_38 = rax_4[1]

*arg2 = var_48
arg2[1] = var_38
arg2[2] = var_28
int64_t var_70

if (var_70 != 0)
    sub_140a74f90(var_70)

__security_check_cookie(rax_1 ^ &var_a8)
return arg2
