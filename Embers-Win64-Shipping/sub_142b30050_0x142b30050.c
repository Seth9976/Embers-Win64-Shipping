// 函数: sub_142b30050
// 地址: 0x142b30050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1.d u>> 0x18) - 6 u<= 0x3f)
    return zx.q(arg1.d s>> 8) & 3

if ((-0x100000000000000 & arg1) != 0)
    return 0

if ((arg1.d & 0xff000000) != 0)
    return 1

if (arg1 != 0)
    return 2

return 0xf
