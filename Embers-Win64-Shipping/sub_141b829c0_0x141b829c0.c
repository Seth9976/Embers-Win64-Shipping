// 函数: sub_141b829c0
// 地址: 0x141b829c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
arg1[0x21] = 0
arg1[0x22] = 0
*arg1 = &data_14307fb08
arg1[0x23].b = 0
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x28] = -1
arg1[0x28].d |= 0x48000
*(arg1 + 0x144) = (*(arg1 + 0x144) & 0xfff8ffff) | 0x400
*(arg1 + 0xb4) |= 1
*(arg1 + 0x120) = data_14399f5e0
*(arg1 + 0x144) &= 0xff3cefff
arg1[0x28].d &= 0xf9d9ba57
return arg1
