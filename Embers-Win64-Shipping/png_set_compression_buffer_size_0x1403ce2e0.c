// 函数: png_set_compression_buffer_size
// 地址: 0x1403ce2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint64_t rdi_1 = arg2
png_free(arg1, *(arg1 + 0x1b8))
int32_t rax_3

if (rdi_1 u>> 0x20 == 0)
    rax_3 = rdi_1.d
else
    png_warning(arg1, "Attempt to set buffer size beyond max ignored")
    rdi_1 = 0xffffffff
    rax_3 = -1

*(arg1 + 0x1c0) = rax_3
int64_t rax = png_malloc(arg1, rdi_1)
*(arg1 + 0x1b8) = rax
*(arg1 + 0x170) = rax
*(arg1 + 0x178) = 0
*(arg1 + 0x168) = 0
