// 函数: sub_14220b5a0
// 地址: 0x14220b5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421aad70(arg1, arg2)
arg1[6].d = 0x19
*arg1 = &data_143305798
int32_t rax_1 = arg1[8].d & 0xffffffef
*(arg1 + 0x34) = 1
arg1[7].d = 1
arg1[8].d = rax_1 | 0xf
int32_t rax_4 = *(arg1 + 0x4c) & 0xfffffff1
*(arg1 + 0x3c) = 0x1f4
arg1[9].d = 0
*(arg1 + 0x4c) = rax_4 | 1
*(arg1 + 0x54) = 0x41700000
*(arg1 + 0x5c) = 0x40a00000
return arg1
