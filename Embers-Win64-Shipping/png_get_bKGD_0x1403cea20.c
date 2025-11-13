// 函数: png_get_bKGD
// 地址: 0x1403cea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || (*(arg2 + 8) & 0x20) == 0)
    return 0

*arg3 = arg2 + 0x7a
return 0x20
