// 函数: sub_141e8fb90
// 地址: 0x141e8fb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_143256980
arg1[0x47].d = 0xffffffff
*(arg1 + 0x23c) = 0
sub_1422d7fd0(&arg1[0x4a])
int64_t arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"SceneComponent", 1)
int64_t* rax_1 = sub_1425881f0()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x46] = rax_2
arg1[0x26] = rax_2
uint64_t rbx_1 = *sub_140b58260(&arg_8, u"CameraComponent", 1)
int64_t* rax_4 = sub_142486350()
void* rax_5 = sub_140cd9110(arg1, rbx_1, rax_4, rax_4, 1, 0)
arg1[0x45] = rax_5
arg_8 = 0
int64_t r8_2 = arg_8
*(rax_5 + 0x1f0) = 0x42b40000
void* rax_6 = arg1[0x45]
*(rax_6 + 0x204) |= 1
arg1[0x45][0x40].d = 0x3fe38e3b
arg1[0x45][0x48].d = 0x3f800000
sub_141f4a650(arg1[0x45], arg1[0x46], r8_2)
arg1[0x48].d |= 1
arg1[0x49].d = 0x42b40000
*(arg1 + 0x244) = 0x3fe38e3b
*(arg1 + 0x24c) = 0x3f800000
return arg1
