// 函数: png_set_sig_bytes
// 地址: 0x1403be650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg2 s>= 9)
    png_error(arg1, "Too many bytes for PNG signature")
    noreturn

if (arg2 s<= 0)
    arg2 = 0

*(arg1 + 0x264) = arg2.b
