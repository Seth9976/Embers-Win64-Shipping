// 函数: png_set_gAMA_fixed
// 地址: 0x1403ccbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

if (arg3 s<= 0)
    return png_warning(arg1, "Negative or zero gamma ignored") __tailcall

*(arg2 + 0x34) = arg3
*(arg2 + 8) |= 1
