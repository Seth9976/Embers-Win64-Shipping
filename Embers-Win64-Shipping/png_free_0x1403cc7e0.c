// 函数: png_free
// 地址: 0x1403cc7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

int64_t rax = *(arg1 + 0x430)

if (rax == 0)
    return free(arg2) __tailcall

jump(rax)
