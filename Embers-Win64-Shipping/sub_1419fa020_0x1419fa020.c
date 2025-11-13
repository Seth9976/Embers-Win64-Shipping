// 函数: sub_1419fa020
// 地址: 0x1419fa020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"Sprite", 1)
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, nullptr)
sub_141db5b80(arg1)
*arg1 = &data_14301e140
void arg_10
uint64_t rbx_1 = *sub_140b58260(&arg_10, u"RootComponent0", 1)
int64_t* rax_2 = sub_1425881f0()
arg1[0x26] = sub_140cd9110(arg1, rbx_1, rax_2, rax_2, 1, 0)
void* rcx_6 = &arg1[0x46]
*arg1 = &data_14301efb8
arg1[0x44] = 0
arg1[0x45] = 0
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_4 = *(rcx_6 + 0x10)

if (rax_4 != 0)
    rcx_6 = rax_4

*rcx_6 = 0
*(rcx_6 + 8) = 0
*(arg1 + 0x254) = 0
arg1[0x4a].d = 0xffffffff
arg1[0x4c] = 0
arg1[0x4d].d = 0
uint64_t rbx_2 = *sub_140b58260(&arg_8, u"GizmoRendererComponent0", 1)
int64_t* rax_6 = sub_141a207b0()
void* rax_7
int64_t r8_2
rax_7, r8_2 = sub_140cd9110(arg1, rbx_2, rax_6, rax_6, 1, 0)
r8_2.b = 1
int64_t r9_3 = *rax_7
(*(r9_3 + 0x620))(rax_7, data_143f3a5a8, r8_2, r9_3)
arg1[0x26] = rax_7
return arg1
