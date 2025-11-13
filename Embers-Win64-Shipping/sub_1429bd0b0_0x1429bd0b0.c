// 函数: sub_1429bd0b0
// 地址: 0x1429bd0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1 u>> 0x1f).b != 0 || (arg1 & 0x7fffffff) u> 0x7f800000)
    return 0

if ((arg1 & 0x7fffffff) != 0x7f800000 && not(arg1 > 4.2949673e+09f))
    return int.q(arg1)

return 0xffffffff
