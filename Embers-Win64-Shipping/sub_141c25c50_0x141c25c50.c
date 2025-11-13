// 函数: sub_141c25c50
// 地址: 0x141c25c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*(arg1 + 0x32) |= 6
*arg1 = &data_14309d2d0
arg1[0x44].d = 0
*(arg1 + 0x224) = 0
int64_t arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"TransformComponent", 1)
int64_t* rax_1 = sub_1425881f0()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x45] = rax_2
arg1[0x26] = rax_2
uint64_t rbx_1 = *sub_140b58260(&arg_8, u"RailSplineComponent", 1)
int64_t* rax_4 = sub_1425a2960()
void* rax_5 = sub_140cd9110(arg1, rbx_1, rax_4, rax_4, 1, 0)
void* rdx_2 = arg1[0x45]
arg1[0x46] = rax_5
arg_8 = 0
sub_141f4a650(rax_5, rdx_2, 0)
uint64_t rbx_2 = *sub_140b58260(&arg_8, u"RailCameraMount", 1)
int64_t* rax_7 = sub_1425881f0()
void* rax_8 = sub_140cd9110(arg1, rbx_2, rax_7, rax_7, 1, 0)
void* rdx_4 = arg1[0x46]
arg1[0x47] = rax_8
arg_8 = 0
sub_141f4a650(rax_8, rdx_4, 0)
return arg1
