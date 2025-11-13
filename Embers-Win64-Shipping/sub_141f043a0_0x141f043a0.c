// 函数: sub_141f043a0
// 地址: 0x141f043a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_14326d910
arg1[5] = &data_14326e180
arg1[0x3e] = &data_14326e1b0
__builtin_memset(&arg1[0x81], 0, 0x20)
arg1[0x86] = 0
arg1[0x87] = 0
*(arg1 + 0x89) |= 0x88
*(arg1 + 0x3a) |= 2
sub_1422ac390(arg1, data_143f3a590, 1)
char rax = *(arg1 + 0x209)
*(arg1 + 0x20e) |= 8

if ((rax & 1) != 0)
    *(arg1 + 0x209) = rax & 0xfe
    sub_141f36700(arg1)

arg1[0x88].d |= 1
arg1[0x41].b |= 0x40
arg1[0x85].d = 0x3f800000
return arg1
