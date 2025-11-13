// 函数: sub_141a8e570
// 地址: 0x141a8e570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a8f050(arg1)
uint32_t zmm2[0x4] = data_143f2b820
*arg1 = &data_143042618
float zmm1[0x4] = data_143f2b810
*(arg1 + 0xe0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0xd0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0xf0) = _mm_and_ps(data_143f2b810, zmm2)
zmm1 = data_143f2b810
*(arg1 + 0x110) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x100) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x120) = _mm_and_ps(data_143f2b810, zmm2)
zmm1 = data_143f2b810
*(arg1 + 0x140) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x130) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x150) = _mm_and_ps(data_143f2b810, zmm2)
arg1[0x35] = 0
arg1[0x36].d = 0x7fffffff
*(arg1 + 0x1b4) = 0xffffffff
sub_14223b580(&arg1[0x38])
arg1[0x3d].d = 0xffffffff
*(arg1 + 0x1ec) = 0
sub_14223b580(&arg1[0x3f])
__builtin_memset(&arg1[0x42], 0, 0x70)
void* rcx_2 = &arg1[0x50]
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)
int64_t arg_10 = 0

if (rax != 0)
    rcx_2 = rax

char arg_8 = arg_8
*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x54].d = 0xffffffff
*(arg1 + 0x2a4) = 0
arg1[0x56] = 0
arg1[0x57].d = 0
sub_141eb54c0(&arg1[0x5e], 0, &arg_8, 0, nullptr)
arg1[0x6d] = -1
arg1[0x6e].d = 0xffff
sub_141e902d0(&arg1[0x70])
__builtin_memset(&arg1[0x99], 0, 0xab)
*(arg1 + 0x1bc) &= 0xfd
*(arg1 + 0x1dc) = 0
*(arg1 + 0x1bb) = 0
arg1[0x3e] = 0
arg1[0x19] = 0
arg1[0x2c] = 0
*(arg1 + 0x1a4) = 0x3f99999a
*(arg1 + 0x1b9) = 0
*(arg1 + 0x174) = data_143dbb1f8.q
*(arg1 + 0x17c) = data_143dbb200
arg1[0x2d] = data_143dbb1f8.q
int32_t rax_3 = data_143dbb200
arg1[0x3b].b &= 0xf9
*(arg1 + 0x1bc) &= 0xe2
arg1[0x2e].d = rax_3
*(arg1 + 0x2dc) = 0
*(arg1 + 0x2ec) = 0
arg1[0x6c] = 0
arg1[0x6f] = 0
arg1[0x37].b = 0
__builtin_memset(&arg1[0x38], 0xff, 0x18)
zmm2 = data_143dbb0c0
*(arg1 + 0x100) = zmm2
*(arg1 + 0x110) = data_143dbb0d0
*(arg1 + 0x120) = data_143dbb0e0
*(arg1 + 0x130) = zmm2
*(arg1 + 0x140) = *(arg1 + 0x110)
*(arg1 + 0x150) = *(arg1 + 0x120)
arg1[0xaf] = data_143dbb1f8.q
arg1[0xb0].d = data_143dbb200
arg1[0x30] = data_143dbb1f8.q
arg1[0x31].d = data_143dbb200
*(arg1 + 0x18c) = data_143dbb1f8.q
int32_t rax_6 = data_143dbb200
uint128_t temp0_6 = _mm_unpacklo_ps(0x461c4000, 0x461c4000)
*(arg1 + 0x194) = rax_6
int32_t var_20 = 0x461c4000
arg1[0x33] = temp0_6.q
arg1[0x34].d = 0x461c4000
*(arg1 + 0x1ba) = 0
return arg1
