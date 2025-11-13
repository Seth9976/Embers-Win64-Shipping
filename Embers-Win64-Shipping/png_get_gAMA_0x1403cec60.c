// 函数: png_get_gAMA
// 地址: 0x1403cec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || (*(arg2 + 8) & 1) == 0)
    return 0

*arg3 = float.d(*(arg2 + 0x34)) * 1.0000000000000001e-05
return 1
