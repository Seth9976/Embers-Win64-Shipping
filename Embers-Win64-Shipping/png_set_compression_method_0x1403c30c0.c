// 函数: png_set_compression_method
// 地址: 0x1403c30c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg2 != 8)
    png_warning(arg1, "Only compression method 8 is supported by PNG")

*(arg1 + 0x158) |= 0x10
*(arg1 + 0x1c8) = arg2
