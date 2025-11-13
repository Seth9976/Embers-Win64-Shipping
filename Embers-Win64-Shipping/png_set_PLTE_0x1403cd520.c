// 函数: png_set_PLTE
// 地址: 0x1403cd520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

if (arg4 u>= 0x101)
    if (*(arg2 + 0x25) != 3)
        return png_warning(arg1, "Invalid palette length") __tailcall
    
    png_error(arg1, "Invalid palette length")
    noreturn

png_free_data(arg1, arg2, 0x1000, 0)
int64_t rax_2 = png_calloc(arg1, 0x300)
*(arg1 + 0x248) = rax_2
int64_t rax_3 = sx.q(arg4)
memcpy(rax_2, arg3, rax_3.d + (rax_3 << 1).d)
*(arg2 + 0x18) = rax_2
*(arg1 + 0x250) = arg4.w
*(arg2 + 0x20) = arg4.w
*(arg2 + 0xed) |= 0x10
*(arg2 + 8) |= 8
