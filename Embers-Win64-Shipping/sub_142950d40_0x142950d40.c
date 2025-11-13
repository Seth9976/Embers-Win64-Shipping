// 函数: sub_142950d40
// 地址: 0x142950d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    arg2 = 0x10
else if (((arg2 - 8) & 0xfffffffffffffff7) != 0)
    return 0

*(arg1 + 0x2c) = arg2.d
return 1
