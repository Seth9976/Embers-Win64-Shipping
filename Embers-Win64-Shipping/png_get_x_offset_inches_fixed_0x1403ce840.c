// 函数: png_get_x_offset_inches_fixed
// 地址: 0x1403ce840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0

if (arg1 != 0 && arg2 != 0 && (*(arg2 + 9) & 1) != 0 && *(arg2 + 0x8c) == 1)
    rdx = *(arg2 + 0x84)

return sub_1403c0220(arg1, rdx, 0x1f4, 0x7f, arg3) __tailcall
