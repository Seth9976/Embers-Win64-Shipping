// 函数: sub_141e8f9b0
// 地址: 0x141e8f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_1432537c8
arg1[0x49] = 0
arg1[0x4a] = 0
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"BrushComponent0", 1)
int64_t* rax_1 = sub_142485400()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x47] = rax_2
*(rax_2 + 0x14f) = 0
sub_141f256b0(arg1[0x47], 0)
sub_141ef5320(arg1[0x47], 0)
arg1[0x26] = arg1[0x47]
sub_141dd84c0(arg1, 1)
*(arg1 + 0x22c) &= 0xfffffff7
sub_141dd7d00(arg1, 0)
*(arg1 + 0x5a) |= 2
*(arg1 + 0xf2) = 3
return arg1
