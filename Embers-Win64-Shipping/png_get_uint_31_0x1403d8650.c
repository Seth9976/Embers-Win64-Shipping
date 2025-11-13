// 函数: png_get_uint_31
// 地址: 0x1403d8650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = _bswap(*arg2)

if (result s>= 0)
    return result

png_error(arg1, "PNG unsigned integer out of range")
noreturn
