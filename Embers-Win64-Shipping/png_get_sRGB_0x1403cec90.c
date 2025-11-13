// 函数: png_get_sRGB
// 地址: 0x1403cec90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || (0x800 & *(arg2 + 8)) == 0)
    return 0

*arg3 = zx.d(*(arg2 + 0x38))
return 0x800
