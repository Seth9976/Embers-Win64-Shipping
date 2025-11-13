// 函数: sub_142aea120
// 地址: 0x142aea120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s> 0 || arg3 != 0x7fffffff)
    return sub_142a49390(arg1, arg2, arg3, 0, 0, 0)

if ((*(arg1 + 8) & 1) == 0)
    *(arg1 + 8) &= 0x1f
    return arg1

*(arg1 + 8) = 2
return arg1
