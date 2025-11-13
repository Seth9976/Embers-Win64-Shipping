// 函数: sub_1405f7ad0
// 地址: 0x1405f7ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 0x80004003

if (arg2 != 0)
    return 0xc00d36b3

*(arg3 + 0xc) = 1
*arg3 = 0
arg3[1].d = 0
*(arg3 + 0x14) = 1
return 0
