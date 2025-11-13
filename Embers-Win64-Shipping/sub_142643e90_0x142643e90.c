// 函数: sub_142643e90
// 地址: 0x142643e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142698f00(arg1, arg2)
*arg1 = &data_143456300
arg1[5] = &data_1434566f8
arg1[0x16] = &data_143456728
arg1[0x1c] = &data_143456780
arg1[0x1e] = 0
arg1[0x1f] = 0
sub_140b5e4f0(&arg1[0x20], 0x7fffffff)
arg1[0x28] = 0
arg1[0x2b] = 0
arg1[0x2c].d = 0
__builtin_memset(&arg1[0x2d], 0, 0x1c)
arg1[0x31] = 0
*(arg1 + 0x104) = _mm_unpacklo_ps(0x428c0000, 0)
arg1[0x22] = _mm_unpacklo_ps(0xc28c0000, 0)
int32_t var_10 = 0
arg1[0x23].d = 0
arg1[0x1d].d = 0
*(arg1 + 0x10c) = 0
int32_t var_10_1 = 0
*(arg1 + 0x11c) = 0
arg1[0x1e] = sub_14269c0f0()
arg1[0x1f] = sub_14269c3a0()
arg1[0x28] = sub_14269c3a0()
arg1[0x26] = _mm_unpacklo_ps(0x42480000, 0x42480000)
int32_t var_10_2 = 0x42480000
arg1[0x27].d = 0x42480000
int32_t rax_4 = arg1[0x24].d & 0xfffffff1
arg1[0x29] = 0
arg1[0x2a].b = 2
arg1[0x24].d = rax_4 | 1
return arg1
