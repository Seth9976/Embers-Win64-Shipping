// 函数: png_set_interlace_handling
// 地址: 0x1403cb930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *(arg1 + 0x25b) == 0)
    return 1

*(arg1 + 0x15c) |= 2
return 7
