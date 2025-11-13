// 函数: sub_141f2d390
// 地址: 0x141f2d390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"NewReflectionComponent", 1)
void* rax_1 = sub_1425a1f70()
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, rax_1)
sub_141f2d180(arg1)
void* rdi_1 = arg1[0x44]
*arg1 = &data_143275040
arg1[0x26] = rdi_1
void arg_10
uint64_t rbx_1 = *sub_140b58260(&arg_10, u"DrawRadius0", 1)
int64_t* rax_3 = sub_14249faf0()
void* rax_4 = sub_140cd9110(arg1, rbx_1, rax_3, rax_3, 1, 0)
void* rdx_4 = arg1[0x44]
arg_8 = 0
sub_141f4a650(rax_4, rdx_4, 0)
*(rax_4 + 0x41c) |= 1
*(rax_4 + 0x20e) |= 8
int64_t r9_2 = *rax_4
(*(r9_2 + 0x620))(rax_4, data_143f3a590, 1, r9_2)
*(rdi_1 + 0x270) = rax_4
uint64_t rbx_3 = *sub_140b58260(&arg_8, u"DrawRadius1", 1)
int64_t* rax_6 = sub_14249faf0()
void* rax_7 = sub_140cd9110(arg1, rbx_3, rax_6, rax_6, 1, 0)
void* rdx_7 = arg1[0x44]
arg1[0x45] = rax_7
arg_8 = 0
sub_141f4a650(rax_7, rdx_7, 0)
void* rax_8 = arg1[0x45]
*(rax_8 + 0x41c) |= 1
void* rax_9 = arg1[0x45]
*(rax_9 + 0x20e) |= 8
int64_t* rcx_11 = arg1[0x45]
(*(*rcx_11 + 0x620))(rcx_11, data_143f3a590, 1)
arg_8.d = 0xff645a28
arg1[0x45][0x83].d = arg_8.d
return arg1
