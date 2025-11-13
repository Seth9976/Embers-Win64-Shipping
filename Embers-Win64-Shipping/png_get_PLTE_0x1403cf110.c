// 函数: png_get_PLTE
// 地址: 0x1403cf110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || (*(arg2 + 8) & 8) == 0)
    return 0

*arg3 = *(arg2 + 0x18)
*arg4 = zx.d(*(arg2 + 0x20))
return 8
