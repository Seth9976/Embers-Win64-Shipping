// 函数: sub_141f2e4e0
// 地址: 0x141f2e4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e610(arg1, arg2)
*arg1 = &data_143278bc0
arg1[5] = &data_1432790f8
sub_1422d7fd0(&arg1[0x56])
arg1[0xff].d = 0
arg1[0x10d] = 0
arg1[0x10e] = 0
char rax = *(arg1 + 0x3a)
*(arg1 + 0x89) |= 0x88
*(arg1 + 0x28c) = 0x42b40000
*(arg1 + 0x3a) = (rax & 0xf7) | 2
arg1[0x52].d = 0x44000000
*(arg1 + 0x7fc) = 0
arg1[7].b = 2
arg1[0xfe].d = 0x3f800000
arg1[0x4c].d = 0
arg1[0x100] = 0x3f800000
arg1[0x101] = 0
arg1[0x102].d = 0
*(arg1 + 0x814) = 0x3f800000
*(arg1 + 0x81c) = 0
*(arg1 + 0x824) = 0
arg1[0x105] = 0x3f800000
arg1[0x106] = 0
arg1[0x107].d = 0
*(arg1 + 0x83c) = 0x3f800000
*(arg1 + 0x85c) &= 0xfffffffc
arg1[0x4b].d &= 0xffff7ff7
int32_t var_10 = 0x3f800000
arg1[0x10a] = _mm_unpacklo_ps(zx.o(0), 0)
arg1[0x10b].d = 0x3f800000
arg1[0x10c].b = 0
arg1[0x48].d = 1
return arg1
