// 函数: sub_142644160
// 地址: 0x142644160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_143457078
arg1[5] = &data_1432600f0
arg1[0x3e] = &data_143260120
arg1[0x82] = 0
sub_1422ac390(arg1, data_143f3a590, 1)
*(arg1 + 0x8a) |= 0x20
*(arg1 + 0x20b) &= 0xfe
arg1[0x81].d &= 0xfffffffe
return arg1
