// 函数: sub_140948150
// 地址: 0x140948150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1409480a0(arg1)
*arg1 = &data_142e2c7b8
arg1[0x44] = &data_142e2ce18
__builtin_memset(&arg1[0x4a], 0, 0x11)
arg1[0x4d] = 0
arg1[0x4e].d = 0
__builtin_memset(&arg1[0x4f], 0, 0x38)
void arg_8
int64_t rcx_1 = *sub_140b58260(&arg_8, u"BeaconDriverClient", 1)
char rax_1 = *(arg1 + 0x32)
arg1[0xb].b |= 4
arg1[0x1d] = rcx_1
*(arg1 + 0x32) = (rax_1 & 0xf7) | 6
return arg1
