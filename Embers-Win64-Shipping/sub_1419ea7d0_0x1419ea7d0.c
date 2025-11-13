// 函数: sub_1419ea7d0
// 地址: 0x1419ea7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_1430165e8
sub_141dd7d00(arg1, 0)
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"ControlPointMeshComponent0", 1)
int64_t* rax_1 = sub_141a20bf0()
void* rax_2
int64_t r8_1
rax_2, r8_1 = sub_140d1dc20(arg2, arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x44] = rax_2
r8_1.b = 1
int64_t r9_1 = *rax_2
(*(r9_1 + 0x620))(rax_2, data_143f3a598, r8_1, r9_1)
*(arg1[0x44] + 0x14f) = 0
sub_141f256b0(arg1[0x44], 0)
arg1[0x26] = arg1[0x44]
return arg1
