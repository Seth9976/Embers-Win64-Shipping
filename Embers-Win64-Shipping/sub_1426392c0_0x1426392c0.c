// 函数: sub_1426392c0
// 地址: 0x1426392c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_14344e568
arg1[5] = &data_14344e820
arg1[6] = 0
arg1[8].d = 0
*(arg1 + 0x4c) = 0
arg1[9].d = 0xffffffff
arg1[0xa] = 0
*(arg1 + 0x5c) = 0
arg1[0xb].d = 0xffffffff
int32_t rax_1 = *(arg1 + 0x3c) & 0xffffff58
*(arg1 + 0x39) = 0
arg1[7].b = 0x7f
arg1[1].d |= 0x1000000
*(arg1 + 0x3c) = rax_1 | 0x40
return arg1
