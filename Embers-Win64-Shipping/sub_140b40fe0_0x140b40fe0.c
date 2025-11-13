// 函数: sub_140b40fe0
// 地址: 0x140b40fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10

if (&arg_10 != arg1 + 0x48)
    *(arg1 + 0x48) = arg2
    *(arg1 + 0x4c) = 1

*(arg1 + 0x60) &= 0xfe
*(arg1 + 0x60) = ((arg3 | *(arg1 + 0x60)) & 0xfd) | (arg4 * 2)
return arg1 + 0x48
