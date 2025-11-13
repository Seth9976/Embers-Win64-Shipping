// 函数: sub_142698e10
// 地址: 0x142698e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
int32_t rax = *(arg1 + 0xd4)
*(arg1 + 0x8a) |= 0xc
*(arg1 + 0xd4) = (rax & 0xfffffffd) | 1
*arg1 = &data_14345a740
arg1[5] = &data_14345ab30
arg1[0x16] = &data_14345ab60
arg1[0x1c] = 0
__builtin_memset(&arg1[0x1f], 0, 0x18)
float zmm1[0x4] = data_143f71980
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x110) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x120) = zx.o(0)
*(arg1 + 0x130) = __andps_xmmxud_memxud(data_143f71980, data_143f71990)
arg1[0x1c] = sub_14269c3a0()
*(arg1 + 0xf4) |= 1
int32_t var_10 = 0x42c80000
arg1[0x1d] = _mm_unpacklo_ps(0x42c80000, 0x42c80000)
arg1[0x1e].d = 0x42c80000
return arg1
