// 函数: sub_141b80e10
// 地址: 0x141b80e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_1430765e0
arg1[0x21].b &= 0xfc
*(arg1 + 0x109) = 0
arg1[0x23] = 0
arg1[0x24].d = 0
*(arg1 + 0x10d) &= 0xfe
__builtin_memset(&arg1[0x22], 0, 0x14)
*(arg1 + 0x124) = 0x3f800000
*arg1 = &data_14307ace8
sub_140a96170(&arg1[0x25])
__builtin_memset(&arg1[0x29], 0, 0x11)
sub_140ddd1b0(&arg1[0x2c])
sub_140ddd1b0(&arg1[0x7a])
__builtin_memset(&arg1[0xc7], 0, 0x30)
*(arg1 + 0xc3) = 4
return arg1
