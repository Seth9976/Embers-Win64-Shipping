// 函数: sub_141f04530
// 地址: 0x141f04530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_1432676f8
arg1[5] = &data_143267f98
arg1[0x3e] = &data_143267fc8
__builtin_memset(&arg1[0x81], 0, 0x20)
char rax = arg1[0x85].b
*(arg1 + 0x20b) |= 8
*(arg1 + 0x20a) |= 0x80
*(arg1 + 0x8a) |= 8
arg1[0x85].b = (rax & 0xfe) | 2
return arg1
