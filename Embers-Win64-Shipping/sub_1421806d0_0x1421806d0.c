// 函数: sub_1421806d0
// 地址: 0x1421806d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_1432e47b8
__builtin_memset(&arg1[0x46], 0, 0x40)
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"ParticleSystemComponent0", 1)
int64_t* rax_1 = sub_14255cbc0()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x44] = rax_2
*(rax_2 + 0x4b8) = 0x3f800000
arg1[0x26] = arg1[0x44]
return arg1
