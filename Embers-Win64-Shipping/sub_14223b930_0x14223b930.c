// 函数: sub_14223b930
// 地址: 0x14223b930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
*arg1 = &data_14330c0c0
arg1[5] = &data_14330c4d0
arg1[0x17] = 0
float zmm1[0x4] = data_143f515b0
*(arg1 + 0xf0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0xe0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x100) = __andps_xmmxud_memxud(data_143f515b0, data_143f515c0)
float zmm2[0x4] = data_143f515b0
*(arg1 + 0x120) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x110) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x130) = __andps_xmmxud_memxud(data_143f515b0, data_143f515c0)
*(arg1 + 0x89) |= 0x80
*(arg1 + 0x3a) |= 2
arg1[0x18].d |= 0xe
arg1[7].b = 0
*(arg1 + 0xc4) = 0x43480000
arg1[0x19].d = 0x443b8000
*(arg1 + 0xcc) = 0x43fa0000
arg1[0x1a].d = 0x44bb8000
arg1[0x28].d = 0x42480000
return arg1
