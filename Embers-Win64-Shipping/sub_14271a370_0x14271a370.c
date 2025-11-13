// 函数: sub_14271a370
// 地址: 0x14271a370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3a3a0(arg1, arg2)
arg1[2] = 0
*(arg1 + 0xc) = data_143dbb1f8.q
arg1[5] = data_143dbb200
*(arg1 + 0x18) = data_14399f678
arg1[8] = data_14399f680
arg1[9].b = 0xff
arg1[0xa] &= 0xfffffffe
sub_142703fe0(&arg1[0xb])
sub_140d3c6e0(arg1)
void arg_8
arg1[9].b = *sub_142702300(arg2, &arg_8)
arg1[2] = *(arg2 + 0xe0)
arg1[0xb] = *(arg2 + 0xe4)
return arg1
