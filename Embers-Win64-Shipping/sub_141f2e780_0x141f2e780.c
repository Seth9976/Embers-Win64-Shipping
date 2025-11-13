// 函数: sub_141f2e780
// 地址: 0x141f2e780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = sub_141ed2eb0(arg1, arg2)
int32_t var_10 = 0x3f800000
*arg1 = &data_143272ca8
arg1[5] = &data_1432731c8
arg1[0x16] = 0
*(arg1 + 0xbc) = 0
arg1[0x17].d = 0xffffffff
__builtin_memset(&arg1[0x19], 0, 0x30)
*(arg1 + 0x151) = 0
arg1[0x2b] = 0
arg1[0x2c] = 0
arg1[0x2d] = 2
arg1[0x2e] = 0
arg1[0x2f] = 0
*(arg1 + 0x180) = data_14399f720
arg1[0x32] = data_143dbb208
arg1[0x33].d = data_143dbb210
*(arg1 + 0x1a0) = data_14399f720
arg1[0x36] = data_143dbb208
arg1[0x37].d = data_143dbb210
data_143f3b4b0
*(arg1 + 0x1d0) = zx.o(0)
uint128_t zmm1
zmm1.q = zx.o(0) u>> 0x40
*(arg1 + 0x1c0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x1e0) = __andps_xmmxud_memxud(data_143f3b4b0, data_143f3b4c0)
*(arg1 + 0x89) &= 0x7f
*(arg1 + 0x134) = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
*(arg1 + 0x13c) = 0x3f800000
bool c = arg1[0x18] != 0
*(arg1 + 0x14f) = 2
*(arg1 + 0x14c) = (sbb.b(rcx, rcx, c) & 0x40) | (*(arg1 + 0x14c) & 0xbf) | 0x20
return arg1
