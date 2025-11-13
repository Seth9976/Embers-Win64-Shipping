// 函数: sub_1421375e0
// 地址: 0x1421375e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_1432dc0c0
arg1[0x44] = &data_1432dc700
int32_t arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"CollisionCapsule", 1)
int64_t* rax_1 = sub_142488170()
void* rax_2
int64_t r8_1
rax_2, r8_1 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x45] = rax_2
r8_1.b = 1
arg_8 = 0xffff8a05
*(rax_2 + 0x418) = arg_8
void* rax_3 = arg1[0x45]
*(rax_3 + 0x41c) |= 1
void* rax_4 = arg1[0x45]
*(rax_4 + 0x424) = 0x42480000
*(rax_4 + 0x420) = 0x42480000
int64_t* rcx_3 = arg1[0x45]
(*(*rcx_3 + 0x620))(rcx_3, data_143f3a590, r8_1)
void* rax_6 = arg1[0x45]
*(rax_6 + 0x41c) |= 2
sub_141f49250(arg1[0x45], 1)
*(arg1[0x45] + 0x14f) = 0
int64_t rax_8 = arg1[0x45]
*(arg1 + 0x5a) |= 2
arg1[0x26] = rax_8
*(arg1 + 0xf2) = 3
*sub_140b58260(&arg_8, u"Sprite", 1)
sub_1424753d0()
sub_140cd9200()
arg1[0x46] = 0
*sub_140b58260(&arg_8, u"Sprite2", 1)
sub_1424753d0()
sub_140cd9200()
arg1[0x47] = 0
return arg1
