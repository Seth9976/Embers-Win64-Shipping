// 函数: sub_140745510
// 地址: 0x140745510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142181340(arg1, arg2)
arg1[0x82].b = 0
*arg1 = &data_142d99fe0
arg1[5] = &data_142d9a898
arg1[0x3e] = &data_142d9a8c8
sub_140863390(&arg1[0x83])
arg1[0xa4].d &= 0xfffffffe
arg1[0xa5] = 0
*(arg1 + 0x54c) &= 0xfffffffe
arg1[0xa6].b = 0
*(arg1 + 0x534) = 0
*(arg1 + 0x53c) = 1
arg1[0xa8].d = 0x3d088889
*(arg1 + 0x544) = 0x3d072b02
arg1[0xa9].b = 0
arg1[0xaa].d = 0x40a00000
arg1[0xab] = 0
arg1[0xac] = 0
arg1[0xad].d = 0xffffffff
*(arg1 + 0x56c) = 0
*(arg1 + 0x574) = 0
*(arg1 + 0x57c) = (*(arg1 + 0x57c) & 0xffffffe8) | 8
arg1[0xb5] = 0
arg1[0xb6].d = 0xffffffff
sub_14083cdb0(&arg1[0x83], arg1)
char rax_3 = 2
char rdx_1 = *(arg1 + 0x3a) | 2
*(arg1 + 0x3a) = rdx_1

if (data_14396e8d8 != 0)
    rax_3 = 0

char rcx_2 = rax_3
arg1[7].b = rcx_2

if (data_14396e8dc != 0)
    rcx_2 = 6

*(arg1 + 0x3a) = rdx_1 & 0xfb
*(arg1 + 0x39) = rcx_2
sub_1423c9cb0(&arg1[6], 0)
*(arg1 + 0x89) |= 0x88
*(arg1 + 0x54c) |= 2
arg1[0xb3] = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
int32_t var_10 = 0x3f800000
arg1[0xb4].d = 0x3f800000
sub_141f256b0(arg1, 0)
sub_1422ac390(arg1, data_143f3a590, 1)
return arg1
