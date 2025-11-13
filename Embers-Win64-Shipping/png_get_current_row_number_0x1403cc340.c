// 函数: png_get_current_row_number
// 地址: 0x1403cc340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0xffffffff

return zx.q(*(arg1 + 0x1f4))
