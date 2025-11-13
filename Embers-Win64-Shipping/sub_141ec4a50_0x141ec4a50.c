// 函数: sub_141ec4a50
// 地址: 0x141ec4a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d23dc0(arg1, 0x30) != 0)
    return 0

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    jump(*(**(arg1 + 0x20) + 0x150))

jump(*(*nullptr + 0x150))
