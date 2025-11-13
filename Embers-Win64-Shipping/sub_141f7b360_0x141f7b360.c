// 函数: sub_141f7b360
// 地址: 0x141f7b360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fd7160(arg1, sub_140d20910())
*arg1 = &data_1432858c8
int64_t arg_8
sub_140b58260(&arg_8, u"Garbage Collection", 1)
arg1[6] = arg_8
*(arg1 + 0x44) = 0
*(arg1 + 0x4c) = 0
int32_t rax_3 = *(arg1 + 0x3c) & 0xfffffe7e
arg1[7].d = 0x42700000
*(arg1 + 0x54) = 0xc00000
*(arg1 + 0x3c) = rax_3 | 0x7e
arg1[0xa].d = 0x200000
arg1[8].d = 5
return arg1
