// 函数: sub_140d15ac0
// 地址: 0x140d15ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c2a0(arg1)
*(arg1 + 0x2a) |= 0x20
arg1[0x13] = 0
arg1[0x14] = 0
*arg1 = &data_142eb0a28
arg1[0x12] = arg2
arg1[0x15] = arg3
sub_140b552a0(arg1, (*(*arg3 + 0x10))(arg3))
char rax_3 = (*(*arg3 + 8))(arg3)
*(arg1 + 0x29) &= 0xbf
*(arg1 + 0x29) |= (rax_3 & 1) << 6
return arg1
