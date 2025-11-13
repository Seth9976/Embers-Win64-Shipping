// 函数: sub_142b74f70
// 地址: 0x142b74f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x18) & 1) == 0)
    *(arg1 + 0x18) &= 0x1f
    *(arg1 + 0x60) = 0
    *(arg1 + 0x78) = 0
    *(arg1 + 0x7c) = 0
    *(arg1 + 0x7e) = 0
    return 0

*(arg1 + 0x18) = 2
*(arg1 + 0x60) = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x7e) = 0
return 0
