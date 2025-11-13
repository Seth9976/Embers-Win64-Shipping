// 函数: sub_141a8e990
// 地址: 0x141a8e990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a8f050(arg1)
*arg1 = &data_1430427e0
arg1[0x22] = 0
arg1[0x23].d = 0x7fffffff
*(arg1 + 0x11c) = 0xffffffff
sub_14223b580(arg1 + 0x124)
float zmm1[0x4] = data_143f2b810
uint32_t zmm2[0x4] = data_143f2b820
*(arg1 + 0x150) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x140) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x160) = _mm_and_ps(data_143f2b810, zmm2)
zmm1 = data_143f2b810
*(arg1 + 0x180) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x170) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x190) = _mm_and_ps(data_143f2b810, zmm2)
zmm1 = data_143f2b810
*(arg1 + 0x1b0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x1a0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x1c0) = _mm_and_ps(data_143f2b810, zmm2)
*(arg1 + 0x1dc) = 0xffffffff
arg1[0x3c].d = 0
sub_14223b580(&arg1[0x3e])
__builtin_memset(&arg1[0x41], 0, 0x70)
void* rcx_2 = &arg1[0x4f]
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
arg1[0x53].d = 0xffffffff
*(arg1 + 0x29c) = 0
arg1[0x55] = 0
arg1[0x56].d = 0
sub_141eb54c0(&arg1[0x5d], 0, &arg_8, 0, nullptr)
arg1[0x6c] = -1
arg1[0x6d].d = 0xffff
sub_141e902d0(&arg1[0x6f])
__builtin_memset(&arg1[0x98], 0, 0xab)
*(arg1 + 0x123) &= 0xfd
arg1[0x3a].d = 0
*(arg1 + 0x13c) = 0
arg1[0x3d] = 0
arg1[0x19] = 0
*(arg1 + 0x10c) = 0x3f99999a
*(arg1 + 0x121) = 0
*(arg1 + 0xdc) = data_143dbb1f8.q
*(arg1 + 0xe4) = data_143dbb200
arg1[0x1a] = data_143dbb1f8.q
int32_t rax_3 = data_143dbb200
*(arg1 + 0x13d) &= 0xf9
*(arg1 + 0x123) &= 0xe2
arg1[0x1b].d = rax_3
*(arg1 + 0x2d4) = 0
*(arg1 + 0x2e4) = 0
arg1[0x6b] = 0
arg1[0x6e] = 0
arg1[0x24].b = 0
__builtin_memset(arg1 + 0x124, 0xff, 0x18)
zmm2 = data_143dbb0c0
*(arg1 + 0x170) = zmm2
*(arg1 + 0x180) = data_143dbb0d0
*(arg1 + 0x190) = data_143dbb0e0
*(arg1 + 0x1a0) = zmm2
*(arg1 + 0x1b0) = *(arg1 + 0x180)
*(arg1 + 0x1c0) = *(arg1 + 0x190)
arg1[0xae] = data_143dbb1f8.q
arg1[0xaf].d = data_143dbb200
arg1[0x1d] = data_143dbb1f8.q
arg1[0x1e].d = data_143dbb200
*(arg1 + 0xf4) = data_143dbb1f8.q
int32_t rax_6 = data_143dbb200
uint128_t temp0_6 = _mm_unpacklo_ps(0x461c4000, 0x461c4000)
*(arg1 + 0xfc) = rax_6
int32_t var_20 = 0x461c4000
arg1[0x20] = temp0_6.q
arg1[0x21].d = 0x461c4000
*(arg1 + 0x122) = 0
return arg1
