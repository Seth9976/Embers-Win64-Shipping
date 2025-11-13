// 函数: sub_140845300
// 地址: 0x140845300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[5].b = 0
*arg1 = &data_142ddae48
arg1[6] = 0
arg1[7] = 0
sub_14081a4a0(&arg1[8])
sub_14081a4a0(&arg1[0x1f])
arg1[0x36] = 0
arg1[0x1f] = &data_142ddae10
arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x39].b &= 0xfe
__builtin_memset(&arg1[0x3a], 0, 0x21)
*(arg1 + 0x1f4) = 0
*(arg1 + 0x1fc) = 0
*(arg1 + 0x204) = (*(arg1 + 0x204) & 0xfffffff9) | 1
__builtin_memset(&arg1[0x41], 0, 0x30)
sub_1408437e0(&arg1[0x47])
arg1[0x7a] = 0
sub_140844640(&arg1[0x7b])
__builtin_memset(&arg1[0xa0], 0, 0x20)
return arg1
