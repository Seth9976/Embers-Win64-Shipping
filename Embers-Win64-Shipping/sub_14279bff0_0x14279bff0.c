// 函数: sub_14279bff0
// 地址: 0x14279bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d20910()
sub_141db5b80(arg1)
arg1[1].d &= 0xfffffff7
*arg1 = &data_1434b6b90
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"GizmoCenter", 1)
int64_t* rax_2 = sub_1425a4300()
void* rax_3 = sub_140cd9110(arg1, rbx, rax_2, rax_2, 1, 0)
arg1[0x26] = rax_3
*(rax_3 + 0x420) = 0x3f800000
sub_141f49a80(rax_3, 0, 1)
int64_t r9_1 = *rax_3
int64_t r8_2
r8_2.b = 1
(*(r9_1 + 0x620))(rax_3, data_143f3a590, r8_2, r9_1)
return arg1
