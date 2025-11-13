// 函数: sub_1418cf270
// 地址: 0x1418cf270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
__builtin_memset(&arg1[2], 0, 0x6c)
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12].b = 1
__builtin_memset(&arg1[0x13], 0, 0x14)
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18].b = 1
*arg1 = &data_142fef698
__builtin_memset(&arg1[0x1a], 0, 0x30)
arg1[0x20] = 0
arg1[0x21] = 0
arg1[0x22] = arg3
sub_1418e28b0(&arg1[0x1a], *(arg3 + 0x38) + 0x58, &arg1[0x20])
arg1[0xc] = *(arg3 + 0x18) + 0x10
void* rax_3 = *(arg3 + 0x18) + 0x1e8
arg1[0x19] = rax_3
arg1[0xf].d = *(rax_3 + 0x18)
sub_1418db6f0(arg1)
*(arg3 + 0x28) += 1
return arg1
