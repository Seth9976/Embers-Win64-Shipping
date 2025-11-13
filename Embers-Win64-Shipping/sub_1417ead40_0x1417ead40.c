// 函数: sub_1417ead40
// 地址: 0x1417ead40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_142fdd658
arg1[5] = &data_142fddeb8
arg1[0x3e] = &data_142fddee8
arg1[0x82] = 0
arg1[0x84] = 0
arg1[0x86] = 0
arg1[0x87] = 0
float zmm1[0x4] = data_143ef9460
*(arg1 + 0x460) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x450) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x470) = __andps_xmmxud_memxud(data_143ef9460, data_143ef9470)
arg1[0x92] = 0
arg1[0x93] = 0
arg1[0x90].d = 0x3f800000
*(arg1 + 0x484) = 0x3f800000
arg1[0x91].d = 0x3f800000
arg1[0x95].b = 0
*(arg1 + 0x4ac) = 0
*(arg1 + 0x4b4) = 0xffffffff
*(arg1 + 0x3a) |= 7
arg1[7].b = 0
arg1[0x81].d = 0
int64_t rax = data_143ef9708
arg1[0x83].d &= 0xfffffffe
*(arg1 + 0x89) |= 0x80
*(arg1 + 0x8a) |= 0x10
arg1[0x82] = rax
*(arg1 + 0x449) = 0
return arg1
