// 函数: sub_141f039e0
// 地址: 0x141f039e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2d8c0(arg1, arg2)
*arg1 = &data_1432676d0
float zmm1[0x4] = data_143f3ada0
*(arg1 + 0xc0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0xb0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0xd0) = __andps_xmmxud_memxud(data_143f3ada0, data_143f3adb0)
arg1[0x1c].d = *(arg2 + 0x23c)
arg1[0x1d] = arg2[0x80]

if ((*(arg2 + 0x14c) & 1) == 0)
    sub_1405c6ac0(arg2, 0, 0)

*(arg1 + 0xb0) = *(arg2 + 0x1c0)
*(arg1 + 0xc0) = *(arg2 + 0x1d0)
*(arg1 + 0xd0) = *(arg2 + 0x1e0)
return arg1
