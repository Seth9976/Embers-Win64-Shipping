// 函数: sub_141df5c90
// 地址: 0x141df5c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(arg3[0] >= 9.99999975e-06f))
    *arg2 = 0
    *(arg2 + 4) = 0
    float zmm1[0x4] = data_143f393b0
    zmm1[0].q = zx.o(0) u>> 0x40
    *(arg2 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    *(arg2 + 0x20) = zx.o(0)
    *(arg2 + 0x30) = __andps_xmmxud_memxud(data_143f393b0, data_143f393c0)
    return arg2

if (arg3[0] <= 0.999989986f)
    sub_141df5d40(arg1 + 0x200, arg2, arg3)
    return arg2

char rax_1 = *(arg1 + 0x200)
float zmm0[0x4] = *(arg1 + 0x204)
arg3 = *(arg1 + 0x210)
int128_t zmm3 = *(arg1 + 0x220)
int128_t zmm4 = *(arg1 + 0x230)
*(arg1 + 0x200) = 0
*(arg1 + 0x204) = 0
*arg2 = rax_1
*(arg2 + 4) = zmm0[0]
*(arg2 + 0x10) = arg3
*(arg2 + 0x20) = zmm3
*(arg2 + 0x30) = zmm4
return arg2
