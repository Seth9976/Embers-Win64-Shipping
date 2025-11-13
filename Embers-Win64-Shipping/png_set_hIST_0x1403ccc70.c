// 函数: png_set_hIST
// 地址: 0x1403ccc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

if (zx.d((*(arg2 + 0x20)).w - 1) u>= 0x100)
    return png_warning(arg1, "Invalid palette size, hIST allocation skipped") __tailcall

png_free_data(arg1, arg2, 8, 0)
int16_t* rax = png_malloc_warn(arg1, 0x200)
*(arg1 + 0x3a8) = rax

if (rax == 0)
    return png_warning(arg1, "Insufficient memory for hIST chunk data") __tailcall

if (*(arg2 + 0x20) != 0)
    *rax = *arg3
    
    if (*(arg2 + 0x20) u>= 2)
        int64_t i = 1
        
        do
            *(*(arg1 + 0x3a8) + (i << 1)) = arg3[i]
            i += 1
        while (i u< zx.q(*(arg2 + 0x20)))
    
    rax = *(arg1 + 0x3a8)

*(arg2 + 0xa0) = rax
*(arg2 + 8) |= 0x40
*(arg2 + 0xec) |= 8
