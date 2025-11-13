// 函数: sub_141f70490
// 地址: 0x141f70490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg1 + 0x5a8) & 0xdf) | arg2 << 5
*(arg1 + 0x5a8) = rax

if ((rax & 0x20) == 0)
    *(arg1 + 0x490) = 0
    return 0

int32_t result = 1 - *(arg1 + 0x494)
*(arg1 + 0x490) = result
return result
