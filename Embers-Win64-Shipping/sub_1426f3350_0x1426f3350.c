// 函数: sub_1426f3350
// 地址: 0x1426f3350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426c9bc0(arg1, arg2)
*arg1 = &data_143478af8
arg1[0xa].d = 0
arg1[0xb] = 0
arg1[0xc].d = 0x44800000
*(arg1 + 0x64) = 0x44800000
arg1[0xd].d = 0x41200000
*(arg1 + 0x6c) = 0x41200000
arg1[0xe] = 0x41200000
arg1[0xf].d = 0
*(arg1 + 0x7c) = (*(arg1 + 0x7c) & 0xffffffde) | 0x1e
*(arg1 + 0x7c) |= 0x30
*(arg1 + 0x7b) = 1
arg1[0xd].d = 0
arg1[8] = sub_14273b470()
return arg1
