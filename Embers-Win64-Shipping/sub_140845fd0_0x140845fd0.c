// 函数: sub_140845fd0
// 地址: 0x140845fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142181310(arg1, arg2)
*(arg1 + 0x34) &= 0xfffffffe
*arg1 = &data_142ddb0a8
arg1[6].b = 0
__builtin_memset(&arg1[9], 0, 0x40)
arg1[0x13] = 0
arg1[0x14] = 0
sub_140843920(&arg1[0x15])
sub_140863390(&arg1[0x60])
arg1[0x84].b = 1
arg1[0x81] = _mm_unpacklo_ps(0xc2c80000, 0xc2c80000)
*(arg1 + 0x414) = _mm_unpacklo_ps(0x42c80000, 0x42c80000)
int32_t var_20 = 0xc2c80000
arg1[0x82].d = 0xc2c80000
int32_t var_14 = 0x42c80000
*(arg1 + 0x41c) = 0x42c80000
*(arg1 + 0x424) = 1
arg1[0x85] = 0
arg1[0x86].d = 0x3d888889
*(arg1 + 0x434) = 0
arg1[0x87] = 0
arg1[0x88] = 0
sub_1407e3560(&arg1[0x89])
sub_14083cdb0(&arg1[0x60], arg1)
arg1[7] = 0
arg1[8].b = 0
arg1[5].d = 0x20
return arg1
