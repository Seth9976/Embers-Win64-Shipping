// 函数: png_benign_error
// 地址: 0x1403c3490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x15a) & 0x80) != 0)
    return png_warning(arg1, arg2) __tailcall

png_error(arg1, arg2)
noreturn
