// 函数: sub_1421995b0
// 地址: 0x1421995b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x4d].d &= 0xfffffffe
arg1[0x4d].d |= *(arg1 + 0x27c) u>> 1 & 1
jump(*(*arg1 + 0x5e8))
