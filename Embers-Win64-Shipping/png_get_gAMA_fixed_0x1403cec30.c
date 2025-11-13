// 函数: png_get_gAMA_fixed
// 地址: 0x1403cec30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || (*(arg2 + 8) & 1) == 0)
    return 0

*arg3 = *(arg2 + 0x34)
return 1
