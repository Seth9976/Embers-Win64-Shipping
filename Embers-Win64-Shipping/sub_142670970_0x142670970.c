// 函数: sub_142670970
// 地址: 0x142670970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = 0
arg1[1].q = 0
*(arg1 + 0x18) = 0x3f800000
*arg1 = *arg2
arg1[1].q = arg2[1].q
*(arg1 + 0x18) = *(arg2 + 0x18)
arg1[2].q = &arg2[3]
*(arg1 + 0x28) = arg2 + (sx.q(*(arg1 + 4)) + 4) * 0xc
return arg1
