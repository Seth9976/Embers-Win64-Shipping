// 函数: sub_1425b6360
// 地址: 0x1425b6360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 1
arg1[1] &= 0xf8
*(arg1 + 4) = 0x40a00000
*(arg1 + 8) = 0x3f800000
__builtin_memset(&arg1[0x10], 0, 0x40)
sub_140d3a3a0(&arg1[0x50], nullptr)
*(arg1 + 0x58) = 0
sub_140d3a3a0(&arg1[0x60], nullptr)
*(arg1 + 0x68) = 0
sub_140d3a3a0(&arg1[0x70], nullptr)
__builtin_memset(&arg1[0x78], 0, 0x14)
*(arg1 + 0x90) = 0
return arg1
