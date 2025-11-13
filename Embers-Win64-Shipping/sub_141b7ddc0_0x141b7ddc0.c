// 函数: sub_141b7ddc0
// 地址: 0x141b7ddc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_1430762a8
arg1[0x23] = 0
arg1[0x24] = 0
arg1[0x25].d = 0x3f800000
*(arg1 + 0x12c) = 1
__builtin_memset(arg1 + 0x134, 0, 0x14)
sub_141b7bbf0(&arg1[0x29], arg1)
*(arg1 + 0xc3) = 4
*(arg1 + 0x12c) = 0
return arg1
