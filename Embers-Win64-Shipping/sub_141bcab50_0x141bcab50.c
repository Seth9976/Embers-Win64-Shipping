// 函数: sub_141bcab50
// 地址: 0x141bcab50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x2f0))
    return 0

return zx.q(*(*(arg1 + 0x2e8) + sx.q(arg2) * 0x28 + 0x20) u>> 1) & 1
