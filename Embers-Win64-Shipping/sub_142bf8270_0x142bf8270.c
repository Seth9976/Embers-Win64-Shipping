// 函数: sub_142bf8270
// 地址: 0x142bf8270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf9400(arg1, arg2, arg3) != 0)
    return 1

if (arg2 u> 0xff)
    return 0

return sub_142bf9400(arg1, arg2 + 0xf000, arg3) __tailcall
