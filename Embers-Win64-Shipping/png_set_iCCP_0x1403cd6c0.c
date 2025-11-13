// 函数: png_set_iCCP
// 地址: 0x1403cd6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || arg5 == 0)
    return 

uint64_t rdi_2 = zx.q(MultiByteToWideChar(0, 0, arg3, 0xffffffff, nullptr, 0) + 1)
int64_t rax_2 = png_malloc_warn(arg1, rdi_2)

if (rax_2 == 0)
    return png_warning(arg1, "Insufficient memory to process iCCP chunk") __tailcall

memcpy(rax_2, arg3, rdi_2.d)
uint64_t rdi_3 = zx.q(arg6)
int64_t rax_3 = png_malloc_warn(arg1, rdi_3)

if (rax_3 == 0)
    png_free(arg1, rax_2)
    return png_warning(arg1, "Insufficient memory to process iCCP profile") __tailcall

memcpy(rax_3, arg5, rdi_3.d)
png_free_data(arg1, arg2, 0x10, 0)
*(arg2 + 0x110) = arg6
*(arg2 + 0x100) = rax_2
*(arg2 + 0x108) = rax_3
*(arg2 + 0x114) = arg4
*(arg2 + 0xec) |= 0x10
*(arg2 + 9) |= 0x10
