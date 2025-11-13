// 函数: sub_141fe34d0
// 地址: 0x141fe34d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(*(arg1 + 0x38) f!= *(arg1 + 0x44)) && not(*(arg1 + 0x3c) f!= *(arg1 + 0x48))
        && not(*(arg1 + 0x40) f!= *(arg1 + 0x4c)))
    return 1

return (zx.q(*(arg1 + 0x58)) & 1) | 2
