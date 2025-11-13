// 函数: sub_140819e60
// 地址: 0x140819e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_142dd84e0
arg1[0x44] = 0
arg1[0x45].b = 0
__builtin_memset(&arg1[0x46], 0, 0x18)
__builtin_memset(arg1 + 0x254, 0, 0x14)
arg1[0x49].d = 0x437a0000
*(arg1 + 0x24c) = 0x437a0000
int32_t rax = arg1[0x4d].d
*(arg1 + 0x32) |= 6
arg1[0x4d].d = (rax & 0xfffffffd) | 1
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"SceneComp", 1)
int64_t* rax_4 = sub_1425881f0()
arg1[0x26] = sub_140cd9110(arg1, rbx, rax_4, rax_4, 1, 0)
return arg1
