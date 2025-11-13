// 函数: png_read_update_info
// 地址: 0x1403c3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if ((*(arg1 + 0x158) & 0x40) != 0)
    png_warning(arg1, "Ignoring extra png_read_update_info() call; row buffer not reallocated")
else
    sub_1403dd0d0(arg1)

return sub_1403c6fe0(arg1, arg2) __tailcall
