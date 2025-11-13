// 函数: sub_1429db7f0
// 地址: 0x1429db7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg3 == 0)
    return 8

if (*(arg1 + 0x1c0) != 0)
    return 1

*(arg1 + 0x560) = arg2
*(arg1 + 0x568) = arg3
*(arg1 + 0x558) = arg4
return 0
