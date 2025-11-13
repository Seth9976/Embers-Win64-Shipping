// 函数: sub_1426a6d30
// 地址: 0x1426a6d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[6] = 0
arg1[7] = 0
arg1[0xb].b &= 0xfc
*(arg1 + 0x55) &= 0xf8
arg1[0xb].b |= 0xc
__builtin_memset(&arg1[8], 0, 0x15)
*arg1 = &data_1434658f0
arg1[5] = &data_143465bc8
int32_t rax_1 = arg1[0xd].d & 0xfffffffc
*(arg1 + 0x59) = 0xff
arg1[0xc].d = 0x3f000000
arg1[0xd].d = rax_1 | 4
*(arg1 + 0x64) = 0x3dcccccd
return arg1
