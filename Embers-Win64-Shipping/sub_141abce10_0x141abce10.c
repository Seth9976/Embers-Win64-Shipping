// 函数: sub_141abce10
// 地址: 0x141abce10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f2b810
arg1[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg1 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg1[2] = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)

if (arg5 == 3)
    void var_38
    int128_t* rax = sub_141a89330(arg4, &var_38, arg6, arg3, arg2)
    *arg1 = *rax
    arg1[1] = rax[1]
    arg1[2] = rax[2]
    return arg1

arg1[1] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg6, (*arg6)[2][0].q), _mm_unpacklo_ps((*arg6)[1], 0)[0].q)
int32_t r9_1

if (*arg4 == 0)
    r9_1 = *(arg4 + 0x10)
else
    r9_1 = *(arg4 + 0x5c)

int64_t var_48
var_48.d = arg5
sub_141de5f60(arg2, arg3, arg1, r9_1)
return arg1
