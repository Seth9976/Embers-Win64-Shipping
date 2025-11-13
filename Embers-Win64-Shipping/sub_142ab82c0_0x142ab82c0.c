// 函数: sub_142ab82c0
// 地址: 0x142ab82c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1d0) = 0x80000000
void* rbx = *(arg1 + 0x1c8)

if (rbx != 0)
    sub_142ab73b0(rbx)
    sub_142a47920(rbx)

*(arg1 + 0x1c8) = *(arg2 + 0x1c8)
*(arg2 + 0x1d0) = 0
*(arg2 + 0x1c8) = 0
return 0
