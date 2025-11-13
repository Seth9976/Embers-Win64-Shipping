// 函数: sub_1422a14c0
// 地址: 0x1422a14c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x14) = *(arg1 + 0x554) & 1
*(arg2 + 0x15) = (*(arg1 + 0x554) u>> 1).b & 1
*(arg2 + 0xc) = *(arg1 + 0x54c)
arg2[2].d = *(arg1 + 0x550)
arg2[1].d = *(arg1 + 0x548)
*arg2 = arg1 + 8
return arg2
