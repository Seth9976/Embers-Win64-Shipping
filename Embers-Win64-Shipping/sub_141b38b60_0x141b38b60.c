// 函数: sub_141b38b60
// 地址: 0x141b38b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint32_t zmm3[0x4] = data_143f2c8a0
float zmm1[0x4] = zmm3
int128_t var_38 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f2c8b0)
int64_t rdx = data_143f2c8c8
zmm1[0].q = zx.o(0) u>> 0x40
float var_48[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
int64_t rax_2 = sub_140d1fd20(arg2, rdx)

if (rax_2 != 0)
    int64_t r9_1 = *arg2
    (*(r9_1 + 0x210))(arg2, rax_2, &var_48, r9_1)

*arg1 = var_48
arg1[1] = var_38
arg1[2] = temp0
__security_check_cookie(rax_1 ^ &var_68)
return arg1
