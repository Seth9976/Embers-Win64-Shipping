// 函数: sub_1426a75a0
// 地址: 0x1426a75a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf] = -1
int32_t rax_1 = arg1[0x12].d & 0xfffffffb
*(arg1 + 0x84) = 0
*(arg1 + 0x8c) = 0xffffffff
arg1[0x12].d = rax_1 | 1
*arg1 = &data_143461f80
arg1[0x14] = data_143b57f80
arg1[0x15].d = data_143b57f88
*(arg1 + 0xac) = 0x41f00000
arg1[0x16] = 0
arg1[0x17].d = (arg1[0x17].d & 0xffffffaf) | 0x2e
__builtin_memset(&arg1[0x18], 0, 0x28)
arg1[0x10].d |= 0xc
return arg1
