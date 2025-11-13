// 函数: png_get_sBIT
// 地址: 0x1403cf140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || (*(arg2 + 8) & 2) == 0)
    return 0

*arg3 = arg2 + 0x58
return 2
