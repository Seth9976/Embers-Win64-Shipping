// 函数: png_get_tIME
// 地址: 0x1403cf1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || (0x200 & *(arg2 + 8)) == 0)
    return 0

*arg3 = arg2 + 0x50
return 0x200
