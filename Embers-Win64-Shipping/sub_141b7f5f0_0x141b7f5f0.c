// 函数: sub_141b7f5f0
// 地址: 0x141b7f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_143073040
arg1[0x21] = 0
arg1[0x22].d = 0x3f800000
*(arg1 + 0x114) = 0
arg1[0x23].d = 0
__builtin_memset(&arg1[0x24], 0, 0x20)
sub_141b7bbf0(&arg1[0x28], arg1)
__builtin_memset(&arg1[0x38], 0, 0x28)
arg1[0x3d] = 2
arg1[0x3e] = 0
arg1[0x3f] = 0
arg1[0x40] = 2
arg1[0x41] = 0
arg1[0x42] = 0
*(arg1 + 0xb4) |= 1
*(arg1 + 0xc2) = 1
return arg1
