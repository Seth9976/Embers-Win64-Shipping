// 函数: sub_141f792b0
// 地址: 0x141f792b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_143282f60
arg1[0x44] = &data_1432836d0
__builtin_memset(arg1 + 0x234, 0, 0x1c)
arg1[0x46].d = 0xffffffff
arg1[0x4b].d = 0xffffffff
*(arg1 + 0x25c) = 0
arg1[0x4e] = 0
arg1[0x4f] = 0
arg1[0x50] = 2
*(arg1 + 0x32) |= 2
sub_141dd84c0(arg1, 1)
arg1[0xb].b |= 4
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"TransformComponent0", 1)
int64_t* rax_1 = sub_1425881f0()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x4d] = rax_2
arg1[0x26] = rax_2
sub_141dd7d00(arg1, 0)
void* rcx_4 = arg1[0x26]
*(arg1 + 0x294) &= 0xf8

if (rcx_4 != 0)
    sub_141f49980(rcx_4, 1)

return arg1
