// 函数: sub_141e1fec0
// 地址: 0x141e1fec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
bool cond:0 = *(arg1 + 0x160) s<= 0
uint32_t zmm1[0x4] = data_143f395f0
int128_t zmm5 = zx.o(0)
int32_t var_54 = 0
float zmm0[0x4] = zmm1
char var_58 = 0
zmm1 = __andps_xmmxud_memxud(zmm1, data_143f39600)
zmm0[0].q = zx.o(0) u>> 0x40
float zmm4[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
int128_t var_38 = zx.o(0)

if (not(cond:0))
    sub_141de7ca0(arg1, *(arg1 + 0x158) + 8, arg3, arg4, &var_58)
    zmm5 = var_38

*arg2 = zmm4
arg2[1] = zmm5
arg2[2] = zmm1
__security_check_cookie(rax_1 ^ &var_88)
return arg2
