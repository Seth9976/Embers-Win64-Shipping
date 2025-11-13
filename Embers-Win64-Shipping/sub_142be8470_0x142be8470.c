// 函数: sub_142be8470
// 地址: 0x142be8470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u> 0x7f)
    return 0

return zx.q(1 << (arg1.b & 7)) & zx.q(*((zx.q(arg1) u>> 3) + &data_1436988d8))
