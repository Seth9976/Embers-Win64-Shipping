// 函数: sub_141e4f090
// 地址: 0x141e4f090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142076470(arg1)
*arg1 = &data_14324ba78
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"AtmosphericFogComponent0", 1)
int64_t* rax_1 = sub_1424718b0()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
*(arg1 + 0x32) |= 2
arg1[0x44] = rax_2
arg1[0x26] = rax_2
sub_141dd84c0(arg1, 0)
return arg1
