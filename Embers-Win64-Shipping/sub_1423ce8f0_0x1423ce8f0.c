// 函数: sub_1423ce8f0
// 地址: 0x1423ce8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"CollisionComp", 1)
void* rax_1 = sub_142488170()
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, rax_1)
sub_1423ce770(arg1)
int64_t* rcx_4 = arg1[0x44]
*arg1 = &data_142e10380
int64_t r8_1
r8_1.b = 1
rcx_4[0x83].d = data_143a30340
int64_t rax_3 = *rcx_4
*(rcx_4 + 0x424) = 0x42200000
rcx_4[0x84].d = 0x42a00000
(*(rax_3 + 0x620))(rcx_4, data_143f5b320, r8_1)
*(arg1 + 0x5a) |= 2
*(arg1 + 0xf2) = 3
return arg1
