// 函数: sub_141f040d0
// 地址: 0x141f040d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_143268f60
int32_t var_10 = 0x44800000
arg1[5] = &data_142d46f40
arg1[0x3e] = 0
arg1[0x3f] = 0
arg1[0x40].d = 0x40490fdb
*(arg1 + 0x204) = 0x40490fdb
int32_t rax = data_14399f630
*(arg1 + 0x20c) |= 0x70f
arg1[0x41].d = rax
*arg1 = &data_1432694e0
arg1[5] = &data_143269a78
*(arg1 + 0x214) = 0x3f800000
char rax_1 = arg1[0x4b].b & 0xf9
int64_t temp0 = _mm_unpacklo_ps(0x44800000, 0x44800000)
arg1[0x4b].b = rax_1 | 1
arg1[0x58].d = 0xffffffff
*(arg1 + 0x2c4) = 4
__builtin_memset(&arg1[0x59], 0, 0x18)
arg1[0x5c] = -0x3810000020000000
__builtin_memset(&arg1[0x5d], 0, 0x17)
arg1[0x57] = &data_143269488
arg1[0x60] = 0
arg1[0x61] = 0
int32_t rax_2 = *(arg1 + 0x20c)
*(arg1 + 0x22c) &= 0xfffffffe
*(arg1 + 0x254) &= 0xfffffffe
arg1[0x50].d &= 0xfffffffe
arg1[0x52].d &= 0xfffffffe
*(arg1 + 0x20c) = (rax_2 | 0x10) & 0xffffffdf
arg1[0x4d] = temp0
arg1[0x4e].d = 0x44800000
arg1[0x44].d = 0x45cb2000
*(arg1 + 0x234) = 0xffffffff
arg1[0x42].d = 0x3f800000
arg1[0x48].d = 0x3f800000
*(arg1 + 0x244) = 0x3f000000
arg1[0x49] = 0x3f000000
arg1[0x4a].d = 0
*(arg1 + 0x284) = 0x3f800000
arg1[0x4f] = 0
arg1[0x51].d = 0x47c35000
*(arg1 + 0x28c) = 0x3f000000
*(arg1 + 0x23c) = 0x3f800000
*(arg1 + 0x294) = 0x3e4ccccd
*(arg1 + 0x29c) = 0x42c80000
int32_t rax_5 = data_14399f630
arg1[0x63].d &= 0xfffffffe
*(arg1 + 0x254) &= 0xffffffdf
arg1[0x54].d = rax_5
arg1[0x55].d = 0x3b449ba6
*(arg1 + 0x224) = 0
arg1[0x43].d = 1
return arg1
