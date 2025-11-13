// 函数: sub_1426a7480
// 地址: 0x1426a7480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143460cb8
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf] = -1
*(arg1 + 0x84) = 0
int32_t rax_1 = arg1[0x12].d & 0xfffffffb
*(arg1 + 0x8c) = 0xffffffff
arg1[0x12].d = rax_1 | 1
return arg1
