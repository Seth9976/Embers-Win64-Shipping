// 函数: sub_142076550
// 地址: 0x142076550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_1432b07f0
arg1[0x45] = 0
arg1[0x49] = 0
arg1[0x4a] = 0
__builtin_memset(&arg1[0x4c], 0, 0x20)
__builtin_memset(&arg1[0x52], 0, 0x38)
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"SceneComp", 1)
int64_t* rax_1 = sub_1425881f0()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
*(arg1 + 0x234) &= 0xfffffffe
arg1[0xb].b |= 8
arg1[0x26] = rax_2
char rax_3 = *(arg1 + 0x32) & 0xfb
arg1[6].b = 0
*(arg1 + 0x5f) = 1
*(arg1 + 0x5b) |= 1
*(arg1 + 0x32) = rax_3 | 2
arg1[0x22].d = 0x402ccccd
arg1[0x21].d = 0x3f800000
*(arg1 + 0x284) = 0xbf800000
arg1[0x46].d = 0x3f800000
arg1[0x51].d = 0x3dcccccd
*(arg1 + 0x28c) = 0
return arg1
