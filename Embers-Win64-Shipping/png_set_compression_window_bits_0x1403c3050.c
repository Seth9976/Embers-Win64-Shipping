// 函数: png_set_compression_window_bits
// 地址: 0x1403c3050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t rdi_1 = arg2

if (arg2 s>= 0x10)
    png_warning(arg1, "Only compression windows <= 32k supported by PNG")
else if (rdi_1 s<= 7)
    png_warning(arg1, "Only compression windows >= 256 supported by PNG")
else if (rdi_1 == 8)
    png_warning(arg1, "Compression window is being reset to 512")
    rdi_1 = 9

*(arg1 + 0x158) |= 8
*(arg1 + 0x1cc) = rdi_1
