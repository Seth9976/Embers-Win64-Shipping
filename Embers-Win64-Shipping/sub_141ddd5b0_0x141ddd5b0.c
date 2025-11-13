// 函数: sub_141ddd5b0
// 地址: 0x141ddd5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_14323df40
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"AudioComponent0", 1)
int64_t* rax_1 = sub_142470a10()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x44] = rax_2
*(rax_2 + 0x89) |= 0x80
void* rax_3 = arg1[0x44]
*(rax_3 + 0x210) |= 2
void* rax_4 = arg1[0x44]
*(rax_4 + 0x210) |= 4
*(arg1[0x44] + 0x14f) = 2
int64_t rax_6 = arg1[0x44]
*(arg1 + 0x5b) &= 0xfe
arg1[0x26] = rax_6
sub_141dd84c0(arg1, 1)
sub_141dd7d00(arg1, 0)
return arg1
