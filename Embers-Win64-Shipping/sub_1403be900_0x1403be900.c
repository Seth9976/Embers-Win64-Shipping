// 函数: sub_1403be900
// 地址: 0x1403be900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = png_free_data(arg1, arg2, 0x7fff, 0xffffffff)

if (*(arg1 + 0x400) != 0)
    result = png_free(arg1, *(arg1 + 0x408))
    *(arg1 + 0x408) = 0
    *(arg1 + 0x400) = 0

if (arg2 == 0)
    return result

return memset(arg2, 0, 0x140) __tailcall
