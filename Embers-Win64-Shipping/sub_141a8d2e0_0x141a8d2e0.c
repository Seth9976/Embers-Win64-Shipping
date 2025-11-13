// 函数: sub_141a8d2e0
// 地址: 0x141a8d2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a8f050(arg1)
*arg1 = &data_14303f9c8
arg1[0x19] = 0
*(arg1 + 0xd0) = data_143dbb0c0
*(arg1 + 0xe0) = data_143dbb0d0
*(arg1 + 0xf0) = data_143dbb0e0
*(arg1 + 0x100) = data_143dbb0c0
*(arg1 + 0x110) = data_143dbb0d0
*(arg1 + 0x120) = data_143dbb0e0
arg1[0x26] = 0
arg1[0x27].d = 0x7fffffff
*(arg1 + 0x13c) = 0xffffffff
arg1[0x28] = 0
arg1[0x29].d = 0x7fffffff
*(arg1 + 0x14c) = 0xffffffff
arg1[0x2a] = 0
arg1[0x2b].d = 0x7fffffff
*(arg1 + 0x15c) = 0xffffffff
__builtin_memset(&arg1[0x2c], 0, 0x18)
arg1[0x2f] = 0x3f800000
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32].d = 0x3f800000
arg1[0x37].d = 0
*(arg1 + 0x1bc) = 4
arg1[0x38].d = 1
*(arg1 + 0x1c4) = 0x10101
__builtin_memset(&arg1[0x39], 0, 0x1b)
__builtin_memset(arg1 + 0x1e4, 0, 0x28)
__builtin_memset(&arg1[0x42], 0, 0x30)
*(arg1 + 0x245) &= 0xe0
arg1[0x48].d = 0
*(arg1 + 0x244) = 0xe
arg1[0x4a].b = 0
*(arg1 + 0x260) = data_143dbb0c0
*(arg1 + 0x270) = data_143dbb0d0
*(arg1 + 0x280) = data_143dbb0e0
*(arg1 + 0x290) = data_143dbb0c0
*(arg1 + 0x2a0) = data_143dbb0d0
*(arg1 + 0x2b0) = data_143dbb0e0
arg1[0x58].b = 4
*(arg1 + 0x2c4) = 0x3f800000
*(arg1 + 0x2cc) = 0
arg1[0x5a].b = 0
*(arg1 + 0x2d4) = 0
arg1[0x5b] = 0x42340000
arg1[0x5c].d = 0x42340000
*(arg1 + 0x2e4) = 0
sub_141f7a080(&arg1[0x5d])
arg1[0x6e].b = 0
*(arg1 + 0x374) = 0x3f800000
arg1[0x6f].b = 0
__builtin_memset(&arg1[0x73], 0, 0x90)
*(arg1 + 0x194) = data_143dbb1f8.q
*(arg1 + 0x19c) = data_143dbb200
arg1[0x34] = data_143dbb1f8.q
arg1[0x35].d = data_143dbb200
*(arg1 + 0x1ac) = (_mm_unpacklo_ps(0x47c35000, 0x47c35000)).q
int32_t var_10 = 0x47c35000
*(arg1 + 0x1b4) = 0x47c35000
*(arg1 + 0x434) = data_143dbb1f8.q
*(arg1 + 0x43c) = data_143dbb200
return arg1
