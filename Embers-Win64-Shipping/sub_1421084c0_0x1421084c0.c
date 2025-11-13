// 函数: sub_1421084c0
// 地址: 0x1421084c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432d07e0
__builtin_memset(&arg1[8], 0, 0x1c)
__builtin_memset(&arg1[0xc], 0, 0x20)
arg1[0x12] = 0
arg1[0x13].d = 0
*(arg1 + 0x9c) = 0x3f800000
__builtin_memset(arg1 + 0xac, 0, 0x14)
arg1[0x15].d |= 1
arg1[0x10].b = 2
int64_t arg_8
sub_140b58260(&arg_8, &data_142d57334, 1)
*(arg1 + 0x54) = arg_8
return arg1
