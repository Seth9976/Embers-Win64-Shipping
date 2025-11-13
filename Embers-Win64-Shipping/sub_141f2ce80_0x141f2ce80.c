// 函数: sub_141f2ce80
// 地址: 0x141f2ce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2d280(arg1)
arg1[0x47].b = 1
*arg1 = &data_143279cb0
int64_t arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"NewPlanarReflectionComponent", 1)
int64_t* rax_1 = sub_142564720()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x46] = rax_2
arg1[0x26] = rax_2
void arg_18
uint64_t rbx_1 = *sub_140b58260(&arg_18, u"DrawBox0", 1)
int64_t* rax_4 = sub_1424814a0()
void* rax_5 = sub_140cd9110(arg1, rbx_1, rax_4, rax_4, 1, 0)
void* rdx_2 = arg1[0x46]
arg_8 = 0
sub_141f4a650(rax_5, rdx_2, 0)
*(rax_5 + 0x20e) |= 8
int64_t r9_2 = *rax_5
(*(r9_2 + 0x620))(rax_5, data_143f3a590, 1, r9_2)
arg1[0x46][0x51] = rax_5
return arg1
