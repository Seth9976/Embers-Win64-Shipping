// 函数: png_set_rows
// 地址: 0x1403ce290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

int64_t rax = *(arg2 + 0x138)

if (rax != 0 && rax != arg3)
    png_free_data(arg1, arg2, 0x40, 0)

*(arg2 + 0x138) = arg3

if (arg3 != 0)
    *(arg2 + 9) |= 0x80
