// 函数: sub_141f03c90
// 地址: 0x141f03c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*(arg1 + 0x20e) |= 8
*(arg1 + 0x14d) |= 4
*arg1 = &data_14326a3d0
*(arg1 + 0x40c) = 0x42b40000
arg1[5] = &data_143260b98
arg1[0x3e] = &data_143260bc8
arg1[0x82].d = 0x3faaaaa8
*(arg1 + 0x414) = 0x42c80000
arg1[0x83].d = 0x447a0000
int32_t arg_8 = 0xffff00ff
arg1[0x81].d = 0xffff00ff
sub_1422ac390(arg1, data_143f3a590, 1)
char rax = *(arg1 + 0x209)

if ((rax & 1) != 0)
    *(arg1 + 0x209) = rax & 0xfe
    sub_141f36700(arg1)

return arg1
