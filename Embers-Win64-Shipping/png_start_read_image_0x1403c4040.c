// 函数: png_start_read_image
// 地址: 0x1403c4040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if ((*(arg1 + 0x158) & 0x40) != 0)
    return png_warning(arg1, 
        "Ignoring extra png_start_read_image() call; row buffer not reallocated") __tailcall

return sub_1403dd0d0(arg1) __tailcall
