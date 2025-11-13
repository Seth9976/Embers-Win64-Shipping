// 函数: png_get_hIST
// 地址: 0x1403ced50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || (*(arg2 + 8) & 0x40) == 0)
    return 0

*arg3 = *(arg2 + 0xa0)
return 0x40
