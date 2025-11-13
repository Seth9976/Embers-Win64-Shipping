// 函数: sub_1426f39e0
// 地址: 0x1426f39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426ca5d0(arg1, arg2)
*arg1 = &data_14347b2a0
arg1[0x3f].d = 0
arg1[0x40] = 0
arg1[0x41].d = 0x44800000
*(arg1 + 0x20c) = 0x44800000
arg1[0x42].d = 0x41200000
*(arg1 + 0x214) = 0x41200000
arg1[0x43] = 0x41200000
arg1[0x44].d = 0
*(arg1 + 0x224) = (*(arg1 + 0x224) & 0xffffffde) | 0x1e
arg1[0x1f].b = 1
arg1[0x3d] = sub_14273b020()
sub_1426eb0b0(arg1, 0)
int32_t rax_5 = *(arg1 + 0x224) & 0xffffffef
*(arg1 + 0x223) = 1
arg1[0x42].d = 0
*(arg1 + 0x224) = rax_5 | 0x20
return arg1
