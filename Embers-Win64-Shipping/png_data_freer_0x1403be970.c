// 函数: png_data_freer
// 地址: 0x1403be970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

if (arg3 != 2)
    if (arg3 != 1)
        return png_warning(arg1, "Unknown freer parameter in png_data_freer") __tailcall
    
    *(arg2 + 0xec) |= arg4
    return 

*(arg2 + 0xec) &= not.d(arg4)
