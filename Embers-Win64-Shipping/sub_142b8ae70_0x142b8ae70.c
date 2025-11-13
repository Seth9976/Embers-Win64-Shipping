// 函数: sub_142b8ae70
// 地址: 0x142b8ae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x490) == 0x201)
    sub_142b888c0(arg1 + 0x1d8, "Countries%short", nullptr, arg2, arg3)

if (*(arg1 + 0x490) != 0x201 || (*(arg3 + 8) & 1) != 0)
    sub_142b888c0(arg1 + 0x1d8, "Countries", nullptr, arg2, arg3)

return sub_142b88730(arg1, 2, arg3) __tailcall
