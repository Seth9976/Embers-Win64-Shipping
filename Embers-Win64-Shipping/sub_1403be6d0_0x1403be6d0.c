// 函数: sub_1403be6d0
// 地址: 0x1403be6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    if (divu.dp.d(0:0xffffffff, arg3) u>= arg2)
        int32_t rdi_1 = *(arg1 + 0x158)
        *(arg1 + 0x158) = rdi_1 | 0x100000
        int64_t result = png_malloc(arg1, zx.q(arg3) * zx.q(arg2))
        *(arg1 + 0x158) = rdi_1
        return result
    
    png_warning(arg1, "Potential overflow in png_zalloc()")

return 0
