// 函数: sub_1427fe6c0
// 地址: 0x1427fe6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x68)
*(r8 + 0x50) = *arg2
*(r8 + 0x60) = arg2[1].q
*(r8 + 0x68) = *(arg2 + 0x18)
jump(*(**(arg1 + 0x60) + 0x40))
