// 函数: png_sig_cmp
// 地址: 0x1403be680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = 8

if (arg3 u<= 8)
    rax = arg3

if ((arg3 u<= 8 && arg3 == 0) || arg2 u> 7)
    return 0xffffffff

uint64_t r8 = 8 - arg2

if (rax + arg2 u<= 8)
    r8 = rax

return memcmp(arg1 + arg2, &data_1436ad380 + arg2, r8) __tailcall
