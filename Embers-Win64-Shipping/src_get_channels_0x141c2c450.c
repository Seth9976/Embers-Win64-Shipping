// 函数: src_get_channels
// 地址: 0x141c2c450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 2).d)

if (*(arg1 + 0x28) != 0 && *(arg1 + 0x30) != 0)
    return zx.q(*(arg1 + 0x14))

return 7
