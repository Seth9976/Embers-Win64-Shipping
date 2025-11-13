// 函数: png_set_benign_errors
// 地址: 0x1403ce3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x158)
int32_t result = rax | 0x800000

if (arg2 == 0)
    result = rax & 0xff7fffff

*(arg1 + 0x158) = result
return result
