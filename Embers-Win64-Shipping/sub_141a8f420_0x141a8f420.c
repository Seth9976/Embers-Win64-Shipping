// 函数: sub_141a8f420
// 地址: 0x141a8f420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9
int512_t zmm3
r9, zmm3 = sub_141a8f050(arg1)
*arg1 = &data_143042d18
float zmm1[0x4] = data_143f2b810
*(arg1 + 0xe0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0xd0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0xf0) = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
arg1[0x20] = 0
arg1[0x21].d = 0x7fffffff
*(arg1 + 0x10c) = 0xffffffff
arg1[0x22].d = 2
*(arg1 + 0x114) = 1
char rax = *(arg1 + 0x115) & 0xa0
arg1[0x23].d = 0
*(arg1 + 0x11c) = 0x3f800000
*(arg1 + 0x115) = rax | 0x20
sub_141f7a080(&arg1[0x24])
arg1[0x35] = 0
arg1[0x36] = 0x3f800000
arg1[0x37].d = 0x3f800000
*(arg1 + 0x1bc) = 0x3f800000
*(arg1 + 0x1c4) = 0
arg1[0x39].d = 0x3f800000
*(arg1 + 0x1cc) = 0x41200000
arg1[0x3a] = 0x41200000
__builtin_memset(&arg1[0x3b], 0, 0x34)
*(arg1 + 0x20c) = data_143dbb1f8.q
*(arg1 + 0x214) = data_143dbb200
arg1[0x43] = 0
arg1[0x44].d = 0x7fffffff
*(arg1 + 0x224) = 0xffffffff
arg1[0x45].d = 0
__builtin_memset(&arg1[0x46], 0, 0x30)
void* rax_2 = sub_141f8b8d0(&arg1[0x24])
zmm3.o = 0x41200000
void arg_8
int32_t var_10 = *sub_141f79930(&arg_8)
char var_18 = 0
void arg_10
char r9_1
int512_t zmm3_1
r9_1, zmm3_1 = sub_141f7f6d0(rax_2, &arg_10, (zx.o(0)).d, r9)
zmm3_1.o = 0x40a00000
int32_t var_10_1 = *sub_141f79930(&arg_8)
char var_18_1 = 0
sub_141f7f6d0(rax_2, &arg_10, 0x3f800000, r9_1)
return arg1
