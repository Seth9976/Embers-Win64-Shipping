// 函数: sub_1421aa800
// 地址: 0x1421aa800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int32_t var_10 = 0x42c80000
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
char rax_1 = arg1[5].b & 0x17
int64_t temp0 = _mm_unpacklo_ps(zx.o(0), 0)
arg1[5].b = rax_1 | 0x80
*arg1 = &data_1432eda88
__builtin_memset(&arg1[0xc], 0, 0x1d)
__builtin_memset(&arg1[0x10], 0, 0x28)
__builtin_memset(&arg1[0x21], 0, 0x28)
arg1[5].b |= 3
*(arg1 + 0xaa) &= 0xfd
*(arg1 + 0xac) |= 2
*(arg1 + 0x29) |= 2
*(arg1 + 0x5b) &= 0xfb
*(arg1 + 0x5b) |= 1
*(arg1 + 0xd4) = temp0
*(arg1 + 0xdc) = 0x42c80000
int32_t var_10_1 = 0x3f800000
arg1[0x1f] = _mm_unpacklo_ps(zx.o(0), 0)
arg1[0x20].d = 0x3f800000
arg1[0xb].b = 1
*(arg1 + 0x5c) = 0x3f800000
arg1[0x1e] = 0x1f4
arg1[0x1c] = 0x3dcccccd
arg1[0x16].d = 1
*(arg1 + 0xb4) = 1
arg1[0x1a].w = 0x100
return arg1
