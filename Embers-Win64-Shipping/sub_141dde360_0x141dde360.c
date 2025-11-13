// 函数: sub_141dde360
// 地址: 0x141dde360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 &= 0xe0
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = *(arg2 + 0x18)
sub_140596d10(&arg1[0x20], arg2 + 0x20)
return arg1
