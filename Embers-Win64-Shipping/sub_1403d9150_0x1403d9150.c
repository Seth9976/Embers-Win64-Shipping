// 函数: sub_1403d9150
// 地址: 0x1403d9150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x154)

if ((rax & 5) != 5)
    png_error(arg1, "No image in file")
    noreturn

*(arg1 + 0x154) = rax | 0x18

if (arg3 != 0)
    png_warning(arg1, "Incorrect IEND chunk length")

return sub_1403d8880(arg1, arg3) __tailcall
