// 函数: sub_1420d8610
// 地址: 0x1420d8610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_1432c39a8
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"LightComponent0", 1)
int64_t* rax_1 = sub_14252e6d0()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
*(arg1 + 0x5a) |= 2
arg1[0x44] = rax_2
*(arg1 + 0xf2) = 3
return arg1
