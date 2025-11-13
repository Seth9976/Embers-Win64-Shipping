// 函数: sub_1419eb570
// 地址: 0x1419eb570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_143019730
arg1[5] = &data_143019fa0
arg1[0x3e] = &data_143019fd0
arg1[0x81] = 0
arg1[0x82] = 0
__builtin_memset(&arg1[0x86], 0, 0x20)
*(arg1 + 0x46c) = 0xffffffff
__builtin_memset(&arg1[0x8e], 0, 0x40)
sub_141dde640(&arg1[0x97])
sub_1422ac390(arg1, data_143f3a598, 1)
sub_141f256b0(arg1, 0)
*(arg1 + 0x20b) &= 0xf7
*(arg1 + 0x20a) |= 0x80
*(arg1 + 0x209) &= 0xdf
*(arg1 + 0x8a) |= 8
*(arg1 + 0x14f) = 0
*(arg1 + 0x20f) = 1
arg1[0x96] = -1
sub_141ef67d0(arg1)
*arg1 = &data_14301a030
arg1[5] = &data_14301a8a0
arg1[0x3e] = &data_14301a8d0
__builtin_memset(&arg1[0x9d], 0, 0x18)
arg1[0x41].b |= 0x80
return arg1
