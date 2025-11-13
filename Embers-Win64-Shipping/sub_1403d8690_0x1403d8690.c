// 函数: sub_1403d8690
// 地址: 0x1403d8690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(*(arg1 + 0x264))

if (rdi u> 7)
    return 

*(arg1 + 0x4a8) = 0x11
sub_1403cc480(arg1, arg2 + rdi + 0x2c, 8 - rdi)
*(arg1 + 0x264) = 8

if (png_sig_cmp(arg2 + 0x2c, rdi, 8 - rdi) != 0)
    int32_t rax_1
    
    if (rdi.b u<= 3)
        rax_1 = png_sig_cmp(arg2 + 0x2c, rdi, 8 - rdi - 4)
    
    char const* const rdx_4
    
    if (rdi.b u<= 3 && rax_1 != 0)
        rdx_4 = "Not a PNG file"
    else
        rdx_4 = "PNG file corrupted by ASCII conversion"
    
    png_error(arg1, rdx_4)
    noreturn

if (rdi.b u<= 2)
    *(arg1 + 0x155) |= 0x10
