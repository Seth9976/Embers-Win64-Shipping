// 函数: png_set_gAMA
// 地址: 0x1403ccc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1403c0150(arg1, arg3, "png_set_gAMA")

if (arg1 != 0 && arg2 != 0)
    if (result s<= 0)
        return png_warning(arg1, "Negative or zero gamma ignored") __tailcall
    
    *(arg2 + 0x34) = result
    *(arg2 + 8) |= 1

return result
