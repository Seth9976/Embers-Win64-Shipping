// 函数: sub_142b0a7e0
// 地址: 0x142b0a7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 1)
    *(arg1 + 0x48) = 0x1000000
    *(arg1 + 0x40) = 0

if (arg2 s> 1 || arg2 != 1)
    *(arg1 + 0x50) &= 0xf1000000
    *(arg1 + 0x50) |= 0x1000000
